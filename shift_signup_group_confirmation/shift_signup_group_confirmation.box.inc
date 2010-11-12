<?php

/**
 * Implementation of hook_default_box().
 */
function shift_signup_group_confirmation_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'group_confirmation_help';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Group confirmation helper text';
  $box->options = array(
    'body' => 'Helper text for people confirming attendance of a shift that a group has signed up to attend.',
    'format' => '1',
  );

  $export['group_confirmation_help'] = $box;
  return $export;
}
