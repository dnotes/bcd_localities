<?php

/**
 * Implementation of hook_views_default_views().
 */
function bcd_localities_views_default_views() {
  $views = array();

  // Exported view: locality_map
  $view = new view;
  $view->name = 'locality_map';
  $view->description = 'Map of Baha\'i Localities';
  $view->tag = 'map';
  $view->view_php = '';
  $view->base_table = 'location';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
    'type' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'machine_name' => 1,
      'exclude' => 1,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'address' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<div class="[type]">[address]</div>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide' => array(
        'country' => 'country',
        'locpick' => 'locpick',
        'province_name' => 'province_name',
        'country_name' => 'country_name',
        'map_link' => 'map_link',
        'coords' => 'coords',
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
      ),
      'exclude' => 0,
      'id' => 'address',
      'table' => 'location',
      'field' => 'address',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'distance' => array(
      'label' => 'Distance / Proximity',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'origin' => 'tied',
      'units' => 'mi',
      'latitude' => '',
      'longitude' => '',
      'exclude' => 1,
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'distance' => array(
      'order' => 'ASC',
      'origin' => 'tied',
      'units' => 'mi',
      'latitude' => '',
      'longitude' => '',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'null' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'php',
      'validate_fail' => 'not found',
      'must_not_be' => 0,
      'id' => 'null',
      'table' => 'views',
      'field' => 'null',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '0',
      'default_argument_php' => 'return arg(1);',
      'validate_argument_node_type' => array(
        'webform' => 0,
        'center' => 0,
        'loc' => 0,
        'page' => 0,
        'quote_image' => 0,
        'state' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => 'return TRUE;',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('filters', array(
    'distance' => array(
      'operator' => 'dist',
      'value' => array(
        'latitude' => '',
        'longitude' => '',
        'postal_code' => '',
        'country' => '',
        'php_code' => '',
        'nid_arg' => 'null',
        'nid_loc_field' => 'node',
        'uid_arg' => 'null',
        'search_distance' => '100',
        'search_units' => 'mile',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'distance_op',
        'label' => 'Location: Distance / Proximity',
        'use_operator' => FALSE,
        'identifier' => 'distance',
        'remember' => FALSE,
        'single' => TRUE,
        'optional' => TRUE,
      ),
      'identifier' => 'dist',
      'origin' => 'geoip',
      'gmap_macro' => '[gmap ]',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'center' => 'center',
        'loc' => 'loc',
        'temple' => 'temple',
        'facility' => 'facility',
        'seasonal' => 'seasonal',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Baha\'i Communities Near You:');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('footer_format', '1');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('empty', 'No Baha\'i communities were found within your search zone.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('items_per_page', 100);
  $handler->override_option('style_plugin', 'gmap');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'macro' => '[gmap align=center |zoom=8 |center=41.87774145109676,-87.69287109375 |control=Small |type=Map]',
    'datasource' => 'location',
    'latfield' => 'address',
    'lonfield' => 'address',
    'markers' => 'nodetype',
    'markerfield' => 'address',
    'markertype' => 'small red',
    'center_on_nodearg' => 0,
    'center_on_nodearg_arg' => 'null',
    'highlight_nodearg' => 1,
    'highlight_nodearg_arg' => 'null',
    'highlight_nodearg_color' => '#FF0000',
    'tooltipenabled' => 1,
    'tooltipfield' => 'title',
  ));
  $handler = $view->new_display('page', 'Search Page', 'page_1');
  $handler->override_option('filters', array(
    'distance' => array(
      'operator' => 'dist',
      'value' => array(
        'latitude' => '',
        'longitude' => '',
        'postal_code' => '',
        'country' => '',
        'php_code' => '',
        'nid_arg' => 'null',
        'nid_loc_field' => 'node',
        'uid_arg' => 'null',
        'search_distance' => '100',
        'search_units' => 'mile',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'distance_op',
        'identifier' => 'distance',
        'label' => 'Zip Code Search',
        'user_location_choose' => 0,
        'optional' => 0,
        'remember' => 0,
      ),
      'identifier' => 'dist',
      'origin' => 'postal_default',
      'gmap_macro' => '[gmap ]',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'center' => 'center',
        'loc' => 'loc',
        'temple' => 'temple',
        'facility' => 'facility',
        'seasonal' => 'seasonal',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('path', 'bahai-communities');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'IP Address', 'page_2');
  $handler->override_option('filters', array(
    'distance' => array(
      'operator' => 'dist',
      'value' => array(
        'latitude' => '',
        'longitude' => '',
        'postal_code' => '',
        'country' => '',
        'search_distance' => '100',
        'search_units' => 'mile',
        'geoip' => 1,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'distance_op',
        'label' => 'Location: Distance / Proximity',
        'use_operator' => FALSE,
        'identifier' => 'distance',
        'remember' => FALSE,
        'single' => TRUE,
        'optional' => TRUE,
      ),
      'identifier' => 'dist',
      'gmap_macro' => '[gmap ]',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
      'origin' => 'postal_default',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'center' => 'center',
        'loc' => 'loc',
        'temple' => 'temple',
        'facility' => 'facility',
        'seasonal' => 'seasonal',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('empty', 'No US Baha\'i communities were found within 100 miles of your location.');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'macro' => '[gmap align=center |zoom=8 |center=41.87774145109676,-87.69287109375 |id=iploc_front |control=Small |type=Map]',
    'datasource' => 'location',
    'latfield' => 'address',
    'lonfield' => 'address',
    'markers' => 'nodetype',
    'markerfield' => 'address',
    'markertype' => '',
    'center_on_nodearg' => 0,
    'center_on_nodearg_arg' => 'null',
    'highlight_nodearg' => 1,
    'highlight_nodearg_arg' => 'null',
    'highlight_nodearg_color' => '#FF0000',
    'tooltipenabled' => 1,
    'tooltipfield' => 'title',
  ));
  $handler->override_option('path', 'bahai-communities/nearby');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Local Area', 'block_1');
  $handler->override_option('filters', array(
    'distance' => array(
      'operator' => 'dist',
      'value' => array(
        'latitude' => '',
        'longitude' => '',
        'postal_code' => '',
        'country' => '',
        'search_distance' => '20',
        'search_units' => 'mile',
        'geoip' => 0,
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => 'distance_op',
        'label' => 'Zipcode',
        'use_operator' => 0,
        'identifier' => 'distance',
        'optional' => 1,
        'remember' => 0,
      ),
      'identifier' => 'dist',
      'gmap_macro' => '[gmap ]',
      'id' => 'distance',
      'table' => 'location',
      'field' => 'distance',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Use default',
      ),
      'origin' => 'postal_default',
    ),
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'center' => 'center',
        'loc' => 'loc',
        'temple' => 'temple',
        'facility' => 'facility',
        'seasonal' => 'seasonal',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', '');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'macro' => '[gmap zoom=10 |center=41.87774145109676,-87.69287109375 |width=400px |height=200px | id=state_nearby |control=Small |type=Map]',
    'datasource' => 'location',
    'latfield' => 'address',
    'lonfield' => 'address',
    'markers' => 'nodetype',
    'markerfield' => 'address',
    'markertype' => 'small red',
    'center_on_nodearg' => 0,
    'center_on_nodearg_arg' => 'null',
    'highlight_nodearg' => 1,
    'highlight_nodearg_arg' => 'null',
    'highlight_nodearg_color' => '#000000',
    'tooltipenabled' => 1,
    'tooltipfield' => 'title',
  ));
  $handler->override_option('block_description', 'Map : Local Area');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'IP Address Block', 'block_2');
  $handler->override_option('empty', 'No US Baha\'i communities were found within 100 miles of your location.');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'macro' => '[gmap align=center |zoom=8 |center=41.87774145109676,-87.69287109375 |id=iploc_block |control=Small |type=Map]',
    'datasource' => 'location',
    'latfield' => 'address',
    'lonfield' => 'address',
    'markers' => 'nodetype',
    'markerfield' => 'address',
    'markertype' => 'small red',
    'center_on_nodearg' => 0,
    'center_on_nodearg_arg' => 'null',
    'highlight_nodearg' => 1,
    'highlight_nodearg_arg' => 'null',
    'highlight_nodearg_color' => '#FF0000',
    'tooltipenabled' => 1,
    'tooltipfield' => 'title',
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
