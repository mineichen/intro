/*
 * Platform.c
 *
 *  Created on: 05.04.2016
 *      Author: mineichen
 */
#include "PlatformLocal.h"
#include "Reflectance.h"
#include "Motor.h"
#include "Tacho.h"
#include "Pid.h"
#include "Drive.h"
#include "LineFollow.h"
#include "Turn.h"


void PL_local_init()
{
	REF_Init();
	MOT_Init();
	TACHO_Init();
	PID_Init();
	DRV_Init();
	LF_Init();
	TURN_Init();
}
