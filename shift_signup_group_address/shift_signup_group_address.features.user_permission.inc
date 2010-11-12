<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_group_address_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_group_address_additional
  $permissions['edit field_group_address_additional'] = array(
    'name' => 'edit field_group_address_additional',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_city
  $permissions['edit field_group_address_city'] = array(
    'name' => 'edit field_group_address_city',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_state
  $permissions['edit field_group_address_state'] = array(
    'name' => 'edit field_group_address_state',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_street
  $permissions['edit field_group_address_street'] = array(
    'name' => 'edit field_group_address_street',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_address_zipcode
  $permissions['edit field_group_address_zipcode'] = array(
    'name' => 'edit field_group_address_zipcode',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_additional
  $permissions['view field_group_address_additional'] = array(
    'name' => 'view field_group_address_additional',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_city
  $permissions['view field_group_address_city'] = array(
    'name' => 'view field_group_address_city',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_state
  $permissions['view field_group_address_state'] = array(
    'name' => 'view field_group_address_state',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_street
  $permissions['view field_group_address_street'] = array(
    'name' => 'view field_group_address_street',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_address_zipcode
  $permissions['view field_group_address_zipcode'] = array(
    'name' => 'view field_group_address_zipcode',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
