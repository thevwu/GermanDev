<?php
/**
 * @file
 * julio_teams.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function julio_teams_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_julio_team';
  $strongarm->value = 0;
  $export['comment_anonymous_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_julio_team';
  $strongarm->value = 1;
  $export['comment_default_mode_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_julio_team';
  $strongarm->value = '50';
  $export['comment_default_per_page_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_julio_team';
  $strongarm->value = 1;
  $export['comment_form_location_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_julio_team';
  $strongarm->value = '1';
  $export['comment_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_julio_team';
  $strongarm->value = '1';
  $export['comment_preview_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_julio_team';
  $strongarm->value = 1;
  $export['comment_subject_field_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_julio_team';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_julio_team';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_julio_team';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_julio_team';
  $strongarm->value = '1';
  $export['node_preview_julio_team'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_julio_team';
  $strongarm->value = 0;
  $export['node_submitted_julio_team'] = $strongarm;

  return $export;
}
