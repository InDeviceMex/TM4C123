/**
 *
 * @file ADC_ClockConfig.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_ClockConfig.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetClockConfig(ADC_nMODULE enModule, ADC_nCLOCK enClock)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_ADCCC_OFFSET, (uint32_t) enClock, ADC_ADCCC_CS_MASK, ADC_ADCCC_R_CS_BIT);
}

ADC_nCLOCK ADC__enGetClockConfig(ADC_nMODULE enModule)
{
    return (ADC_nCLOCK) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCCC_OFFSET, ADC_ADCCC_CS_MASK, ADC_ADCCC_R_CS_BIT);
}

ADC_nCLOCK ADC__enGetMaxClockConfig(ADC_nMODULE enModule)
{
    return (ADC_nCLOCK) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCPP_OFFSET, ADC_ADCPP_MSR_MASK, ADC_ADCPP_R_MSR_BIT);
}
