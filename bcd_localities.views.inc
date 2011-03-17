<?php
// $Id$

/**
 * @file
 *
 */

function bcd_localities_views_pre_execute(&$view) {
  if ($view->name == 'locality_map') {
    if ($check['postal_code'] = $view->exposed_input['distance']['postal_code']) {
      if (!$check['country'] = $view->exposed_input['distance']['country']) {
        $check['country'] = variable_get('location_default_country', 'us');
      }
      if ($check['postal_code'] && $check['country']) {
        $coord = location_latlon_rough($check);
        $view->style_plugin->options['macro'] = preg_replace('/center=[^ ]+/', "center={$coord['lat']},{$coord['lon']}", $view->style_options['macro']);
      }
    }
  }
}

function bcd_localities_views_query_alter(&$view, &$query) {
  if ($view->name == 'locality_map' && $view->current_display == 'block_1' && arg(0) == 'node' && $node = node_load(arg(1))) {
    $view->filter['distance']->value['latitude'] = $lat = $node->location['latitude'];
    $view->filter['distance']->value['longitude'] = $lon = $node->location['longitude'];

    if ($lat && $lon) {

      foreach ($query->where as $key => $where) {
        if ($where['clauses'][0] == '1=0') {
          $query->where[$key]['clauses'][0] = '1=1';
        }
      }

      $distance_meters = _location_convert_distance_to_meters($view->filter['distance']->value['search_distance'], $view->filter['distance']->value['search_units']);

      $latrange = earth_latitude_range($lon, $lat, $distance_meters);
      $lonrange = earth_longitude_range($lon, $lat, $distance_meters);

      // Add MBR check (always.)
       $query->add_where($view->filter['distance']->options['group'], "location.latitude > %f AND location.latitude < %f AND location.longitude > %f AND location.longitude < %f", $latrange[0], $latrange[1], $lonrange[0], $lonrange[1]);

      if ($view->filter['distance']->operator == 'dist') {
        // Add radius check.
        $view->filter['distance']->query->add_where($view->filter['distance']->options['group'], earth_distance_sql($lon, $lat, 'location') .' < %f', $distance_meters);
      }

    }
  }
}
