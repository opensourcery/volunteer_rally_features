<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_user_default_permissions() {
  $permissions = array();

  // Exported permission: create signup content
  $permissions['create signup content'] = array(
    'name' => 'create signup content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any signup content
  $permissions['edit any signup content'] = array(
    'name' => 'edit any signup content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_end_time
  $permissions['edit field_signup_end_time'] = array(
    'name' => 'edit field_signup_end_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_shift
  $permissions['edit field_signup_shift'] = array(
    'name' => 'edit field_signup_shift',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_start_time
  $permissions['edit field_signup_start_time'] = array(
    'name' => 'edit field_signup_start_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_status
  $permissions['edit field_signup_status'] = array(
    'name' => 'edit field_signup_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit own signup content
  $permissions['edit own signup content'] = array(
    'name' => 'edit own signup content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_end_time
  $permissions['view field_signup_end_time'] = array(
    'name' => 'view field_signup_end_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_shift
  $permissions['view field_signup_shift'] = array(
    'name' => 'view field_signup_shift',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_start_time
  $permissions['view field_signup_start_time'] = array(
    'name' => 'view field_signup_start_time',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_status
  $permissions['view field_signup_status'] = array(
    'name' => 'view field_signup_status',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  return $permissions;
}
