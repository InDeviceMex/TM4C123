/**
 *
 * @file ADC_Sample_InputSelection.c
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
 * @verbatim 23 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_InputSelection.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetSampleInputSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_nSEQ_INPUT enSampleInputSelection)
{
    ADC__vSetSampleGeneric((uint32_t) enModule, (uint32_t)  enSequencer, ADC_ADCSSMUX_OFFSET, (uint32_t) enMux, (uint32_t) enSampleInputSelection, ADC_ADCSSMUX_MUX0_MASK, ADC_ADCSSMUX_R_MUX0_BIT);
}

ADC_nSEQ_INPUT ADC__enGetSampleInputSelection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux)
{
    return (ADC_nSEQ_INPUT) ADC__u32GetSampleGeneric((uint32_t) enModule, (uint32_t)  enSequencer, ADC_ADCSSMUX_OFFSET, (uint32_t) enMux, ADC_ADCSSMUX_MUX0_MASK, ADC_ADCSSMUX_R_MUX0_BIT);
}


