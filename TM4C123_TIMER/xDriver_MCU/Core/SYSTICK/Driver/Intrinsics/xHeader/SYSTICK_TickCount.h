/*
 * SYSTICK_TickCount.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKCOUNT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKCOUNT_H_



#include <stdint.h>                             /* standard types definitions                      */

void SysTick__vClearTickCount(void);
void SysTick__vSetTickCount(uint32_t u32Tick);
uint32_t SysTick__u32GetTickCount(void);


#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKCOUNT_H_ */
