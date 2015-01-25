<?php
/**
 * @file
 * abc_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function abc_users_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 3,
  );

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 2,
  );

  return $roles;
}
