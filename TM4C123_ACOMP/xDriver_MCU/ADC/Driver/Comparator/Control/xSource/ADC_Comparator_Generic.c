/**
 *
 * @file ADC_Comparator_Generic.c
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
 * @verbatim 5 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_Generic.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32Feature, uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32Reg = 0U;
    ADC_TypeDef* psAdc = 0U;

    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_en_COMPARATOR_MAX<u32Comparator)
    {
        u32Comparator = (uint32_t) ADC_en_COMPARATOR_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc = ADC_BLOCK[u32Module];
    u32Reg = psAdc->ADCDCCTL[u32Comparator];

    u32Reg &= ~(u32FeatureMask << u32FeatureBit);
    u32Reg |= (u32Feature << u32FeatureBit);

    psAdc->ADCDCCTL[u32Comparator] =u32Reg;
}

uint32_t ADC__u32GetCompGenericControl(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32FeatureMask, uint32_t u32FeatureBit)
{
    uint32_t u32Reg = 0U;
    ADC_TypeDef* psAdc = 0U;

    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32Feature = 0xFFFFFFFFU;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_en_COMPARATOR_MAX<u32Comparator)
    {
        u32Comparator = (uint32_t) ADC_en_COMPARATOR_MAX;
    }
    enReady = ADC__enIsReady((ADC_nMODULE)u32Module);
    if(ADC_enREADY == enReady)
    {
        psAdc = ADC_BLOCK[u32Module];
        u32Reg = psAdc->ADCDCCTL[u32Comparator];

        u32Reg >>= u32FeatureBit;
        u32Reg &= u32FeatureMask;
        u32Feature = u32Reg;
    }
    return u32Feature;
}





