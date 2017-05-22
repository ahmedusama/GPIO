/*
 * GIPO.c
 *
 * Created: 5/23/2017 12:17:51 AM
 *  Author: Ahmed Usama Khalifa
 */ 

#include "types.h"
#include "GPIO.h"
#include "Config.h"
//BASE_A,5, OUTPUT
uint8 init_pin(uint8 reg, uint8 pin, uint8 dir) {

	if (OUTPUT == dir) {
		*(volatile uint8 *) (reg + DIR_OFFSET) |= 1 << pin;
		} else if (INPUT == dir) {
		*(volatile uint8 *) (reg + DIR_OFFSET) &= ~(1 << pin);
		} else {}
	}

	//BASE_A,5,HIGH
	uint8 write_pin(uint8 reg, uint8 pin, uint8 val) {

		if (HIGH == val) {
			*(volatile uint8 *) (reg + DATA_OFFSET) |= 1 << pin;
			} else if (LOW == val) {
			*(volatile uint8 *) (reg + DATA_OFFSET) &= ~(1 << pin);
			} else {}
		}