/*
 * EventHandler.c
 *
 *  Created on: 17.03.2016
 *      Author: mineichen
 */
#include "SharedEventHandler.h"
#include "CS1.h"

volatile int events[EVENTS_LENGTH];
volatile EventCallback eventCallbacks[EVENTS_NOF_TYPES];

void Events_handle()
{
	for(int i = 0; i < EVENTS_LENGTH; i++) {
		int tmp = events[i];
		if(tmp) {
			int prioBinEvent = -1;
			for(;tmp; prioBinEvent++, tmp >>= 1);
			int prioEvent = 1<<(prioBinEvent);

			CS1_CriticalVariable();
			CS1_EnterCritical();
			events[i] &= ~(prioEvent);
			CS1_ExitCritical();

			eventCallbacks[prioBinEvent]();
			break;
		}
	}
}

void Events_setHandler(EventType type, EventCallback callback)
{
    eventCallbacks[type] = callback;
}

void Events_fireEvent(EventType type)
{
	CS1_CriticalVariable();
	CS1_EnterCritical();
	events[type / sizeof(int)] |= 1<<(type % sizeof(int));
	CS1_ExitCritical();
}
