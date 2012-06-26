<?php
/**
 * @file
 * gozulla_sport_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gozulla_sport_feeds_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'feed_display';
  $view->description = 'displays feed items';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'feed display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'gozulla news';
  $handler->display->display_options['css_class'] = 'feed-item';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Feeds item: Item URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['url']['display_as_link'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '34';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_sport_feed_description']['id'] = 'field_sport_feed_description';
  $handler->display->display_options['fields']['field_sport_feed_description']['table'] = 'field_data_field_sport_feed_description';
  $handler->display->display_options['fields']['field_sport_feed_description']['field'] = 'field_sport_feed_description';
  $handler->display->display_options['fields']['field_sport_feed_description']['label'] = '';
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sport_feed_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_sport_feed_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sport_feed_description']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_sport_feed_description']['field_api_classes'] = 0;
  /* Sort criterion: Feeds item: Import date */
  $handler->display->display_options['sorts']['imported']['id'] = 'imported';
  $handler->display->display_options['sorts']['imported']['table'] = 'feeds_item';
  $handler->display->display_options['sorts']['imported']['field'] = 'imported';
  $handler->display->display_options['sorts']['imported']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sport_feed_item' => 'sport_feed_item',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'feed-display';

  /* Display: combined */
  $handler = $view->new_display('block', 'combined', 'block_1');
  $handler->display->display_options['display_description'] = 'displays all sport feeds';

  /* Display: surf */
  $handler = $view->new_display('block', 'surf', 'block_2');
  $handler->display->display_options['display_description'] = 'surf feed';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sport_feed_item' => 'sport_feed_item',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '12',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';

  /* Display: skate */
  $handler = $view->new_display('block', 'skate', 'block_3');
  $handler->display->display_options['display_description'] = 'skate feed';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sport_feed_item' => 'sport_feed_item',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '18',
  );
  $handler->display->display_options['filters']['tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'gozulla_sport';
  $translatables['feed_display'] = array(
    t('Master'),
    t('gozulla news'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('[url]'),
    t('Page'),
    t('combined'),
    t('displays all sport feeds'),
    t('surf'),
    t('surf feed'),
    t('skate'),
    t('skate feed'),
  );
  $export['feed_display'] = $view;

  return $export;
}
