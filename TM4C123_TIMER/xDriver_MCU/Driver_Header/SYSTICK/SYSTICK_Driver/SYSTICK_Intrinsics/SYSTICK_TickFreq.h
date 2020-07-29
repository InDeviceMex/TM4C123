/*
 * SYSTICK_TickFreq.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKFREQ_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKFREQ_H_


void SysTick__vClearTickFreq(void);
void SysTick__vSetTickFreq(float fTick);
float SysTick__fGetTickFreq(void);
#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKFREQ_H_ */
