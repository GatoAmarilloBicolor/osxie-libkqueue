#ifndef _OSXIE_LISTENREGISTRY_H
#define _OSXIE_LISTENREGISTRY_H

#include "../common/private.h"

bool VISIBLE __osxie_kqueue_get_listen_status(int fd);
void VISIBLE __osxie_kqueue_register_listen(int fd);
void VISIBLE __osxie_kqueue_unregister_listen(int fd);

#endif
