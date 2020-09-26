/*
 * SYSTICK_TickFreq.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKFREQ_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKFREQ_H_

#include <xUtils/Standard/Standard.h>

void SysTick__vClearTickFreq(void);
void SysTick__vSetTickFreq(float32_t fTick);
float32_t SysTick__fGetTickFreq(void);
#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKFREQ_H_ */
