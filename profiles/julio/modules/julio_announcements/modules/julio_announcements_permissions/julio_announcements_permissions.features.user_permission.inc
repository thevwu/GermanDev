<?php
/**
 * @file
 * julio_announcements_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_announcements_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_announcement content.
  $permissions['create julio_announcement content'] = array(
    'name' => 'create julio_announcement content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any julio_announcement content.
  $permissions['delete any julio_announcement content'] = array(
    'name' => 'delete any julio_announcement content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_announcement content.
  $permissions['delete own julio_announcement content'] = array(
    'name' => 'delete own julio_announcement content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any julio_announcement content.
  $permissions['edit any julio_announcement content'] = array(
    'name' => 'edit any julio_announcement content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own julio_announcement content.
  $permissions['edit own julio_announcement content'] = array(
    'name' => 'edit own julio_announcement content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
