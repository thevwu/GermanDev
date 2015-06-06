<?php
/**
 * @file
 * julio_clubs.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function julio_clubs_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-julio-clubs-menu.
  $menus['menu-julio-clubs-menu'] = array(
    'menu_name' => 'menu-julio-clubs-menu',
    'title' => 'Club Links',
    'description' => 'Links for the Clubs section of the site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Club Links');
  t('Links for the Clubs section of the site.');


  return $menus;
}
