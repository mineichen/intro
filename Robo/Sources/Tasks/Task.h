#ifndef TASKS_TASK_H_
#define TASKS_TASK_H_

#include "FreeRTOS.h"

typedef struct {
	void (*init)(void*);
	void (*run)(void*);
	void (*deinit)(void*);
	xTaskHandle taskHandle;
} IntroTask_t;

#endif
