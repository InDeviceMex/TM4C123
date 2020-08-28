/**
 *
 * @file TIMER_InterruptRoutine_Source.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_ARRAY_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_ARRAY_H_

#include <stdint.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

extern void (*TIMER__vIRQSourceHandler[(uint32_t)(TIMER_enLETTER_MAX+1u)][(uint32_t)TIMER_enWIDE_MAX][(uint32_t)(TIMER_enMODULE_NUM_MAX+1u)][6]) (void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTROUTINE_TIMER_INTERRUPTROUTINE_ARRAY_H_ */
