<?php

/**
 * Implementation of hook_default_box().
 */
function volunteer_rally_day_descriptions_default_box() {
  $export = array();
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_0';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 0 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_0'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_1';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 1 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_1'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_2';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 2 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_2'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_3';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 3 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_3'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_4';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 4 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_4'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_5';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 5 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_5'] = $box;
  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vr_day_description_6';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Calendar: Day 6 description';
  $box->options = array(
    'body' => 'Optional descriptive text',
    'format' => '1',
  );

  $export['vr_day_description_6'] = $box;
  return $export;
}
