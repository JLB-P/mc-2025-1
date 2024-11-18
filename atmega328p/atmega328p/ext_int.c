/*
 * ext_int.c
 *
 * Created: 10/30/2024 4:36:38 PM
 *  Author: josel
 */ 
#include <avr/io.h>
#include <avr/interrupt.h>
#include "leds.h"

ISR(INT0_vect) 
{
	led_on_off();
}

void init_ext_int(void)
{
	EICRA |= 1 << ISC01 | 1 << ISC00;	//activa en flanco de subida
	EICRA |= 1 << ISC11;				//activa en flanco de bajada
	EIMSK |= 1 << INT0 | 1 << INT1;		//Activa interrupción 0 y 1
}