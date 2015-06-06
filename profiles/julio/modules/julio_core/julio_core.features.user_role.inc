<?php
/**
 * @file
 * julio_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function julio_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: content creator.
  $roles['content creator'] = array(
    'name' => 'content creator',
    'weight' => '3',
  );

  return $roles;
}
