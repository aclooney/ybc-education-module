<?php
/**
 * @file
 * ybc_education.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ybc_education_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format ybc_education_html'.
  $permissions['use text format ybc_education_html'] = array(
    'name' => 'use text format ybc_education_html',
    'roles' => array(
      'Administrator' => 'Administrator',
      'YBC education editor' => 'YBC education editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
