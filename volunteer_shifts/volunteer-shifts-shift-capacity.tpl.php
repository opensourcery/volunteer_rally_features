<?php
// $Id$
/**
 * @file
 * Template file for shift capacity.
 *
 * Variables:
 *   $total: Total shift capacity
 *   $remaining: Remaining shift capacity
 */
?>
<span class="volunteer-shifts-shift-capacity">
  <span class="capacity-number remaining-capacity<?php print empty($remaining) ? ' remaining-capacity-0' : ''; ?>"><?php print $remaining; ?></span>/<span class="capacity-number total-capacity"><?php print $total; ?></span>
</span>
