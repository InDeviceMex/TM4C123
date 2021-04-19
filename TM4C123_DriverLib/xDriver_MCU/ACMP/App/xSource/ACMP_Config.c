/**
 *
 * @file ACMP_Config.c
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
#include <xDriver_MCU/ACMP/App/xHeader/ACMP_Config.h>

#include <xDriver_MCU/ACMP/App/xHeader/ACMP_ADCTriggerConfig.h>
#include <xDriver_MCU/ACMP/App/xHeader/ACMP_InterruptConfig.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Driver/ACMP_Driver.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>

#define ACMP_CPLINE (0UL)
#define ACMP_CMLINE (1UL)

GPIO_nDIGITAL_FUNCTION ACMP_enGpioOutput[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX]=
{
    {
        GPIO_enC0o,
        GPIO_enC1o,
    },
};

GPIO_nANALOG_FUNCTION ACMP_enAnalogInput[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX][(uint32_t) 2UL] =
{
    {
        {GPIO_enC0P, GPIO_enC0M},
        {GPIO_enC1P, GPIO_enC1M},
    },
};

ACMP_nSTATUS ACMP__enSetConfig(ACMP_nMODULE enModule, ACMP_nCOMP enCompArg , const ACMP_CONTROL_TypeDef* pstControlConfig)
{
    ACMP_nSTATUS enReturn = ACMP_enSTATUS_ERROR;
    ACMP_nMODULE enModuleFilter = ACMP_enMODULE_0;
    ACMP_nCOMP enCompFilter = ACMP_enCOMP_0;
    ACMP_nCOMPMASK enCompMask = ACMP_enCOMPMASK_0;
    uint32_t u32CompMask = 1UL;

    if((0UL != (uint32_t) pstControlConfig))
    {
        enModuleFilter = (ACMP_nMODULE) MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);
        enCompFilter = (ACMP_nCOMP) MCU__u32CheckParams((uint32_t) enCompArg, (uint32_t) ACMP_enCOMP_MAX);

        GPIO__vSetAnalogFunction(ACMP_enAnalogInput[(uint32_t) enModuleFilter][(uint32_t) ACMP_enCOMP_0][ACMP_CMLINE]);
        switch(pstControlConfig->enVmaxSource)
        {
            case ACMP_enVMAX_SOURCE_CN:
                GPIO__vSetAnalogFunction(ACMP_enAnalogInput[(uint32_t) enModuleFilter][(uint32_t) enCompFilter][ACMP_CPLINE]);
                break;
            case ACMP_enVMAX_SOURCE_C0:
                GPIO__vSetAnalogFunction(ACMP_enAnalogInput[(uint32_t) enModuleFilter][(uint32_t) ACMP_enCOMP_0][ACMP_CPLINE]);
                break;
            case ACMP_enVMAX_SOURCE_VIREF:
                break;
            default:
            break;
        }

        if(ACMP_enOUTPUT_ENA == pstControlConfig->enOutputEnable)
        {
            GPIO__enSetDigitalConfig(ACMP_enGpioOutput[(uint32_t) enModuleFilter][(uint32_t) enCompFilter], GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
        }


        ACMP__vSetComparatorVmaxSource(enModuleFilter, enCompFilter, pstControlConfig->enVmaxSource);
        ACMP__vSetComparatorOutputInvert(enModuleFilter, enCompFilter, pstControlConfig->enOutputInvert);
        ACMP__vSetADCTriggerConfig(enModuleFilter, enCompFilter, pstControlConfig->enADCConfig);
        ACMP__vSetInterruptConfig(enModuleFilter, enCompFilter, pstControlConfig->enIntConfig);

        ACMP__vSetComparatorADCTrigger(enModuleFilter, enCompFilter, pstControlConfig->enADCEnable);

        u32CompMask <<= (uint32_t) enCompFilter;
        if(ACMP_enINT_ENA == pstControlConfig->enIntEnable)
        {
            ACMP__vEnInterruptSource(enModuleFilter, enCompMask);
        }
        else
        {
            ACMP__vDisInterruptSource(enModuleFilter, enCompMask);
        }
        enReturn = ACMP_enSTATUS_OK;
    }
    return enReturn;
}




