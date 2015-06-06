<?php
/**
 * @file
 * julio_teams.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_teams_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-new-group:node/add/julio-team
  $menu_links['menu-julio-new-group:node/add/julio-team'] = array(
    'menu_name' => 'menu-julio-new-group',
    'link_path' => 'node/add/julio-team',
    'router_path' => 'node/add/julio-team',
    'link_title' => 'Team',
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
  // Exported menu link: menu-julio-teams-menu:teams
  $menu_links['menu-julio-teams-menu:teams'] = array(
    'menu_name' => 'menu-julio-teams-menu',
    'link_path' => 'teams',
    'router_path' => 'teams',
    'link_title' => 'Teams',
    'options' => array(
      'attributes' => array(
        'title' => 'All teams',
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
  t('Team');
  t('Teams');


  return $menu_links;
}
