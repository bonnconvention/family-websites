(function($) {
    $(document).ready(function() {
        $('.contact_list_item').on('click', function(index, element){
            url = $(this).data('href') + $(this).data('uid');
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

            $('#contact_modal_body').load(url, function() { clearInterval(contact_progress); });
        })
    });

})(jQuery);
