/*
 * Platform.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */
#include "Platform.h"
#include "Shell.h"
#include "RNet_App.h"
#include "Radio.h"
#include "AS1.h"
#include "Remote.h"

void PL_Deinit(void){}


void PL_Init(void) {
	SHELL_Init();
	PL_local_init();
	RNETA_Init();
	REMOTE_Init();
}

