/**
 *
 * @file ACMP_ADCTriggerConfig.c
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
 * @verbatim Apr 6, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 6, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/App/xHeader/ACMP_ADCTriggerConfig.h>

#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerEdge.h>
#include <xDriver_MCU/ACMP/Driver/Comparator/Control/xHeader/ACMP_TriggerLevel.h>

void ACMP__vSetADCTriggerConfig(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg, ACMP_nADC_CONFIG enIntConfig)
{
    uint32_t u32Sense = 0UL;
    uint32_t u32Event = 0UL;

    u32Sense = (uint32_t) enIntConfig;
    u32Sense >>= 8UL;
    u32Sense &= 1UL;

    u32Event = (uint32_t) enIntConfig;
    u32Event &= 0x3UL;

    if((uint32_t) ACMP_enADC_SENSE_EDGE == u32Sense)
    {
        ACMP__vSetComparatorADCTriggerEdge(enModule, enComparatorArg, (ACMP_nADC_EDGE) u32Event);
    }
    else
    {
        ACMP__vSetComparatorADCTriggerEdge(enModule, enComparatorArg, ACMP_enADC_EDGE_NONE);
        ACMP__vSetComparatorADCTriggerLevel(enModule, enComparatorArg, (ACMP_nADC_LEVEL) u32Event);
    }
}




