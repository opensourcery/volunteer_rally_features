<?php

/**
 * Implementation of hook_strongarm().
 */
function volunteer_shifts_priority_capacity_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_volunteer_rally_priority';
  $strongarm->value = 'path';

  $export['purl_method_volunteer_rally_priority'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_types';
  $strongarm->value = array(
    'path' => 'path',
    'pair' => 0,
    'subdomain' => 0,
    'domain' => 0,
    'extension' => 0,
    'useragent' => 0,
    'querystring' => 0,
  );

  $export['purl_types'] = $strongarm;
  return $export;
}
