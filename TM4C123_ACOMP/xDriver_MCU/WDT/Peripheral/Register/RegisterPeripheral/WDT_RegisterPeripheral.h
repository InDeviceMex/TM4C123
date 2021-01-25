/**
 *
 * @file WDT_RegisterPeripheral.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/WDT/Peripheral/Register/RegisterPeripheral/xHeader/WDT_RegisterPeripheral_Module0.h>
#include <xDriver_MCU/WDT/Peripheral/Register/RegisterPeripheral/xHeader/WDT_RegisterPeripheral_Module1.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

#define WDT               (((WDTS_TypeDef*)(WDT_BASE)))

extern WDT_TypeDef* WDT_BLOCK[(uint32_t)WDT_enMODULE_MAX+1U];
extern uint32_t WDT_BLOCK_ADDRESS[(uint32_t)WDT_enMODULE_MAX+1U];

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_REGISTER_WDT_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_H_ */
