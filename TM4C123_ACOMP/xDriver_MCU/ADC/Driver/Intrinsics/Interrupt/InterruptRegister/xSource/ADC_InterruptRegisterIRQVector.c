/**
 *
 * @file ADC_InterruptRegisterIRQVector.c
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
 * @verbatim 19 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <ADC/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/ADC_InterruptRegisterIRQVector.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/InterruptRoutine/ADC_InterruptRoutine.h>

const SCB_nVECISR SCB_enVECISR_ADC[(uint32_t)ADC_enMODULE_MAX+ 1U][(uint32_t)ADC_enSEQ_MAX + 1U]=
{
    {SCB_enVECISR_ADC0SEQ0,SCB_enVECISR_ADC0SEQ1,SCB_enVECISR_ADC0SEQ2,SCB_enVECISR_ADC0SEQ3},
    {SCB_enVECISR_ADC1SEQ0,SCB_enVECISR_ADC1SEQ1,SCB_enVECISR_ADC1SEQ2,SCB_enVECISR_ADC1SEQ3}
};
void ADC__vRegisterIRQVectorHandler(void (*pfIrqVectorHandler) (void),ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    SCB_nVECISR enVector=SCB_enVECISR_ADC0SEQ0;
    uint32_t u32IrqVectorHandler=0U;
    uint32_t u32Module=(uint32_t)enModule;
    uint32_t u32Sequencer=(uint32_t)enSequence;
    if(0u != (uint32_t)pfIrqVectorHandler)
    {
        if(u32Module>(uint32_t)ADC_enMODULE_MAX)
        {
            u32Module=(uint32_t)ADC_enMODULE_MAX;
        }
        if(u32Sequencer>(uint32_t)ADC_enSEQ_MAX)
        {
            u32Sequencer=(uint32_t)ADC_enSEQ_MAX;
        }
        enVector=SCB_enVECISR_ADC[u32Module][u32Sequencer];
        u32IrqVectorHandler=((uint32_t)pfIrqVectorHandler|(uint32_t)1U);
        ADC__pvIRQVectorHandler[u32Module][u32Sequencer]=(void (*) (void))u32IrqVectorHandler;
        SCB__vRegisterIRQVectorHandler(ADC__pvIRQVectorHandler[u32Module][u32Sequencer],enVector);
    }
}



