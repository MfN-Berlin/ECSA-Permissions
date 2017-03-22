<?php
/**
 * @file
 * ecsa_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ecsa_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 7,
  );

  // Exported role: Manager.
  $roles['Manager'] = array(
    'name' => 'Manager',
    'weight' => 6,
  );

  // Exported role: Redakteur.
  $roles['Redakteur'] = array(
    'name' => 'Redakteur',
    'weight' => 5,
  );

  // Exported role: membership individual.
  $roles['membership individual'] = array(
    'name' => 'membership individual',
    'weight' => 3,
  );

  // Exported role: membership organization.
  $roles['membership organization'] = array(
    'name' => 'membership organization',
    'weight' => 2,
  );

  // Exported role: membership supporter.
  $roles['membership supporter'] = array(
    'name' => 'membership supporter',
    'weight' => 4,
  );

  return $roles;
}
