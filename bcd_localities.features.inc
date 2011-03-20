<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function bcd_localities_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function bcd_localities_node_info() {
  $items = array(
    'loc' => array(
      'name' => t('Locality'),
      'module' => 'features',
      'description' => t('A single Bahá\'í locality.'),
      'has_title' => '1',
      'title_label' => t('Community Name'),
      'has_body' => '1',
      'body_label' => t('Text'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function bcd_localities_views_api() {
  return array(
    'api' => '2',
  );
}
