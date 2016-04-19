/*
 * Application.c
 *
 *  Created on: 28.02.2016
 *      Author: Erich Styger
 */
#include "Application.h"
#include "Platform.h"
#include "Tasks/LedTask.h"
#include "FreeRTOS.h"
#include "Buzzer.h"
#include "CLS1.h"

static void runTask(void* param)
{
	IntroTask_t* that = (IntroTask_t*) param;
	that->run(that);
	that->deinit(that);
}

void ApplicationInit(void) {
  PL_Init();
  static LedTask_t ledTask;
  ledTask = LedTaskCreate();



  //static ScanlineTask_t scanlineTask = ScanlineTaskCreate();

  IntroTask_t* task = &ledTask;
  BUZ_Tunes tune = BUZ_TUNE_WELCOME;
  BUZ_PlayTune(tune);
  xTaskCreate(runTask, "LedTask", configMINIMAL_STACK_SIZE, task, tskIDLE_PRIORITY, task->taskHandle);
}



