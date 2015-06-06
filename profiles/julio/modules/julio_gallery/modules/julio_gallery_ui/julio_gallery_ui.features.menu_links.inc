<?php
/**
 * @file
 * julio_gallery_ui.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_gallery_ui_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-admin-quick-links:admin/content/media/thumbnails
  $menu_links['menu-julio-admin-quick-links:admin/content/media/thumbnails'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'link_path' => 'admin/content/media/thumbnails',
    'router_path' => 'admin/content/media',
    'link_title' => 'Manage Media Library',
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
  t('Manage Media Library');


  return $menu_links;
}
