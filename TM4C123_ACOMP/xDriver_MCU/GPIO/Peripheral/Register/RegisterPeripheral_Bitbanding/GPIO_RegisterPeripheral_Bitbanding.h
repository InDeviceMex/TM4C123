/**
 *
 * @file GPIO_RegisterPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/GPIO_RegisterPeripheral_APB_Bitbanding.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

extern GPIO_BITBANDING_TypeDef *GPIO_BITBANDING_BLOCK[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX];
extern GPIO_AUX_BITBANDING_TypeDef *GPIO_AUX_BITBANDING_BLOCK[(uint32_t) GPIO_enBUS_MAX][(uint32_t) GPIO_enPORT_MAX];

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_BITBANDING_H_ */
