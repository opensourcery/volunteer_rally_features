<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_shifts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function volunteer_shifts_node_info() {
  $items = array(
    'shift' => array(
      'name' => t('Shift'),
      'module' => 'features',
      'description' => t('A single, or repeating, shift.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function volunteer_shifts_views_api() {
  return array(
    'api' => '2',
  );
}
