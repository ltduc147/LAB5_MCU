/*
 * global.h
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "stdint.h"
#include "timer.h"
#include "stdio.h"

#define WAIT_HEADER 			0
#define IN_RECEIVE_CMD			1

#define WAIT_CMD_RST			10
#define SEND_ADC				11

extern int status_cmd;
extern int status_communicate;
extern uint8_t temp;

#endif /* INC_GLOBAL_H_ */
