/**
 *
 * @file WDT_InterruptModule.h
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTMODULE_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTMODULE_H_

#include <xDriver_MCU/Driver_Header/WDT/WDT_Peripheral/WDT_Enum.h>

void WDT__vEnInterruptMODULE(WDT_nPRIORITY enPriority);
void WDT__vDisInterruptMODULE(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTMODULE_H_ */
