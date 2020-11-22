/**
 *
 * @file ADC_InterruptSource_SeqComp.c
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
 * @verbatim 22 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Interrupt/xHeader/ADC_InterruptSource_SeqComp.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC_Comp__vEnInterruptSource(ADC_nMODULE enModule, ADC_nCOMPARATOR  enComparator)
{
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_TypeDef* psAdc=0u;

    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Comparator= (uint32_t) enComparator;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_en_COMPARATOR_MAX<u32Comparator)
    {
        u32Comparator=(uint32_t)ADC_en_COMPARATOR_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc=ADC_BLOCK[u32Module];

    u32Reg=psAdc->ADCDCCTL[u32Comparator];
    u32Reg|=ADC_ADCDCCTL_R_CIE_MASK;
    psAdc->ADCDCCTL[u32Comparator]=u32Reg;
}

void ADC_Comp__vDisInterruptSource(ADC_nMODULE enModule, ADC_nCOMPARATOR  enComparator)
{
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_TypeDef* psAdc=0u;

    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Comparator= (uint32_t) enComparator;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_en_COMPARATOR_MAX<u32Comparator)
    {
        u32Comparator=(uint32_t)ADC_en_COMPARATOR_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc=ADC_BLOCK[u32Module];

    u32Reg=psAdc->ADCDCCTL[u32Comparator];
    u32Reg&=~ADC_ADCDCCTL_R_CIE_MASK;
    psAdc->ADCDCCTL[u32Comparator]=u32Reg;
}

void ADC_Comp__vClearInterruptSource(ADC_nMODULE enModule, ADC_nCOMPARATOR  enComparator)
{
    uint32_t u32Reg=0u;
    ADC_TypeDef* psAdc=0u;

    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Comparator= (uint32_t) enComparator;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_en_COMPARATOR_MAX<u32Comparator)
    {
        u32Comparator=(uint32_t)ADC_en_COMPARATOR_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc=ADC_BLOCK[u32Module];

    u32Reg=(uint32_t)ADC_enCOMP_INT_CLEAR<<u32Comparator;
    psAdc->ADCDCISC=u32Reg;
}

ADC_nCOMP_INT_STATUS ADC_Comp__enStatusInterruptSource(ADC_nMODULE enModule, ADC_nCOMPARATOR  enComparator)
{
    ADC_nCOMP_INT_STATUS enInt=ADC_enCOMP_INT_STATUS_UNDEF;
    uint32_t u32Reg=0u;
    uint32_t u32SeqBit=0u;
    ADC_nREADY enReady=ADC_enNOREADY;
    uint32_t u32Module= (uint32_t) enModule;
    uint32_t u32Comparator= (uint32_t) enComparator;
    ADC_TypeDef* psAdc=0u;
    if((uint32_t)ADC_enMODULE_MAX<u32Module)
    {
        u32Module=(uint32_t)ADC_enMODULE_MAX;
    }
    if((uint32_t)ADC_en_COMPARATOR_MAX<u32Comparator)
    {
        u32Comparator=(uint32_t)ADC_en_COMPARATOR_MAX;
    }
    enReady=ADC__enIsReady((ADC_nMODULE)enModule);

    if(ADC_enREADY == enReady)
    {
        psAdc=ADC_BLOCK[enModule];
        u32SeqBit=ADC_enCOMP_INT_OCCUR<<u32Comparator;

        u32Reg=psAdc->ADCDCISC;
        u32Reg&=u32SeqBit;

        if(0u != u32Reg)
        {
            enInt=ADC_enCOMP_INT_OCCUR;
        }
        else
        {
            enInt=ADC_enCOMP_INT_NOOCCUR;
        }
    }
    return enInt;
}
