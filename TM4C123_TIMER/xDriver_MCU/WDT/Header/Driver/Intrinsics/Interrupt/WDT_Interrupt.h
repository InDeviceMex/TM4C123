/**
 *
 * @file WDT_Interrupt.h
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPT_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPT_H_

#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/InterruptRegister/WDT_InterruptRegister.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/WDT_InterruptRoutine.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/WDT_InterruptModule.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Interrupt/WDT_InterruptType.h>
#include <xDriver_MCU/WDT/Header/Peripheral/WDT_Enum.h>

WDT_nINTERRUPT WDT__enGetInterrupt(WDT_nMODULE enModule);
void WDT__vEnInterrupt(WDT_nMODULE enModule);
void WDT__vDisInterrupt(WDT_nMODULE enModule);
void WDT__vClearInterrupt(WDT_nMODULE enModule);
WDT_nINT_STATUS WDT__enStatusInterrupt(WDT_nMODULE enModule);



#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPT_H_ */
