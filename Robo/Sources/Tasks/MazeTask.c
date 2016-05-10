#include <Tasks/MazeTask.h>
#include "FreeRTOS.h"
#include "FRTOS1.h"

xQueueHandle scanlineQueue;

static void scanlineTaskRun(void* pvParameters) {
	for(;;) {
		vTaskDelay(1000/portTICK_PERIOD_MS);
	}
}

static void scanlineTaskInit()
{
	FRTOS1_vQueueAddToRegistry(scanlineQueue, "scanlineQueue");
}

static void scanlineTaskDeinit()
{
	FRTOS1_vQueueUnregisterQueue(scanlineQueue);
}

ScanlineTask_t scanlineTaskCreate()
{
	return (ScanlineTask_t) {
		{scanlineTaskInit,scanlineTaskRun,scanlineTaskDeinit},
		1
	};
}
