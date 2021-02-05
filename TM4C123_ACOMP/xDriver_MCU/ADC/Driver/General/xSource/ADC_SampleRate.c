/**
 *
 * @file ADC_SampleRate.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_SampleRate.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetSampleRate(ADC_nMODULE enModule, ADC_nSAMPLE_RATE enSample)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_ADCPC_OFFSET, (uint32_t) enSample, ADC_ADCPC_SR_MASK, ADC_ADCPC_R_SR_BIT);
}

ADC_nSAMPLE_RATE ADC__enGetSampleRate(ADC_nMODULE enModule)
{
    return (ADC_nSAMPLE_RATE) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCPC_OFFSET, ADC_ADCPC_SR_MASK, ADC_ADCPC_R_SR_BIT);
}


