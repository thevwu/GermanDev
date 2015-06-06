<?php
/**
 * @file
 * julio_administrative_unit_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function julio_administrative_unit_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create julio_administrative_unit content.
  $permissions['create julio_administrative_unit content'] = array(
    'name' => 'create julio_administrative_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any julio_administrative_unit content.
  $permissions['delete any julio_administrative_unit content'] = array(
    'name' => 'delete any julio_administrative_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own julio_administrative_unit content.
  $permissions['delete own julio_administrative_unit content'] = array(
    'name' => 'delete own julio_administrative_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any julio_administrative_unit content.
  $permissions['edit any julio_administrative_unit content'] = array(
    'name' => 'edit any julio_administrative_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own julio_administrative_unit content.
  $permissions['edit own julio_administrative_unit content'] = array(
    'name' => 'edit own julio_administrative_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
