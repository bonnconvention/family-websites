#!/bin/bash

# Go to docroot/
cd docroot/

if [ ! -f ./sites/default/settings.php ]; then
  chmod u+w sites/default
  drush site-install -y
  chmod u+w sites/default/settings.php
  echo "include DRUPAL_ROOT . '/profiles/cms_build/modules/contrib/domain/settings.inc';" >> sites/default/settings.php
  chmod u-w sites/default/settings.php
  chmod u-w sites/default
fi

pre_update=  post_update=
while getopts b:a: opt; do
  case $opt in
  b)
      pre_update=$OPTARG
      ;;
  a)
      post_update=$OPTARG
      ;;
  esac
done

# Sync from staging
# Not using full aliases
# because are built in downsync_sql - preppend @{instance}. to the aliases below.
drush downsync_sql staging.sync local -y

if [ ! -z "$pre_update" ]; then
echo "Run pre update"
../$pre_update
fi

# Build the site
echo "Runing custom_build..."
drush custom_build -y

# Devify - development settings
drush devify --yes
drush devify_solr

drush cc all

if [ ! -z "$post_update" ]; then
echo "Run post update"
../$post_update
fi

drush cc all
