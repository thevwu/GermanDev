
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {

      // Top navigation
      $('#site-header-preview ul.main-menu li a', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());
      $('#preview ul.main-menu li a.active', form).css('backgroundColor', $('#palette input[name="palette[top]"]', form).val());

      // Bottom navigation
      $('#preview .header-wrapper, #preview .region-header .block ul.menu', form).css('backgroundColor', $('#palette input[name="palette[bottom]"]', form).val());
      $('#preview .event-day', form).css('color', $('#palette input[name="palette[bottom]"]', form).val());

      // Main background
      $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());

      // Content background
      $('#page-main-preview, #preview tr.odd', form).css('backgroundColor', $('#palette input[name="palette[page]"]', form).val());

      // Sidebar background
      $('#preview .region-sidebar-first .block, #preview .region-sidebar-second .block', form).css('backgroundColor', $('#palette input[name="palette[sidebar]"]', form).val());

      // Footer background
      $('#site-footer-preview', form).css('backgroundColor', $('#palette input[name="palette[footer]"]', form).val());

      // Text color
      $('#preview, #preview .site-navigation a, #preview .site-navigation a:link, #preview .site-navigation a:hover, #preview .site-navigation a:active, #preview .site-navigation a:visited', form).css('color', $('#palette input[name="palette[text]"]', form).val());

      // Link color
      $('#site-header-preview .site-branding a, #page-main-preview a, #page-main-preview a:link, #page-main-preview a:hover, #page-main-preview a:active, #page-main-preview a:visited', form).css('color', $('#palette input[name="palette[link]"]', form).val());
      $('#page-main-preview .region-sidebar-first .block .view .item-list ul li a.active, #page-main-preview .region-sidebar-first .block .view .item-list ul li a:hover', form).css('backgroundColor', $('#palette input[name="palette[link]"]', form).val());

      // Base
      $('#site-header-preview div.site-navigation ul.main-menu li a.active, #preview .region-header .block ul.menu li a, #site-footer-preview, #page-main-preview .region-sidebar-first .block .view .item-list ul li a.active', form).css('color', $('#palette input[name="palette[base]"]', form).val());

      // Giving the footer links and its bottom border the base color
      $('#site-footer-preview a', form).css('color', $('#palette input[name="palette[base]"]', form).val());
      $('#site-footer-preview a', form).css('border-bottom-color', $('#palette input[name="palette[base]"]', form).val());


      // Hover states //

      // Top navigation - inactive menu items
      $("#site-header-preview ul.main-menu li a").hover(function() {
        $(this).css('backgroundColor', $('#palette input[name="palette[top]"]', form).val());
        $(this).css('color', $('#palette input[name="palette[base]"]', form).val());
          }, function() {
        $(this).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());
        $(this).css('color', $('#palette input[name="palette[text]"]', form).val());
      });
      // Resetting the active menu item
      $("#site-header-preview ul.main-menu li a.active").hover(function() {
        $(this).css('backgroundColor', $('#palette input[name="palette[top]"]', form).val());
        $(this).css('color', $('#palette input[name="palette[base]"]', form).val());
          }, function() {
        $(this).css('backgroundColor', $('#palette input[name="palette[top]"]', form).val());
        $(this).css('color', $('#palette input[name="palette[base]"]', form).val());
      });

    }
  };
})(jQuery);
