#ifndef MAZE_TASK_H_
#define MAZE_TASK_H_

#include "Tasks/Task.h"
#include "FRTOS1.h"
#include "CLS1.h"
#include "Application.h"
#include "LineFollow.h"
#include "Reflectance.h"
#include "Turn.h"


typedef struct {
	IntroTask_t type;
	QueueHandle_t lineKindChange;
} MazeTask_t;

MazeTask_t MazeTaskCreate();
uint8_t MAZE_ParseCommand(const unsigned char *cmd, bool *handled, const CLS1_StdIOType *io);

#endif
