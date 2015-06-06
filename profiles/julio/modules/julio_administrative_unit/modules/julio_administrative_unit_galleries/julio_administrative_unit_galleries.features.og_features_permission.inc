<?php
/**
 * @file
 * julio_administrative_unit_galleries.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_administrative_unit_galleries_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_administrative_unit:create media_gallery content'
  $permissions['node:julio_administrative_unit:create media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:delete any media_gallery content'
  $permissions['node:julio_administrative_unit:delete any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:delete own media_gallery content'
  $permissions['node:julio_administrative_unit:delete own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update any media_gallery content'
  $permissions['node:julio_administrative_unit:update any media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update own media_gallery content'
  $permissions['node:julio_administrative_unit:update own media_gallery content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
