#include "Tasks/MotorTask.h"
#include "FreeRTOS.h"

void MotorTask(void* pvParameters) {
	for(;;) {
		vTaskDelay(1000/portTICK_PERIOD_MS);
	}
}
