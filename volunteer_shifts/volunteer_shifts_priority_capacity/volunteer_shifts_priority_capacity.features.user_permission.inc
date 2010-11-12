<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function volunteer_shifts_priority_capacity_user_default_permissions() {
  $permissions = array();

  // Exported permission: create priority_code content
  $permissions['create priority_code content'] = array(
    'name' => 'create priority_code content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: delete any priority_code content
  $permissions['delete any priority_code content'] = array(
    'name' => 'delete any priority_code content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: delete own priority_code content
  $permissions['delete own priority_code content'] = array(
    'name' => 'delete own priority_code content',
    'roles' => array(),
  );

  // Exported permission: edit any priority_code content
  $permissions['edit any priority_code content'] = array(
    'name' => 'edit any priority_code content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_shift_priority_code
  $permissions['edit field_shift_priority_code'] = array(
    'name' => 'edit field_shift_priority_code',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: manage volunteer rally priority codes
  $permissions['manage volunteer rally priority codes'] = array(
    'name' => 'manage volunteer rally priority codes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_shift_priority_code
  $permissions['view field_shift_priority_code'] = array(
    'name' => 'view field_shift_priority_code',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
