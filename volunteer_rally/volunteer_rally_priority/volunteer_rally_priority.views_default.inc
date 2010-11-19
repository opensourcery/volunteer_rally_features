<?php

// $Id$

/**
 * @file
 * Append the priority code field to the shift_calendar view.
 */

/**
 * Implementation of hook_views_default_views_alter().
 */
function volunteer_rally_priority_views_default_views_alter(&$views) {
  if (isset($views['shift_calendar'])) {
    // Add field_shift_priority_code_value to fields list.
    $views['shift_calendar']->display['default']->display_options['fields']['field_shift_priority_code_value'] = array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_shift_priority_code_nid',
      'table' => 'node_data_field_shift_priority_code',
      'field' => 'field_shift_priority_code_nid',
      'relationship' => 'none',
    );
  }
}