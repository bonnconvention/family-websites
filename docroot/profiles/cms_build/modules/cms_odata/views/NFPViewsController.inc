<?php

class NFPViewsController extends EntityDefaultViewsController {
  /**
   * Edit or add extra fields to views_data().
   */
  public function views_data() {
    $data = parent::views_data();
    $data['odata_focal_point']['work_email']['field']['handler'] = 'cms_odata_views_handler_email';
    return $data;
  }
}