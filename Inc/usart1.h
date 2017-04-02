/*
 * usart1.h
 *
 *  Created on: 2 апр. 2017 г.
 *      Author: admin
 */

#ifndef USART1_H_
#define USART1_H_

void MX_USART1_UART_Init(void);

/* Size of Trasmission buffer */
#define TXBUFFERSIZE                      (COUNTOF(aTxBuffer) - 1)
/* Size of Reception buffer */
#define RXBUFFERSIZE                      TXBUFFERSIZE

/* Exported macro ------------------------------------------------------------*/
#define COUNTOF(__BUFFER__)   (sizeof(__BUFFER__) / sizeof(*(__BUFFER__)))
/* Exported functions ------------------------------------------------------- */

#endif /* USART1_H_ */
