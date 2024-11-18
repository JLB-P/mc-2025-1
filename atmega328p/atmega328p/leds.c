/*
 * leds.c
 *
 * Created: 10/30/2024 5:02:13 PM
 *  Author: josel
 */ 
#include <avr/io.h>
#include <util/delay.h>

void led_on(void)
{	
	PORTB |= 1 << PINB5;
	_delay_ms(1000);
	PORTB &= 0 << PINB5;
}

void led_on_off(void)
{
	for(int i=0;i<=4; i++)
	{
	PORTB ^= 1 << PINB5;
	_delay_ms(500);	
	}
}
