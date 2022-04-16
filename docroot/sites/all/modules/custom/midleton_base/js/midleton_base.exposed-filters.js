(function ($) {

  Drupal.behaviors.midletonBaseExposedFilters = {
    attach: function (context, settings) {
      if ($('views-widget-filter-type select').val() != 'parent_teacher_meeting') {
        $('.views-widget-filter-field_ptm_month_value').addClass('element-hidden');
        $('.views-widget-filter-field_ptm_year_value').addClass('element-hidden');
      }

      $('.views-widget-filter-type select').once().change(function () {
        debugger;
        var value = $(this).val();
        if (value == 'parent_teacher_meeting') {
          $('.views-widget-filter-field_ptm_year_value').removeClass('element-hidden');
          $('.views-widget-filter-field_ptm_month_value').removeClass('element-hidden');
        } else {
          $('.views-widget-filter-field_ptm_year_value').addClass('element-hidden');
          $('.views-widget-filter-field_ptm_month_value').addClass('element-hidden');
          $('.views-widget-filter-field_ptm_year_value select').val('');
          $('.views-widget-filter-field_ptm_month_value select').val('');
        }
      });

    }
  };

})(jQuery);
