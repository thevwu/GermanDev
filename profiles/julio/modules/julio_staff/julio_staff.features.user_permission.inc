<?php
/**
 * @file
 * julio_staff.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_staff_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  return $permissions;
}
