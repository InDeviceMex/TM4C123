/**
 *
 * @file GPIO_RegisterPeripheral_AHB.c
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

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/GPIO_RegisterPeripheral_AHB.h>

GPIO_TypeDef* GPIO_AHB_BLOCK[6]={GPIOA_AHB,GPIOB_AHB,GPIOC_AHB,GPIOD_AHB,GPIOE_AHB,GPIOF_AHB};
GPIO_AUX_TypeDef* GPIO_AHB_AUX_BLOCK[6]={GPIOA_AHB_AUX,GPIOB_AHB_AUX,GPIOC_AHB_AUX,GPIOD_AHB_AUX,GPIOE_AHB_AUX,GPIOF_AHB_AUX};


