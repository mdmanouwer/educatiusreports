(function ($) {

  Drupal.behaviors.midletonThemeBehavior = {
    attach: function (context, settings) {
      $('.form-radios input[type="radio"]:checked').each(function(index, element) {
        $(this).parents('.form-item').prevAll().find('input').addClass('highlighted');
      });
      $('input[type="radio"]').click(function(){
        $(this).parents('.form-radios').find('input').removeClass('highlighted');
        $(this).parents('.form-item').prevAll().find('input').addClass('highlighted');
      });

    }
  };

})(jQuery);
