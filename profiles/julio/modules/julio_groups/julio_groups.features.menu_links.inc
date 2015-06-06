<?php
/**
 * @file
 * julio_groups.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-new-content:node/add/julio-group-post
  $menu_links['menu-julio-new-content:node/add/julio-group-post'] = array(
    'menu_name' => 'menu-julio-new-content',
    'link_path' => 'node/add/julio-group-post',
    'router_path' => 'node/add/julio-group-post',
    'link_title' => 'Group Post',
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
  t('Group Post');


  return $menu_links;
}
