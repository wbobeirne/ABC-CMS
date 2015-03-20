Drupal.behaviors.wideImageRotator = {
  attach: function() {
    var $ = jQuery;
    $('.pane-bundle-wide-image-rotator').each(function(idx, el) {
      var delay = 8000;

      // Start by reversing the order of the elements
      $(el).find('img').each(function(idx, el) {
        $(el).parent().prepend(el);
      });

      // Every delay ms, move the bottom image to the top.
      var hideAndAppend = function() {
        var $images = $(el).find('img');
        $images.last().fadeOut(300, function() {
          $(this).parent().prepend(this);
          $(this).show();
        });
        setTimeout(function() {
          hideAndAppend();
        }, delay);
      }

      // Kick it off
      setTimeout(function() {
        hideAndAppend();
      }, delay);
    });
  }
};
