(function($){
    $(document).ready(function() {
        $('.views-widget-filter-field_species_appendix_1_date_value').hide();
        $('.views-widget-filter-field_species_appendix_2_date_value').hide();
        var appendix_filter = $('select[name=appendix_filter]').val();
        set_appendix_filters($('select[name=appendix_filter]').val());
        $('select[name=appendix_filter]').on('change', function(){
            set_appendix_filters($(this).val());
        });
    });

    function set_appendix_filters(val) {
        switch (val) {
            case '1':
                $('input[name="field_species_appendix_1_date_value[value][date]"]').val('1970');
                $('input[name="field_species_appendix_2_date_value[value][date]"]').val('');
                break;
            case '2':
                $('input[name="field_species_appendix_1_date_value[value][date]"]').val('');
                $('input[name="field_species_appendix_2_date_value[value][date]"]').val('1970');
                break;
            default:
                $('input[name="field_species_appendix_1_date_value[value][date]"]').val('');
                $('input[name="field_species_appendix_2_date_value[value][date]"]').val('');
                break;
        }
    }
})(jQuery);
