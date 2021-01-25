/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding.h
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
 * @verbatim 7 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/Peripheral/xHeader/TIMER_Enum.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/TIMER_StructPeripheral_Bitbanding.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Control_32/TIMER_RegisterPeripheral_Bitbanding_Control_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Control_64/TIMER_RegisterPeripheral_Bitbanding_Control_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleA_16/TIMER_RegisterPeripheral_Bitbanding_ModuleA_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleA_32/TIMER_RegisterPeripheral_Bitbanding_ModuleA_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleB_16/TIMER_RegisterPeripheral_Bitbanding_ModuleB_16.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleB_32/TIMER_RegisterPeripheral_Bitbanding_ModuleB_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleW_32/TIMER_RegisterPeripheral_Bitbanding_ModuleW_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_ModuleW_64/TIMER_RegisterPeripheral_Bitbanding_ModuleW_64.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Standard_32/TIMER_RegisterPeripheral_Bitbanding_Standard_32.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterPeripheral_Bitbanding/RegisterPeripheral_Bitbanding_Standard_64/TIMER_RegisterPeripheral_Bitbanding_Standard_64.h>


#define GPTM_BITBANDING          (((GPTM_BITBANDING_TypeDef*)(GPTM_BITBANDING_BASE+(GPTM_OFFSET*32U))))
#define GPTM_BITBANDING_UNION    (((GPTM_BITBANDING_UNION_TypeDef*)(GPTM_BITBANDING_BASE+(GPTM_OFFSET*32U))))


#define GPWTM_BITBANDING          (((GPWTMS_BITBANDING_TypeDef*)(GPWTM_BITBANDING_BASE+(GPWTM_OFFSET*32U))))
#define GPWTM_BITBANDING_UNION    (((GPWTM_BITBANDING_UNION_TypeDef*)(GPWTM_BITBANDING_BASE+(GPWTM_OFFSET*32U))))

extern GPTM_BITBANDING_TypeDef *TIMER_BITBANDING_BLOCK[(uint32_t)TIMER_enLETTER_MAX+1u][(uint32_t)TIMER_enMODULE_NUM_MAX+1u];


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_H_ */
