<?php
/**
 * @file
 * julio_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function julio_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-julio-admin-quick-links:admin/appearance/settings/watt
  $menu_links['menu-julio-admin-quick-links:admin/appearance/settings/watt'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'link_path' => 'admin/appearance/settings/watt',
    'router_path' => 'admin/appearance/settings/watt',
    'link_title' => 'Appearance',
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
  // Exported menu link: menu-julio-admin-quick-links:admin/config/system/homepage-layout
  $menu_links['menu-julio-admin-quick-links:admin/config/system/homepage-layout'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'link_path' => 'admin/config/system/homepage-layout',
    'router_path' => 'admin/config/system/homepage-layout',
    'link_title' => 'Homepage Layout',
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
  // Exported menu link: menu-julio-admin-quick-links:admin/config/system/site-information
  $menu_links['menu-julio-admin-quick-links:admin/config/system/site-information'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'link_path' => 'admin/config/system/site-information',
    'router_path' => 'admin/config/system/site-information',
    'link_title' => 'Site Information',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust sitewide settings',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-julio-admin-quick-links:admin/structure/feature-set
  $menu_links['menu-julio-admin-quick-links:admin/structure/feature-set'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'link_path' => 'admin/structure/feature-set',
    'router_path' => 'admin/structure/feature-set',
    'link_title' => 'Enabled Functionality',
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
  // Exported menu link: menu-julio-admin-quick-links:admin/structure/menu
  $menu_links['menu-julio-admin-quick-links:admin/structure/menu'] = array(
    'menu_name' => 'menu-julio-admin-quick-links',
    'link_path' => 'admin/structure/menu',
    'router_path' => 'admin/structure/menu',
    'link_title' => 'Menus',
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
  // Exported menu link: menu-julio-alumni:admin/structure/menu/manage/menu-julio-alumni
  $menu_links['menu-julio-alumni:admin/structure/menu/manage/menu-julio-alumni'] = array(
    'menu_name' => 'menu-julio-alumni',
    'link_path' => 'admin/structure/menu/manage/menu-julio-alumni',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Click to Customize',
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
  // Exported menu link: menu-julio-contact-menu:node/2
  $menu_links['menu-julio-contact-menu:node/2'] = array(
    'menu_name' => 'menu-julio-contact-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
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
  // Exported menu link: menu-julio-current-students:admin/structure/menu/manage/menu-julio-current-students
  $menu_links['menu-julio-current-students:admin/structure/menu/manage/menu-julio-current-students'] = array(
    'menu_name' => 'menu-julio-current-students',
    'link_path' => 'admin/structure/menu/manage/menu-julio-current-students',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Click to Customize',
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
  // Exported menu link: menu-julio-faculty-staff:admin/structure/menu/manage/menu-julio-faculty-staff
  $menu_links['menu-julio-faculty-staff:admin/structure/menu/manage/menu-julio-faculty-staff'] = array(
    'menu_name' => 'menu-julio-faculty-staff',
    'link_path' => 'admin/structure/menu/manage/menu-julio-faculty-staff',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Click to Customize',
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
  // Exported menu link: menu-julio-prospective-students:admin/structure/menu/manage/menu-julio-prospective-students
  $menu_links['menu-julio-prospective-students:admin/structure/menu/manage/menu-julio-prospective-students'] = array(
    'menu_name' => 'menu-julio-prospective-students',
    'link_path' => 'admin/structure/menu/manage/menu-julio-prospective-students',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Click to Customize',
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
  t('Appearance');
  t('Click to Customize');
  t('Contact');
  t('Enabled Functionality');
  t('Homepage Layout');
  t('Menus');
  t('Site Information');


  return $menu_links;
}
