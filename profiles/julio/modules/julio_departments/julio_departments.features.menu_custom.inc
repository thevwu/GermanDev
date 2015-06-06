<?php
/**
 * @file
 * julio_departments.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function julio_departments_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-julio-departments-menu.
  $menus['menu-julio-departments-menu'] = array(
    'menu_name' => 'menu-julio-departments-menu',
    'title' => 'Department Links',
    'description' => 'Links for the Departments section of the site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Department Links');
  t('Links for the Departments section of the site.');


  return $menus;
}
