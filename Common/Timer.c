/**
 * \file
 * \brief Timer driver
 * \author Erich Styger, erich.styger@hslu.ch
 *
 * This module implements the driver for all our timers.
  */

#if PL_CONFIG_HAS_TIMER

#include "Timer.h"
#include "Events.h"
#include "EventHandler.h"

int ctr = 0;

void TMR_OnInterrupt(void) {
	if(TMR_TICK_MS * ++ctr >= 1000) {
		Events_fireEvent(TIMER1_OVERFLOW);
		ctr = 0;
	}
}

void TMR_Init(void) {
}

void TMR_Deinit(void) {
}

#endif /*PL_HAS_TIMER*/
