/**
 *
 * @file QEI_InterruptRoutine.h
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_QEI_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_QEI_INTERRUPTROUTINE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Enum.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/QEI_InterruptRoutine_Source.h>

extern void (*QEI__pvIRQVectorHandler[(uint32_t) QEI_enMODULE_MAX]) (void);


#endif /* XDRIVER_MCU_QEI_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_QEI_INTERRUPTROUTINE_H_ */
