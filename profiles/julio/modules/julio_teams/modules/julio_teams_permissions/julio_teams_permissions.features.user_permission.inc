<?php
/**
 * @file
 * julio_teams_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_teams_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_team content.
  $permissions['create julio_team content'] = array(
    'name' => 'create julio_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any julio_team content.
  $permissions['delete any julio_team content'] = array(
    'name' => 'delete any julio_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_team content.
  $permissions['delete own julio_team content'] = array(
    'name' => 'delete own julio_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any julio_team content.
  $permissions['edit any julio_team content'] = array(
    'name' => 'edit any julio_team content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own julio_team content.
  $permissions['edit own julio_team content'] = array(
    'name' => 'edit own julio_team content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
