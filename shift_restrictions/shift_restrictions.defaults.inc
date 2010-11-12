<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _shift_restrictions_content_default_fields() {
  $fields = array();

  // Exported field: field_shift_restrictions
  $fields[] = array(
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
    'allowed_values' => 'field_signup_valid_count_1|Children (ages 4-8)
field_signup_valid_count_2|Children (ages 8-11)
field_signup_valid_count_3|Middle school/Jr. high school students
field_signup_valid_count_4|High school students
field_signup_valid_count_5|Special needs',
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
  $fields[] = array(
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
      'label' => 'Children (ages 4-8)',
      'weight' => '1',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_2
  $fields[] = array(
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
      'label' => 'Children (ages 8-11)',
      'weight' => '2',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_3
  $fields[] = array(
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
      'label' => 'Middle school/Jr. high school students',
      'weight' => '3',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_4
  $fields[] = array(
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
      'label' => 'High school students',
      'weight' => '4',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_signup_valid_count_5
  $fields[] = array(
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
      'label' => 'Special needs',
      'weight' => '5',
      'description' => '',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Translatables
  array(
    t('Children (ages 4-8)'),
    t('Children (ages 8-11)'),
    t('High school students'),
    t('Middle school/Jr. high school students'),
    t('Shift restrictions'),
    t('Special needs'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _shift_restrictions_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _shift_restrictions_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_shift_restrictions
  $permissions[] = array(
    'name' => 'edit field_shift_restrictions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: edit field_signup_valid_count_1
  $permissions[] = array(
    'name' => 'edit field_signup_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_2
  $permissions[] = array(
    'name' => 'edit field_signup_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_3
  $permissions[] = array(
    'name' => 'edit field_signup_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_4
  $permissions[] = array(
    'name' => 'edit field_signup_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_signup_valid_count_5
  $permissions[] = array(
    'name' => 'edit field_signup_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_shift_restrictions
  $permissions[] = array(
    'name' => 'view field_shift_restrictions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'volunteer coordinator',
    ),
  );

  // Exported permission: view field_signup_valid_count_1
  $permissions[] = array(
    'name' => 'view field_signup_valid_count_1',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_2
  $permissions[] = array(
    'name' => 'view field_signup_valid_count_2',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_3
  $permissions[] = array(
    'name' => 'view field_signup_valid_count_3',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_4
  $permissions[] = array(
    'name' => 'view field_signup_valid_count_4',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_signup_valid_count_5
  $permissions[] = array(
    'name' => 'view field_signup_valid_count_5',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _shift_restrictions_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_signup_restrictions_field_shift';
  $strongarm->value = 'field_shift_restrictions';

  $export['cck_signup_restrictions_field_shift'] = $strongarm;
  return $export;
}
