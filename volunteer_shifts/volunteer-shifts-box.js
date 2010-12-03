// $Id$
Drupal.behaviors.volunteerRallyBox = function (context) {
  $('input.volunteer-shifts-box').bind('click', function () {
    this.focus();
    this.select();
  });
}