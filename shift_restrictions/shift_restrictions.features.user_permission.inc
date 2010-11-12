<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_restrictions_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_shift_restrictions
  $permissions['edit field_shift_restrictions'] = array(
    'name' => 'edit field_shift_restrictions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_valid_count_1
  $permissions['edit field_signup_valid_count_1'] = array(
    'name' => 'edit field_signup_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_2
  $permissions['edit field_signup_valid_count_2'] = array(
    'name' => 'edit field_signup_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_3
  $permissions['edit field_signup_valid_count_3'] = array(
    'name' => 'edit field_signup_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_4
  $permissions['edit field_signup_valid_count_4'] = array(
    'name' => 'edit field_signup_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_5
  $permissions['edit field_signup_valid_count_5'] = array(
    'name' => 'edit field_signup_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_shift_restrictions
  $permissions['view field_shift_restrictions'] = array(
    'name' => 'view field_shift_restrictions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_valid_count_1
  $permissions['view field_signup_valid_count_1'] = array(
    'name' => 'view field_signup_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_2
  $permissions['view field_signup_valid_count_2'] = array(
    'name' => 'view field_signup_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_3
  $permissions['view field_signup_valid_count_3'] = array(
    'name' => 'view field_signup_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_4
  $permissions['view field_signup_valid_count_4'] = array(
    'name' => 'view field_signup_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_5
  $permissions['view field_signup_valid_count_5'] = array(
    'name' => 'view field_signup_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
