<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_shifts_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create shift content
  $permissions['create shift content'] = array(
    'name' => 'create shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: delete any shift content
  $permissions['delete any shift content'] = array(
    'name' => 'delete any shift content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own shift content
  $permissions['delete own shift content'] = array(
    'name' => 'delete own shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit any shift content
  $permissions['edit any shift content'] = array(
    'name' => 'edit any shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_capacity
  $permissions['edit field_shift_capacity'] = array(
    'name' => 'edit field_shift_capacity',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_date
  $permissions['edit field_shift_date'] = array(
    'name' => 'edit field_shift_date',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_signup_status
  $permissions['edit field_shift_signup_status'] = array(
    'name' => 'edit field_shift_signup_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit own shift content
  $permissions['edit own shift content'] = array(
    'name' => 'edit own shift content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: search content
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: use advanced search
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_shift_capacity
  $permissions['view field_shift_capacity'] = array(
    'name' => 'view field_shift_capacity',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_shift_date
  $permissions['view field_shift_date'] = array(
    'name' => 'view field_shift_date',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
