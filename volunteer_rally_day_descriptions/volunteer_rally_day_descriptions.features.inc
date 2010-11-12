<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function volunteer_rally_day_descriptions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
}
