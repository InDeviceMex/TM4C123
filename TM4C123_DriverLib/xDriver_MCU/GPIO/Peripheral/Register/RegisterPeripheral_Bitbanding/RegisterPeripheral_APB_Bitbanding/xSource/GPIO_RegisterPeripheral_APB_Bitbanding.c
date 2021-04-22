/**
 *
 * @file GPIO_RegisterPeripheral_APB_Bitbanding.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/GPIO_RegisterPeripheral_APB_Bitbanding.h>

GPIO_BITBANDING_TypeDef* GPIO_BITBANDING_BLOCK[(uint32_t) GPIO_enPORT_MAX] =
{ GPIOA_BITBANDING, GPIOB_BITBANDING, GPIOC_BITBANDING, GPIOD_BITBANDING, GPIOE_BITBANDING, GPIOF_BITBANDING };

GPIO_AUX_BITBANDING_TypeDef* GPIO_AUX_BITBANDING_BLOCK[(uint32_t) GPIO_enPORT_MAX] =
{ GPIOA_AUX_BITBANDING, GPIOB_AUX_BITBANDING, GPIOC_AUX_BITBANDING, GPIOD_AUX_BITBANDING, GPIOE_AUX_BITBANDING, GPIOF_AUX_BITBANDING };
