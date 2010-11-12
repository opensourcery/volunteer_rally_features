<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_entity_relationships
  $permissions['edit field_entity_relationships'] = array(
    'name' => 'edit field_entity_relationships',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_profile_name_first
  $permissions['edit field_profile_name_first'] = array(
    'name' => 'edit field_profile_name_first',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_name_last
  $permissions['edit field_profile_name_last'] = array(
    'name' => 'edit field_profile_name_last',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_phone
  $permissions['edit field_profile_phone'] = array(
    'name' => 'edit field_profile_phone',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_school
  $permissions['edit field_profile_school'] = array(
    'name' => 'edit field_profile_school',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_under_18
  $permissions['edit field_profile_under_18'] = array(
    'name' => 'edit field_profile_under_18',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_profile_zip
  $permissions['edit field_profile_zip'] = array(
    'name' => 'edit field_profile_zip',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_entity_relationships
  $permissions['view field_entity_relationships'] = array(
    'name' => 'view field_entity_relationships',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_profile_name_first
  $permissions['view field_profile_name_first'] = array(
    'name' => 'view field_profile_name_first',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_name_last
  $permissions['view field_profile_name_last'] = array(
    'name' => 'view field_profile_name_last',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_phone
  $permissions['view field_profile_phone'] = array(
    'name' => 'view field_profile_phone',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_school
  $permissions['view field_profile_school'] = array(
    'name' => 'view field_profile_school',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_under_18
  $permissions['view field_profile_under_18'] = array(
    'name' => 'view field_profile_under_18',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_profile_zip
  $permissions['view field_profile_zip'] = array(
    'name' => 'view field_profile_zip',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
