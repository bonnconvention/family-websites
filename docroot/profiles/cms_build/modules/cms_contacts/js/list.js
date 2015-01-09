/**
 * Created by cristiroma on 16/5/14.
 */

var is_search = 0;

jQuery(document).ready(function() {
    var dt = jQuery('#' + Drupal.settings.cms_contacts_listing_table).dataTable();
    jQuery('.dataTables_filter input')
        .unbind('keypress keyup')
        .bind('keyup', function(e) {
            if(e.keyCode == 91 || e.keyCode == 18 || e.keyCode == 17 || e.keyCode == 16) {
                return; // Command, Alt, Ctrl, Shift
            }
            if( e.keyCode == 13 ) {
                jQuery('.dataTables_filter input').attr('disabled', 'disabled');
                is_search = 1;
                dt.fnFilter(this.value);
            }
        }).attr('title', 'Please press ENTER to search!').tooltip();
});

/**
 * Datatables fnDrawCallback callback for cms contacts listing datatable
 */
function cms_contacts_list_draw_datatables_callback() {
    if(is_search == 1) {
        is_search = 0;
        var ctrl = jQuery('.dataTables_filter input');
        ctrl.removeAttr('disabled');
        ctrl.focus();
    }
}

/**
 * Datatables fnServerParams callback for cms contacts listing datatable
 */
function cms_contacts_list_datatables_callback(aoData) {
    var instrument = jQuery('#instruments').val();
    if(instrument !== null) {
        jQuery(instrument).each(function(i, d) {
            aoData.push({ 'name' : 'instruments[]', 'value' : d});
        });
    }
    var region = jQuery('#regions').val();
    if(region !== null) {
        jQuery(region).each(function(i, d) {
            aoData.push({ 'name' : 'regions[]', 'value' : d});
        });
    }

    var countries = jQuery('#countries').val();
    if(countries !== null) {
        jQuery(countries).each(function(i, d) {
            aoData.push({ 'name' : 'countries[]', 'value' : d});
        });
    }
    var status_person = jQuery('#status_person').val();
    if(status_person !== null) {
        jQuery(status_person).each(function(i, d) {
            aoData.push({ 'name' : 'status_person[]', 'value' : d});
        });
    }
    var status_organization = jQuery('#status_organization').val();
    if(status_organization !== null) {
        jQuery(status_organization).each(function(i, d) {
            aoData.push({ 'name' : 'status_organization[]', 'value' : d});
        });
    }
    var mailing_lists = jQuery('#mailing_lists').val();
    if(mailing_lists !== null) {
        jQuery(mailing_lists).each(function(i, d) {
            aoData.push({ 'name' : 'mailing_lists[]', 'value' : d});
        });
    }
    var availability = jQuery('#availability').val();
    if(availability == 'TRUE' || availability == 'FALSE') {
        aoData.push({ 'name' : 'availability', 'value' : availability});
    }
    aoData.push({ 'name' : 'per_field_operator', 'value' : jQuery('#per_field_operator').val()});

    // Save the sorting column and direction on the filtering form for future reference
    for(var key in aoData) {
        var o = aoData[key];
        if(o.name == 'iSortCol_0') {
            jQuery('input[name=iSortCol_0]').val(o.value);
        } else if(o.name == 'sSortDir_0') {
            jQuery('input[name=sSortDir_0]').val(o.value);
        }
    }
}

//Modal functions for contact summary
(function($) {
    $(document).ready(function() {

        //on click event for summary link
        $('body').on('click', '.contact-summary', function(e){
            e.preventDefault();
            //Progress bar
            $('#contact_modal_body').html('').append(
                '<div class="progress"><div id="contact-progress" class="progress-bar" role="progressbar" aria-valuenow="0" aria-valuemin="0" aria-valuemax="100" style=""></div></div>'
            );
            var contact_progress = setInterval(function() {
                var $bar = $('#contact-progress');
                if ($bar.attr('aria-valuenow') < 100) {
                    var next_val = parseInt($bar.attr('aria-valuenow')) + 20;
                    $bar.attr('aria-valuenow', next_val);
                    $bar.css('width', next_val +'%');
                }
            }, 400);

            //Ajax call for contact summary
            url = $(this).data('href');
            $('#contact_modal_body').load(url, function(data) {
                clearInterval(contact_progress);
                $(this).find('textarea').select();
            });
        })
    });

})(jQuery);

(function($){
    $(document).ready(function(){
        init_change_instrument();
    });

    $('body').on('change', 'select[name="instruments[]"]', function(){
            changed_instrument($(this).val());
    });

    function init_change_instrument() {
        $('select[name="instruments[]"]').each(function(){
            if ($(this).val()) {
                changed_instrument($(this).val());
            }
        });
    }

    function changed_instrument(instruments) {

        var $sel_person_status = $('select[name="status_person[]"]');
        var $sel_org_status = $('select[name="status_organization[]"]');
        var $sel_mailing_lists = $('select[name="mailing_lists[]"]');

        if (!instruments) {
            enable_select_options($sel_person_status);
            enable_select_options($sel_org_status);
            enable_select_options($sel_mailing_lists);
            return;
        }

        //If single value, add to array
        if( Object.prototype.toString.call( instruments ) !== '[object Array]' ) {
            instruments = [instruments];
        }

        //Disable all options
        disable_select_options($sel_person_status);
        disable_select_options($sel_org_status);
        disable_select_options($sel_mailing_lists);

        //Enable valid options of selects for multiple instruments
        $.each(instruments, function(index, instrument){
            $sel_person_status.children('option').each(function(){
                if ($(this).attr('value').search(instrument) > 0) {
                    $(this).removeAttr('disabled');
                }
            }).parent().trigger("chosen:updated");

            $sel_org_status.children('option').each(function(){
                if ($(this).attr('value').search(instrument) > 0) {
                    $(this).removeAttr('disabled');
                }
            }).parent().trigger("chosen:updated");

            $sel_mailing_lists.children('option').each(function(){
                if ($(this).attr('value').search(instrument) > 0) {
                    $(this).removeAttr('disabled');
                }
            }).parent().trigger("chosen:updated");
        });
    }

    /**
     * Function to Remove attr disabled to all options of a list
     * @param $select
     */
    function enable_select_options($select) {
        $select.children('option').each(function(){
            $(this).removeAttr('disabled');
        }).parent().trigger("chosen:updated");
    }

    /**
     * Function to Add attr disabled to all options of a list
     * @param $select
     */
    function disable_select_options($select) {
        $select.children('option').each(function(){
            $(this).attr('disabled', 'disabled');
        }).parent().trigger("chosen:updated");
    }

})(jQuery);
