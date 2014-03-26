#!/bin/sh
#
# ---USAGE---
#
# This script is primarily for a CI to re-run the make to grab modules that
# may have been added or updated via a patch. However, it can be run by users.
#
# Usage example:
# $ cd /opt/development/integration/abc
# $ ./rebuild.sh ../html
#

set -e

if [ $# -eq 0 ]; then
  echo "Usage $0 target_build_dir"
  exit 1
fi
DRUSH_OPTS='--working-copy --no-gitinfofile'
MAKEFILE='abc.make'
TARGET=$1

# Make sure we have a target directory
if [ -z "$TARGET" ]; then
  echo "Usage $0 target_build_diri"
  exit 2
fi
CALLPATH=`dirname $0`
ABS_CALLPATH=`cd $CALLPATH; pwd -P`
BASE_PATH=`cd ..; pwd`

# Remove current drupal dir
echo 'Wiping Drupal directory...'
rm -rf $TARGET
# Do the build
echo 'Running drush make...'
drush make $DRUSH_OPTS $ABS_CALLPATH/$MAKEFILE $TARGET
# Build Symlinks
echo 'Setting up symlinks...'
DRUPAL=`cd $TARGET; pwd -P`
ln -s $ABS_CALLPATH/../settings.php $DRUPAL/sites/default/settings.php
ln -s $ABS_CALLPATH $DRUPAL/profiles/abc
ln -s /opt/files $DRUPAL/sites/default/files
ln -s /opt/files-private $DRUPAL/sites/default/files-private
mv $DRUPAL/robots.txt $DRUPAL/robots_orig.txt

# Remove unneeded library files for security
rm -rf $DRUPAL/sites/all/libraries/plupload/examples

# Run updates, revert features, clear caches
cd $DRUPAL;
echo 'Setup for local dev...'
drush en devel -y
drush en views_ui -y
drush en field_ui -y
drush vset cdn_basic_mapping "http://x.pac-12.com|.png .jpg .gif"
echo 'Running updates...'
drush updb -y;
echo 'Clearing cache...'
drush cc all;

echo 'Rebuild complete!'

set +e