<?php

/**
 * Implementation of hook_content_default_fields().
 */
function volunteer_shifts_priority_capacity_content_default_fields() {
  $fields = array();

  // Exported field: field_shift_priority_code
  $fields['shift-field_shift_priority_code'] = array(
    'field_name' => 'field_shift_priority_code',
    'type_name' => 'shift',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'priority_code' => 'priority_code',
      'group' => 0,
      'signup_group' => 0,
      'page' => 0,
      'shift' => 0,
      'signup' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Priority code',
      'weight' => '3',
      'description' => 'Selecting a priority code will hide this shift unless it is access through the special priority url.',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Priority code');

  return $fields;
}
