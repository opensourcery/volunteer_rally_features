<?php

/**
 * Implementation of hook_strongarm().
 */
function shift_signup_group_confirmation_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_group_confirmation';
  $strongarm->value = '1';

  $export['ant_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_group_confirmation';
  $strongarm->value = 'Confirmation for [author-name-raw]';

  $export['ant_pattern_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_group_confirmation';
  $strongarm->value = 0;

  $export['ant_php_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_group_confirmation_field_signup';
  $strongarm->value = 'field_group_confirmation_signup';

  $export['cck_signup_group_confirmation_field_signup'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_group_confirmation_type_group_confirmation';
  $strongarm->value = 'field_group_confirmation_signup';

  $export['cck_signup_group_confirmation_type_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_group_confirmation';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '4',
    'menu' => '3',
    'path' => '5',
  );

  $export['content_extra_weights_group_confirmation'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess_group_confirmation';
  $strongarm->value = array(
    0 => array(
      'gid' => 1,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    1 => array(
      'gid' => 2,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 1,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    2 => array(
      'gid' => 4,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
    3 => array(
      'gid' => 3,
      'realm' => 'nodeaccess_rid',
      'grant_view' => 0,
      'grant_update' => 0,
      'grant_delete' => 0,
    ),
  );

  $export['nodeaccess_group_confirmation'] = $strongarm;
  return $export;
}
