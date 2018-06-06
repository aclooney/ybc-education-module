<?php
/**
 * @file
 * ybc_education.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ybc_education_user_default_roles() {
  $roles = array();

  // Exported role: YBC education editor.
  $roles['YBC education editor'] = array(
    'name' => 'YBC education editor',
    'weight' => 11,
  );

  return $roles;
}
