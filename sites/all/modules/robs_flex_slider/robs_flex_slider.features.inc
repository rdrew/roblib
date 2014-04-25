<?php
/**
 * @file
 * robs_flex_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function robs_flex_slider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function robs_flex_slider_node_info() {
  $items = array(
    'flex_gallery' => array(
      'name' => t('flex-gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
