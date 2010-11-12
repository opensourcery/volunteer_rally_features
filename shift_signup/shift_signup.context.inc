<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shift_signup_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shift_signup_form';
  $context->description = 'Shift sign-up form';
  $context->tag = 'Shift Sign-ups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'signup' => 'signup',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-shift_signup_help' => array(
          'module' => 'boxes',
          'delta' => 'shift_signup_help',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shift Sign-ups');
  t('Shift sign-up form');

  $export['shift_signup_form'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shift_signups';
  $context->description = '';
  $context->tag = 'Shift Sign-ups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'shift' => 'shift',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'shift_signups-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shift Sign-ups');

  $export['shift_signups'] = $context;
  return $export;
}
