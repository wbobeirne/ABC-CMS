#!/bin/sh
#
# ---USAGE---
# This script is to be used in the root directory of your site, where html will 
# be created. Example usage: /opt/development/person: sh abc/build.sh html
#
# This will create a drupal installation in the html folder. If you use a name 
# that isn't html, a symlink will be created for you.
#
# You can either create your own settings.php/files directory in the root directory
# before running the script, and have them symlinked by the script, or the script
# will create and symlink them for you.
if [ $# -eq 0 ]; then
  echo "Please specify a target directory, i.e. sh $0 TARGET_BUILD_DIR"
  exit -1
fi

TARGET=`pwd`/$1

if [ -z "$TARGET" ]; then
  echo "Please specify a target directory, i.e. sh $0 TARGET_BUILD_DIR"
  exit -2
fi

drush make abc/abc.make $TARGET --working-copy

echo "-------------------------------------"

echo "$TARGET"
ln -s `pwd`/abc $TARGET/profiles
echo "abc linked to $TARGET/profiles/abc"

if [ ! -e html ]; then
  ln -s $TARGET html
  echo "Symlinked html to $TARGET"
fi

cd $TARGET/sites/default
if [ -e ../../../settings.php ]; then
  ln -s ../../../settings.php .
  echo "settings.php symlinked"
else
  cp default.settings.php ../../../settings.php
  chmod 755 ../../../settings.php
  ln -s ../../../settings.php .
  echo "default.settings.php copied and moved to root directory as settings.php. Fill in database connection info."
fi

if [ -e /opt/files ]; then
  ln -s /opt/files .
  echo "Files directory symlinked"
else
  mkdir ../../../files
  chmod 777 ../../../files
  ln -s ../../../files .
  echo "Files directory created in root directory and symlinked"
fi
