<?php if($teaser): ?>
    <div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
        <?php print render($title_prefix); ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
        <?php print render($title_suffix); ?>

        <div class="content article-body"<?php print $content_attributes; ?>>
            <?php
              // We hide the comments and links now so that we can render them later.
              hide($content['comments']);
              hide($content['links']);
              print render($content);
            ?>
            <span class="text-muted"><?php print format_date($node->changed,'custom','d F Y'); ?></span>
        </div>
        <?php print render($content['links']); ?>
    </div>
<?php else: ?>
    <div class="container">
        <div class="row">
            <div class="document-left profile col-md-8">
                <?php echo render($content['field_document_files']); ?>
                <?php echo render($content['field_document_private_files']); ?>
                <?php render_slot($node, 'related-content', 'document', $content); ?>
            </div>

            <?php ob_start(); render_slot($node, 'details', 'document', $content); $details = ob_get_contents(); ob_end_clean(); ?>
            <?php
            $sidebar_blocks = block_get_blocks_by_region('sidebar_second');
            unset($sidebar_blocks['#sorted']);
            ?>


          <?php if(!empty($details) || !empty($sidebar_blocks)): ?>
              <div class="col-md-4 profile">
                  <?php if(!empty($details)) { ?>
                      <div class="document-right well">
                          <table class="table table-condensed table-hover two-columns">
                              <tbody>
                                <?php echo $details; ?>
                                </tbody>
                          </table>
                        <?php echo render($content['field_leo_tags']); ?>
                      </div>
                    <?php } ?>

                    <!-- Render sidebar blocks -->
                    <?php if (!empty($sidebar_blocks)) { ?>
                        <?php foreach($sidebar_blocks as $block) { ?>
                            <div class="well">
                                <?php print render($block); ?>
                            </div>
                        <?php } ?>
                    <?php } ?>
                </div>
            <?php endif; ?>

        </div>
    </div>

    <?php
        hide($content['links']);
        hide($content['comments']);
    ?>
<?php endif; ?>
