/*
 * SYSTICK_FreeCount.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREECOUNT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREECOUNT_H_

#include <xUtils/Standard/Standard.h>                             /* standard types definitions                      */

void SysTick__vSetFreeCount(uint32_t u32Count);
uint32_t SysTick__u32GetFreeCount(void);
void SysTick__vClearFreeCount(void);

void SysTick__vSetFreeCountOv(uint32_t u32Count);
uint32_t SysTick__u32GetFreeCountOv(void);
void SysTick__vClearFreeCountOv(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_FREECOUNT_H_ */
