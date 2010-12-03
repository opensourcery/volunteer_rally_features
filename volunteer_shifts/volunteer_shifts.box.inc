<?php

/**
 * Implementation of hook_default_box().
 */
function volunteer_shifts_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'volunteer_shifts_site_message';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Sitewide message for authenticated users';
  $box->options = array(
    'body' => 'Welcome to your <strong>Volunteer Rally</strong> installation.

<h1>MARCUS! GET SOMETHING BETTER IN HERE</h1>',
    'format' => '2',
  );

  $export['volunteer_shifts_site_message'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'volunteer_shifts_welcome_message';
  $box->plugin_key = 'simple';
  $box->title = 'Welcome';
  $box->description = 'Welcome message';
  $box->options = array(
    'body' => '<strong>Create volunteer reservations online!</strong><br /> 
To get started, sign in or register using the buttons below.  ',
    'format' => '1',
  );

  $export['volunteer_shifts_welcome_message'] = $box;
  return $export;
}
