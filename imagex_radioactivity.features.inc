<?php
/**
 * @file
 * imagex_radioactivity.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function imagex_radioactivity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "radioactivity" && $api == "radioactivity_decay_profile") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
