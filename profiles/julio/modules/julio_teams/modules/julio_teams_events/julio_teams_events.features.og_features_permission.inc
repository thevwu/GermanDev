<?php
/**
 * @file
 * julio_teams_events.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_teams_events_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_team:create julio_event content'
  $permissions['node:julio_team:create julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete any julio_event content'
  $permissions['node:julio_team:delete any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete own julio_event content'
  $permissions['node:julio_team:delete own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:update any julio_event content'
  $permissions['node:julio_team:update any julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:update own julio_event content'
  $permissions['node:julio_team:update own julio_event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
