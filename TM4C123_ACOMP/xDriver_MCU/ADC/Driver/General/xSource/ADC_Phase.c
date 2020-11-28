/**
 *
 * @file ADC_Phase.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Phase.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>

void ADC__vSetPhase(ADC_nMODULE enModule,ADC_nPHASE enPhase)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule,ADC_ADCSPC_OFFSET, (uint32_t) enPhase, ADC_ADCSPC_PHASE_MASK, ADC_ADCSPC_R_PHASE_BIT);
}

ADC_nPHASE ADC__enGetPhase(ADC_nMODULE enModule)
{
    return (ADC_nPHASE) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCSPC_OFFSET, ADC_ADCSPC_PHASE_MASK, ADC_ADCSPC_R_PHASE_BIT);
}


