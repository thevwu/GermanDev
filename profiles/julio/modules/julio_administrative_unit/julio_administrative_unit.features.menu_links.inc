<?php
/**
 * @file
 * julio_administrative_unit.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_administrative_unit_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-new-group:node/add/julio-administrative-unit
  $menu_links['menu-julio-new-group:node/add/julio-administrative-unit'] = array(
    'menu_name' => 'menu-julio-new-group',
    'link_path' => 'node/add/julio-administrative-unit',
    'router_path' => 'node/add/julio-administrative-unit',
    'link_title' => 'Administrative Unit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administrative Unit');


  return $menu_links;
}
