/**
 *
 * @file TIMER_InterruptRoutine.c
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

#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>

void (*TIMER__vISR[2][2][6]) (void)={
                                    {
                                     {&TIMER0A__vISR,&TIMER1A__vISR,&TIMER2A__vISR,&TIMER3A__vISR,&TIMER4A__vISR,&TIMER5A__vISR},
                                     {&TIMER0B__vISR,&TIMER1B__vISR,&TIMER2B__vISR,&TIMER3B__vISR,&TIMER4B__vISR,&TIMER5B__vISR}
                                    },
                                    {
                                     {&WTIMER0A__vISR,&WTIMER1A__vISR,&WTIMER2A__vISR,&WTIMER3A__vISR,&WTIMER4A__vISR,&WTIMER5A__vISR},
                                     {&WTIMER0B__vISR,&WTIMER1B__vISR,&WTIMER2B__vISR,&WTIMER3B__vISR,&WTIMER4B__vISR,&WTIMER5B__vISR}
                                    }
                                  };
