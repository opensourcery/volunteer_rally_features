<?php

/**
 * Implementation of hook_noderelationships_default_settings().
 */
function shift_signup_group_noderelationships_default_settings() {
  $export = array();
  $noderelationships_default_setting = new stdClass;
  $noderelationships_default_setting->disabled = FALSE; /* Edit this to true to make a default noderelationships_default_setting disabled initially */
  $noderelationships_default_setting->api_version = 1;
  $noderelationships_default_setting->type_name = 'signup';
  $noderelationships_default_setting->relation_type = 'noderef';
  $noderelationships_default_setting->related_type = '';
  $noderelationships_default_setting->field_name = 'field_signup_group';
  $noderelationships_default_setting->settings = array(
    'search_and_reference_view' => 'noderelationships_noderef:page_table',
    'create_and_reference' => 'field_signup_group',
  );
  $noderelationships_default_setting->export_key = 'signup__field_signup_group';
  $export['signup__field_signup_group'] = $noderelationships_default_setting;

  return $export;
}
