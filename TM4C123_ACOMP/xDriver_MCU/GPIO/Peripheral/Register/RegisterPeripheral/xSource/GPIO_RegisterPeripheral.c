/**
 *
 * @file GPIO_RegisterPeripheral.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/GPIO_RegisterPeripheral.h>

GPIO_TypeDef *GPIO_BLOCK[(uint32_t) GPIO_enBUS_MAX + 1U][(uint32_t) GPIO_enPORT_MAX
        + 1U] = { { GPIOA_APB, GPIOB_APB, GPIOC_APB, GPIOD_APB, GPIOE_APB,
                    GPIOF_APB },
                  { GPIOA_AHB, GPIOB_AHB, GPIOC_AHB, GPIOD_AHB, GPIOE_AHB,
                    GPIOF_AHB } };
GPIO_AUX_TypeDef *GPIO_AUX_BLOCK[(uint32_t) GPIO_enBUS_MAX + 1U][(uint32_t) GPIO_enPORT_MAX
        + 1U] = { { GPIOA_APB_AUX, GPIOB_APB_AUX, GPIOC_APB_AUX, GPIOD_APB_AUX,
                    GPIOE_APB_AUX, GPIOF_APB_AUX },
                  { GPIOA_AHB_AUX, GPIOB_AHB_AUX, GPIOC_AHB_AUX, GPIOD_AHB_AUX,
                    GPIOE_AHB_AUX, GPIOF_AHB_AUX } };

