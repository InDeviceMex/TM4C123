/**
 *
 * @file ADC_Dither.c
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
#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_Dither.h>

#include <xDriver_MCU/ADC/Driver/General/xHeader/ADC_GeneralGeneric.h>
#include <xDriver_MCU/ADC/Peripheral/ADC_Peripheral.h>

void ADC__vSetDither(ADC_nMODULE enModule, ADC_nDITHER enDither)
{
    ADC__vSetGeneralGeneric((uint32_t) enModule, ADC_CTL_OFFSET, (uint32_t) enDither, ADC_CTL_DITHER_MASK, ADC_CTL_R_DITHER_BIT);
}

ADC_nDITHER ADC__enGetDither(ADC_nMODULE enModule)
{
    return (ADC_nDITHER) ADC__u32GetGeneralGeneric((uint32_t) enModule, ADC_CTL_OFFSET, ADC_CTL_DITHER_MASK, ADC_CTL_R_DITHER_BIT);
}
