/**
 *
 * @file WDT_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/WDT/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/WDT_RegisterPeripheral_Bitbanding_Module0.h>
#include <xDriver_MCU/WDT/Peripheral/Register/RegisterPeripheral_Bitbanding/xHeader/WDT_RegisterPeripheral_Bitbanding_Module1.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

#define WDT_BITBANDING    (((WDT_BITBANDING_TypeDef*) (WDT_BITBANDING_BASE+(WDT_OFFSET*32U))))

extern WDT_BITBANDING_TypeDef* WDT_BITBANDING_BLOCK[(uint32_t) WDT_enMODULE_MAX+1U];

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_BITBANDING_WDT_REGISTERPERIPHERAL_BITBANDING_H_ */
