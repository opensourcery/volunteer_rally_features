<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function shift_signup_notifications_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer messaging
  $permissions['administer messaging'] = array(
    'name' => 'administer messaging',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer notifications
  $permissions['administer notifications'] = array(
    'name' => 'administer notifications',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: maintain own subscriptions
  $permissions['maintain own subscriptions'] = array(
    'name' => 'maintain own subscriptions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: manage all subscriptions
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: manage own subscriptions
  $permissions['manage own subscriptions'] = array(
    'name' => 'manage own subscriptions',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
