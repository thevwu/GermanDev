<?php
/**
 * @file
 * julio_clubs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_clubs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function julio_clubs_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function julio_clubs_node_info() {
  $items = array(
    'julio_club' => array(
      'name' => t('Club'),
      'base' => 'node_content',
      'description' => t('A school club, like the Chess Club or Marching Band.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
