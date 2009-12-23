<?php


function buildmodes_overview() {
  drupal_add_css(drupal_get_path('module', 
'buildmodes') . '/buildmodes-admin.css');
  $modes = _buildmodes_content_build_modes( '_tabs');
  foreach($modes as $mode) {
    $output .= theme('buildmodes_summery',$mode);
  }
  return $output;
}
