/**
 *
 * @file ADC_Comparator_GenericRange.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_GenericRange.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>


void ADC__vSetCompGenericRange(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32Range, uint32_t u32RangeMask, uint32_t u32RangeBit)
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
    u32Reg = psAdc->ADCDCCMP[u32Comparator];

    u32Reg &= ~(u32RangeMask << u32RangeBit);
    u32Reg |= (u32Range << u32RangeBit);

    psAdc->ADCDCCMP[u32Comparator] =u32Reg;
}

uint32_t ADC__u32GetCompGenericRange(uint32_t u32Module, uint32_t  u32Comparator, uint32_t u32RangeMask, uint32_t u32RangeBit)
{
    uint32_t u32Reg = 0U;
    ADC_TypeDef* psAdc = 0U;

    ADC_nREADY enReady = ADC_enNOREADY;
    uint32_t u32Range = 0xFFFFFFFFU;
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

        u32Reg >>= u32RangeBit;
        u32Reg &= u32RangeMask;
        u32Range = u32Reg;
    }
    return u32Range;
}
