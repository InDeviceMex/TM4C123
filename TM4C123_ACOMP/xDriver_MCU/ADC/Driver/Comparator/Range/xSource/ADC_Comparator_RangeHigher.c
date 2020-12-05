/**
 *
 * @file ADC_Comparator_RangeHigher.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeHigher.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetCompRangeHigh(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,  uint32_t u32CompRangeHigh)
{
    ADC__vSetCompGenericRange((uint32_t) enModule, (uint32_t)  enActComp, u32CompRangeHigh,ADC_ADCDCCMP_COMP1_MASK, ADC_ADCDCCMP_R_COMP1_BIT);
}

uint32_t ADC__u32GetCompRangeHigh(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp)
{
    return ADC__u32GetCompGenericRange((uint32_t) enModule, (uint32_t)  enActComp,ADC_ADCDCCMP_COMP1_MASK, ADC_ADCDCCMP_R_COMP1_BIT);
}


