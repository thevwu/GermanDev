<?php

/**
 * @file page.vars.inc
 * This file processes variables for the "page" theming hook.
 *
 * Note: You can access existing variables directly but if new variables are
 * introduced they should be defined at the top of the file referencing $vars
 * or $variables keyed to the name of the new variable. This makes it easy to
 * note at a glance when introducing new elements into the template.
 *
 * $vars['key'] and $variables['key'] can also be used like it's normally done
 * in preprocess functions but it's less readable.
 *
 * @see HOOK.vars.inc within the examples folder for more details.
 */

// Define new variables.
$logo_img             = &$variables['logo_img'];
$site_id              = &$variables['site_id'];
$main_menu_links      = &$variables['main_menu_links'];
$secondary_menu_links = &$variables['secondary_menu_links'];

// Logo
$logo_img = '';
if (hex_settings('toggle_logo')) {
  // Moved logo into images folder.
  if (hex_settings('default_logo')) {
    $logo = "$directory/images/logo.png";
  }
  $logo_img = theme('image', array(
    'path' => $logo,
    'attributes' => array('alt' => $site_name, 'class' => array('logo')),
  ));
}

// Site id
if ($site_name) {
  $site_name = '<span class="site-name">' . $site_name . '</span>';
}
$site_id = '';
if ($logo_img || $site_name) {
  $site_id = l("$logo_img $site_name", '<front>', array(
    'html'       => TRUE,
    'absolute'   => TRUE,
    'attributes' => array('title' => t('Home')),
  ));
}

// Site navigation
$main_menu_links = '';
if ($main_menu) {
  $main_menu_links = theme('links__system_main_menu', array(
    'links'      => $main_menu,
    'heading'    => array('text' => t('Main menu'), 'level' => 'h2', 'class' => array('element-invisible')),
    'attributes' => array('class' => array('main-menu', 'links', 'inline')),
  ));
}
$secondary_menu_links = '';
if ($secondary_menu) {
  $secondary_menu_links = theme('links__system_secondary_menu', array(
    'links'      => $secondary_menu,
    'heading'    => array('text' => t('Secondary menu'), 'level' => 'h2', 'class' => array('element-invisible')),
    'attributes' => array('class' => array('secondary-menu', 'links', 'inline')),
  ));
}

// Context Section Titles

$section_title = &$variables['section_title'];

if (!$section_title) {
  $secion_title = 'normal';
}
