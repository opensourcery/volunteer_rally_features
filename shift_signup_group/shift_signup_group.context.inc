<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function shift_signup_group_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_display';
  $context->description = 'Various blocks for group display';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_data_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'group_data_blocks-block_4',
          'region' => 'sidebar_second',
          'weight' => 4,
        ),
        'views-group_data_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'group_data_blocks-block_3',
          'region' => 'sidebar_second',
          'weight' => 5,
        ),
        'views-group_data_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'group_data_blocks-block_1',
          'region' => 'sidebar_second',
          'weight' => 10,
        ),
        'views-group_data_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'group_data_blocks-block_2',
          'region' => 'sidebar_second',
          'weight' => 20,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');
  t('Various blocks for group display');

  $export['group_display'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_shifts';
  $context->description = 'Group context';
  $context->tag = 'Groups';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group' => 'group',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-group_shifts-block_1' => array(
          'module' => 'views',
          'delta' => 'group_shifts-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-group_shifts-block_2' => array(
          'module' => 'views',
          'delta' => 'group_shifts-block_2',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group context');
  t('Groups');

  $export['group_shifts'] = $context;
  return $export;
}
