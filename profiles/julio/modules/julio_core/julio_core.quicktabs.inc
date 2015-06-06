<?php
/**
 * @file
 * julio_core.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function julio_core_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'julio_quick_links';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Quick Links';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'menu_delta_menu-julio-current-students',
      'hide_title' => 1,
      'title' => 'Current Students',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'menu_delta_menu-julio-alumni',
      'hide_title' => 1,
      'title' => 'Alumni',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'menu_delta_menu-julio-faculty-staff',
      'hide_title' => 1,
      'title' => 'Faculty & Staff',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'menu_delta_menu-julio-prospective-students',
      'hide_title' => 1,
      'title' => 'Prospective Students',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni');
  t('Current Students');
  t('Faculty & Staff');
  t('Prospective Students');
  t('Quick Links');

  $export['julio_quick_links'] = $quicktabs;

  return $export;
}
