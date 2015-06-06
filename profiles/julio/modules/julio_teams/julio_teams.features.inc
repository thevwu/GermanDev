<?php
/**
 * @file
 * julio_teams.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_teams_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function julio_teams_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function julio_teams_node_info() {
  $items = array(
    'julio_team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('A school team, such as Girls Soccer or Varsity Football.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
