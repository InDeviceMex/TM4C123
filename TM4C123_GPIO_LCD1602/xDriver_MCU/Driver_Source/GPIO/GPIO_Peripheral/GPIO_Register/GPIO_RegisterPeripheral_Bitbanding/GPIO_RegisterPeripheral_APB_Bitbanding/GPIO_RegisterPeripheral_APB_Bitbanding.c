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

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_APB_Bitbanding/GPIO_RegisterPeripheral_APB_Bitbanding.h>

GPIO_BITBANDING_TypeDef* GPIO_APB_BITBANDING_BLOCK[6]={GPIOA_APB_BITBANDING,GPIOB_APB_BITBANDING,GPIOC_APB_BITBANDING,GPIOD_APB_BITBANDING,GPIOE_APB_BITBANDING,GPIOF_APB_BITBANDING};
GPIO_AUX_BITBANDING_TypeDef* GPIO_APB_AUX_BITBANDING_BLOCK[6]={GPIOA_APB_AUX_BITBANDING,GPIOB_APB_AUX_BITBANDING,GPIOC_APB_AUX_BITBANDING,GPIOD_APB_AUX_BITBANDING,GPIOE_APB_AUX_BITBANDING,GPIOF_APB_AUX_BITBANDING};


