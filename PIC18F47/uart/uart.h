/* 
 * File:   uart.h
 * Author: guasonito
 *
 * Created on 15 de marzo de 2021, 02:37 PM
 */

#ifndef UART_H
#define	UART_H

#define TX_EMPTY_FLAG U1ERRIRbits.U1TXMTIF //'1' shift register is empty
#define TO_TRANSMIT U1TXB

void config_UART();
int transmit_UART(int value);
int receive_UART();

#endif	/* UART_H */

