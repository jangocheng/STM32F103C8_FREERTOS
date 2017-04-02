/*
 * usart1.h
 *
 *  Created on: 2 апр. 2017 г.
 *      Author: admin
 */

#ifndef UART1_H_
#define UART1_H_

void MX_USART1_UART_Init(void);
void vTaskUart1(void *pvParameters);


/* Size of Trasmission buffer */
#define TXBUFFERSIZE                      (COUNTOF(aTxBuffer) - 1)
/* Size of Reception buffer */
#define RXBUFFERSIZE                      TXBUFFERSIZE

/* Exported macro ------------------------------------------------------------*/
#define COUNTOF(__BUFFER__)   (sizeof(__BUFFER__) / sizeof(*(__BUFFER__)))
/* Exported functions ------------------------------------------------------- */

#endif /* UART1_H_ */
