/**
 *
 * @file TIMER_InterruptModule.c
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
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Driver/TIMER_Intrinsics/TIMER_Interrupt/TIMER_InterruptModule.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Peripheral.h>
#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>

static NVIC_nSTIR NVIC_VECTOR_TIMER[2][2][6]={
                                {
                                 {NVIC_enSTIR_TIMER0A,NVIC_enSTIR_TIMER1A,NVIC_enSTIR_TIMER2A,NVIC_enSTIR_TIMER3A,NVIC_enSTIR_TIMER4A,NVIC_enSTIR_TIMER5A},
                                 {NVIC_enSTIR_TIMER0B,NVIC_enSTIR_TIMER1B,NVIC_enSTIR_TIMER2B,NVIC_enSTIR_TIMER3B,NVIC_enSTIR_TIMER4B,NVIC_enSTIR_TIMER5B}
                                },
                                {
                                 {NVIC_enSTIR_WTIMER0A,NVIC_enSTIR_WTIMER1A,NVIC_enSTIR_WTIMER2A,NVIC_enSTIR_WTIMER3A,NVIC_enSTIR_WTIMER4A,NVIC_enSTIR_WTIMER5A},
                                 {NVIC_enSTIR_WTIMER0B,NVIC_enSTIR_WTIMER1B,NVIC_enSTIR_WTIMER2B,NVIC_enSTIR_WTIMER3B,NVIC_enSTIR_WTIMER4B,NVIC_enSTIR_WTIMER5B}
                                }
                              };


void TIMER__vEnInterruptMODULE(TIMER_nMODULE enModule,TIMER_nPRIORITY enPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enVector=NVIC_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
    enPriority&=0x7u;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enPriority);
}

void TIMER__vDisInterruptMODULE(TIMER_nMODULE enModule)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enVector=NVIC_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}

