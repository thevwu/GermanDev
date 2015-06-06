<?php
/**
 * @file
 * julio_teams_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function julio_teams_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:julio_team:add user'
  $permissions['node:julio_team:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:administer group'
  $permissions['node:julio_team:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:administer og menu'
  $permissions['node:julio_team:administer og menu'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:approve and deny subscription'
  $permissions['node:julio_team:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:create julio_group_post content'
  $permissions['node:julio_team:create julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete any julio_group_post content'
  $permissions['node:julio_team:delete any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:delete own julio_group_post content'
  $permissions['node:julio_team:delete own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:manage members'
  $permissions['node:julio_team:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:manage permissions'
  $permissions['node:julio_team:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:manage roles'
  $permissions['node:julio_team:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:subscribe'
  $permissions['node:julio_team:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:julio_team:subscribe without approval'
  $permissions['node:julio_team:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:julio_team:unsubscribe'
  $permissions['node:julio_team:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:julio_team:update any julio_group_post content'
  $permissions['node:julio_team:update any julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:update group'
  $permissions['node:julio_team:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:julio_team:update own julio_group_post content'
  $permissions['node:julio_team:update own julio_group_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
