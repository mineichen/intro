/*
 * Application.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */

#include "Platform.h"
#include "LedApp.h"
#include "EventHandler.h"
#include "LED_RED.h"
#include "CLS1.h"

void onButtonRed() {
	CLS1_SendStr(".", CLS1_GetStdio()->stdOut);
	LED_RED_SetRatio16(65000);
}

void onButtonYellow() {
	LED_RED_SetRatio16(0);
}

void onButtonBlue() {
	LED_RED_SetRatio16(33000);
}

void toggleLedRed() {
	LED_RED_On();
	//WAIT1_Waitms(10);
	LED_RED_Off();
}

void LedApp_Start(void) {
  PL_Init();

  CLS1_SendStr("First Message", CLS1_GetStdio()->stdOut);
  Events_setHandler(BUTTON_RED_PRESSED, onButtonRed);
  Events_setHandler(BUTTON_YELLOW_PRESSED, onButtonYellow);
  Events_setHandler(BUTTON_BLUE_PRESSED, onButtonBlue);
  Events_setHandler(TIMER1_OVERFLOW, toggleLedRed);

  for(;;) {
	  Events_handle();
    /* wait */
  }
}


