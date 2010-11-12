<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function shift_signup_group_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_signup_group
  $groups['signup-group_signup_group'] = array(
    'group_type' => 'standard',
    'type_name' => 'signup',
    'group_name' => 'group_signup_group',
    'label' => 'Reservation details',
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
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_signup_group',
      '1' => 'field_signup_valid_count_1',
      '2' => 'field_signup_valid_count_2',
      '3' => 'field_signup_valid_count_3',
      '4' => 'field_signup_valid_count_4',
      '5' => 'field_signup_valid_count_5',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Reservation details');

  return $groups;
}
