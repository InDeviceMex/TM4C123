/**
 *
 * @file WDT_InterruptType.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTTYPE_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTTYPE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

void WDT__vSetInterruptSourceType(WDT_nMODULE enModule, WDT_nINT_TYPE enType);
WDT_nSTATUS WDT__enGetInterruptSourceType(WDT_nMODULE enModule, WDT_nINT_TYPE* penFeatureArg);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_INTERRUPT_WDT_INTERRUPTTYPE_H_ */
