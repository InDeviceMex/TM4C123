/**
 *
 * @file ADC_InterruptVector.c
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
 * @verbatim 20 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Peripheral/xHeader/ADC_Dependencies.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptVector.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

static NVIC_nSTIR ADC__enGetInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence);



static NVIC_nSTIR ADC__enGetInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    NVIC_nSTIR NVIC_VECTOR_ADC[(uint32_t)ADC_enMODULE_MAX+1u][(uint32_t)ADC_enSEQ_MAX+1u]=
    {
        {NVIC_enSTIR_ADC0SEQ0,NVIC_enSTIR_ADC0SEQ1,NVIC_enSTIR_ADC0SEQ2,NVIC_enSTIR_ADC0SEQ3},
        {NVIC_enSTIR_ADC1SEQ0,NVIC_enSTIR_ADC1SEQ1,NVIC_enSTIR_ADC1SEQ2,NVIC_enSTIR_ADC1SEQ3},
    };
    NVIC_nSTIR enVector=NVIC_enSTIR_ADC0SEQ0;
    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Sequence= (uint32_t) enSequence;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_enSEQ_MAX<u32Sequence)
    {
        u32Sequence=(uint32_t)ADC_enSEQ_MAX;
    }
    enVector=NVIC_VECTOR_ADC[u32Module][u32Sequence];
    return enVector;
}

void ADC__vEnInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence, ADC_nPRIORITY enADCPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_ADC0SEQ0;
    enVector= ADC__enGetInterruptVector(enModule,enSequence);
    enADCPriority&=0x7u;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enADCPriority);
}

void ADC__vDisInterruptVector(ADC_nMODULE enModule, ADC_nSEQUENCER enSequence)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_ADC0SEQ0;
    enVector= ADC__enGetInterruptVector(enModule,enSequence);
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}


