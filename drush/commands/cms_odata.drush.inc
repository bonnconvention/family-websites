<?php

/**
 * Implements hook_drush_command().
 */
function cms_odata_drush_command() {
  $items['cms-odata-sync'] = array(
    'description' => dt('Sync contacts from LDAP'),
  );
  return $items;
}

function drush_cms_odata_sync() {
  variable_set('cron_last', 0);
  cms_odata_cron();
}