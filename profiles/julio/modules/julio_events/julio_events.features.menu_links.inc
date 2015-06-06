<?php
/**
 * @file
 * julio_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-contact-menu:calendar
  $menu_links['menu-julio-contact-menu:calendar'] = array(
    'menu_name' => 'menu-julio-contact-menu',
    'link_path' => 'calendar',
    'router_path' => 'calendar',
    'link_title' => 'Calendar',
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
    'weight' => '-49',
  );
  // Exported menu link: menu-julio-new-content:node/add/julio-event
  $menu_links['menu-julio-new-content:node/add/julio-event'] = array(
    'menu_name' => 'menu-julio-new-content',
    'link_path' => 'node/add/julio-event',
    'router_path' => 'node/add/julio-event',
    'link_title' => 'Event',
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
  t('Calendar');
  t('Event');


  return $menu_links;
}
