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
#include "ext_int.h"
#include "ports.h"

int main(void)
{
	//ADC_WithInterrupt();
	//lcd_i2c_init();
	//lcd_i2c_col_row(4,1);
	//lcd_i2c_write_string("TEMP:");
	init_usart(207);
	init_ports();
	init_ext_int();
	sei(); //Interrupciones generales
    while (1) 
    {

    }
}

