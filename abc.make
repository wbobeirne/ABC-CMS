api = 2
core = 7.x

;***************;
;* Drupal core *;
;***************;

projects[drupal][type] = core
projects[drupal][version] = 7.26
projects[drupal][download][type] = get
projects[drupal][download][url] = http://ftp.drupal.org/files/projects/drupal-7.26.tar.gz
projects[drupal][patch][] = https://drupal.org/files/drupal7.entity-system.1525176-104.patch


;*******************;
;* Contrib modules *;
;*******************;

; Administration Views
projects[admin_views][subdir] = contrib
projects[admin_views][version] = 1.2

; Chosen
projects[chosen][subdir] = contrib
projects[chosen][version] = 2.0-alpha4

; CKEditor
projects[ckeditor][subdir] = contrib
projects[ckeditor][version] = 1.13

; Ctools
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.4

; Date
projects[date][subdir] = contrib
projects[date][version] = 2.7

; Entity
projects[entity][subdir] = contrib
projects[entity][version] = 1.3

; Fast 404
projects[fast_404][subdir] = contrib
projects[fast_404][version] = 1.3

; Features
projects[features][subdir] = contrib
projects[features][version] = 2.0-beta2

; Field group
projects[field_group][subdir] = contrib
projects[field_group][version] = 1.3

; Filter permissions
projects[filter_perms][subdir] = contrib
projects[filter_perms][version] = 1.0

; Flexslider
projects[flexslider][subdir] = contrib
projects[flexslider][version] = 2.0-alpha3

; Image Magick
projects[imagemagick][subdir] = contrib
projects[imagemagick][version] = 1.0

; jQuery Update
projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.3

; Link
projects[link][subdir] = contrib
projects[link][version] = 1.1

; Libraries
projects[libraries][subdir] = contrib
projects[libraries][version] = 2.1

; Navbar
projects[navbar][subdir] = contrib
projects[navbar][version] = 1.4

; Pathauto
projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

; Pathauto Persist
projects[pathauto_persist][subdir] = contrib
projects[pathauto_persist][version] = 1.3

; Plupload
projects[plupload][subdir] = contrib
projects[plupload][version] = 1.1

; Strongarm
projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

; Views
projects[views][subdir] = contrib
projects[views][version] = 3.7

; Views Bulk Operations
projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.1

; Views Data Export
projects[views_data_export][subdir] = contrib
projects[views_data_export][version] = 3.0-beta6


;*********************;
;* Developer modules *;
;*********************;

; Devel
projects[devel][subdir] = contrib
projects[devel][version] = 1.3

; Diff
projects[diff][subdir] = contrib
projects[diff][version] = 3.2


;*********;
;* Theme *;
;*********;

projects[ember][type] = theme
projects[ember][version] = 2.0-alpha2

;*************;
;* Libraries *;
;*************;

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.1/ckeditor_4.1.1_standard.tar.gz
libraries[ckeditor][destination] = libraries

libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip
libraries[chosen][destination] = libraries

libraries[flexslider][download][type] = git
libraries[flexslider][download][url] = https://github.com/woothemes/FlexSlider.git
libraries[flexslider][download][revision] = ca347d49f3656ff7ba7ea1a043feec7626a0db91
libraries[flexslider][destination] = libraries

libraries[plupload][download][type] = get
libraries[plupload][download][url] = https://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][destination] = libraries