/**
 *
 * @file TIMER_InterruptRegisterIRQVector.c
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
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMER_InterruptRegisterIRQVector.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Dependencies.h>
#include <xDriver_MCU/TIMER/Driver/Intrinsics/Interrupt/InterruptRoutine/TIMER_InterruptRoutine.h>

const SCB_nVECISR SCB_enVECISR_TIMER[(uint32_t)TIMER_enLETTER_MAX+1u][(uint32_t)TIMER_enWIDE_MAX][(uint32_t)TIMER_enMODULE_NUM_MAX+1u]={
                                    {
                                     {SCB_enVECISR_TIMER0A,SCB_enVECISR_TIMER1A,SCB_enVECISR_TIMER2A,SCB_enVECISR_TIMER3A,SCB_enVECISR_TIMER4A,SCB_enVECISR_TIMER5A},
                                     {SCB_enVECISR_TIMER0B,SCB_enVECISR_TIMER1B,SCB_enVECISR_TIMER2B,SCB_enVECISR_TIMER3B,SCB_enVECISR_TIMER4B,SCB_enVECISR_TIMER5B}
                                    },
                                    {
                                     {SCB_enVECISR_WTIMER0A,SCB_enVECISR_WTIMER1A,SCB_enVECISR_WTIMER2A,SCB_enVECISR_WTIMER3A,SCB_enVECISR_WTIMER4A,SCB_enVECISR_WTIMER5A},
                                     {SCB_enVECISR_WTIMER0B,SCB_enVECISR_WTIMER1B,SCB_enVECISR_WTIMER2B,SCB_enVECISR_WTIMER3B,SCB_enVECISR_WTIMER4B,SCB_enVECISR_WTIMER5B}
                                    }
                                  };
void TIMER__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),TIMER_nMODULE enModule)
{

    SCB_nVECISR enVector=SCB_enVECISR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7u;
    uint32_t u32Letter= ((uint32_t) enModule>>8u) & 0x1u;
    uint32_t u32Wide= ((uint32_t) enModule>>16u) & 0x1u;
    uint32_t u32IrqVectorHandler=0;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        if((uint32_t)TIMER_enMISC_MAX<u32Number)
        {
            u32Number=(uint32_t)TIMER_enMISC_MAX;
        }
        enVector=SCB_enVECISR_TIMER[u32Wide][u32Letter][u32Number];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|1u);
        TIMER__pvIRQVectorHandler[u32Wide][u32Letter][u32Number]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(TIMER__pvIRQVectorHandler[u32Wide][u32Letter][u32Number],enVector);
    }
}
