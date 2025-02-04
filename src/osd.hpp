#ifndef OSDPP_H
#define OSDPP_H

extern "C" {
#include "drm.h"
}
#include <nlohmann/json.hpp>

typedef struct {
	struct modeset_output *out;
	int fd;
	nlohmann::json config;
} osd_thread_params;

extern int osd_thread_signal;

void *__OSD_THREAD__(void *param);

#endif
