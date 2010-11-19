// $Id$
Drupal.behaviors.volunteerRallyBox = function (context) {
  $('input.volunteer-rally-box').bind('click', function () {
    this.focus();
    this.select();
  });
}