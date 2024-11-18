/*
 * ports.c
 *
 * Created: 10/30/2024 5:07:44 PM
 *  Author: josel
 */ 
#include <avr/io.h>

void init_ports(void)
{
	DDRB |= 1 << PINB5; //Led conectado a PB5
}