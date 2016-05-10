#ifndef SCANLINE_TASK_H_
#define SCANLINE_TASK_H_

#include "Tasks/Task.h"

typedef struct {
	IntroTask_t type;
	int myValue;
} ScanlineTask_t;

ScanlineTask_t ScanlineTaskCreate();


#endif
