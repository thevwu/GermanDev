<?php
// include form function for feature_set
!function_exists('feature_set_admin_form') ? module_load_include('inc', 'feature_set', 'feature_set.admin') : FALSE;

/**
 * Implements form_alter for the configuration form
 */
function julio_form_install_configure_form_alter(&$form, $form_state) {

  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  // Adjust date options so that date/date API is happy on install
  module_load_include('inc', 'system', 'system.admin');
  $regional_form = system_regional_settings();
  $form['server_settings']['date_first_day'] = $regional_form['locale']['date_first_day'];
  $settings = system_date_time_settings();
  $form['server_settings']['formats'] = $settings['formats'];
  $form = system_settings_form($form);

  // Add additional user prompting to indicate admin account usage
  $form['admin_account']['leadin'] = array(
    '#markup' => t('This account should rarely be used and strictly for administrative purposes only. You will create a personal account later in the installation process that will be used for day-to-day use of the site.'),
    '#weight' => -100,
  );
  $form['admin_account']['account']['mail']['#description'] = t('This email address <em>must</em> be different than the email address you will use to create your personal user account later in the process.');

  // date api and image resize filter throw a few warnings that we don't want;
  drupal_get_messages('warning');

  // make a few choices to avoid extraneous choices and warnings to the end-user
  $form['server_settings']['site_default_country']['#type'] = 'value';
  $form['server_settings']['site_default_country']['#value'] = 'US';
  unset($form['server_settings']['formats']['#theme']);
  $form['server_settings']['formats']['format']['date_format_long']['#type'] = 'value';
  $form['server_settings']['formats']['format']['date_format_long']['#value'] = 'l, F j, Y - g:ia';
  $form['server_settings']['formats']['format']['date_format_medium']['#type']  = 'value';
  $form['server_settings']['formats']['format']['date_format_medium']['#value'] = 'D, m/d/Y - g:ia';
  $form['server_settings']['formats']['format']['date_format_short']['#type']  = 'value';
  $form['server_settings']['formats']['format']['date_format_short']['#value'] = 'm/d/Y - g:ia';
  $form['server_settings']['date_first_day']['#type'] = 'value';
  $form['server_settings']['date_first_day']['#value'] = '0';
}

/**
 * Implements form_alter for the feature set form
 */
function julio_form_feature_set_admin_form_alter(&$form, $form_state) {
  // Default enable all feature-sets on install
  if (isset($form_state['build_info']['args'][0])) {
    $install_state = $form_state['build_info']['args'][0];
  }
  if (isset($install_state['installation_finished']) && $install_state['installation_finished'] === FALSE) {
    foreach(element_children($form) as $element) {
      if (strpos($element, 'featureset-') === 0) {
        $form[$element]['#default_value'] = TRUE;
      }
    }
  }
}

/**
 * Implements form_alter for user_register (only during install)
 */
function julio_form_user_register_form_alter(&$form, $form_state) {
  // we only want to run during install time
  $profile = variable_get('install_profile', '');
  if (empty($profile)) {
    $form['leadin']['#markup'] = t('Create a general user account. This will be your day-to-day account and will be used for all tasks besides site upgrades.');
    $form['leadin']['#weight'] = -300;

    // give user all roles
    $rids = array_keys($form['account']['roles']['#options']);
    // make sure the authenticated role in included
    $rids[] = 2;
    $form['account']['roles']['#default_value'] = $rids;

    $hide = array(
      'account' => array('status', 'notify', 'roles'),
    );

    foreach ($hide as $sub => $fields) {
      foreach($fields as $field) {
        $form[$sub][$field]['#access'] = FALSE;
      }
    }

    $unsets = array('field_julio_department');

    foreach($unsets as $unset) {
      unset($form[$unset]);
    }
  }
}

/**
 * Implements hook_install_tasks().
 */
function julio_install_tasks() {
  module_load_include('module', 'feature_set', 'feature_set.admin.inc');

  $tasks = feature_set_install_tasks();

  $tasks['julio_core_homepage_layout_select_form'] = array(
    'display_name' => st('Homepage Layout'),
    'type' => 'form',
  );

  $tasks['user_register_form'] = array(
    'display_name' => st('Add General User'),
    'type' => 'form'
  );

  $tasks['julio_install_cleanup_batch'] = array(
    'display_name' => st('Cleanup'),
    'type' => 'batch'
  );

  return $tasks;
}

/**
 * Defines batch set for necessary cleanup
 * Batch processing is necessary because we need multiple requests to ensure
 * caches are properly rebuilt/available.
 */
function julio_install_cleanup_batch($install_state) {
  return array(
    'operations' => array(
      array('julio_install_cleanup_stage1', array()),
      array('julio_install_cleanup_stage2', array()),
    ),
    'title' => t('Performing cleanup'),
  );
}

/**
 *
 */
function julio_install_cleanup_stage1(&$context) {
  // make sure default theme is enabled
  $theme = variable_get('theme_default', 'watt');
  theme_enable(array($theme));

  // remove default 'bookmark' flag
  $flags = flag_get_flags();
  foreach($flags as $flag) {
    if ($flag->name == 'bookmarks') {
      $flag->delete();
    }
  }


  // media gallery puts a link in the main-menu :/
  $query = db_select('menu_links', 'ml');
  $query->condition('menu_name', 'main-menu');
  $query->condition('link_title', 'Taxonomy term');
  $query->condition('weight', 10);
  $query->fields('ml', array('mlid'));
  if ($item = $query->execute()->fetchAssoc()) {
    menu_link_delete($item['mlid']);
  }

  drupal_flush_all_caches();

}

/**
 *
 */
function julio_install_cleanup_stage2(&$context) {
  global $user;
  // as a final step we switch to the user created during install if there is one
  $query = db_select('users', 'u');
  $query->addField('u', 'uid');
  $uid = $query->condition('u.uid', 1, '>')
    ->execute()
    ->fetchAssoc();

  $new_user = user_load($uid['uid']);
  if (!empty($new_user)) {
    module_invoke_all('user_logout', $user);
    $user = $new_user;
  }

  // change ownership of top-level nodes to our new user.
  $nodes = array(
    variable_get('julio_admissions_node_nid', 0),
    variable_get('julio_clubs_nid', 0),
    variable_get('julio_departments_nid', 0),
    variable_get('julio_homepage_slideshow_node_nid', 0),
    variable_get('julio_teams_nid', 0),
  );

  foreach($nodes as $nid) {
    if (!empty($nid)) {
      $node = node_load($nid);
      if (!empty($node)) {
        $node->uid = $user->uid;
        node_save($node);
      }
    }
  }

  // set some default cache settinsg
  $cache_vars = array(
    'block_cache' => 1,
    'cache' => 1,
    'cache_lifetime' => 60,
    'page_cache_maximum_age' => 3600,
    'preprocess_css' => 1,
    'preprocess_js' => 1,
  );

  foreach ($cache_vars as $var => $value) {
    variable_set($var, $value);
  }

  // disable bartik
  theme_disable(array('bartik'));

  $features_revert = array(
    'julio_administrative_unit_announcements', // required for og permissions
    'julio_administrative_unit_galleries', // required for og permissions
  );

  foreach ($features_revert as $module) {
    if (($feature = feature_load($module, TRUE)) && module_exists($module)) {
      $components = array();

      // Gather all the feature components.
      foreach (array_keys($feature->info['features']) as $component) {
        if (features_hook($component, 'features_revert')) {
          $components[] = $component;
        }
      }

      // Revert each component.
      foreach ($components as $component) {
        features_revert(array($module => array($component)));
      }
    }
  }
}
