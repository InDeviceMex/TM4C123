/**
 *
 * @file ADC_Comparator_ResetTrigger.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Reset/xHeader/ADC_Comparator_ResetTrigger.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vResetCompTriggerConditions(ADC_nMODULE enModule, ADC_nCOMPMASK  enActCompMask)
{
    uint32_t u32Reg = 0U;
    ADC_TypeDef* psAdc = 0U;

    uint32_t u32Module = (uint32_t) enModule;
    uint32_t u32Comparator = (uint32_t) enActCompMask;
    if((uint32_t) ADC_enMODULE_MAX<u32Module)
    {
        u32Module = (uint32_t) ADC_enMODULE_MAX;
    }
    if((uint32_t) ADC_en_COMPMASK_MAX<u32Comparator)
    {
        u32Comparator = (uint32_t) ADC_en_COMPMASK_MAX;
    }
    ADC__vSetReady((ADC_nMODULE)u32Module);
    psAdc = ADC_BLOCK[u32Module];

    u32Reg = (uint32_t) u32Comparator << ADC_ADCDCRIC_R_DCTRIG0_BIT;
    psAdc->ADCDCRIC = u32Reg;
}



