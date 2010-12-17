<?php

/**
 * Implementation of hook_content_default_fields().
 */
function shift_restrictions_content_default_fields() {
  $fields = array();

  // Exported field: field_shift_restrictions
  $fields['shift-field_shift_restrictions'] = array(
    'field_name' => 'field_shift_restrictions',
    'type_name' => 'shift',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'field_signup_valid_count_1|Restriction 1
field_signup_valid_count_2|Restriction 2
field_signup_valid_count_3|Restriction 3
field_signup_valid_count_4|Restriction 4
field_signup_valid_count_5|Restriction 5',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Shift restrictions',
      'weight' => '4',
      'description' => 'Checking the categories will enforce sign-up restrictions for the given groups. For example, checking <em>Children (ages 4-8)</em> will disallow users to sign-up for the shift if they enter a value greater than 0 for <em>Children (ages 4-8)</em>.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_signup_valid_count_1
  $fields['signup-field_signup_valid_count_1'] = array(
    'field_name' => 'field_signup_valid_count_1',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_signup_valid_count_1][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sample restriction 1 (eg, Children under 12)',
      'weight' => '1',
      'description' => 'Description of why this shift is restricted',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_2
  $fields['signup-field_signup_valid_count_2'] = array(
    'field_name' => 'field_signup_valid_count_2',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_signup_valid_count_2][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sample restriction 2',
      'weight' => '2',
      'description' => 'Sample explanation text',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_3
  $fields['signup-field_signup_valid_count_3'] = array(
    'field_name' => 'field_signup_valid_count_3',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_signup_valid_count_3][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sample restriction 3',
      'weight' => '3',
      'description' => 'Sample explanation text',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_4
  $fields['signup-field_signup_valid_count_4'] = array(
    'field_name' => 'field_signup_valid_count_4',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_signup_valid_count_4][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sample restriction 4',
      'weight' => '4',
      'description' => 'Sample explanation text',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_5
  $fields['signup-field_signup_valid_count_5'] = array(
    'field_name' => 'field_signup_valid_count_5',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
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
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_signup_valid_count_5][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sample restriction 5',
      'weight' => '5',
      'description' => 'Sample explanation text',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Restriction 1');
  t('Restriction 2');
  t('Restriction 3');
  t('Restriction 4');
  t('Restriction 5');
  t('Restriction 6');

  return $fields;
}
