<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function shift_signup_ctools_plugin_api() {
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
function shift_signup_node_info() {
  $items = array(
    'signup' => array(
      'name' => t('Signup'),
      'module' => 'features',
      'description' => t('Sign-up to a shift. '),
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
function shift_signup_views_api() {
  return array(
    'api' => '2',
  );
}
