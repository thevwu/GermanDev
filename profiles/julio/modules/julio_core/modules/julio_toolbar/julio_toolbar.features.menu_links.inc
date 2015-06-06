<?php
/**
 * @file
 * julio_toolbar.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_toolbar_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-toolbar:admin/dashboard
  $menu_links['menu-julio-toolbar:admin/dashboard'] = array(
    'menu_name' => 'menu-julio-toolbar',
    'link_path' => 'admin/dashboard',
    'router_path' => 'admin/dashboard',
    'link_title' => 'Admin Dashboard',
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
  t('Admin Dashboard');


  return $menu_links;
}
