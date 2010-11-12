<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function shift_signup_group_address_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_address
  $groups['group-group_address'] = array(
    'group_type' => 'standard',
    'type_name' => 'group',
    'group_name' => 'group_address',
    'label' => 'Address',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_group_address_street',
      '1' => 'field_group_address_additional',
      '2' => 'field_group_address_city',
      '3' => 'field_group_address_state',
      '4' => 'field_group_address_zipcode',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');

  return $groups;
}
