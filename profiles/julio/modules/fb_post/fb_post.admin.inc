<?php

/**
 * FB app settings form.
 */
function fb_post_app_settings_form($form, &$form_state) {
  $app_id = variable_get('fb_post_app_id', '');
  $app_secret = variable_get('fb_post_app_secret', '');
  $app_access_token = variable_get('fb_post_app_access_token', '');

  $form['app_id'] = array(
    '#type' => 'textfield',
    '#title' => t('App ID'),
    '#description' => t('Your Facebook application ID.'),
    '#default_value' => $app_id,
    '#required' => TRUE,
  );
  $form['app_secret'] = array(
    '#type' => 'textfield',
    '#title' => t('App Secret'),
    '#description' => t('Your Facebook application secret.'),
    '#default_value' => $app_secret,
    '#required' => TRUE,
  );
  if ($app_access_token) {
    $form['app_access_token'] = array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('App access token: ') . $app_access_token . '</p>',
    );
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Submit handler for fb_post_app_settings_form.
 */
function fb_post_app_settings_form_submit($form, &$form_state) {
  module_load_include('inc', 'fb_post');

  $values = $form_state['values'];
  variable_set('fb_post_app_id', $values['app_id']);
  variable_set('fb_post_app_secret', $values['app_secret']);
  $app_access_token = fb_post_get_app_access_token($values['app_id'], $values['app_secret']);
  if ($app_access_token) {
    variable_set('fb_post_app_access_token', $app_access_token);
  }
  drupal_set_message('Saved');
}

/**
 * Additional submit handler for node_type_form.
 */
function fb_post_node_type_form_submit($form, &$form_state) {
  $node_type = $form['#node_type']->type;

  foreach ($form_state['values']['fb_post'] as $var => $value) {
    $var_name = 'fb_post_' . $var;
    $enabled = variable_get($var_name, array());
    if ($value) {
      if (($enabled && !in_array($node_type, $enabled)) || !$enabled) {
        $enabled[] = $node_type;
      }
    }
    else {
      if ($enabled && in_array($node_type, $enabled)) {
        $key = array_keys($enabled, $node_type);
        unset($enabled[$key[0]]);
      }
    }

    variable_set($var_name, $enabled);
  }
}
