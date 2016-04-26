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


void PL_local_init()
{
	REF_Init();
	MOT_Init();
	TACHO_Init();
}
