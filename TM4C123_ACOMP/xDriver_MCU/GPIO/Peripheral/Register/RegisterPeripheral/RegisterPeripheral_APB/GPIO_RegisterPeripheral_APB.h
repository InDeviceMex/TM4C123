/**
 *
 * @file GPIO_RegisterPeripheral_APB.h
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
 * @verbatim 26 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/xHeader/GPIO_RegisterPeripheral_APB_ModuleA.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/xHeader/GPIO_RegisterPeripheral_APB_ModuleB.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/xHeader/GPIO_RegisterPeripheral_APB_ModuleC.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/xHeader/GPIO_RegisterPeripheral_APB_ModuleD.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/xHeader/GPIO_RegisterPeripheral_APB_ModuleE.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_APB/xHeader/GPIO_RegisterPeripheral_APB_ModuleF.h>

#define GPIO_APB                (((GPIO_APB_TypeDef*)(GPIO_APB_BASE)))
#define GPIO_APB_AUX            (((GPIO_APB_AUX_TypeDef*)(GPIO_APB_BASE)))

extern GPIO_TypeDef *GPIO_APB_BLOCK[6];
extern GPIO_AUX_TypeDef *GPIO_APB_AUX_BLOCK[6];

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_APB_GPIO_REGISTERPERIPHERAL_APB_H_ */
