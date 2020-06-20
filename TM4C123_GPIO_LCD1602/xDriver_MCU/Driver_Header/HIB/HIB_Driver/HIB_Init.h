/*
 * HIB_Init.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INIT_H_


#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL.h>

#include <xDriver_MCU/Driver_Header/HIB/HIB_Peripheral/HIB_Peripheral.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Interrupt.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Intrinsics.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_InterruptRoutine.h>
#include <xDriver_MCU/Driver_Header/HIB/HIB_Driver/HIB_Counter.h>


HIB_nSTATUS HIB__enInit(uint32_t u32Match, uint32_t u32SubMatch);


#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INIT_H_ */
