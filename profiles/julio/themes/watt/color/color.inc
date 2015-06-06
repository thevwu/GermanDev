<?php

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'base' => t('Base'),
    'top' => t('Top Navigation'),
    'bottom' => t('Bottom Navigation'),
    'bg' => t('Main background'),
    'page' => t('Content background'),
    'sidebar' => t('Sidebar background'),
    'footer' => t('Footer background'),
    'text' => t('Text color'),
    'link' => t('Link color'),
    'slide' => t('Slideshow header'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Julio (default)'),
      'colors' => array(
        'base' => '#f5f5f5',
        'top' => '#be4f4f',
        'bottom' => '#ecb43f',
        'bg' => '#c6dcdc',
        'page' => '#ffffff',
        'sidebar' => '#fffeff',
        'footer' => '#777777',
        'text' => '#555555',
        'link' => '#be4f4f',
        'slide' => '#f4f5f5',
      ),
    ),
    'earthyred' => array(
      'title' => t('Earthy Red'),
      'colors' => array(
        'base' => '#f5f5f5',
        'top' => '#7E1C13',
        'bottom' => '#6D9788',
        'bg' => '#E6E1C2',
        'page' => '#ffffff',
        'sidebar' => '#fffeff',
        'footer' => '#6D9788',
        'text' => '#333333',
        'link' => '#7E1C13',
        'slide' => '#f4f5f5',
      ),
    ),
    'bluegray' => array(
      'title' => t('Blue Gray'),
      'colors' => array(
        'base' => '#f5f5f5',
        'top' => '#44749D',
        'bottom' => '#a9a498',
        'bg' => '#dee6ed',
        'page' => '#ffffff',
        'sidebar' => '#FCF0AD',
        'footer' => '#a9a498',
        'text' => '#333333',
        'link' => '#44749D',
        'slide' => '#f4f5f5',
      ),
    ),
    'coolorange' => array(
      'title' => t('Cool Orange'),
      'colors' => array(
        'base' => '#f5f5f5',
        'top' => '#e87322',
        'bottom' => '#006d9c',
        'bg' => '#f4f8f9',
        'page' => '#ffffff',
        'sidebar' => '#f4f8f9',
        'footer' => '#006d9c',
        'text' => '#333333',
        'link' => '#e87322',
        'slide' => '#f4f5f5',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'copy' => array(
    //'styles/colors.css',
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'styles/colors.css',
  ),

  // Gradient definitions.
  'gradients' => array(
    array(
      // (x, y, width, height).
      'dimension' => array(0, 0, 0, 0),
      // Direction of gradient ('vertical' or 'horizontal').
      'direction' => 'vertical',
      // Keys of colors to use for the gradient.
      'colors' => array('top', 'bottom'),
    ),
  ),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#000',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
