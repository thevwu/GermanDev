<?php
/**
 * @file
 * julio_departments_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_departments_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_department:add user'
  $permissions['node:julio_department:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:administer group'
  $permissions['node:julio_department:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:administer og menu'
  $permissions['node:julio_department:administer og menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:approve and deny subscription'
  $permissions['node:julio_department:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:create julio_group_post content'
  $permissions['node:julio_department:create julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:delete any julio_group_post content'
  $permissions['node:julio_department:delete any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:delete own julio_group_post content'
  $permissions['node:julio_department:delete own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:manage members'
  $permissions['node:julio_department:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:manage permissions'
  $permissions['node:julio_department:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:manage roles'
  $permissions['node:julio_department:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:subscribe'
  $permissions['node:julio_department:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:julio_department:subscribe without approval'
  $permissions['node:julio_department:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:julio_department:unsubscribe'
  $permissions['node:julio_department:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_department:update any julio_group_post content'
  $permissions['node:julio_department:update any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:update group'
  $permissions['node:julio_department:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_department:update own julio_group_post content'
  $permissions['node:julio_department:update own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
