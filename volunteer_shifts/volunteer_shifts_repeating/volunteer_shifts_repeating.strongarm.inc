<?php

/**
 * Implementation of hook_strongarm().
 */
function volunteer_shifts_repeating_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_repeat_autodetachondatechange_shift';
  $strongarm->value = 1;

  $export['node_repeat_autodetachondatechange_shift'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_repeat_type_shift';
  $strongarm->value = 'field_shift_date';

  $export['node_repeat_type_shift'] = $strongarm;
  return $export;
}
