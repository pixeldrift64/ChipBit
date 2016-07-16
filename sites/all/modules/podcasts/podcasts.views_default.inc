<?php
/**
 * @file
 * podcasts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function podcasts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'latest_podcasts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest Podcasts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Podcasts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'featboxpod';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Show (field_show) */
  $handler->display->display_options['relationships']['field_show_nid']['id'] = 'field_show_nid';
  $handler->display->display_options['relationships']['field_show_nid']['table'] = 'field_data_field_show';
  $handler->display->display_options['relationships']['field_show_nid']['field'] = 'field_show_nid';
  $handler->display->display_options['relationships']['field_show_nid']['delta'] = '-1';
  /* Field: Content: Show */
  $handler->display->display_options['fields']['field_show']['id'] = 'field_show';
  $handler->display->display_options['fields']['field_show']['table'] = 'field_data_field_show';
  $handler->display->display_options['fields']['field_show']['field'] = 'field_show';
  $handler->display->display_options['fields']['field_show']['label'] = '';
  $handler->display->display_options['fields']['field_show']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_show']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_show']['type'] = 'node_reference_nid';
  /* Field: Content: Episode Number */
  $handler->display->display_options['fields']['field_episode_number']['id'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['field'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['label'] = '';
  $handler->display->display_options['fields']['field_episode_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_number']['alter']['text'] = '#[field_episode_number]';
  $handler->display->display_options['fields']['field_episode_number']['element_class'] = 'epnum';
  $handler->display->display_options['fields']['field_episode_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_show_nid';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_class'] = 'featmorepodimage';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '113';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'featdesc';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<i class="fa fa-headphones"></i> Listen';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'featmorepod';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Air Date (field_air_date) */
  $handler->display->display_options['sorts']['field_air_date_value']['id'] = 'field_air_date_value';
  $handler->display->display_options['sorts']['field_air_date_value']['table'] = 'field_data_field_air_date';
  $handler->display->display_options['sorts']['field_air_date_value']['field'] = 'field_air_date_value';
  $handler->display->display_options['sorts']['field_air_date_value']['order'] = 'DESC';
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
    'podcast' => 'podcast',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['latest_podcasts'] = $view;

  $view = new view();
  $view->name = 'show_pods';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'show_pods';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[title]';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No podcasts to show :(';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Show (field_show) */
  $handler->display->display_options['relationships']['field_show_nid']['id'] = 'field_show_nid';
  $handler->display->display_options['relationships']['field_show_nid']['table'] = 'field_data_field_show';
  $handler->display->display_options['relationships']['field_show_nid']['field'] = 'field_show_nid';
  $handler->display->display_options['relationships']['field_show_nid']['delta'] = '-1';
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file_2']['id'] = 'field_file_2';
  $handler->display->display_options['fields']['field_file_2']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file_2']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file_2']['label'] = '';
  $handler->display->display_options['fields']['field_file_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_2']['type'] = 'file_url_plain';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_show_nid';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="poddesc">
[body]
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Show */
  $handler->display->display_options['fields']['field_show']['id'] = 'field_show';
  $handler->display->display_options['fields']['field_show']['table'] = 'field_data_field_show';
  $handler->display->display_options['fields']['field_show']['field'] = 'field_show';
  $handler->display->display_options['fields']['field_show']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_show']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_show']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_show']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Episode Number */
  $handler->display->display_options['fields']['field_episode_number']['id'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['field'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['label'] = '';
  $handler->display->display_options['fields']['field_episode_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_number']['alter']['text'] = '#[field_episode_number]';
  $handler->display->display_options['fields']['field_episode_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<i class="fa fa-eye"></i> View';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_file']['alter']['text'] = '<a href="[field_file_2]" download><i class="fa fa-cloud-download"></i> Download</a>';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_file']['settings'] = array(
    'text' => '<i class="fa fa-cloud-download"></i> Download',
  );
  /* Field: Content: iTunes URL */
  $handler->display->display_options['fields']['field_itunes_url']['id'] = 'field_itunes_url';
  $handler->display->display_options['fields']['field_itunes_url']['table'] = 'field_data_field_itunes_url';
  $handler->display->display_options['fields']['field_itunes_url']['field'] = 'field_itunes_url';
  $handler->display->display_options['fields']['field_itunes_url']['relationship'] = 'field_show_nid';
  $handler->display->display_options['fields']['field_itunes_url']['label'] = '';
  $handler->display->display_options['fields']['field_itunes_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_itunes_url']['alter']['text'] = '<a href="[field_itunes_url-value]"><i class="fa fa-apple"></i> iTunes</a>';
  $handler->display->display_options['fields']['field_itunes_url']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file_1']['id'] = 'field_file_1';
  $handler->display->display_options['fields']['field_file_1']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file_1']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file_1']['label'] = '';
  $handler->display->display_options['fields']['field_file_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_1']['alter']['text'] = '<a href="/player/podcast/[nid]" onclick="window.open(this.href, \'mywin\', \'left=20,top=20,width=350,height=600,toolbar=1,resizeable=0\'); return false;" ><i class="fa fa-headphones"></i> Listen</a>';
  $handler->display->display_options['fields']['field_file_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_1']['settings'] = array(
    'controls' => 0,
    'autoplay' => 0,
    'loop' => 0,
    'preload' => 'metadata',
    'multiple_file_behavior' => 'tags',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="podButtons">
[title_1]
[field_file]
[field_itunes_url]
<a href="/player/podcast/[nid]" class="listenLink"><i class="fa fa-headphones"></i> Listen</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Show (field_show) */
  $handler->display->display_options['arguments']['field_show_nid']['id'] = 'field_show_nid';
  $handler->display->display_options['arguments']['field_show_nid']['table'] = 'field_data_field_show';
  $handler->display->display_options['arguments']['field_show_nid']['field'] = 'field_show_nid';
  $handler->display->display_options['arguments']['field_show_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_show_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_show_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_show_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_show_nid']['summary_options']['items_per_page'] = '25';
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
    'podcast' => 'podcast',
    'show' => 'show',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Podcasts';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
    'itunes' => array(
      'views_rss_itunes' => array(
        'subtitle' => '',
        'summary' => '',
        'category' => array(),
        'keywords' => '',
        'image' => '',
        'author' => '',
        'explicit' => '',
        'block' => '',
        'complete' => '',
        'new-feed-url' => '',
        'owner' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title_1',
        'link' => '',
        'description' => 'body_1',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'field_file',
        'guid' => 'nid',
        'pubDate' => 'field_air_date',
      ),
    ),
    'itunes' => array(
      'views_rss_itunes' => array(
        'subtitle' => '',
        'summary' => '',
        'duration' => '',
        'keywords' => '',
        'image' => 'field_logo',
        'author' => '',
        'isClosedCaptioned' => '',
        'explicit' => '',
        'block' => '',
        'order' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Episode Number */
  $handler->display->display_options['fields']['field_episode_number']['id'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['table'] = 'field_data_field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['field'] = 'field_episode_number';
  $handler->display->display_options['fields']['field_episode_number']['label'] = '';
  $handler->display->display_options['fields']['field_episode_number']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_episode_number']['alter']['text'] = '#[field_episode_number] - ';
  $handler->display->display_options['fields']['field_episode_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_episode_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_show_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['relationship'] = 'field_show_nid';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_show_nid';
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[field_episode_number][title_1]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['label'] = '';
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_file']['id'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['table'] = 'field_data_field_file';
  $handler->display->display_options['fields']['field_file']['field'] = 'field_file';
  $handler->display->display_options['fields']['field_file']['label'] = '';
  $handler->display->display_options['fields']['field_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file']['type'] = 'file_url_plain';
  /* Field: Content: Air Date */
  $handler->display->display_options['fields']['field_air_date']['id'] = 'field_air_date';
  $handler->display->display_options['fields']['field_air_date']['table'] = 'field_data_field_air_date';
  $handler->display->display_options['fields']['field_air_date']['field'] = 'field_air_date';
  $handler->display->display_options['fields']['field_air_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Show */
  $handler->display->display_options['fields']['field_show']['id'] = 'field_show';
  $handler->display->display_options['fields']['field_show']['table'] = 'field_data_field_show';
  $handler->display->display_options['fields']['field_show']['field'] = 'field_show';
  $handler->display->display_options['fields']['field_show']['type'] = 'node_reference_nid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Show (field_show) */
  $handler->display->display_options['arguments']['field_show_nid']['id'] = 'field_show_nid';
  $handler->display->display_options['arguments']['field_show_nid']['table'] = 'field_data_field_show';
  $handler->display->display_options['arguments']['field_show_nid']['field'] = 'field_show_nid';
  $handler->display->display_options['arguments']['field_show_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_show_nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_show_nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_show_nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_show_nid']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_show_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_show_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_show_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'show/%/feed';
  $handler->display->display_options['sitename_title'] = 0;
  $export['show_pods'] = $view;

  $view = new view();
  $view->name = 'upcoming_live_shows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Upcoming Live Shows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Shows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['label'] = '';
  $handler->display->display_options['fields']['field_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_and_time']['alter']['text'] = '<i class="fa fa-microphone"></i> [field_date_and_time]';
  $handler->display->display_options['fields']['field_date_and_time']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'standard',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => 'now',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_and_time']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'show' => 'show',
  );
  /* Filter criterion: Content: Show Active (field_show_active) */
  $handler->display->display_options['filters']['field_show_active_value']['id'] = 'field_show_active_value';
  $handler->display->display_options['filters']['field_show_active_value']['table'] = 'field_data_field_show_active';
  $handler->display->display_options['filters']['field_show_active_value']['field'] = 'field_show_active_value';
  $handler->display->display_options['filters']['field_show_active_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'shows';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inactive Shows';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'show' => 'show',
  );
  /* Filter criterion: Content: Show Active (field_show_active) */
  $handler->display->display_options['filters']['field_show_active_value']['id'] = 'field_show_active_value';
  $handler->display->display_options['filters']['field_show_active_value']['table'] = 'field_data_field_show_active';
  $handler->display->display_options['filters']['field_show_active_value']['field'] = 'field_show_active_value';
  $handler->display->display_options['filters']['field_show_active_value']['value'] = array(
    0 => '0',
  );
  $export['upcoming_live_shows'] = $view;

  return $export;
}
