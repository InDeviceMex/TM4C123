/**
 *
 * @file GPIO_RegisterPeripheral_Bitbanding.c
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
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_Bitbanding.h>

#include <xUtils/Standard/Standard.h>

GPIO_BITBANDING_TypeDef *GPIO_M_BITBANDING_BLOCK[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX] =
{
     { GPIOA_BITBANDING, GPIOB_BITBANDING, GPIOC_BITBANDING, GPIOD_BITBANDING, GPIOE_BITBANDING, GPIOF_BITBANDING },
     { GPIOA_AHB_BITBANDING, GPIOB_AHB_BITBANDING, GPIOC_AHB_BITBANDING, GPIOD_AHB_BITBANDING, GPIOE_AHB_BITBANDING, GPIOF_AHB_BITBANDING }
};

GPIO_AUX_BITBANDING_TypeDef *GPIO_M_AUX_BITBANDING_BLOCK[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX] =
{
     { GPIOA_AUX_BITBANDING, GPIOB_AUX_BITBANDING, GPIOC_AUX_BITBANDING, GPIOD_AUX_BITBANDING, GPIOE_AUX_BITBANDING, GPIOF_AUX_BITBANDING },
     { GPIOA_AHB_AUX_BITBANDING, GPIOB_AHB_AUX_BITBANDING, GPIOC_AHB_AUX_BITBANDING, GPIOD_AHB_AUX_BITBANDING, GPIOE_AHB_AUX_BITBANDING, GPIOF_AHB_AUX_BITBANDING }
};
