/*
 * EmbeddedProject_LED.c
 *
 * Created: 5/23/2017 12:16:59 AM
 * Author : Ahmed Usama Khalifa
 */ 

#include<util\delay.h>
#include "types.h"
#include "Config.h"
#include "GPIO.h"

int main(void)
{
	init_pin (BASE_A,5,OUTPUT);
	init_pin  (BASE_B,1,INPUT);
	
	while (1)
	{
		write_pin(BASE_A,5,HIGH);
		_delay_ms(100);
		write_pin(BASE_A,5,LOW);
		_delay_ms(100);
	}
	
	
	
}

