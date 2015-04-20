<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['middle']: Content in the middle column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>
<?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>
  <?php if ($content['top']): ?>
    <?php print $content['top']; ?>
  <?php endif ?>

  <div class="row">
    <div class="large-4 columns buffered">
      <?php print $content['middle_left']; ?>
    </div>
    <div class="large-4 columns buffered">
      <?php print $content['middle_center']; ?>
    </div>
    <div class="large-4 columns buffered">
      <?php print $content['middle_right']; ?>
    </div>
  </div>

  <?php if ($content['bottom']): ?>
    <?php print $content['bottom']; ?>
  <?php endif ?>
<?php !empty($css_id) ? print '</div>' : ''; ?>
