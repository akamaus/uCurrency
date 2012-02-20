<?php

/**
 * Implementation of hook_views_handlers().
 */
function crs_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'crs') . '/views',
    ),
    'handlers' => array(
      'crs_handler_field_price' => array(
        'parent' => 'uc_product_handler_field_price',
      ),
    ),
  );
}

function crs_views_data_alter(&$data) {
  $data['uc_products']['list_price']['field']['handler'] = 'crs_handler_field_price';
  $data['uc_products']['cost']['field']['handler']       = 'crs_handler_field_price';
  $data['uc_products']['sell_price']['field']['handler'] = 'crs_handler_field_price';
}
