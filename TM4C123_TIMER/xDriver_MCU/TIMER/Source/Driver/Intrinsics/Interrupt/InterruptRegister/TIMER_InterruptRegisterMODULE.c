/**
 *
 * @file TIMER_InterruptRegisterMODULE.c
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

#include <stdint.h>
#include <xDriver_MCU/Core/SCB/SCB.h>
#include <xDriver_MCU/TIMER/Header/Driver/Intrinsics/Interrupt/InterruptRegister/TIMER_InterruptRegisterMODULE.h>
#include <xDriver_MCU/TIMER/Header/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>
const SCB_nVECISR SCB_VECTOR_TIMER[2][2][6]={
                                    {
                                     {SCB_enVECISR_TIMER0A,SCB_enVECISR_TIMER1A,SCB_enVECISR_TIMER2A,SCB_enVECISR_TIMER3A,SCB_enVECISR_TIMER4A,SCB_enVECISR_TIMER5A},
                                     {SCB_enVECISR_TIMER0B,SCB_enVECISR_TIMER1B,SCB_enVECISR_TIMER2B,SCB_enVECISR_TIMER3B,SCB_enVECISR_TIMER4B,SCB_enVECISR_TIMER5B}
                                    },
                                    {
                                     {SCB_enVECISR_WTIMER0A,SCB_enVECISR_WTIMER1A,SCB_enVECISR_WTIMER2A,SCB_enVECISR_WTIMER3A,SCB_enVECISR_WTIMER4A,SCB_enVECISR_WTIMER5A},
                                     {SCB_enVECISR_WTIMER0B,SCB_enVECISR_WTIMER1B,SCB_enVECISR_WTIMER2B,SCB_enVECISR_WTIMER3B,SCB_enVECISR_WTIMER4B,SCB_enVECISR_WTIMER5B}
                                    }
                                  };
void TIMER__vRegisterMODULEISR(void (*Isr) (void),TIMER_nMODULE enModule)
{

    SCB_nVECISR enVector=SCB_enVECISR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32Isr=0;
    if(0u != (uint32_t)Isr)
    {
        if(TIMER_enMISC_MAX<u32Number)
        {
            u32Number=TIMER_enMISC_MAX;
        }
        enVector=SCB_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
        u32Isr=((uint32_t)Isr|1u);
        TIMER__vISR[u32Wide][u32Letter][u32Number]=(void (*) (void))u32Isr;
        SCB__vRegisterISR(TIMER__vISR[u32Wide][u32Letter][u32Number],enVector);
    }
}
