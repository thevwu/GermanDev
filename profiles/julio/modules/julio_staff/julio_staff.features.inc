<?php
/**
 * @file
 * julio_staff.features.inc
 */

/**
 * Implements hook_views_api().
 */
function julio_staff_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function julio_staff_flag_default_flags() {
  $flags = array();
  // Exported flag: "Remove User from Staff Pages".
  $flags['julio_staff'] = array(
    'content_type' => 'user',
    'title' => 'Remove User from Staff Pages',
    'global' => '1',
    'types' => array(),
    'flag_short' => 'Remove this User from Staff Pages',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Display this User on Staff Pages',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '3',
      ),
      'unflag' => array(
        0 => '3',
      ),
    ),
    'weight' => 0,
    'show_on_form' => FALSE,
    'access_author' => '',
    'show_on_profile' => 1,
    'access_uid' => '',
    'module' => 'julio_staff',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
