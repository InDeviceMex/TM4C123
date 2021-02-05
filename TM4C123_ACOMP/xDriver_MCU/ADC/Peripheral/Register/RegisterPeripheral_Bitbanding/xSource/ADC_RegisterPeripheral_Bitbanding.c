/**
 *
 * @file ADC_RegisterPeripheral_Bitbanding.c
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
 * @verbatim 15 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/ADC/Peripheral/Register/RegisterPeripheral_Bitbanding/ADC_RegisterPeripheral_Bitbanding.h>

ADC_BITBANDING_TypeDef* ADC_BITBANDING_BLOCK[(uint32_t) ADC_enMODULE_MAX+1U] = {ADC0_BITBANDING, ADC1_BITBANDING};


