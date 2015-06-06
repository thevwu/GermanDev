<div id="page" class="clearfix">
  <div id="site-header" class="clearfix">
  <?php if ($site_id || $site_slogan): ?>
	  <div class="page-top">
	  <?php if ($page['test']): ?>
        <div id="page-top" class="clearfix">
          <?php print render($page['test']); ?>
        </div>
      <?php endif; ?>
	  </div>
    <div class="site-branding">
	<?php if ($page['banner']): ?>
        <div id="site-banner" class="clearfix">
          <?php print render($page['banner']); ?>
        </div>
    <?php endif; ?>
    <?php if ($site_id) : ?>
      <h2 class="site-id">
        <?php print $site_id ?>
        <?php if ($site_slogan) : ?><p class="site-slogan"><?php print $site_slogan ?></p><?php endif ?>
      </h2>
    <?php endif ?>
    <?php print render($page['header_top']) ?>
    </div>
  <?php endif ?>
  
  <?php if ($main_menu_links || $secondary_menu_links): ?>
    <div class="site-navigation">
      <?php print $main_menu_links ?>
      <?php print $secondary_menu_links ?>
    </div>
  <?php endif ?>

    <div class="header-wrapper"><?php print render($page['header']) ?></div>
  </div>

  <?php if ($messages || $page['highlighted']): ?>
    <div id="page-header" class="clearfix">
      <?php print $messages ?>
      <?php print render($page['highlighted']) ?>
    </div>
  <?php endif ?>

  <div id="page-main" class="clearfix">
    <div class="content-wrapper">

      <?php if ($page['featured']): ?>
        <div id="featured" class="clearfix">
          <?php print render($page['featured']); ?>
        </div>
      <?php endif; ?>

      <div class="region-content-wrapper">
        <?php if ($breadcrumb || $title_prefix || ($title && !$is_front) || $title_suffix || $page['help'] || ($tabs && user_is_logged_in() )) : ?>
          <div class="content-header">
            <?php print $breadcrumb ?>
            <?php print render($title_prefix) ?>
            <?php if ($title && !$is_front) : ?><h1 class="page-title title"><?php print $title ?></h1><?php endif ?>
            <?php print render($title_suffix) ?>
            <?php print render($tabs) ?>
            <?php print render($page['help']) ?>
            <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
          </div>
        <?php endif ?>

        <div id="main-content" class="clearfix">
          <?php print render($page['content']) ?>
          <?php print $feed_icons ?>
        </div>
      </div>
    </div>


    <?php print render($page['sidebar_first']) ?>
    <?php print render($page['sidebar_second']) ?>

    <?php if ($page['triptych_first'] || $page['triptych_middle'] || $page['triptych_last']): ?>
      <div class="triptych-wrapper clearfix">
        <?php print render($page['triptych_first']) ?>
        <?php print render($page['triptych_middle']) ?>
        <?php print render($page['triptych_last']) ?>
      </div>
    <?php endif ?>
  </div>

  <div id="site-footer">
    <?php print render($page['footer']) ?>
  </div>

</div>
