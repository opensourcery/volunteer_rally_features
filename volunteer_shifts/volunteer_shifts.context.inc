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
        'boxes-volunteer_shifts_welcome_message' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_shifts_welcome_message',
          'region' => 'header',
          'weight' => 0,
        ),
        'volunteer_shifts-simple_login' => array(
          'module' => 'volunteer_shifts',
          'delta' => 'simple_login',
          'region' => 'header',
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
        'boxes-volunteer_shifts_site_message' => array(
          'module' => 'boxes',
          'delta' => 'volunteer_shifts_site_message',
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
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide blocks';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'my_shift_signups-block_1',
          'region' => 'header',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide blocks');
  t('Volunteer Rally');

  $export['sitewide'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'volunteer_shifts_sitewide_authenticated';
  $context->description = '';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
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
        'menu-secondary-links' => array(
          'module' => 'menu',
          'delta' => 'secondary-links',
          'region' => 'user_tools',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Volunteer Rally');

  $export['volunteer_shifts_sitewide_authenticated'] = $context;
  return $export;
}
