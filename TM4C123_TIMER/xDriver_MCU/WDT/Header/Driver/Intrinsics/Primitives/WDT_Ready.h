/**
 *
 * @file WDT_Ready.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_PRIMITIVES_WDT_READY_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_PRIMITIVES_WDT_READY_H_

#include <xDriver_MCU/WDT/Header/Peripheral/WDT_Enum.h>

void WDT__vReset(WDT_nMODULE enModule);
void WDT__vSetReady(WDT_nMODULE enModule);
void WDT__vClearReady(WDT_nMODULE enModule);
WDT_nREADY WDT__enIsReady(WDT_nMODULE enModule);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_INTRINSICS_WDT_PRIMITIVES_WDT_READY_H_ */
