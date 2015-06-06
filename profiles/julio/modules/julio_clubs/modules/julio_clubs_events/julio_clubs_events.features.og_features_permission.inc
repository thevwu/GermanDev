<?php
/**
 * @file
 * julio_clubs_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_clubs_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_club:create julio_event content'
  $permissions['node:julio_club:create julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete any julio_event content'
  $permissions['node:julio_club:delete any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete own julio_event content'
  $permissions['node:julio_club:delete own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:update any julio_event content'
  $permissions['node:julio_club:update any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:update own julio_event content'
  $permissions['node:julio_club:update own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
