/**
 *
 * @file GPIO_RegisterPeripheral_AHB.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/xHeader/GPIO_RegisterPeripheral_AHB_ModuleA.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/xHeader/GPIO_RegisterPeripheral_AHB_ModuleB.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/xHeader/GPIO_RegisterPeripheral_AHB_ModuleC.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/xHeader/GPIO_RegisterPeripheral_AHB_ModuleD.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/xHeader/GPIO_RegisterPeripheral_AHB_ModuleE.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral/RegisterPeripheral_AHB/xHeader/GPIO_RegisterPeripheral_AHB_ModuleF.h>

#define GPIO_AHB                (((GPIO_AHB_TypeDef*)(GPIO_AHB_BASE)))
#define GPIO_AHB_AUX            (((GPIO_AHB_AUX_TypeDef*)(GPIO_AHB_BASE)))

extern GPIO_TypeDef*        GPIO_AHB_BLOCK[6];
extern GPIO_AUX_TypeDef*    GPIO_AHB_AUX_BLOCK[6];

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_GPIO_REGISTERPERIPHERAL_AHB_GPIO_REGISTERPERIPHERAL_AHB_H_ */
