<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function volunteer_shifts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: secondary-links:logout
  $menu_links['secondary-links:logout'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '42',
  );
  // Exported menu link: secondary-links:node/add/shift
  $menu_links['secondary-links:node/add/shift'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/add/shift',
    'router_path' => 'node/add/shift',
    'link_title' => 'Add shift',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add shift');
  t('Logout');


  return $menu_links;
}
