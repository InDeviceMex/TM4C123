/*
 * SYSTICK_TickUs.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKUS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKUS_H_


#include <stdint.h>                             /* standard types definitions                      */

void SysTick__vClearTickUs(void);
void SysTick__vSetTickUs(float fTick);
float SysTick__fGetTickUs(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TICKUS_H_ */
