(function ($) {

Drupal.juliotoolbar = Drupal.juliotoolbar || {};

/**
 * Attach toggling behavior and notify the overlay of the toolbar.
 */
Drupal.behaviors.julio_toolbar = {
  attach: function(context) {

    // Set the initial state of the juliotoolbar.
    $('#juliotoolbar', context).once('juliotoolbar', Drupal.juliotoolbar.init);

    // Toggling juliotoolbar drawer.
    $('#juliotoolbar a.toggle', context).once('juliotoolbar-toggle').click(function(e) {
      Drupal.juliotoolbar.toggle();
      // Allow resize event handlers to recalculate sizes/positions.
      $(window).triggerHandler('resize');
      return false;
    });
  }
};

/**
 * Retrieve last saved cookie settings and set up the initial toolbar state.
 */
Drupal.juliotoolbar.init = function() {
  // Retrieve the collapsed status from a stored cookie.
  var collapsed = $.cookie('Drupal.juliotoolbar.collapsed');

  // Expand or collapse the juliotoolbar based on the cookie value.
  if (collapsed == 1) {
    Drupal.juliotoolbar.collapse();
  }
  else {
    Drupal.juliotoolbar.expand();
  }
};

/**
 * Collapse the toolbar.
 */
Drupal.juliotoolbar.collapse = function() {
  var toggle_text = Drupal.t('Show shortcuts');
  $('#juliotoolbar div.juliotoolbar-drawer').addClass('collapsed');
  $('#juliotoolbar a.toggle')
    .removeClass('toggle-active')
    .attr('title',  toggle_text)
    .html(toggle_text);
  $('body').removeClass('juliotoolbar-drawer').css('paddingTop', Drupal.juliotoolbar.height());
  $.cookie(
    'Drupal.juliotoolbar.collapsed',
    1,
    {
      path: Drupal.settings.basePath,
      // The cookie should "never" expire.
      expires: 36500
    }
  );
};

/**
 * Expand the toolbar.
 */
Drupal.juliotoolbar.expand = function() {
  var toggle_text = Drupal.t('Hide shortcuts');
  $('#juliotoolbar div.juliotoolbar-drawer').removeClass('collapsed');
  $('#juliotoolbar a.toggle')
    .addClass('toggle-active')
    .attr('title',  toggle_text)
    .html(toggle_text);
  $('body').addClass('juliotoolbar-drawer').css('paddingTop', Drupal.juliotoolbar.height());
  $.cookie(
    'Drupal.juliotoolbar.collapsed',
    0,
    {
      path: Drupal.settings.basePath,
      // The cookie should "never" expire.
      expires: 36500
    }
  );
};

/**
 * Toggle the toolbar.
 */
Drupal.juliotoolbar.toggle = function() {
  if ($('#juliotoolbar div.juliotoolbar-drawer').hasClass('collapsed')) {
    Drupal.juliotoolbar.expand();
  }
  else {
    Drupal.juliotoolbar.collapse();
  }
};

Drupal.juliotoolbar.height = function() {
  var height = $('#juliotoolbar').outerHeight();
  // In IE, Shadow filter adds some extra height, so we need to remove it from
  // the returned height.
  if ($('#juliotoolbar').css('filter').match(/DXImageTransform\.Microsoft\.Shadow/)) {
    height -= $('#juliotoolbar').get(0).filters.item("DXImageTransform.Microsoft.Shadow").strength;
  }
  return height;
};

})(jQuery);
