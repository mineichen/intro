#include "Tasks/LedTask.h"
#include "LED1.h"
#include "FreeRTOS.h"
#include "CLS1.h"

static void LedTaskRun()
{
	for(;;) {
		LED1_Neg();
		vTaskDelay(1000/portTICK_PERIOD_MS);

		//CLS1_SendStr(".", CLS1_GetStdio()->stdOut);
	}
}

LedTask_t LedTaskCreate() {
	return (LedTask_t) {
		0,
		LedTaskRun,
		0
	};
}
