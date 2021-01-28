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

GPIO_TypeDef *GPIO_APB_BLOCK[(uint32_t) GPIO_enPORT_MAX ] = { GPIOA_APB,
                                                                  GPIOB_APB,
                                                                  GPIOC_APB,
                                                                  GPIOD_APB,
                                                                  GPIOE_APB,
                                                                  GPIOF_APB };
GPIO_AUX_TypeDef *GPIO_APB_AUX_BLOCK[(uint32_t) GPIO_enPORT_MAX] = {
        GPIOA_APB_AUX, GPIOB_APB_AUX, GPIOC_APB_AUX, GPIOD_APB_AUX,
        GPIOE_APB_AUX, GPIOF_APB_AUX };

