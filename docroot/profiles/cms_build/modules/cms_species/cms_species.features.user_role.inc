<?php
/**
 * @file
 * cms_species.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cms_species_user_default_roles() {
  $roles = array();

  // Exported role: access api.
  $roles['access api'] = array(
    'name' => 'access api',
    'weight' => 10,
  );

  return $roles;
}
