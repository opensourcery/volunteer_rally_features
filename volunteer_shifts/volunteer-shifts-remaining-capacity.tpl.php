<?php
// $Id$
/**
 * @file
 * Template file for remaining shift capacity.
 *
 * Variables:
 *   $remaining: Remaining shift capacity
 */
?>
<div class="volunteer-shifts-remaining-capacity field">
  <div class="field-label-inline-first"><?php print t('Available slots'); ?>:</div>
  <span class="capacity-number remaining-capacity<?php print empty($remaining) ? ' remaining-capacity-0' : ''; ?>"><?php print $remaining; ?></span>
</div>
