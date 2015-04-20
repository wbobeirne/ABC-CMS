<div class="homepage-block">
  <?php if ($block['thumbnail']): ?>
    <a href="<?php print $block['href'] ?>">
      <div class="thumbnail">
        <?php print render($block['thumbnail']); ?>
      </div>
    </a>
  <?php endif ?>


  <?php if ($block['title']): ?>
    <a class="title" href="<?php print $block['href'] ?>">
      <?php print $block['title'] ?>
    </a>
  <?php endif ?>


  <?php if ($block['text']): ?>
    <div class="text">
      <?php print $block['text']; ?>
    </div>
  <?php endif ?>


  <?php if ($block['date']): ?>
    <div class="date">
      <?php print $block['date']; ?>
    </div>
  <?php endif ?>
</div>
