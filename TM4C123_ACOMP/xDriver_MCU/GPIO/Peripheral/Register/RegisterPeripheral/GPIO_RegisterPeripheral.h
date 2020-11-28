/**
 *
 * @file GPIO_RegisterPeripheral.h
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
 * @verbatim 25 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/GPIO_RegisterPeripheral_AHB.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/GPIO_RegisterPeripheral_APB.h>

extern GPIO_TypeDef *GPIO_BLOCK[(uint32_t) GPIO_enBUS_MAX + 1u][(uint32_t) GPIO_enPORT_MAX
        + 1u];
extern GPIO_AUX_TypeDef *GPIO_AUX_BLOCK[(uint32_t) GPIO_enBUS_MAX + 1u][(uint32_t) GPIO_enPORT_MAX
        + 1u];

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_H_ */
