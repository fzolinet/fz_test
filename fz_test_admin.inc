<?php

/**
 * hook_menu() implementation
 * @return multitype:multitype:string number multitype:string
 */
function fz_test_menu() {
  $items =array();
  $items['admin/config/fz'] = array(
      'title' => 'FZ block',
      'description' => 'Modules made by FZ configuration blockdescription',
      'position' => 'left',
      'weight' => -25,
      'page callback' => 'system_admin_menu_block_page',
      'access arguments' => array('access administration pages'),
      'file' => 'system.admin.inc',
      'file path' => drupal_get_path('module','system'),
  );
  
  $items['admin/config/fz/fz_test'] = array(
      
  );
  return $items;
}
/**
 * hook_help() inmpelemntaton
 * @param unknown $path
 * @param unknown $arg
 * @return Ambigous <The, unknown, string, A, Optional>|string
 */
function fz_test_help($path, $arg){

  switch ($path) {
    case 'admin/settings/fz_test':
      return t('Provides FZ Tester functions');

    case 'admin/help#fz_test':
      $output = '';
      $output .= '<p>'. t('All FZ Tester functions <strong>fz_test($a,$b)</strong> - output with drupal_set_message() function.
        <code>fz_test($a,$b)</strong> - Output with drupal_set_message
        <code>fz_test($a,$b, true)</strong> - Output with echo ""
        <code>fz_t($a)</strong> - Short verion of fz_test($a,null,true)
      	<code>fz_q($a)</strong> - print a query with fz_t() function
      	<code>fz_time($a)</strong> - time testing
        <code>fz_mem($a, $simple=false)</strong> - memory testing
        <p>
          <h3>References</h3>
          <p>Help and further instructions can be found on the <strong><a href="@drupal">FZ Test project page</a></strong>.</p>
        </p>', array('@caktux' => 'http://drupal.org/project/fz_test')) .'</p>';
      return $output;
  }
}
