<?php
/**
 * @file
 * julio_departments_galleries.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_departments_galleries_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_department:create media_gallery content'
  $permissions['node:julio_department:create media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_department:delete any media_gallery content'
  $permissions['node:julio_department:delete any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:delete own media_gallery content'
  $permissions['node:julio_department:delete own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_department:update any media_gallery content'
  $permissions['node:julio_department:update any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_department:update own media_gallery content'
  $permissions['node:julio_department:update own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
