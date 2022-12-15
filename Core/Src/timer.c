/*
 * timer.c
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */


#include "timer.h"

#define CYCLE 10

int timer1_flag = 0;
int timer1_counter = 0;

void setTimer1(int duration){
	timer1_flag = 0;
	timer1_counter = duration / CYCLE;
}

void timer_run(){
	if (timer1_counter > 0){
		timer1_counter--;
		if (timer1_counter == 0){
			timer1_flag = 1;
		}
	}
}
