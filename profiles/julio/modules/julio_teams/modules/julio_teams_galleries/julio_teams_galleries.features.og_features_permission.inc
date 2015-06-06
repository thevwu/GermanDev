<?php
/**
 * @file
 * julio_teams_galleries.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_teams_galleries_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_team:create media_gallery content'
  $permissions['node:julio_team:create media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete any media_gallery content'
  $permissions['node:julio_team:delete any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete own media_gallery content'
  $permissions['node:julio_team:delete own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:update any media_gallery content'
  $permissions['node:julio_team:update any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:update own media_gallery content'
  $permissions['node:julio_team:update own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
