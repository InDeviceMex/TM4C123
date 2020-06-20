/**
 *
 * @file SCB_Exception.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_EXCEPTION_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_EXCEPTION_H_

#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_BusFault.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_DEBUG.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_ISR.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_MemoryFault.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_NMI.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_PENDSV.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_SVCall.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_SysTick.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB_Driver/SCB_Exception/SCB_UsageFault.h>


void SCB__vEnableExceptions(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_DRIVER_SCB_EXCEPTION_H_ */
