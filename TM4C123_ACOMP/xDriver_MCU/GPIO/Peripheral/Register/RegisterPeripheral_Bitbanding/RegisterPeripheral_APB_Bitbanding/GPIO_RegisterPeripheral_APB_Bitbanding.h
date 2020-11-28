/**
 *
 * @file GPIO_RegisterPeripheral_APB_Bitbanding.h
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
 * @verbatim 29 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_H_

#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/xHeader/GPIO_RegisterPeripheral_APB_Bitbanding_ModuleA.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/xHeader/GPIO_RegisterPeripheral_APB_Bitbanding_ModuleB.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/xHeader/GPIO_RegisterPeripheral_APB_Bitbanding_ModuleC.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/xHeader/GPIO_RegisterPeripheral_APB_Bitbanding_ModuleD.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/xHeader/GPIO_RegisterPeripheral_APB_Bitbanding_ModuleE.h>
#include <xDriver_MCU/GPIO/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_APB_Bitbanding/xHeader/GPIO_RegisterPeripheral_APB_Bitbanding_ModuleF.h>

#define GPIO_APB_BITBANDING        (((GPIO_APB_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_APB_OFFSET*32u))))
#define GPIO_APB_AUX_BITBANDING    (((GPIO_APB_AUX_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_APB_OFFSET*32u))))

extern GPIO_BITBANDING_TypeDef *GPIO_APB_BITBANDING_BLOCK[6];
extern GPIO_AUX_BITBANDING_TypeDef *GPIO_APB_AUX_BITBANDING_BLOCK[6];

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_REGISTER_GPIO_REGISTERPERIPHERAL_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_GPIO_REGISTERPERIPHERAL_APB_BITBANDING_H_ */
