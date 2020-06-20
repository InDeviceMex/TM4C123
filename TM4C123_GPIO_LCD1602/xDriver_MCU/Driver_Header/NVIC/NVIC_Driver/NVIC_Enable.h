/**
 *
 * @file NVIC_Enable.h
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
 * @verbatim 20 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_


#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Driver/NVIC_Priority.h>
#include <xDriver_MCU/Driver_Header/NVIC/NVIC_Peripheral/NVIC_Peripheral.h>


NVIC_nENABLE    NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ);
NVIC_nSTATUS    NVIC__enSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority);
NVIC_nSTATUS    NVIC__enClearEnableIRQ(NVIC_nSTIR enIRQ);


#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_ */
