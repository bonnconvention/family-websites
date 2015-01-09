(function($) {
    $(document).ready(function() {

        //Autofill end time with 00:00
        $('input[name="event_calendar_date[und][0][show_todate]"]').on('click', function(){
            if ($(this).is(':checked')) {
                $('div.form-item-event-calendar-date-und-0-value2-time').hide();
                $('input[name="event_calendar_date[und][0][value2][time]"]').val('00:00');
            } else {
                $('input[name="event_calendar_date[und][0][value2][time]"]').val('');
            }
        });

    });
})(jQuery);