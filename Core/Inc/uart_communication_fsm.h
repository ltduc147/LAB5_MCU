/*
 * uart_communiation_fsm.h
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */

#ifndef INC_UART_COMMUNICATION_FSM_H_
#define INC_UART_COMMUNICATION_FSM_H_

#include "global.h"
#include "command_parser_fsm.h"

void uart_communication_fsm();
int is_RST();
int is_OK();

#endif /* INC_UART_COMMUNICATION_FSM_H_ */
