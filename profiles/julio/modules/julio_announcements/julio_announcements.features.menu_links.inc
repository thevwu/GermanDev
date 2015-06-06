<?php
/**
 * @file
 * julio_announcements.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_announcements_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-contact-menu:announcements
  $menu_links['menu-julio-contact-menu:announcements'] = array(
    'menu_name' => 'menu-julio-contact-menu',
    'link_path' => 'announcements',
    'router_path' => 'announcements',
    'link_title' => 'News',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-julio-new-content:node/add/julio-announcement
  $menu_links['menu-julio-new-content:node/add/julio-announcement'] = array(
    'menu_name' => 'menu-julio-new-content',
    'link_path' => 'node/add/julio-announcement',
    'router_path' => 'node/add/julio-announcement',
    'link_title' => 'Announcement',
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
  t('Announcement');
  t('News');


  return $menu_links;
}
