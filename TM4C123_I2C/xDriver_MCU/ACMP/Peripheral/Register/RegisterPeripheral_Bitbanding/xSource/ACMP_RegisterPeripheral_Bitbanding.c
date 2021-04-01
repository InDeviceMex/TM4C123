/**
 *
 * @file ACMP_RegisterPeripheral_Bitbanding.c
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
 * @verbatim Mar 31, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 31, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Peripheral/Register/RegisterPeripheral_Bitbanding/ACMP_RegisterPeripheral_Bitbanding.h>

ACMP_BITBANDING_TypeDef* ACMP_BITBANDING_BLOCK[(uint32_t) ACMP_enMODULE_MAX] = {ACMP0_BITBANDING};
