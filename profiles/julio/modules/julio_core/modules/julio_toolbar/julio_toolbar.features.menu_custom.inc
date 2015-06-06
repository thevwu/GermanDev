<?php
/**
 * @file
 * julio_toolbar.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function julio_toolbar_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-julio-toolbar.
  $menus['menu-julio-toolbar'] = array(
    'menu_name' => 'menu-julio-toolbar',
    'title' => 'Julio Toolbar',
    'description' => 'Toolbar for Julio',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Julio Toolbar');
  t('Toolbar for Julio');


  return $menus;
}
