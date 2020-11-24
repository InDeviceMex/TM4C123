/**
 *
 * @file ADC_Sequencer_Enable.c
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
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Generic.h>
#include <xDriver_MCU/ADC/Driver/Sequencer/xHeader/ADC_Sequencer_Enable.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetSequencerEnable(ADC_nMODULE enModule, ADC_nSEQMASK enSequence, ADC_nSEQ_ENABLE enSeqEnable)
{
    ADC__vSetSequencerGeneric((uint32_t) enModule,ADC_ADCACTSS_OFFSET, (uint32_t) enSequence, (uint32_t) enSeqEnable);
}

ADC_nSEQ_ENABLE ADC__enGetSequencerEnable(ADC_nMODULE enModule, ADC_nSEQMASK enSequence)
{
    return (ADC_nSEQ_ENABLE) (ADC__u32GetSequencerGeneric((uint32_t) enModule,ADC_ADCACTSS_OFFSET, (uint32_t) enSequence));
}
