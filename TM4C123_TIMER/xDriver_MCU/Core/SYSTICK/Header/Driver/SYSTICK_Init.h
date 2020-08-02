/*
 * SYSTICK_Init.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INIT_H_


#include <stdint.h>
#include <xDriver_MCU/Core/SYSTICK/Header/Peripheral/SYSTICK_Enum.h>
#include <xDriver_MCU/Core/SCB/Header/Peripheral/SCB_Enum.h>

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource);
SysTick_nSTATUS SysTick__enInitFrequency(float fFrequency, SCB_nSHPR enPriority);
SysTick_nSTATUS SysTick__enInitUs(float fTimeUs, SCB_nSHPR enPriority);


#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INIT_H_ */
