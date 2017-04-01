/* RTC init function */
#include "stm32f1xx_hal.h"
#include "rtc.h"
#include "main.h"

RTC_HandleTypeDef hrtc;

void MX_RTC_Init(void)
{

    /**Initialize RTC Only
    */
  hrtc.Instance = RTC;
  hrtc.Init.AsynchPrediv = RTC_AUTO_1_SECOND;
  hrtc.Init.OutPut = RTC_OUTPUTSOURCE_ALARM;
  if (HAL_RTC_Init(&hrtc) != HAL_OK)
  {
    Error_Handler();
  }

}
