<?php

function cms_odata_drush_command() {
  return array(
    'cms-sync-ldap-contacts' => array(
      'description' => 'Update odata_focal_point with latest contacts from LDAP',
      'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
      'options' => array(),
      'examples' => array()
    )
  );
}