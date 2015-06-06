<?php
/**
 * @file
 * julio_departments.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_departments_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-departments-menu:departments
  $menu_links['menu-julio-departments-menu:departments'] = array(
    'menu_name' => 'menu-julio-departments-menu',
    'link_path' => 'departments',
    'router_path' => 'departments',
    'link_title' => 'Departments',
    'options' => array(
      'attributes' => array(
        'title' => 'All departments',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-julio-new-group:node/add/julio-department
  $menu_links['menu-julio-new-group:node/add/julio-department'] = array(
    'menu_name' => 'menu-julio-new-group',
    'link_path' => 'node/add/julio-department',
    'router_path' => 'node/add/julio-department',
    'link_title' => 'Department',
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
  t('Department');
  t('Departments');


  return $menu_links;
}
