<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function shift_signup_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_signup_details
  $groups['signup-group_signup_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'signup',
    'group_name' => 'group_signup_details',
    'label' => 'Shift details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_signup_start_time',
      '1' => 'field_signup_end_time',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Shift details');

  return $groups;
}
