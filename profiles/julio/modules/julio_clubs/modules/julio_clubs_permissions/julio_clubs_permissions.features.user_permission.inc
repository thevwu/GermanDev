<?php
/**
 * @file
 * julio_clubs_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_clubs_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_club content.
  $permissions['create julio_club content'] = array(
    'name' => 'create julio_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any julio_club content.
  $permissions['delete any julio_club content'] = array(
    'name' => 'delete any julio_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_club content.
  $permissions['delete own julio_club content'] = array(
    'name' => 'delete own julio_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any julio_club content.
  $permissions['edit any julio_club content'] = array(
    'name' => 'edit any julio_club content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own julio_club content.
  $permissions['edit own julio_club content'] = array(
    'name' => 'edit own julio_club content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
