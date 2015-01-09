(function($){
    $(document).ready(function(){
        init_change_instrument();
    });

    $(document).ajaxSuccess(function(){
        init_change_instrument();
    });

    $('body').on('change', 'select[name^="instrument_fieldset[entries]"]', function(){
        if ($(this).attr('name').match(/\[instrument\]/)) {
            changed_instrument($(this));
        }
    });

    function init_change_instrument() {
        $('select[name^="instrument_fieldset[entries]"]')
            .filter(function() {
                return $(this).attr('name').match(/\[instrument\]/);
            }).each(function(){
                changed_instrument($(this));
            });
    }

    function changed_instrument($this_instrument) {
        var instrument = $this_instrument.val();
        var $sel_person_status = $this_instrument.closest('.panel-body').find('select[name$="[person_status][]"]');
        var $sel_org_status = $this_instrument.closest('.panel-body').find('select[name$="[organization_status][]"]');
        var $sel_mailing_lists = $this_instrument.closest('.panel-body').find('select[name$="[mailing_lists][]"]');

        $sel_person_status.children('option').each(function(){
            if ($(this).attr('value').search(instrument) > 0) {
                $(this).removeAttr('disabled');
            } else {
                $(this).attr('disabled', 'disabled');
            }
        }).parent().trigger("chosen:updated");

        $sel_org_status.children('option').each(function(){
            if ($(this).attr('value').search(instrument) > 0) {
                $(this).removeAttr('disabled');
            } else {
                $(this).attr('disabled', 'disabled');
            }
        }).parent().trigger("chosen:updated");

        $sel_mailing_lists.children('option').each(function(){
            if ($(this).attr('value').search(instrument) > 0) {
                $(this).removeAttr('disabled');
            } else {
                $(this).attr('disabled', 'disabled');
            }
        }).parent().trigger("chosen:updated");
    }

})(jQuery);

