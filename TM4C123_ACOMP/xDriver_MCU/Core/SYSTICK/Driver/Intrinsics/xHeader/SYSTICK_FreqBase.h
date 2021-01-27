/*
 * SYSTICK_FreqBase.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREQBASE_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREQBASE_H_

#include <xUtils/Standard/Standard.h>                             /* standard types definitions                      */

void SysTick__vClearFreqBase(void);
void SysTick__vSetFreqBase(uint32_t u32Base);
uint32_t SysTick__u32GetFreqBase(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREQBASE_H_ */
