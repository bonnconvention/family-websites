<?php

function cms_document_drush_command() {
    $items['doc_change_published_date'] = array(
        'description' => 'Changes all the documents published date with earliest date from attachments',
        'examples' => array('drush doc_change_published_date' => 'Changes all the documents published date with earliest date from attachments'),
    );
    return $items;
}

function drush_document_doc_change_published_date()
{
    $documents = node_load_multiple(array(), array( "type" => "document"));
    $count = 0;
    foreach ($documents as $index => $node) {
        CMSUtils::println("Checking %s", $node->title);
        $modified = CMSDocument::set_pub_date($node);
        if ($modified) {
            node_save($node);
            CMSUtils::println("Document %s updated", $node->title);
            $count++;
        }
    }

    CMSUtils::println("Document %s updated", $count);
}
