<?php

/**
 * FB account connection removal form.
 */
function fb_post_remove_connection_form($form, &$form_state) {
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Disconnect'),
  );
  return $form;
}

/**
 * Submit handler for fb_post_remove_connection_form.
 */
function fb_post_remove_connection_form_submit($form, &$form_state) {
  global $user;
  fb_post_remove_connection($user);
}

/**
 * Gets the application access token which will be used for posting messages on the users behalf.
 *
 * @param $app_id
 * @param $app_secret
 */
function fb_post_get_app_access_token($app_id, $app_secret) {
  $path = 'https://graph.facebook.com/oauth/access_token?client_id=' . $app_id . '&client_secret=' . $app_secret
        . '&grant_type=client_credentials';
  $token_str = file_get_contents($path);
  if ($token_str) {
    parse_str($token_str);
    if (!empty($access_token)) {
      return $access_token;
    }
  }
}

/**
 * Callback function for 'user/%user/edit/fb-post' path.
 *
 * Displays either link for adding connection to FB account or button for removing it.
 *
 * @param $account
 *   Drupal user object.
 */
function fb_post_page($account) {
  global $user;
  $output = '';

  if ($user->uid == $account->uid) {
    if (fb_post_connected($account)) {
      $remove_connection_form = drupal_get_form('fb_post_remove_connection_form');
      $user_info = fb_post_load_saved_user_info($account);
      if ($user_info) {
        $vars = array(
          'user_info' => $user_info,
          'remove_connection_button' => drupal_render($remove_connection_form),
        );
        $output .= theme('fb_post_user_info', $vars);
      }
      else {
        $output .= drupal_render($remove_connection_form);
      }
    }
    else {
      $app_id = variable_get('fb_post_app_id', '');
      $redirect_uri = url('user/'. $account->uid . '/edit/fb-post/redirect-code', array('absolute' => TRUE));
      $path = 'https://www.facebook.com/dialog/oauth?client_id=' . $app_id . '&redirect_uri=' . $redirect_uri
            . '&response_type=code&scope=publish_stream';
      $output = theme('fb_post_connect', array('connection_path' => $path));
    }
  }

  return $output;
}

/**
 * Callback function for 'user/%user/edit/fb-post/redirect-code' path.
 *
 * Takes care of obtaining the user access token and saving it.
 *
 * @param $account
 *   Drupal user object.
 */
function fb_post_redirect_page($account) {
  $code = (isset($_GET['code'])) ? $_GET['code'] : '';

  if ($code) {
    $app_id = variable_get('fb_post_app_id', '');
    $app_secret = variable_get('fb_post_app_secret', '');
    $app_access_token = variable_get('fb_post_app_access_token', '');

    $redirect_uri = url('user/'. $account->uid . '/edit/fb-post/redirect-code', array('absolute' => TRUE));
    $path = 'https://graph.facebook.com/oauth/access_token?client_id=' . $app_id . '&redirect_uri=' . $redirect_uri
          . '&client_secret=' . $app_secret . '&code=' . $code;
    $token_str = file_get_contents($path);
    if ($token_str) {
      parse_str($token_str);
      if (!empty($access_token)) {
        $token_data = fb_post_inspect_user_access_token($access_token, $app_access_token);
        if ($token_data) {
          // Get user info from his FB account.
          $fb_user_info = fb_post_get_user_info($token_data->user_id);
          // Get FB user picture.
          $fb_picture = fb_post_get_user_info($token_data->user_id, 'picture');

          fb_post_save_user_info($account->uid, $fb_user_info, $fb_picture, $access_token, $token_data);
        }
      }
    }
    drupal_goto('user/'. $account->uid . '/edit/fb-post');
  }
  else {
    drupal_set_message(t('Could not obtain access code from Facebook. Please try again.'), 'error');
    return '';
  }
}

/**
 * Checks the received user access token to confirm that the token belongs to the person that our app is expecting it to
 * belong to, and that it was our app that generated the token.
 *
 * @param $user_access_token
 * @param $app_access_token
 */
function fb_post_inspect_user_access_token($user_access_token, $app_access_token) {
  $path = 'https://graph.facebook.com/debug_token?input_token=' . $user_access_token
        . '&access_token=' . $app_access_token;
  $token_str = file_get_contents($path);
  if ($token_str) {
    $output = preg_replace('/([^\\\])":([0-9]{10,})(,|})/', '$1":"$2"$3', $token_str);
    $data = json_decode($output);
    if (!empty($data->data)) {
      return $data->data;
    }
    return FALSE;
  }
  return FALSE;
}

/**
 * Gets info about the user from his/her Facebook account.
 *
 * @param $fb_uid
 *   Facebook user ID.
 * @param type $type
 *   Type of info to fetch. Can be either 'profile' or 'picture'.
 */
function fb_post_get_user_info($fb_uid, $type = 'profile') {
  if ($type == 'profile') {
    $path = 'https://graph.facebook.com/' . $fb_uid;
  }
  else if ($type == 'picture') {
    $path = 'http://graph.facebook.com/' . $fb_uid . '/picture?type=normal&redirect=false';
  }
  else {
    return FALSE;
  }

  $user_info = file_get_contents($path);
  if ($user_info) {
    return json_decode($user_info);
  }
  return FALSE;
}

/**
 * Saves user access token data into the DB for further using.
 *
 * @param $uid
 *   Drupal user ID.
 * @param $user_info
 *   User's Facebook profile info.
 * @param $picture
 *   User's Facebook profile picture info.
 * @param $user_access_token
 * @param $token_data
 *   Data received during user access token check.
 */
function fb_post_save_user_info($uid, $user_info, $picture, $user_access_token, $token_data) {
  $record = new stdClass();
  $record->uid = $uid;
  $record->fb_uid = $token_data->user_id;
  $record->access_token = $user_access_token;
  $record->access_token_expires = $token_data->expires_at;

  if ($user_info) {
    $record->name = $user_info->name;
    if (!empty($user_info->link)) {
      $record->link = $user_info->link;
    }
  }

  if ($picture) {
    $record->picture = $picture->data->url;
  }
  
  if (!drupal_write_record('fb_post', $record)) {
    drupal_write_record('fb_post', $record, array($uid, $token_data->user_id));
  }
}

/**
 * Fetches saved Facebook account info of given user.
 *
 * @param $user
 *   Drupal user object.
 */
function fb_post_load_saved_user_info($user) {
  $query = db_select('fb_post')
    ->fields('fb_post', array('fb_uid', 'name', 'link', 'picture', 'access_token_expires'))
    ->condition('uid', $user->uid)
    ->execute();
  return $query->fetchObject();
}

/**
 * Deletes the token from the DB.
 *
 * @param $user
 *   Drupal user object.
 */
function fb_post_remove_connection($user) {
  $query = db_delete('fb_post')
    ->condition('uid', $user->uid)
    ->execute();
}

/**
 * Checks if given user has FB account connected and if his token is valid if so.
 *
 * @param $user
 *   Drupal user object.
 */
function fb_post_connected($user) {
  $query = db_select('fb_post')
    ->fields('fb_post', array('fb_uid'))
    ->condition('uid', $user->uid)
    ->execute();
  $fb_uid = $query->fetchField();

  if ($fb_uid) {
    $token_valid = fb_post_user_access_token_valid($user);
    if ($token_valid) {
      return $fb_uid;
    }
    else {
      fb_post_remove_connection($user);
      return FALSE;
    }
  }
  return FALSE;
}

/**
 * Checks if user access token is valid.
 *
 * @param $user
 *   Drupal user object.
 */
function fb_post_user_access_token_valid($user) {
  $query = db_select('fb_post')
    ->fields('fb_post', array('access_token_expires'))
    ->condition('uid', $user->uid)
    ->execute();
  $token_expires = $query->fetchField();
  if ($token_expires && $token_expires > REQUEST_TIME) {
    return TRUE;
  }
  return FALSE;
}

/**
 * Creates a post in user's news feed on behalf his/her name.
 *
 * @param $fb_uid
 *   Facebook user's account ID.
 * @param $post
 *   Array of message data to send to FB.
 *   Something like
 *   array(
 *     'message' => 'text of the message',
 *     'description' => 'description of the message',
 *     'link' => 'http://example.com',
 *   );
 *   @see https://developers.facebook.com/docs/reference/api/post/ for more details.
 * @param $entity
 *  Enity object (node, comment).
 */
function fb_post_make_post($fb_uid, $post, $entity) {
  $user_access_token = fb_post_get_user_token_by_fbuid($fb_uid);
  $url = 'https://graph.facebook.com/' . $fb_uid . '/feed';
  if ($url) {
    $access_token = array(
      'access_token' => $user_access_token,
    );
    $post_fields = array_merge($access_token, $post);

    drupal_alter('fb_post', $post_fields, $url, $entity);

    $ch = curl_init($url);
    curl_setopt($ch, CURLOPT_SSL_VERIFYPEER, FALSE);
    curl_setopt($ch, CURLOPT_SSL_VERIFYHOST, 2);
    curl_setopt($ch, CURLOPT_POST, TRUE);
    curl_setopt($ch, CURLOPT_POSTFIELDS, $post_fields);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, TRUE);
    $result = curl_exec($ch);
    curl_close($ch);
    return $result;
  }
}

/**
 * Helper function. Gets user's token.
 *
 * @param $uid
 *   User ID.
 */
function fb_post_get_user_token($uid) {
  $query = db_select('fb_post')
    ->fields('fb_post', array('access_token'))
    ->condition('uid', $uid)
    ->execute();
  return $query->fetchField();
}

/**
 * Helper function. Gets user's token by his Facebook account ID.
 *
 * @param $fb_uid
 *   Facebook account ID.
 */
function fb_post_get_user_token_by_fbuid($fb_uid) {
  $query = db_select('fb_post')
    ->fields('fb_post', array('access_token'))
    ->condition('fb_uid', $fb_uid)
    ->execute();
  return $query->fetchField();
}
