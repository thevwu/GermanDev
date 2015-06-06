<?php
/**
 * @file
 * julio_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function julio_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-julio-admin-quick-links.
  $menus['menu-julio-admin-quick-links'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'title' => 'Admin Quick Links',
    'description' => 'Links to common administrative tasks.',
  );
  // Exported menu: menu-julio-alumni.
  $menus['menu-julio-alumni'] = array(
    'menu_name' => 'menu-julio-alumni',
    'title' => 'Alumni',
    'description' => 'Links for alumni.',
  );
  // Exported menu: menu-julio-contact-menu.
  $menus['menu-julio-contact-menu'] = array(
    'menu_name' => 'menu-julio-contact-menu',
    'title' => 'Contact Menu',
    'description' => 'Contact menu items; displayed above the search box.',
  );
  // Exported menu: menu-julio-current-students.
  $menus['menu-julio-current-students'] = array(
    'menu_name' => 'menu-julio-current-students',
    'title' => 'Current Students',
    'description' => 'Links for current students.',
  );
  // Exported menu: menu-julio-faculty-staff.
  $menus['menu-julio-faculty-staff'] = array(
    'menu_name' => 'menu-julio-faculty-staff',
    'title' => 'Faculty & Staff',
    'description' => 'Links for faculty and staff.',
  );
  // Exported menu: menu-julio-new-content.
  $menus['menu-julio-new-content'] = array(
    'menu_name' => 'menu-julio-new-content',
    'title' => 'Create New Dynamic Content',
    'description' => 'Create content menu for dynamic content types.',
  );
  // Exported menu: menu-julio-new-group.
  $menus['menu-julio-new-group'] = array(
    'menu_name' => 'menu-julio-new-group',
    'title' => 'Create New Group',
    'description' => 'Create content menu for group content types.',
  );
  // Exported menu: menu-julio-prospective-students.
  $menus['menu-julio-prospective-students'] = array(
    'menu_name' => 'menu-julio-prospective-students',
    'title' => 'Prospective Students',
    'description' => 'Links for prospective students.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Admin Quick Links');
  t('Alumni');
  t('Contact Menu');
  t('Contact menu items; displayed above the search box.');
  t('Create New Dynamic Content');
  t('Create New Group');
  t('Create content menu for dynamic content types.');
  t('Create content menu for group content types.');
  t('Current Students');
  t('Faculty & Staff');
  t('Links for alumni.');
  t('Links for current students.');
  t('Links for faculty and staff.');
  t('Links for prospective students.');
  t('Links to common administrative tasks.');
  t('Prospective Students');


  return $menus;
}
