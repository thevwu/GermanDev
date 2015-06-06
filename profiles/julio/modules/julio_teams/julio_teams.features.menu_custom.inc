<?php
/**
 * @file
 * julio_teams.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function julio_teams_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-julio-teams-menu.
  $menus['menu-julio-teams-menu'] = array(
    'menu_name' => 'menu-julio-teams-menu',
    'title' => 'Team Links',
    'description' => 'Links for the Athletics/Teams section of the site',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links for the Athletics/Teams section of the site');
  t('Team Links');


  return $menus;
}
