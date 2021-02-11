/**
 *
 * @file ACMP_Ready.h
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
 * @verbatim 29 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_READY_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_READY_H_

#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Enum.h>

void ACMP__vSetReady(void);
void ACMP__vClearReady(void);
ACMP_nREADY ACMP__enIsReady(void);






#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_ACMP_READY_H_ */
