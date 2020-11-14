/**
 *
 * @file TIMER_InterruptVector.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/xHeader/TIMER_InterruptVector.h>
#include <xDriver_MCU/TIMER/Peripheral/TIMER_Peripheral.h>

static NVIC_nSTIR NVIC_VECTOR_TIMER[(uint32_t)TIMER_enLETTER_MAX+1u][(uint32_t)TIMER_enWIDE_MAX][(uint32_t)TIMER_enMODULE_NUM_MAX+1u]={
                                {
                                 {NVIC_enSTIR_TIMER0A,NVIC_enSTIR_TIMER1A,NVIC_enSTIR_TIMER2A,NVIC_enSTIR_TIMER3A,NVIC_enSTIR_TIMER4A,NVIC_enSTIR_TIMER5A},
                                 {NVIC_enSTIR_TIMER0B,NVIC_enSTIR_TIMER1B,NVIC_enSTIR_TIMER2B,NVIC_enSTIR_TIMER3B,NVIC_enSTIR_TIMER4B,NVIC_enSTIR_TIMER5B}
                                },
                                {
                                 {NVIC_enSTIR_WTIMER0A,NVIC_enSTIR_WTIMER1A,NVIC_enSTIR_WTIMER2A,NVIC_enSTIR_WTIMER3A,NVIC_enSTIR_WTIMER4A,NVIC_enSTIR_WTIMER5A},
                                 {NVIC_enSTIR_WTIMER0B,NVIC_enSTIR_WTIMER1B,NVIC_enSTIR_WTIMER2B,NVIC_enSTIR_WTIMER3B,NVIC_enSTIR_WTIMER4B,NVIC_enSTIR_WTIMER5B}
                                }
                              };


void TIMER__vEnInterruptSourceVector(TIMER_nMODULE enModule,TIMER_nPRIORITY enTimerPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    enVector=NVIC_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
    enTimerPriority&=0x7u;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enTimerPriority);
}

void TIMER__vDisInterruptSourceVector(TIMER_nMODULE enModule)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if((uint32_t)TIMER_enMISC_MAX<u32Number)
    {
        u32Number=(uint32_t)TIMER_enMISC_MAX;
    }
    enVector=NVIC_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}

