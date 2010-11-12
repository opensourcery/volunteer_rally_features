<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_group_confirmation_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group_confirmation content
  $permissions['create group_confirmation content'] = array(
    'name' => 'create group_confirmation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any group_confirmation content
  $permissions['delete any group_confirmation content'] = array(
    'name' => 'delete any group_confirmation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: delete own group_confirmation content
  $permissions['delete own group_confirmation content'] = array(
    'name' => 'delete own group_confirmation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any group_confirmation content
  $permissions['edit any group_confirmation content'] = array(
    'name' => 'edit any group_confirmation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_confirmation_group_count
  $permissions['edit field_confirmation_group_count'] = array(
    'name' => 'edit field_confirmation_group_count',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_1
  $permissions['edit field_confirmation_valid_count_1'] = array(
    'name' => 'edit field_confirmation_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_2
  $permissions['edit field_confirmation_valid_count_2'] = array(
    'name' => 'edit field_confirmation_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_3
  $permissions['edit field_confirmation_valid_count_3'] = array(
    'name' => 'edit field_confirmation_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_4
  $permissions['edit field_confirmation_valid_count_4'] = array(
    'name' => 'edit field_confirmation_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_confirmation_valid_count_5
  $permissions['edit field_confirmation_valid_count_5'] = array(
    'name' => 'edit field_confirmation_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_confirmation_signup
  $permissions['edit field_group_confirmation_signup'] = array(
    'name' => 'edit field_group_confirmation_signup',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own group_confirmation content
  $permissions['edit own group_confirmation content'] = array(
    'name' => 'edit own group_confirmation content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_group_count
  $permissions['view field_confirmation_group_count'] = array(
    'name' => 'view field_confirmation_group_count',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_1
  $permissions['view field_confirmation_valid_count_1'] = array(
    'name' => 'view field_confirmation_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_2
  $permissions['view field_confirmation_valid_count_2'] = array(
    'name' => 'view field_confirmation_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_3
  $permissions['view field_confirmation_valid_count_3'] = array(
    'name' => 'view field_confirmation_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_4
  $permissions['view field_confirmation_valid_count_4'] = array(
    'name' => 'view field_confirmation_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_confirmation_valid_count_5
  $permissions['view field_confirmation_valid_count_5'] = array(
    'name' => 'view field_confirmation_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_confirmation_signup
  $permissions['view field_group_confirmation_signup'] = array(
    'name' => 'view field_group_confirmation_signup',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
