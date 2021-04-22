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
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/GPIO_RegisterPeripheral.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

GPIO_TypeDef *GPIO_M_BLOCK[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX] =
{
     { GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF },
     { GPIOA_AHB, GPIOB_AHB, GPIOC_AHB, GPIOD_AHB, GPIOE_AHB, GPIOF_AHB}
};

GPIO_AUX_TypeDef *GPIO_M_AUX_BLOCK[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX] =
{
     { GPIOA_AUX, GPIOB_AUX, GPIOC_AUX, GPIOD_AUX, GPIOE_AUX, GPIOF_AUX },
     { GPIOA_AHB_AUX, GPIOB_AHB_AUX, GPIOC_AHB_AUX, GPIOD_AHB_AUX, GPIOE_AHB_AUX, GPIOF_AHB_AUX}
};

uint32_t GPIO_M_BLOCK_BASE[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX] =
{
     { GPIOA_BASE, GPIOB_BASE, GPIOC_BASE, GPIOD_BASE, GPIOE_BASE, GPIOF_BASE },
     { GPIOA_AHB_BASE, GPIOB_AHB_BASE, GPIOC_AHB_BASE, GPIOD_AHB_BASE, GPIOE_AHB_BASE, GPIOF_AHB_BASE}
};

