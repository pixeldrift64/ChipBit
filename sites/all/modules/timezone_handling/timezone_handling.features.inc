<?php
/**
 * @file
 * timezone_handling.features.inc
 */

/**
 * Implements hook_views_api().
 */
function timezone_handling_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function timezone_handling_node_info() {
  $items = array(
    'podcast' => array(
      'name' => t('Podcast'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Episode Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
