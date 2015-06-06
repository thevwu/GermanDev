<?php
/**
 * @file
 * julio_administrative_unit_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_administrative_unit_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_administrative_unit:add user'
  $permissions['node:julio_administrative_unit:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:administer group'
  $permissions['node:julio_administrative_unit:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:administer og menu'
  $permissions['node:julio_administrative_unit:administer og menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:approve and deny subscription'
  $permissions['node:julio_administrative_unit:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:create julio_group_post content'
  $permissions['node:julio_administrative_unit:create julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:delete any julio_group_post content'
  $permissions['node:julio_administrative_unit:delete any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:delete own julio_group_post content'
  $permissions['node:julio_administrative_unit:delete own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:manage members'
  $permissions['node:julio_administrative_unit:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:manage permissions'
  $permissions['node:julio_administrative_unit:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:manage roles'
  $permissions['node:julio_administrative_unit:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:subscribe'
  $permissions['node:julio_administrative_unit:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:subscribe without approval'
  $permissions['node:julio_administrative_unit:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:julio_administrative_unit:unsubscribe'
  $permissions['node:julio_administrative_unit:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update any julio_group_post content'
  $permissions['node:julio_administrative_unit:update any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update group'
  $permissions['node:julio_administrative_unit:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_administrative_unit:update own julio_group_post content'
  $permissions['node:julio_administrative_unit:update own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
