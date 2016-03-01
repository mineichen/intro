/*
 * Platform.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */


#include "Platform.h"
#include "LED1.h"

void PL_Deinit(void) {

}


void PL_Init(void) {
	LED1_Init();
}

