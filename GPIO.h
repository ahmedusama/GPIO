/*
 * GPIO.h
 *
 * Created: 5/23/2017 12:19:06 AM
 *  Author: Ahmed Usama Khalifa
 */ 

#include "types.h"

#ifndef GPIO_H_
#define GPIO_H_

#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0

uint8 init_pin(uint8 reg, uint8 pin, uint8 dir);
uint8 write_pin(uint8 reg, uint8 pin, uint8 val);


#endif /* GPIO_H_ */