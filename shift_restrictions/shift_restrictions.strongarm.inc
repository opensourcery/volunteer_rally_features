<?php

/**
 * Implementation of hook_strongarm().
 */
function shift_restrictions_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_restrictions_field_shift';
  $strongarm->value = 'field_shift_restrictions';

  $export['cck_signup_restrictions_field_shift'] = $strongarm;
  return $export;
}
