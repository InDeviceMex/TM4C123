/**
 *
 * @file ADC_Comparator_Range.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeHigher.h>
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeLower.h>
#include <xDriver_MCU/ADC/Driver/Comparator/Range/xHeader/ADC_Comparator_RangeBoth.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetCompRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,  uint32_t u32CompRangeLow, uint32_t u32CompRangeHigh)
{
    uint32_t u32CompRangeTemp = 0U;
    if(u32CompRangeLow > u32CompRangeHigh)
    {
        u32CompRangeTemp = u32CompRangeHigh;
        u32CompRangeLow = u32CompRangeHigh;
        u32CompRangeHigh = u32CompRangeTemp;
    }
    ADC__vSetCompRangeLow(enModule, enActComp, u32CompRangeLow);
    ADC__vSetCompRangeHigh(enModule, enActComp, u32CompRangeHigh);
}

ADC_nSTATUS ADC__enGetCompRange(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,uint32_t* pu32CompRangeLow, uint32_t* pu32CompRangeHigh)
{
    ADC_nSTATUS enStatus= ADC_enERROR;
    uint32_t u32CompRangeLow = 0U;
    uint32_t u32CompRangeHigh = 0U;
    if((0U != pu32CompRangeLow) && (0U != pu32CompRangeHigh))
    {
        u32CompRangeLow =  ADC__u32GetCompRangeLow(enModule, enActComp);
        u32CompRangeHigh =  ADC__u32GetCompRangeHigh(enModule, enActComp);
        if((0xFFFFFFFFU != u32CompRangeLow) && (0xFFFFFFFFU != u32CompRangeHigh))
        {
            enStatus = ADC_enOK;
            *pu32CompRangeLow = u32CompRangeLow;
            *pu32CompRangeHigh = u32CompRangeHigh;
        }
    }
    return enStatus;
}


