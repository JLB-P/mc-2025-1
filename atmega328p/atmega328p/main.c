/*
 * atmega328p.c
 *
 * Created: 10/7/2024 3:49:43 PM
 * Author : josel
 */ 
#include <avr/interrupt.h>
#include "usart.h"
#include "lcd_i2c.h"
#include "adc.h"

int main(void)
{
//    init_usart(16);
	ADC_WithInterrupt();
	lcd_i2c_init();
	lcd_i2c_col_row(4,1);
	lcd_i2c_write_string("TEMP:");
	sei(); //Interrupciones generales
    while (1) 
    {
		    }
}

