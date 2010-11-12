<?php

/**
 * Implementation of hook_content_default_fields().
 */
function staff_notes_content_default_fields() {
  $fields = array();

  // Exported field: field_staff_memo
  $fields['group-field_staff_memo'] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'group',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '-3',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_memo
  $fields['profile-field_staff_memo'] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '6',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_memo
  $fields['shift-field_staff_memo'] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'shift',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '6',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_staff_memo
  $fields['signup-field_staff_memo'] = array(
    'field_name' => 'field_staff_memo',
    'type_name' => 'signup',
    'display_settings' => array(
      'label' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_staff_memo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Memo',
      'weight' => '7',
      'description' => 'Private memo regarding this record.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Memo');

  return $fields;
}
