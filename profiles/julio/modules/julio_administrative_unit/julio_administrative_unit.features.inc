<?php
/**
 * @file
 * julio_administrative_unit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function julio_administrative_unit_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function julio_administrative_unit_node_info() {
  $items = array(
    'julio_administrative_unit' => array(
      'name' => t('Administrative Unit'),
      'base' => 'node_content',
      'description' => t('Administrative unit, such as Admissions.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
