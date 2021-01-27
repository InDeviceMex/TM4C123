/**
 *
 * @file HIB_InterruptRoutine.h
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

#ifndef XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_HIB_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_HIB_INTERRUPTROUTINE_H_

#include <xDriver_MCU/HIB/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/HIB_InterruptRoutine_Vector.h>

extern void (*HIB__pvIRQVectorHandler) (void);

#endif /* XDRIVER_MCU_HIB_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_HIB_INTERRUPTROUTINE_H_ */
