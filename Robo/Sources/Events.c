/* ###################################################################
**     Filename    : Events.c
**     Project     : Robo
**     Processor   : MK22FX512VLQ12
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-02-28, 20:48, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"

#ifdef __cplusplus
extern "C" {
#endif


/* User includes (#include below this line is not maintained by Processor Expert) */


#define EVENTS_LENGTH \
	(EVENTS_NOF_TYPES / sizeof(int) + 1)

volatile int events[EVENTS_LENGTH];
volatile EventCallback eventCallbacks[EVENTS_NOF_TYPES];



/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MK22FN1M0LQ12]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void)
{
  /* Write your code here ... */
}


void Events_handle()
{
	for(int i = 0; i < EVENTS_LENGTH; i++) {
		int tmp = events[i];
		if(tmp) {
			int prioBinEvent = 0;
			for(;tmp; prioBinEvent++, tmp >>= 1);
			int prioEvent = 1<<(prioBinEvent - 1);

			CS1_CriticalVariable();
			CS1_EnterCritical();
			events[i] &= ~(prioEvent);
			CS1_ExitCritical();

			eventCallbacks[prioEvent - 1]();
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

/*
** ===================================================================
**     Event       :  TI1_OnInterrupt (module Events)
**
**     Component   :  TI1 [TimerInt]
**     Description :
**         When a timer interrupt occurs this event is called (only
**         when the component is enabled - <Enable> and the events are
**         enabled - <EnableEvent>). This event is enabled only if a
**         <interrupt service/event> is enabled.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void TI1_OnInterrupt(void)
{
	Events_fireEvent(TIMER1_OVERFLOW);
  /* Write your code here ... */
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
