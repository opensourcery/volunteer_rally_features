<?php

/**
 * Implementation of hook_noderelationships_default_settings().
 */
function volunteer_shifts_priority_capacity_noderelationships_default_settings() {
  $export = array();
  $noderelationships_default_setting = new stdClass;
  $noderelationships_default_setting->disabled = FALSE; /* Edit this to true to make a default noderelationships_default_setting disabled initially */
  $noderelationships_default_setting->api_version = 1;
  $noderelationships_default_setting->type_name = 'shift';
  $noderelationships_default_setting->relation_type = 'noderef';
  $noderelationships_default_setting->related_type = '';
  $noderelationships_default_setting->field_name = 'field_shift_priority_code';
  $noderelationships_default_setting->settings = 'a:1:{s:20:"create_and_reference";s:25:"field_shift_priority_code";}';
  $noderelationships_default_setting->export_key = 'shift__field_shift_priority_code';
  $export['shift__field_shift_priority_code'] = $noderelationships_default_setting;

  return $export;
}
