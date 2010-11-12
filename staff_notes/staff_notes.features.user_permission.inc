<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function staff_notes_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_staff_memo
  $permissions['edit field_staff_memo'] = array(
    'name' => 'edit field_staff_memo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_staff_memo
  $permissions['view field_staff_memo'] = array(
    'name' => 'view field_staff_memo',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  return $permissions;
}
