/**
 *
 * @file TIMER_InterruptRoutine_Array.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMER_InterruptRoutine_Array.h>

void TIMER_vDUMMY(void);

void (*TIMER__vSOURCEISR[2][2][6][6]) (void)={
                                    {
                                        {
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY}
                                        },
                                        {
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY}
                                        }
                                    },
                                    {
                                        {
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY}
                                        },
                                        {
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY},
                                            {&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY,&TIMER_vDUMMY}
                                        }
                                    },
                                 };

void TIMER_vDUMMY(void)
{
    while(1u){}
}
