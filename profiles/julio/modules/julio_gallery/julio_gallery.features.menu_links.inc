<?php
/**
 * @file
 * julio_gallery.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_gallery_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-new-content:node/add/media-gallery
  $menu_links['menu-julio-new-content:node/add/media-gallery'] = array(
    'menu_name' => 'menu-julio-new-content',
    'link_path' => 'node/add/media-gallery',
    'router_path' => 'node/add/media-gallery',
    'link_title' => 'Gallery',
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
  t('Gallery');


  return $menu_links;
}
