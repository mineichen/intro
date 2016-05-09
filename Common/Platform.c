/*
 * Platform.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */
#include "Platform.h"
#include "Shell.h"
#include "RNet_App.h"

void PL_Deinit(void)
{

}


void PL_Init(void) {
	//FRTOS1_Init();
	SHELL_Init();
	PL_local_init();
	RNET1_Init();
	RADIO_Init();
}

