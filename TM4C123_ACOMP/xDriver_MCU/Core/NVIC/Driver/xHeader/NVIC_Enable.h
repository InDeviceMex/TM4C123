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

#include <xDriver_MCU/Core/NVIC/Peripheral/xHeader/NVIC_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(NVIC__enGetEnableIRQ, ".ramcode")
#pragma  CODE_SECTION(NVIC__vSetEnableIRQ, ".ramcode")
#pragma  CODE_SECTION(NVIC__vClearEnableIRQ, ".ramcode")


NVIC_nENABLE NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ);
void NVIC__vSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority);
void NVIC__vClearEnableIRQ(NVIC_nSTIR enIRQ);

#elif defined (__GNUC__ )

NVIC_nENABLE NVIC__enGetEnableIRQ(NVIC_nSTIR enIRQ) __attribute__((section(".ramcode")));
void NVIC__vSetEnableIRQ(NVIC_nSTIR enIRQ, NVIC_nPRIORITY enPriority) __attribute__((section(".ramcode")));
void NVIC__vClearEnableIRQ(NVIC_nSTIR enIRQ) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_DRIVER_NVIC_ENABLE_H_ */
