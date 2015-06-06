<?php
/**
 * @file
 * julio_departments_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_departments_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_department:create julio_event content'
  $permissions['node:julio_department:create julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_department:delete any julio_event content'
  $permissions['node:julio_department:delete any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:delete own julio_event content'
  $permissions['node:julio_department:delete own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_department:update any julio_event content'
  $permissions['node:julio_department:update any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:update own julio_event content'
  $permissions['node:julio_department:update own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
