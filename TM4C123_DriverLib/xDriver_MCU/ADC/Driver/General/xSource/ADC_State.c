/**
 *
 * @file ADC_State.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_State.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

ADC_nSTATE ADC__enGetState(ADC_nMODULE enModule)
{
    return (ADC_nSTATE) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_ADCACTSS_OFFSET, ADC_ADCACTSS_BUSY_MASK, ADC_ADCACTSS_R_BUSY_BIT);
}
