/**
 *
 * @file GPIO_RegisterPeripheral_AHB_Bitbanding.h
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
 * @verbatim 28 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_AHB_BITBANDING_GPIO_REGISTERPERIPHERAL_AHB_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_AHB_BITBANDING_GPIO_REGISTERPERIPHERAL_AHB_BITBANDING_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding_ModuleA.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding_ModuleB.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding_ModuleC.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding_ModuleD.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding_ModuleE.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Register/GPIO_RegisterPeripheral_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding/GPIO_RegisterPeripheral_AHB_Bitbanding_ModuleF.h>

#define GPIO_AHB_BITBANDING        (((GPIO_AHB_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_AHB_OFFSET*32u))))
#define GPIO_AHB_AUX_BITBANDING    (((GPIO_AHB_AUX_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_AHB_OFFSET*32u))))




#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_AHB_BITBANDING_GPIO_REGISTERPERIPHERAL_AHB_BITBANDING_H_ */
