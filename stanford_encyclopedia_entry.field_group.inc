<?php
/**
 * @file
 * stanford_encyclopedia_entry.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_encyclopedia_entry_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_edit_related_content|node|stanford_encyclopedia_entry|form';
  $field_group->group_name = 'group_add_edit_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_encyclopedia_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Related Content',
    'weight' => '8',
    'children' => array(
      0 => 'group_related_entries',
      1 => 'group_related_event_entries',
      2 => 'group_related_hist_materials',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-add-edit-related-content field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_add_edit_related_content|node|stanford_encyclopedia_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_entries|node|stanford_encyclopedia_entry|form';
  $field_group->group_name = 'group_related_entries';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_encyclopedia_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_related_content';
  $field_group->data = array(
    'label' => 'Related Entries',
    'weight' => '16',
    'children' => array(
      0 => 'field_s_encyc_related_entries',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Related Entries',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_related_entries|node|stanford_encyclopedia_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_event_entries|node|stanford_encyclopedia_entry|form';
  $field_group->group_name = 'group_related_event_entries';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_encyclopedia_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_related_content';
  $field_group->data = array(
    'label' => 'Related Event Entries',
    'weight' => '15',
    'children' => array(
      0 => 'field_s_encyc_related_events',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Related Event Entries',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_related_event_entries|node|stanford_encyclopedia_entry|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_hist_materials|node|stanford_encyclopedia_entry|form';
  $field_group->group_name = 'group_related_hist_materials';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_encyclopedia_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_related_content';
  $field_group->data = array(
    'label' => 'Related Historical Materials',
    'weight' => '17',
    'children' => array(
      0 => 'field_related_historicalmaterial',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Related Historical Materials',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_related_hist_materials|node|stanford_encyclopedia_entry|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add/Edit Related Content');
  t('Related Entries');
  t('Related Event Entries');
  t('Related Historical Materials');

  return $field_groups;
}
