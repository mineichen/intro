/*
 * Platform.h
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */

#ifndef SOURCES_FS2016_COMMON_PLATFORM_H_
#define SOURCES_FS2016_COMMON_PLATFORM_H_

#define PL_CONFIG_HAS_TRIGGER 1
#define PL_CONFIG_HAS_TIMER 1
#define PL_CONFIG_HAS_SHELL 1
#define PL_CONFIG_HAS_RTOS 1
#define PL_CONFIG_HAS_RADIO 1

#include <stdint.h> /* types as uint8_t used in project */
#include <stdbool.h>
#include "PlatformLocal.h"

void PL_Init(void);
void PL_Deinit(void);

#endif /* SOURCES_FS2016_COMMON_PLATFORM_H_ */
