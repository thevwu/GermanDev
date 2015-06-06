<?php
/**
 * @file
 * julio_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function julio_events_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function julio_events_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured event".
  $flags['julio_event_feature'] = array(
    'content_type' => 'node',
    'title' => 'Featured event',
    'global' => '1',
    'types' => array(
      0 => 'julio_event',
    ),
    'flag_short' => 'Feature this Event',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from Featured Events',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'julio_events',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function julio_events_node_info() {
  $items = array(
    'julio_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Event, i.e. is associated with a date/time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
