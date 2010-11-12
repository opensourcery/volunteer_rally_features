<?php

/**
 * Implementation of hook_default_box().
 */
function shift_signup_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'shift_signup_help';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Shift sign-up form helper text';
  $box->options = array(
    'body' => '<strong>Please use your tab key to move through this form. Based on the information entered, new fields will appear as you tab through.</strong> 

Questions about scheduling? Visit the Help or Contact page on the top toolbar for more information.',
    'format' => '1',
  );

  $export['shift_signup_help'] = $box;
  return $export;
}
