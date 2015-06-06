<?php
/**
 * @file
 * julio_clubs.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_clubs_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-clubs-menu:clubs
  $menu_links['menu-julio-clubs-menu:clubs'] = array(
    'menu_name' => 'menu-julio-clubs-menu',
    'link_path' => 'clubs',
    'router_path' => 'clubs',
    'link_title' => 'Clubs',
    'options' => array(
      'attributes' => array(
        'title' => 'All clubs',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-julio-new-group:node/add/julio-club
  $menu_links['menu-julio-new-group:node/add/julio-club'] = array(
    'menu_name' => 'menu-julio-new-group',
    'link_path' => 'node/add/julio-club',
    'router_path' => 'node/add/julio-club',
    'link_title' => 'Club',
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
  t('Club');
  t('Clubs');


  return $menu_links;
}
