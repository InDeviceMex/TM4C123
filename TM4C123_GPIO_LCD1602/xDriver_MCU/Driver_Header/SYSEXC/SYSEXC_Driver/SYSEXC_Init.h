/**
 *
 * @file SYSEXC_Init.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INIT_H_


#include <xDriver_MCU/Driver_Header/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSEXC/SYSEXC_Peripheral/SYSEXC_Peripheral.h>
#include <xDriver_MCU/Driver_Header/SYSEXC/SYSEXC_Driver/SYSEXC_InterruptRoutine.h>


void SYSEXC__vInit(SYSEXC_nINTERRUPT enInt,SYSEXC_nPRIORITY enPri);

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSEXC_SYSEXC_DRIVER_SYSEXC_INIT_H_ */
