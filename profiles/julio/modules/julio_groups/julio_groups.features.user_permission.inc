<?php
/**
 * @file
 * julio_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_group_post content.
  $permissions['create julio_group_post content'] = array(
    'name' => 'create julio_group_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any julio_group_post content.
  $permissions['delete any julio_group_post content'] = array(
    'name' => 'delete any julio_group_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_group_post content.
  $permissions['delete own julio_group_post content'] = array(
    'name' => 'delete own julio_group_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any julio_group_post content.
  $permissions['edit any julio_group_post content'] = array(
    'name' => 'edit any julio_group_post content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own julio_group_post content.
  $permissions['edit own julio_group_post content'] = array(
    'name' => 'edit own julio_group_post content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
