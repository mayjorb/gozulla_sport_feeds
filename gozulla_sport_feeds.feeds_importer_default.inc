<?php
/**
 * @file
 * gozulla_sport_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gozulla_sport_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gozulla_skate_feed';
  $feeds_importer->config = array(
    'name' => 'gozulla skate feed',
    'description' => 'displays skate feed items',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'sport_feed_item',
        'expire' => '259200',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_feed_item_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'tags',
            'target' => 'field_gozulla_sport',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gozulla_skate_feed'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gozulla_surf_feed';
  $feeds_importer->config = array(
    'name' => 'gozulla surf feed',
    'description' => 'displays surf feed items',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'sport_feed_item',
        'expire' => '259200',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_feed_item_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'url',
            'target' => 'url',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'tags',
            'target' => 'field_gozulla_sport',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gozulla_surf_feed'] = $feeds_importer;

  return $export;
}
