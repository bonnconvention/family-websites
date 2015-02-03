<?php

/**
 * Administration Form
 */
function cms_feed_import_form($form, &$form_state) {
  $bundles = field_info_bundles();
  $node_bundles = array();
  foreach ($bundles['node'] as $machine_name => $bundle) {
    $node_bundles[$machine_name] = $bundle['label'];
  }

  if (variable_get('common_key') == NULL) {
    drupal_set_message('Set the variable common_key in order to share conntent', 'warning');
  }
  $form['cms_feed_import_url'] = array(
    '#type' => 'fieldset',
    '#title' => 'Import URLs',
    '#weight' => 0,
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
  );
  $urls = variable_get('cms_feed_import_url', array());
  $form['cms_feed_import_url']['url_1'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description' => t('URL'),
    '#default_value' => isset($urls['url_1']) ? $urls['url_1'] : '',
  );
  $form['cms_feed_import_url']['url_2'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description' => t('URL'),
    '#default_value' => isset($urls['url_2']) ? $urls['url_2'] : '',
  );
  $form['cms_feed_import_url']['url_3'] = array(
    '#type' => 'textfield',
    '#title' => t('URL'),
    '#description' => t('URL'),
    '#default_value' => isset($urls['url_3']) ? $urls['url_3'] : '',
  );

  $form['cms_feed_import_bundle'] = array(
    '#type' => 'select',
    '#title' => t('Bundle'),
    '#options' => $node_bundles,
    '#default_value' => variable_get('cms_feed_import_bundle', ""),
    '#description' => t('Bundle'),
  );

  $form['cms_feed_import_cron_interval'] = array(
    '#type' => 'textfield',
    '#title' => t('Interval'),
    '#default_value' => variable_get('cms_feed_import_cron_interval', 360),
  );

  $form['cms_import'] = array(
    '#type' => 'submit',
    '#value' => 'Import now',
    '#submit' => array('cms_feed_import_node_import_submit'),
  );
  return system_settings_form($form);
}

/**
 * Callback for Admin Form Submit
 */
function cms_feed_import_node_import_submit($form, &$form_submit) {
  $urls = $form_submit['values']['cms_feed_import_url'];
  $bundle = $form_submit['values']['cms_feed_import_bundle'];
  cms_feed_import_node_import(FALSE, $urls, $bundle);

}