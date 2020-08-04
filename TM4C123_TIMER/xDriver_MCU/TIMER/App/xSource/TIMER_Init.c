/**
 *
 * @file TIMER_Init.c
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
 * @verbatim 16 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMER/App/xHeader/TIMER_Init.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterMODULE.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>

void TIMER__vInit(void)
{
    TIMER__vRegisterMODULEISR(&TIMER0A__vISR,TIMER_enT0A);
    TIMER__vRegisterMODULEISR(&TIMER0B__vISR,TIMER_enT0B);
    TIMER__vRegisterMODULEISR(&TIMER1A__vISR,TIMER_enT1A);
    TIMER__vRegisterMODULEISR(&TIMER1B__vISR,TIMER_enT1B);
    TIMER__vRegisterMODULEISR(&TIMER2A__vISR,TIMER_enT2A);
    TIMER__vRegisterMODULEISR(&TIMER2B__vISR,TIMER_enT2B);
    TIMER__vRegisterMODULEISR(&TIMER3A__vISR,TIMER_enT3A);
    TIMER__vRegisterMODULEISR(&TIMER3B__vISR,TIMER_enT3B);
    TIMER__vRegisterMODULEISR(&TIMER4A__vISR,TIMER_enT4A);
    TIMER__vRegisterMODULEISR(&TIMER4B__vISR,TIMER_enT4B);
    TIMER__vRegisterMODULEISR(&TIMER5A__vISR,TIMER_enT5A);
    TIMER__vRegisterMODULEISR(&TIMER5B__vISR,TIMER_enT5B);

    TIMER__vRegisterMODULEISR(&WTIMER0A__vISR,TIMER_enWT0A);
    TIMER__vRegisterMODULEISR(&WTIMER0B__vISR,TIMER_enWT0B);
    TIMER__vRegisterMODULEISR(&WTIMER1A__vISR,TIMER_enWT1A);
    TIMER__vRegisterMODULEISR(&WTIMER1B__vISR,TIMER_enWT1B);
    TIMER__vRegisterMODULEISR(&WTIMER2A__vISR,TIMER_enWT2A);
    TIMER__vRegisterMODULEISR(&WTIMER2B__vISR,TIMER_enWT2B);
    TIMER__vRegisterMODULEISR(&WTIMER3A__vISR,TIMER_enWT3A);
    TIMER__vRegisterMODULEISR(&WTIMER3B__vISR,TIMER_enWT3B);
    TIMER__vRegisterMODULEISR(&WTIMER4A__vISR,TIMER_enWT4A);
    TIMER__vRegisterMODULEISR(&WTIMER4B__vISR,TIMER_enWT4B);
    TIMER__vRegisterMODULEISR(&WTIMER5A__vISR,TIMER_enWT5A);
    TIMER__vRegisterMODULEISR(&WTIMER5B__vISR,TIMER_enWT5B);
}

