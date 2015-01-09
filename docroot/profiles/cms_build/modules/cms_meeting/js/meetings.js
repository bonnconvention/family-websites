(function($) {
    $(document).ready(function() {
        $('a[rel="tooltip"]').tooltip();

        $('#meeting-document-listing').dataTable({
            "bFilter": true,
            "sPaginationType": "bootstrap",
            "aoColumns": [
                { "bSearchable": false, "bSortable": false, "bVisible": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": false, "sDefaultContent": "", "bSortable": false }
            ],
            "aLengthMenu": [
                [10, 25, 50, 100, -1],
                [10, 25, 50, 100, "All"]
            ],
            "aaSorting": [ [4, "desc"] ]
        });

        $('#all-document-listing').dataTable({
            "bFilter": true,
            "sPaginationType": "bootstrap",
            "aoColumns": [
                { "bSearchable": false, "bSortable": false, "bVisible": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": true, "sDefaultContent": "" },
                { "bSearchable": false, "sDefaultContent": "", "bSortable": false }
            ],
            "aLengthMenu": [
                [10, 25, 50, 100, -1],
                [10, 25, 50, 100, "All"]
            ],
            "aaSorting": [ [4, "desc"] ],
            "fnDrawCallback": function(oSettings) {}
        });

        $('a.back-button').click(function(){
            parent.history.back();

            return false;
        });

        $('#select-all').click(function(e) {
            e.stopPropagation();
            var oTable = $('#meeting-document-listing').dataTable();
            var oSettings = oTable.fnSettings();
            var anRows = [];
            for (var i = oSettings._iDisplayStart; i < oSettings._iDisplayEnd; i++) {
                anRows.push(oSettings.aoData[oSettings.aiDisplay[i]].nTr);
            }
            $('input[type="checkbox"]', anRows).prop('checked', true);

            return false;
        });

        $('#documents-select-all').click(function(e) {
            e.stopPropagation();
            var oTable = $('#all-document-listing').dataTable();
            var oSettings = oTable.fnSettings();
            var anRows = [];
            for (var i = oSettings._iDisplayStart; i < oSettings._iDisplayEnd; i++) {
                anRows.push(oSettings.aoData[oSettings.aiDisplay[i]].nTr);
            }
            $('input[type="checkbox"]', anRows).prop('checked', true);

            return false;
        });

        $('#deselect-all').click(function(e){
            e.stopPropagation();
            var oTable = $('#meeting-document-listing').dataTable();
            $('input[type="checkbox"]', oTable.fnGetNodes()).prop('checked', false);

            return false;
        });

        $('#documents-deselect-all').click(function(e){
            e.stopPropagation();
            var oTable = $('#all-document-listing').dataTable();
            $('input[type="checkbox"]', oTable.fnGetNodes()).prop('checked', false);

            return false;
        });

        $('#meeting-documents-tabs a').click(function (e) {
            e.preventDefault();
            $(this).tab('show');
        });

        $('#add-meeting-documents').click(function(e){
            e.preventDefault();
            var meeting_id = $('#meeting-id').val();
            var oTable = $('#all-document-listing').dataTable();
            var documents = $("input[type='checkbox']:checked", oTable.fnGetNodes()).map(function(){ return $(this).val(); }).get();
            var loader = $('<i class="loading-image" id="delete-documents-loader"></i>');
            var button_holder = $(this).parent();
            if(documents.length > 0) {
                $('#add-meeting-documents').attr('disabled', 'disabled');
                $.ajax({
                    type: 'POST',
                    url: administration_path + 'meeting/' + meeting_id + '/add_documents',
                    async: true,
                    data: 'documents=' + documents,
                    dataType: 'JSON',
                    beforeSend: function() {
                        button_holder.append(loader);
                    },
                    success: function(data) {
                        loader.fadeOut('normal', function() {
                            location.reload();
                        });
                    }
                });
            } else {
                alert('Please check the documents to attach');
                return false;
            }
        });

        $('#delete-meeting-documents').click(function(e){
            e.preventDefault();
            var meeting_id = $('#meeting-id').val();
            var oTable = $('#meeting-document-listing').dataTable();
            var documents = $("input[type='checkbox']:checked", oTable.fnGetNodes()).map(function(){ return $(this).val(); }).get();
            var loader = $('<i class="loading-image" id="delete-documents-loader"></i>');
            var button_holder = $(this).parent();
            if(documents.length > 0) {
                $('#delete-meeting-documents').attr('disabled', 'disabled');
                $.ajax({
                    type: 'POST',
                    url: administration_path + 'meeting/' + meeting_id + '/delete_documents',
                    async: true,
                    data: 'documents=' + documents,
                    dataType: 'JSON',
                    beforeSend: function() {
                        button_holder.append(loader);
                    },
                    success: function(data) {
                        loader.fadeOut('normal', function() {
                            location.reload();
                        });
                    }
                });
            } else {
                alert('Please check the documents to detach');
                return false;
            }
        });
    });
})(jQuery);
