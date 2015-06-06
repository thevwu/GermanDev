<?php
/**
 * @file
 * julio_clubs_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_clubs_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_club:add user'
  $permissions['node:julio_club:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:administer group'
  $permissions['node:julio_club:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:administer og menu'
  $permissions['node:julio_club:administer og menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:approve and deny subscription'
  $permissions['node:julio_club:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:create julio_group_post content'
  $permissions['node:julio_club:create julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete any julio_group_post content'
  $permissions['node:julio_club:delete any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:delete own julio_group_post content'
  $permissions['node:julio_club:delete own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:manage members'
  $permissions['node:julio_club:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:manage permissions'
  $permissions['node:julio_club:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:manage roles'
  $permissions['node:julio_club:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:subscribe'
  $permissions['node:julio_club:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:julio_club:subscribe without approval'
  $permissions['node:julio_club:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:julio_club:unsubscribe'
  $permissions['node:julio_club:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_club:update any julio_group_post content'
  $permissions['node:julio_club:update any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:update group'
  $permissions['node:julio_club:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_club:update own julio_group_post content'
  $permissions['node:julio_club:update own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
