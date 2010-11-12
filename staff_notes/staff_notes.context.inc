<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function staff_notes_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'staff_notes';
  $context->description = 'Display staff notes for various content types';
  $context->tag = 'Volunteer Rally';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
        'profile' => 'profile',
        'shift' => 'shift',
        'signup' => 'signup',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-staff_notes-block_1' => array(
          'module' => 'views',
          'delta' => 'staff_notes-block_1',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display staff notes for various content types');
  t('Volunteer Rally');

  $export['staff_notes'] = $context;
  return $export;
}
