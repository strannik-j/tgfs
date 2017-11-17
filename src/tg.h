#ifndef _TG_H_
#define _TG_H_

#include <fuse.h>
#include <tgl/tgl.h>
#include <tgl/mtproto-key.h>
#include <tgl/tgl-binlog.h>
#include <tgl/tgl-net.h>
#include <tgl/tgl-timers.h>
#include <tgl/tgl-queries.h>

#define TGFS_APP_HASH "36722c72256a24c1225de00eb6a1ca74"
#define TGFS_APP_ID 2899
#define PACKAGE_VERSION "0.2"

extern struct tgl_state *TLS;

void tg_tgl_init();
void tg_tgl_destruct();

void tg_storage_peer_add(tgl_peer_id_t peer);
void tg_storage_peer_enumerate(void *buf, fuse_fill_dir_t filler);


#endif
