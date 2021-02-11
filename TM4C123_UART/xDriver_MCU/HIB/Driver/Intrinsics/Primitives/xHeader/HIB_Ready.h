/**
 *
 * @file HIB_Ready.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTRINSICS_HIB_PRIMITIVES_HIB_READY_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTRINSICS_HIB_PRIMITIVES_HIB_READY_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

void HIB__vReset(void);
void HIB__vSetReady(void);
void HIB__vClearReady(void);
HIB_nREADY HIB__enIsReady(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTRINSICS_HIB_PRIMITIVES_HIB_READY_H_ */
