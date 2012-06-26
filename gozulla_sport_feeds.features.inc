<?php
/**
 * @file
 * gozulla_sport_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gozulla_sport_feeds_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gozulla_sport_feeds_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gozulla_sport_feeds_node_info() {
  $items = array(
    'sport_feed_item' => array(
      'name' => t('Sport Feed Item'),
      'base' => 'node_content',
      'description' => t('Used for gozulla sport feeds'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
