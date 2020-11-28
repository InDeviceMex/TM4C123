/**
 *
 * @file ADC_Sample_Direction.c
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
 * @verbatim 24 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Generic.h>
#include <xDriver_MCU/ADC/Driver/Sample/xHeader/ADC_Sample_Direction.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>


void ADC__vSetSampleDirection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux, ADC_nSEQ_INPUT_DIR enSampleDirection)
{
    ADC__vSetSampleGeneric((uint32_t) enModule, (uint32_t)  enSequencer, ADC_ADCSSOP_OFFSET, (uint32_t) enMux, (uint32_t) enSampleDirection,ADC_ADCSSOP_S0DCOP_MASK, ADC_ADCSSOP_R_S0DCOP_BIT);

}

ADC_nSEQ_INPUT_DIR ADC__enGetSampleDirection(ADC_nMODULE enModule, ADC_nSEQUENCER enSequencer, ADC_nMUX enMux)
{
    return (ADC_nSEQ_INPUT_DIR) ADC__u32GetSampleGeneric((uint32_t) enModule, (uint32_t)  enSequencer, ADC_ADCSSOP_OFFSET, (uint32_t) enMux, ADC_ADCSSOP_S0DCOP_MASK, ADC_ADCSSOP_R_S0DCOP_BIT);
}


