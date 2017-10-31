#include "tgl/tgl.h"

struct tgl_update_callback upd_cb = {
  .new_msg = 0,
  .marked_read = 0,
  .logprintf = 0,
  .get_values = 0,
  .logged_in = 0,
  .started = 0,
  .type_notification = 0,
  .type_in_chat_notification = 0,
  .type_in_secret_chat_notification = 0, 
  .status_notification = 0, 
  .user_registered = 0, 
  .user_activated = 0, 
  .new_authorization = 0, 
  .user_update = 0,
  .chat_update = 0,
  .secret_chat_update = 0,
  .channel_update = 0,
  .msg_receive = 0,
  .our_id = 0,
  .user_status_update = 0,
  .on_failed_login = 0
};
