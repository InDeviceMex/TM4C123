/**
 *
 * @file TIMER_InterruptSource.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTSOURCE_H_

#include <xDriver_MCU/TIMER/Header/Peripheral/TIMER_Enum.h>

void TIMER__vEnInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);
void TIMER__vDisInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);
void TIMER__vClearInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);
TIMER_nINT_STATUS TIMER__enStatusInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt);


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_DRIVER_TIMER_INTRINSICS_TIMER_INTERRUPT_TIMER_INTERRUPTSOURCE_H_ */
