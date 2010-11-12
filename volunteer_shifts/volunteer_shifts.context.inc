<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function volunteer_shifts_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front';
  $context->description = 'Front page, anonymous';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
    'views' => array(
      'values' => array(
        'shift_calendar' => 'shift_calendar',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-volunteer_rally_welcome_message' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_rally_welcome_message',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'volunteer_rally-simple_login' => array(
          'module' => 'volunteer_rally',
          'delta' => 'simple_login',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page, anonymous');
  t('Volunteer Rally');

  $export['front'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_authenticated';
  $context->description = 'Front, authenticated';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'my_shift_signups-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'boxes-volunteer_rally_site_message' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_rally_site_message',
          'region' => 'content_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front, authenticated');
  t('Volunteer Rally');

  $export['front_authenticated'] = $context;
  return $export;
}