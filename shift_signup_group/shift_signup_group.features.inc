<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_signup_group_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "noderelationships" && $api == "default_node_relationships") {
    return array("version" => 1);
  }
  elseif ($module == "noderelationships" && $api == "noderelationships") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function shift_signup_group_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Group'),
      'module' => 'features',
      'description' => t('Create a group that can then be signed up to attend volunteer shifts.'),
      'has_title' => '1',
      'title_label' => t('Group name'),
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
function shift_signup_group_views_api() {
  return array(
    'api' => '2',
  );
}
