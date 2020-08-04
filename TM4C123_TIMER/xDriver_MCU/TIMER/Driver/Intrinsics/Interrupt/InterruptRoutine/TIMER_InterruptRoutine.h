/**
 *
 * @file TIMER_InterruptRoutine.h
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
 * @verbatim 14 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleA_16/TIMER_InterruptRoutine_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleA_32/TIMER_InterruptRoutine_ModuleA_32.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleB_16/TIMER_InterruptRoutine_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/InterruptRoutine_ModuleB_32/TIMER_InterruptRoutine_ModuleB_32.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Array.h>

extern void (*TIMER__vISR[2][2][6]) (void);


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_H_ */
