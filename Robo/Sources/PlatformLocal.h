/*
 * Platform.h
 *
 *  Created on: 05.04.2016
 *      Author: mineichen
 */

#ifndef PLATFORM_LOCAL_H_
#define PLATFORM_LOCAL_H_

#define PL_CONFIG_HAS_BUZZER 1
#define PL_CONFIG_HAS_REFLECTANCE 1
#define PL_CONFIG_HAS_MOTOR 1
#define PL_CONFIG_HAS_QUADRATURE 1
#define PL_CONFIG_HAS_MOTOR_TACHO 1
#define PL_CONFIG_HAS_PID 1
#define PL_CONFIG_HAS_TURN 1
#define PL_CONFIG_HAS_DRIVE 1
#define PL_CONFIG_HAS_LINE_FOLLOW (PL_CONFIG_HAS_REFLECTANCE && 1)

void PL_local_init();



#endif /* PLATFORM_LOCAL_H_ */
