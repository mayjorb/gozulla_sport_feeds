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
}

/**
 * Implements hook_views_api().
 */
function gozulla_sport_feeds_views_api() {
  return array("version" => "3.0");
}
