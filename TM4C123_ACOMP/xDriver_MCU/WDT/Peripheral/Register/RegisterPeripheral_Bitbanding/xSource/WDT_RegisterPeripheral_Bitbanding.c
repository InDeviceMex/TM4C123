/**
 *
 * @file WDT_RegisterPeripheral_Bitbanding.c
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
 * @verbatim 25 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Peripheral/Register/RegisterPeripheral_Bitbanding/WDT_RegisterPeripheral_Bitbanding.h>

WDT_BITBANDING_TypeDef* WDT_BITBANDING_BLOCK[(uint32_t) WDT_enMODULE_MAX+1U] = {WDT0_BITBANDING, WDT1_BITBANDING};



