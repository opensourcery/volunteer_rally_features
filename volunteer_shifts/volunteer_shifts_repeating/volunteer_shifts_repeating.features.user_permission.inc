<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_shifts_repeating_user_default_permissions() {
  $permissions = array();

  // Exported permission: Create sequences
  $permissions['Create sequences'] = array(
    'name' => 'Create sequences',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  return $permissions;
}
