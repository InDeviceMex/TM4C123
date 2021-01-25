/**
 *
 * @file WDT_InterruptSource.h
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
 * @verbatim 23 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nSTATUS WDT__enGetInterruptSource(WDT_nMODULE enModule, WDT_nINTERRUPT* penFeatureArg);
void WDT__vEnInterruptSource(WDT_nMODULE enModule);
void WDT__vDisInterruptSource(WDT_nMODULE enModule);
void WDT__vClearInterruptSource(WDT_nMODULE enModule);
WDT_nSTATUS WDT__enStatusInterruptSource(WDT_nMODULE enModule, WDT_nINT_STATUS* penFeatureArg);




#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_H_ */
