/*
 * usart.h
 *
 * Created: 3/22/2022 6:50:10 PM
 *  Author: josel
 */ 


#ifndef USART_H_
#define USART_H_
//Global variables
volatile char usart_received_char;

void init_usart(unsigned int baudrate);
unsigned char usart_receive( void );
void usart_transmit( unsigned int data );
void usart_transmit_string( char s[] );
#endif /* USART_H_ */