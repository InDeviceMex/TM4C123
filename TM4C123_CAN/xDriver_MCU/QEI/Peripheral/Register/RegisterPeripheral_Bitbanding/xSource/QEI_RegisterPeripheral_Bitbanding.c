/**
 *
 * @file QEI_RegisterPeripheral_Bitbanding.c
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
 * @verbatim Apr 5, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 5, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Peripheral/Register/RegisterPeripheral_Bitbanding/QEI_RegisterPeripheral_Bitbanding.h>

QEI_BITBANDING_TypeDef* QEI_BITBANDING_BLOCK[(uint32_t) QEI_enMODULE_MAX] = {QEI0_BITBANDING, QEI1_BITBANDING};




