/**
 *
 * @file TIMER_InterruptModule.h
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
 * @verbatim 15 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTMODULE_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTMODULE_H_

#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>

void TIMER__vEnInterruptMODULE(TIMER_nMODULE enModule,TIMER_nPRIORITY enPriority);
void TIMER__vDisInterruptMODULE(TIMER_nMODULE enModule);

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTMODULE_H_ */
