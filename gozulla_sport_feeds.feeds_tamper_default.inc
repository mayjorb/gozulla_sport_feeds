<?php
/**
 * @file
 * gozulla_sport_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function gozulla_sport_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_bike_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_bike_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '14',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_bike_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_boat_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_boat_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '15',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_boat_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_climb_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_climb_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '13',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_climb_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_golf_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_golf_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '20',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_golf_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_skate_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_skate_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '18',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_skate_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_snow_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_snow_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '19',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_snow_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_surf_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_surf_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '12',
  );
  $feeds_tamper->weight = 12;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_surf_feed-tags-set_default_value'] = $feeds_tamper;

  return $export;
}
