/*
 * EventHandler.h
 *
 *  Created on: 17.03.2016
 *      Author: mineichen
 */

#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_

typedef enum {
	PUSH_BUTTON_1_PRESSED,
	PUSH_BUTTON_2_PRESSED,
	TIMER1_OVERFLOW,
	LED_HEARTBEET,
	EVENTS_NOF_TYPES
} EventType;

#include "SharedEventHandler.h"

#endif /* SOURCES_COMMON_EVENTHANDLER_H_ */
