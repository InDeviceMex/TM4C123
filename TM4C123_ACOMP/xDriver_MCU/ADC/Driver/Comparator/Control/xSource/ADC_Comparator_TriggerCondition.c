/**
 *
 * @file ADC_Comparator_TriggerCondition.c
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
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_Generic.h>
#include <xDriver_MCU/ADC/Driver/Comparator/Control/xHeader/ADC_Comparator_TriggerCondition.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>
#include <xDriver_MCU/ADC/Driver/Intrinsics/Primitives/ADC_Primitives.h>


void ADC__vSetCompTriggerCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp,  ADC_nCOMP_TRIGGER_COND enActCompTriggerCondition)
{
    ADC__vSetCompGenericControl((uint32_t) enModule, (uint32_t)  enActComp, (uint32_t) enActCompTriggerCondition,ADC_ADCDCCTL_CTC_MASK, ADC_ADCDCCTL_R_CTC_BIT);
}

ADC_nCOMP_TRIGGER_COND ADC__enGetCompTriggerCondition(ADC_nMODULE enModule, ADC_nCOMPARATOR enActComp)
{
    return (ADC_nCOMP_TRIGGER_COND) ADC__u32GetCompGenericControl((uint32_t) enModule, (uint32_t)  enActComp,ADC_ADCDCCTL_CTC_MASK, ADC_ADCDCCTL_R_CTC_BIT);
}


