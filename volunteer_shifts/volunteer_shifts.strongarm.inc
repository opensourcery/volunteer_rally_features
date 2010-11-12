<?php

/**
 * Implementation of hook_strongarm().
 */
function volunteer_shifts_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_shift';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '1',
    'menu' => '0',
    'path' => '2',
  );

  $export['content_extra_weights_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_shift';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );

  $export['node_options_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeaccess-priority';
  $strongarm->value = 10;

  $export['nodeaccess-priority'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_shift_pattern';
  $strongarm->value = 'shifts/[nid]';

  $export['pathauto_node_shift_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'r4032login_display_denied_message';
  $strongarm->value = 'You must login to view this page.';

  $export['r4032login_display_denied_message'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'welcome';

  $export['site_frontpage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_forms';
  $strongarm->value = array(
    'signup_node_form' => array(
      'author' => 0,
      'menu' => 'menu',
      'revision_information' => 'revision_information',
      'options' => 'options',
      'path' => 'path',
      'group_signup_group' => 0,
      'group_signup_details' => 0,
    ),
    'group_node_form' => array(
      'menu' => 'menu',
      'revision_information' => 'revision_information',
      'author' => 'author',
      'options' => 'options',
      'path' => 'path',
      'group_address' => 0,
    ),
  );

  $export['vertical_tabs_forms'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vertical_tabs_node_type_settings';
  $strongarm->value = 1;

  $export['vertical_tabs_node_type_settings'] = $strongarm;
  return $export;
}
