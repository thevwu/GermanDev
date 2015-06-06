<?php
/**
 * @file
 * julio_departments.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_departments_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function julio_departments_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function julio_departments_node_info() {
  $items = array(
    'julio_department' => array(
      'name' => t('Department'),
      'base' => 'node_content',
      'description' => t('A school Department or other Academic unit, such as English or Art.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
