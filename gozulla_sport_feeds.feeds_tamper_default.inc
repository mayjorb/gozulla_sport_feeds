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
  $feeds_tamper->id = 'gozulla_skate_feed-title-convert_case';
  $feeds_tamper->importer = 'gozulla_skate_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Convert case';
  $export['gozulla_skate_feed-title-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_skate_feed-title-find_replace_regex';
  $feeds_tamper->importer = 'gozulla_skate_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\(.*?\\)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['gozulla_skate_feed-title-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_sport_feed-tags-set_default_value';
  $feeds_tamper->importer = 'gozulla_sport_feed';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '12',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['gozulla_sport_feed-tags-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_sport_feed-title-convert_case';
  $feeds_tamper->importer = 'gozulla_sport_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert case';
  $export['gozulla_sport_feed-title-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_sport_feed-title-find_replace_regex';
  $feeds_tamper->importer = 'gozulla_sport_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\(.*?\\)/',
    'replace' => '',
    'limit' => '1',
    'real_limit' => '1',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['gozulla_sport_feed-title-find_replace_regex'] = $feeds_tamper;

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

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_surf_feed-title-convert_case';
  $feeds_tamper->importer = 'gozulla_surf_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'convert_case';
  $feeds_tamper->settings = array(
    'mode' => '2',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Convert case';
  $export['gozulla_surf_feed-title-convert_case'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gozulla_surf_feed-title-find_replace_regex';
  $feeds_tamper->importer = 'gozulla_surf_feed';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\(.*?\\)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';
  $export['gozulla_surf_feed-title-find_replace_regex'] = $feeds_tamper;

  return $export;
}
