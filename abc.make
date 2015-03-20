api = 2
core = 7.x

;***************;
;* Drupal core *;
;***************;

projects[drupal][type] = core
projects[drupal][version] = 7.34


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
projects[ckeditor][version] = 1.16

; Context
projects[context][subdir] = contrib
projects[context][version] = 3.6

; Ctools
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.5

; Date
projects[date][subdir] = contrib
projects[date][version] = 2.8

; Entity
projects[entity][subdir] = contrib
projects[entity][version] = 1.5

; Entity reference
projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.1

; Features
projects[features][subdir] = contrib
projects[features][version] = 2.3

; Fieldable panels panes
projects[fieldable_panels_panes][subdir] = contrib
projects[fieldable_panels_panes][version] = 1.5

; Field collection
projects[field_collection][subdir] = contrib
projects[field_collection][version] = 1.0-beta8

; Field group
projects[field_group][subdir] = contrib
projects[field_group][version] = 1.4

; File entity
projects[file_entity][subdir] = contrib
projects[file_entity][version] = 2.0-beta1

; Filter permissions
projects[filter_perms][subdir] = contrib
projects[filter_perms][version] = 1.0

; Image Magick
projects[imagemagick][subdir] = contrib
projects[imagemagick][version] = 1.0

; jQuery Update
projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = 2.4

; Link
projects[link][subdir] = contrib
projects[link][version] = 1.3

; Libraries
projects[libraries][subdir] = contrib
projects[libraries][version] = 2.2

; Media
projects[media][subdir] = contrib
projects[media][version] = 2.x-dev

; Menu Attributes
projects[menu_attributes][subdir] = contrib
projects[menu_attributes][version] = 1.0-rc3

; Multiform
projects[multiform][subdir] = contrib
projects[multiform][version] = 1.1

; Navbar
projects[navbar][subdir] = contrib
projects[navbar][version] = 1.5
;projects[navbar][patch][1875254] = http://drupal.org/files/navbar_has_mismatching_closing_tag_1875254_1.patch

; Panels
projects[panels][subdir] = contrib
projects[panels][version] = 3.4

; Pathauto
projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.2

; Pathauto Persist
projects[pathauto_persist][subdir] = contrib
projects[pathauto_persist][version] = 1.3

; Plupload
projects[plupload][subdir] = contrib
projects[plupload][version] = 1.7

; Strongarm
projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0

; Token
projects[token][subdir] = contrib
projects[token][version] = 1.5

; Views
projects[views][subdir] = contrib
projects[views][version] = 3.8

; Views Bulk Operations
projects[views_bulk_operations][subdir] = contrib
projects[views_bulk_operations][version] = 3.2

; Views Data Export
projects[views_data_export][subdir] = contrib
projects[views_data_export][version] = 3.0-beta8


;*********************;
;* Developer modules *;
;*********************;

; Devel
projects[devel][subdir] = contrib
projects[devel][version] = 1.5

; Diff
projects[diff][subdir] = contrib
projects[diff][version] = 3.2


;*********;
;* Theme *;
;*********;

projects[zurb-foundation][type] = theme
projects[zurb-foundation][version] = 4.0
projects[zurb-foundation][patch][2205041] = https://www.drupal.org/files/issues/zurb-foundation-array-2-string-2205041-18.patch

;*************;
;* Libraries *;
;*************;

libraries[ckeditor][download][type] = get
libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.1.1/ckeditor_4.1.1_standard.tar.gz
libraries[ckeditor][destination] = libraries

libraries[chosen][download][type] = get
libraries[chosen][download][url] = https://github.com/harvesthq/chosen/releases/download/v1.1.0/chosen_v1.1.0.zip
libraries[chosen][destination] = libraries

libraries[plupload][download][type] = get
libraries[plupload][download][url] = https://github.com/moxiecode/plupload/archive/v1.5.8.zip
libraries[plupload][destination] = libraries

libraries[backbone][download][type] = git
libraries[backbone][download][url] = https://github.com/jashkenas/backbone.git
libraries[backbone][download][tag] = 1.0.0
libraries[backbone][destination] = libraries

libraries[backbone-mutators][download][type] = get
libraries[backbone-mutators][download][url] = https://raw.github.com/asciidisco/Backbone.Mutators/master/backbone.mutators.min.js
libraries[backbone-mutators][destination] = libraries

libraries[underscore][download][type] = git
libraries[underscore][download][url] = https://github.com/jashkenas/underscore.git
libraries[underscore][download][tag] = 1.5.1
libraries[underscore][destination] = libraries