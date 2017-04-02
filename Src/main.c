#include <uart1.h>
#include "main.h"
#include "stm32f1xx_hal.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#include "rtc.h"
#include "rcc.h"
#include "gpio.h"

#define main_TASK_PRIORITY				( tskIDLE_PRIORITY + 1 )
/* The number of nano seconds between each processor clock. */
#define mainNS_PER_CLOCK ( ( unsigned long ) ( ( 1.0 / ( double ) configCPU_CLOCK_HZ ) * 1000000000.0 ) )

void vTaskLed1(void *pvParameters);


int main(void)
{
  HAL_Init();
  SystemClock_Config();
  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_RTC_Init();
  MX_USART1_UART_Init();

  /* USER CODE BEGIN 2 */
  xTaskCreate( vTaskLed1, "LED1", configMINIMAL_STACK_SIZE, NULL, main_TASK_PRIORITY, ( TaskHandle_t * ) NULL );
  vTaskStartScheduler();
  /* USER CODE END 2 */


  while (1)
  {
  }
  return 0;
}

/* USER CODE BEGIN 4 */
void vTaskLed1(void *pvParameters)
{
	for(;;)
	{
	vTaskDelay(1000 / portTICK_PERIOD_MS);
	}
}
/* USER CODE END 4 */


void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler */
  /* User can add his own implementation to report the HAL error return state */
  while(1)
  {
  }
  /* USER CODE END Error_Handler */
}

#ifdef USE_FULL_ASSERT

/**
   * @brief Reports the name of the source file and the source line number
   * where the assert_param error has occurred.
   * @param file: pointer to the source file name
   * @param line: assert_param error line source number
   * @retval None
   */
void assert_failed(uint8_t* file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
    ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */

}

#endif
