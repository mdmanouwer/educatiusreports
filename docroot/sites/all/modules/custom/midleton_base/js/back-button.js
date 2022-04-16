(function ($) {

  Drupal.behaviors.midletonBackButton = {
    attach: function (context, settings) {
      var back = document.referrer;
      if (back != '') {
        $('.tabs--primary').once().prepend('<li class="back"><a href="' + back + '" class="back">' + Drupal.t('Back') + '</a></li>');
      }
    }
  };

})(jQuery);
