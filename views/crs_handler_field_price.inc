<?php
class crs_handler_field_price extends uc_product_handler_field_price {
  function render($values) {
    $node = node_load($values->nid);

    if (isset($values->uc_products_list_price))
      $values->uc_products_list_price = $node->list_price;
    if (isset($values->uc_products_cost))
      $values->uc_products_cost = $node->cost;
    if (isset($values->uc_products_sell_price))
      $values->uc_products_sell_price = $node->sell_price;

    return parent::render($values);
  }
};