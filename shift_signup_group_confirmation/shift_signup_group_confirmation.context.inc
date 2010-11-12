<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shift_signup_group_confirmation_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_confirmation_form';
  $context->description = 'Context for group confirmation form';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group_confirmation' => 'group_confirmation',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-group_confirmation_help' => array(
          'module' => 'boxes',
          'delta' => 'group_confirmation_help',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for group confirmation form');
  t('Groups');

  $export['group_confirmation_form'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_shift_signups';
  $context->description = 'Group shift sign-up context';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'signup' => 'signup',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_shift_signups-block_1' => array(
          'module' => 'views',
          'delta' => 'group_shift_signups-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group shift sign-up context');
  t('Groups');

  $export['group_shift_signups'] = $context;
  return $export;
}
