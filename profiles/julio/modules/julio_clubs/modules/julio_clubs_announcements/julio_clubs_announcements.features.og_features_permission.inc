<?php
/**
 * @file
 * julio_clubs_announcements.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_clubs_announcements_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_club:create julio_announcement content'
  $permissions['node:julio_club:create julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete any julio_announcement content'
  $permissions['node:julio_club:delete any julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete own julio_announcement content'
  $permissions['node:julio_club:delete own julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:update any julio_announcement content'
  $permissions['node:julio_club:update any julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:update own julio_announcement content'
  $permissions['node:julio_club:update own julio_announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
