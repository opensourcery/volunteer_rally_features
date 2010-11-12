<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_group_user_default_permissions() {
  $permissions = array();

  // Exported permission: create group content
  $permissions['create group content'] = array(
    'name' => 'create group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any group content
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_group_industry
  $permissions['edit field_group_industry'] = array(
    'name' => 'edit field_group_industry',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_group_leads
  $permissions['edit field_group_leads'] = array(
    'name' => 'edit field_group_leads',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_group
  $permissions['edit field_signup_group'] = array(
    'name' => 'edit field_signup_group',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_group_count
  $permissions['edit field_signup_group_count'] = array(
    'name' => 'edit field_signup_group_count',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own group content
  $permissions['edit own group content'] = array(
    'name' => 'edit own group content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_industry
  $permissions['view field_group_industry'] = array(
    'name' => 'view field_group_industry',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_group_leads
  $permissions['view field_group_leads'] = array(
    'name' => 'view field_group_leads',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_group
  $permissions['view field_signup_group'] = array(
    'name' => 'view field_signup_group',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_group_count
  $permissions['view field_signup_group_count'] = array(
    'name' => 'view field_signup_group_count',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
