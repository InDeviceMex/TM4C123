/**
 *
 * @file ADC_Propierties.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Propierties.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

ADC_nSEQ_INPUT ADC__enGetMaxInputNumber(ADC_nMODULE enModule)
{
    return (ADC_nSEQ_INPUT) (ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCPP_OFFSET, ADC_ADCPP_CH_MASK, ADC_ADCPP_R_CH_BIT) - 1U);
}

ADC_nCOMPARATOR ADC__enGetMaxCompNumber(ADC_nMODULE enModule)
{
    return (ADC_nCOMPARATOR) (ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCPP_OFFSET, ADC_ADCPP_DC_MASK, ADC_ADCPP_R_DC_BIT) - 1U);
}


