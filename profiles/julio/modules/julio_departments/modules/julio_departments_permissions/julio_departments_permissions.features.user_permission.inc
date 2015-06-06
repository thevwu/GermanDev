<?php
/**
 * @file
 * julio_departments_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_departments_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_department content.
  $permissions['create julio_department content'] = array(
    'name' => 'create julio_department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any julio_department content.
  $permissions['delete any julio_department content'] = array(
    'name' => 'delete any julio_department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_department content.
  $permissions['delete own julio_department content'] = array(
    'name' => 'delete own julio_department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any julio_department content.
  $permissions['edit any julio_department content'] = array(
    'name' => 'edit any julio_department content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own julio_department content.
  $permissions['edit own julio_department content'] = array(
    'name' => 'edit own julio_department content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
