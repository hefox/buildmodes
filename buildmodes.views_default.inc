<?php

function buildmodes_views_default_views() {
    /*
    include('views/view.viewname.inc');
    $views[$view->name] = $view;

    */
  $views = array();
  $view_files = file_scan_directory(drupal_get_path('module', 
'buildmodes') . '/views', '.*\.views\.inc\.php');
  foreach ($view_files as $file => $data) {
    include $file;
    $views[$view->name] = $view;

  }
  return $views;

}
