<?php
/**
 * @file
 * robs_flex_slider.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function robs_flex_slider_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'flex_gallery';
  $ds_field->label = 'flex-gallery';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'nodeblock|7',
    'block_render' => '1',
  );
  $export['flex_gallery'] = $ds_field;

  return $export;
}
