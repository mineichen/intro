/* ###################################################################
**     Filename    : Events.h
**     Project     : FRDM
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-02-23, 11:20, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "Timer.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "TimerIntLdd1.h"
#include "TU1.h"
#include "CS1.h"
#include "BUTTON_RED.h"
#include "ExtIntLdd1.h"
#include "BUTTON_BLUE.h"
#include "ExtIntLdd2.h"
#include "BUTTON_YELLOW.h"
#include "ExtIntLdd3.h"
#include "BUTTON_GREEN.h"
#include "ExtIntLdd4.h"
#include "SW5.h"
#include "BitIoLdd5.h"
#include "SW6.h"
#include "BitIoLdd6.h"
#include "SW7.h"
#include "ExtIntLdd5.h"
#include "AD1.h"
#include "AdcLdd1.h"
#include "LEDPin2.h"
#include "BitIoLdd9.h"
#include "LEDPin3.h"
#include "BitIoLdd10.h"
#include "WAIT1.h"
#include "HF1.h"
#include "LED_RED.h"
#include "LEDpin4.h"
#include "BitIoLdd11.h"
#include "CLS1.h"
#include "UTIL1.h"
#include "KSDK1.h"
#include "AS1.h"
#include "ASerialLdd1.h"


#ifdef __cplusplus
extern "C" {
#endif 

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MKL25Z128LK4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void);

void SW7_OnInterrupt(void);
/*
** ===================================================================
**     Event       :  SW7_OnInterrupt (module Events)
**
**     Component   :  SW7 [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void BUTTON_GREEN_OnInterrupt(void);
/*
** ===================================================================
**     Event       :  BUTTON_GREEN_OnInterrupt (module Events)
**
**     Component   :  BUTTON_GREEN [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void BUTTON_YELLOW_OnInterrupt(void);
/*
** ===================================================================
**     Event       :  BUTTON_YELLOW_OnInterrupt (module Events)
**
**     Component   :  BUTTON_YELLOW [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void BUTTON_BLUE_OnInterrupt(void);
/*
** ===================================================================
**     Event       :  BUTTON_BLUE_OnInterrupt (module Events)
**
**     Component   :  BUTTON_BLUE [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void BUTTON_RED_OnInterrupt(void);
/*
** ===================================================================
**     Event       :  BUTTON_RED_OnInterrupt (module Events)
**
**     Component   :  BUTTON_RED [ExtInt]
**     Description :
**         This event is called when an active signal edge/level has
**         occurred.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
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
