<?php
/**
 * @file
 * julio_administrative_unit.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function julio_administrative_unit_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_julio_administrative_unit';
  $strongarm->value = 0;
  $export['comment_anonymous_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_julio_administrative_unit';
  $strongarm->value = 1;
  $export['comment_default_mode_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_julio_administrative_unit';
  $strongarm->value = '50';
  $export['comment_default_per_page_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_julio_administrative_unit';
  $strongarm->value = 1;
  $export['comment_form_location_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_julio_administrative_unit';
  $strongarm->value = '1';
  $export['comment_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_julio_administrative_unit';
  $strongarm->value = '1';
  $export['comment_preview_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_julio_administrative_unit';
  $strongarm->value = 1;
  $export['comment_subject_field_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_julio_administrative_unit';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_julio_administrative_unit';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_julio_administrative_unit';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_julio_administrative_unit';
  $strongarm->value = '1';
  $export['node_preview_julio_administrative_unit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_julio_administrative_unit';
  $strongarm->value = 0;
  $export['node_submitted_julio_administrative_unit'] = $strongarm;

  return $export;
}
