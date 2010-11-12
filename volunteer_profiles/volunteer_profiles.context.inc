<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function volunteer_profiles_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile';
  $context->description = 'User profile page';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-staff_notes-block_2' => array(
          'module' => 'views',
          'delta' => 'staff_notes-block_2',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
        'views-user_profile_data-block_3' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_3',
          'region' => 'sidebar_second',
          'weight' => 1,
        ),
        'views-user_profile_data-block_1' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_1',
          'region' => 'sidebar_second',
          'weight' => 2,
        ),
        'views-user_profile_data-block_4' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_4',
          'region' => 'sidebar_second',
          'weight' => 3,
        ),
        'views-user_profile_data-block_5' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_5',
          'region' => 'sidebar_second',
          'weight' => 4,
        ),
        'views-user_profile_data-block_2' => array(
          'module' => 'views',
          'delta' => 'user_profile_data-block_2',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-user_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'user_shift_signups-block_1',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
        'views-user_shift_signups-block_2' => array(
          'module' => 'views',
          'delta' => 'user_shift_signups-block_2',
          'region' => 'content_bottom',
          'weight' => 2,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User profile page');
  t('Volunteer Rally');

  $export['user_profile'] = $context;
  return $export;
}
