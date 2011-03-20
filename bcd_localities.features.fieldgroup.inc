<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function bcd_localities_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_community
  $groups['loc-group_community'] = array(
    'group_type' => 'standard',
    'type_name' => 'loc',
    'group_name' => 'group_community',
    'label' => 'Community Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-1',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'simple',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_loc_type',
      '1' => 'field_cluster',
      '2' => 'field_website',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Community Information');

  return $groups;
}
