<?php

/**
 * @file
 * Default template for Julio admin toolbar.
 *
 * Available variables:
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - julio_toolbar: The current template type, i.e., "theming hook".
 * - $julio_toolbar['julio_toolbar_user']: User account / logout links.
 * - $julio_toolbar['julio_toolbar_menu']: Top level management menu links.
 * - $julio_toolbar['julio_toolbar_drawer']: A place for extended julio_toolbar content.
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_julio_toolbar()
 */
?>
<div id="juliotoolbar" class="<?php print $classes; ?> clearfix">
  <div class="juliotoolbar-menu clearfix">
    <?php print render($julio_toolbar['julio_toolbar_home']); ?>
    <?php print render($julio_toolbar['julio_toolbar_menu']); ?>
    <?php print render($julio_toolbar['julio_og_content_links']); ?>
    <?php print render($julio_toolbar['julio_toolbar_user']); ?>

    <?php if ($julio_toolbar['julio_toolbar_drawer']):?>
      <?php print render($julio_toolbar['julio_toolbar_toggle']); ?>
    <?php endif; ?>
  </div>

  <div class="<?php echo $julio_toolbar['julio_toolbar_drawer_classes']; ?>">
    <?php print render($julio_toolbar['julio_toolbar_drawer']); ?>
  </div>
</div>
