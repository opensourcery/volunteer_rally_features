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
    'body' => '<strong>Welcome!  Each listing below is for food sorting projects in our warehouse in Potrero Hill, San Francisco. To sign up for a shift, click on one of the shift blocks.  Available spaces are listed first in bold so you can easily see which shifts need additional support.</strong> ',
    'format' => '1',
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
