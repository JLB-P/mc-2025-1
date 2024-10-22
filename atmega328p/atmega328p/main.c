/*
 * atmega328p.c
 *
 * Created: 10/7/2024 3:49:43 PM
 * Author : josel
 */ 

#include "usart.h"
#include "lcd_i2c.h"

int main(void)
{
    init_usart(16);
	lcd_i2c_init();
	lcd_i2c_write_string("Todos reprobados");
	
    while (1) 
    {
		    }
}

