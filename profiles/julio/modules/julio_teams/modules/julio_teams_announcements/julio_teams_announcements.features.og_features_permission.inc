<?php
/**
 * @file
 * julio_teams_announcements.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_teams_announcements_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_team:create julio_announcement content'
  $permissions['node:julio_team:create julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete any julio_announcement content'
  $permissions['node:julio_team:delete any julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete own julio_announcement content'
  $permissions['node:julio_team:delete own julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:update any julio_announcement content'
  $permissions['node:julio_team:update any julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:update own julio_announcement content'
  $permissions['node:julio_team:update own julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
