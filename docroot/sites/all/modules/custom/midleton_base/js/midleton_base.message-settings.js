(function ($) {

  Drupal.behaviors.midletonBaseMessage = {
    attach: function (context, settings) {
      $('.midleton-base-message-settings .show-hide-toggle').each(function () {
        if (!$(this).is(':checked')) {
          $(this).parents('td').nextAll().addClass('disabled');
        }
      }).click(function () {
        $(this).parents('td').nextAll().toggleClass('disabled');
      });

      var Calendars = [];

      $.fn.setCalendar = function(deadline, days){
        var end = $(this).parents('tr').find('.form-type-date-popup input').val();
        var days = $(this).parents('tr').find('.days-input').val();
        var start = moment(end).subtract(days, 'days').toISOString();
        var eventArray = [
          {
            end: end,
            start: start,
          }
        ];
        var index = $(this).parents('tr').index();

        Calendars[index] = $(this).parents('tr').find('.calendar').clndr({
          events: eventArray,
          multiDayEvents: {
            endDate: 'end',
            startDate: 'start'
          },
          startWithMonth: end,
        });
      }


      $('.form-type-date-popup input, .days-input').each(function(){
        $(this).setCalendar();
      });
      $('.form-type-date-popup input, .days-input').change(function(){
        var index = $(this).parents('tr').index();
        var Calendar = Calendars[index];
        Calendar.destroy();
        $(this).setCalendar();
      });

    }
  };

})(jQuery);
