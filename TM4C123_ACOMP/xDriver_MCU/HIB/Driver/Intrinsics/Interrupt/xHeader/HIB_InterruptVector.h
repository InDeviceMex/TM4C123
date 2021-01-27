/**
 *
 * @file HIB_InterruptVector.h
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_XHEADER_HIB_INTERRUPTVECTOR_H_
#define XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_XHEADER_HIB_INTERRUPTVECTOR_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

void HIB__vEnInterruptVector(HIB_nPRIORITY enPriority);
void HIB__vDisInterruptVector(void);

#endif /* XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_XHEADER_HIB_INTERRUPTVECTOR_H_ */
