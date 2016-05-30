/*
 * Application.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */
#include "Application.h"
#include "Platform.h"
#include "Tasks/LedTask.h"
#include "Tasks/MazeTask.h"
#include "FreeRTOS.h"
#include "Buzzer.h"
#include "CLS1.h"

void ApplicationRunTaskFn(void* param)
{
	IntroTask_t* that = (IntroTask_t*) param;
	//that->init(that);
	that->run(that);
	that->deinit(that);
}

void ApplicationInit(void) {
  PL_Init();
  static LedTask_t ledTask;
  ledTask = LedTaskCreate();

  IntroTask_t* ledRawtask = &ledTask;
  BUZ_Tunes tune = BUZ_TUNE_WELCOME;
  BUZ_PlayTune(tune);
  xTaskCreate(ApplicationRunTaskFn, "LedTask", configMINIMAL_STACK_SIZE, ledRawtask, tskIDLE_PRIORITY, ledRawtask->taskHandle);
}



