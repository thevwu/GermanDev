<?php
/**
 * @file
 * julio_clubs_galleries.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_clubs_galleries_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_club:create media_gallery content'
  $permissions['node:julio_club:create media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete any media_gallery content'
  $permissions['node:julio_club:delete any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete own media_gallery content'
  $permissions['node:julio_club:delete own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:update any media_gallery content'
  $permissions['node:julio_club:update any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:update own media_gallery content'
  $permissions['node:julio_club:update own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
