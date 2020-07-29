/*
 * SYSTICK_TimeUsBase.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUSBASE_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUSBASE_H_

void SysTick__vClearTimeUsBase(void);
void SysTick__vSetTimeUsBase(float fBase);
float SysTick__fGetTimeUsBase(void);



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_TIMEUSBASE_H_ */
