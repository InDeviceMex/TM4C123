/**
 *
 * @file GPIO_RegisterPeripheral_APB.c
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
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/GPIO_RegisterPeripheral_APB.h>

GPIO_TypeDef *GPIO_BLOCK[(uint32_t) GPIO_enPORT_MAX ] = { GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF };

GPIO_AUX_TypeDef *GPIO_AUX_BLOCK[(uint32_t) GPIO_enPORT_MAX] = { GPIOA_AUX, GPIOB_AUX, GPIOC_AUX, GPIOD_AUX, GPIOE_AUX, GPIOF_AUX };
