/**
 *
 * @file WDT_InterruptRegisterMODULE.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTREGISTER_WDT_INTERRUPTREGISTERMODULE_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTREGISTER_WDT_INTERRUPTREGISTERMODULE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

void WDT__vRegisterMODULEISR(void (*Isr) (void),WDT_nINT_TYPE enIntType);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTREGISTER_WDT_INTERRUPTREGISTERMODULE_H_ */
