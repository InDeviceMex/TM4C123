/*
 * SYSTICK_Intrinsics.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INTRINSICS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INTRINSICS_H_


#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Peripheral/SYSTICK_Peripheral.h>


float SysTick__fGetTimeUs(void);
float SysTick__fGetFrequency(void);

uint32_t SysTick__u32GetCount(void);
void SysTick__vClearCount(void);
void SysTick__vSetCount(uint32_t u32Count);

uint32_t SysTick__u32GetCountOV(void);
void SysTick__vSetCountOV(uint32_t u32Count);

uint32_t SysTick__u32GetCurrentTick(void);
uint64_t SysTick__u64GetCurrentCountTick(void);
uint32_t SysTick__u32GetMaxTick(void);


void SysTick__vClearUsTick(void);
void SysTick__vSetUsTick(float fTick);
float SysTick__fGetUsTick(void);

void SysTick__vClearFrecTick(void);
void SysTick__vSetFrecTick(float fTick);

void SysTick__vClearCountTick(void);
void SysTick__vSetCountTick(uint32_t u32Tick);

void SysTick__vClearUsBase(void);
void SysTick__vSetUsBase(float fBase);

void SysTick__vClearFrecBase(void);
void SysTick__vSetFrecBase(uint32_t u32Base);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_DRIVER_SYSTICK_INTRINSICS_H_ */
