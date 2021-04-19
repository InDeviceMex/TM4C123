/**
 *
 * @file SSI_RegisterPeripheral_Bitbanding.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Peripheral/Register/RegisterPeripheral_Bitbanding/SSI_RegisterPeripheral_Bitbanding.h>

SSI_BITBANDING_TypeDef *SSI_BITBANDING_BLOCK[(uint32_t) SSI_enMODULE_MAX] =
{ SSI0_BITBANDING,
SSI1_BITBANDING,
SSI2_BITBANDING,
SSI3_BITBANDING,
};
