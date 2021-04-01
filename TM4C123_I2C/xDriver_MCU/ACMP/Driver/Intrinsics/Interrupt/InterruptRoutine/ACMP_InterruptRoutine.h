/**
 *
 * @file ACMP_InterruptRoutine.h
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ACMP_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ACMP_INTERRUPTROUTINE_H_

#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_Vector_Module0/ACMP_InterruptRoutine_Vector_Module0.h>
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/ACMP_InterruptRoutine_Source.h>

extern void (*ACMP__pvIRQVectorHandler[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX]) (void);

#endif /* XDRIVER_MCU_ACMP_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_ACMP_INTERRUPTROUTINE_H_ */
