<?php
// $Id$
/**
 * @file
 * Template for displaying event details on a shift sign-up.
 *
 * Variables:
 *   $date - event date
 *   $start_time - event start time
 *   $end_time - event end time
 *   $capacity - shift capacity
 */
?>
<div class="volunteer-shifts-event-details">
  <div>
    <label><?php print t('Date'); ?>:</label>
    <span class="volunteer-shifts-event-date"><?php print $date; ?></span>
  </div>
  <div>
    <label><?php print t('Start time'); ?>:</label>
    <span class="volunteer-shifts-event-start"><?php print $start_time; ?></span>
  </div>
  <div>
    <label><?php print t('End time'); ?>:</label>
    <span class="volunteer-shifts-event-end"><?php print $end_time; ?></span>
  </div>
    <label><?php print t('Capacity'); ?>:</label>
    <?php print $capacity; ?>
</div>
