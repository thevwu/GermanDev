<?php
/**
 * @file
 * julio_administrative_unit_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_administrative_unit_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_administrative_unit:create julio_event content'
  $permissions['node:julio_administrative_unit:create julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:delete any julio_event content'
  $permissions['node:julio_administrative_unit:delete any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:delete own julio_event content'
  $permissions['node:julio_administrative_unit:delete own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update any julio_event content'
  $permissions['node:julio_administrative_unit:update any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update own julio_event content'
  $permissions['node:julio_administrative_unit:update own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
