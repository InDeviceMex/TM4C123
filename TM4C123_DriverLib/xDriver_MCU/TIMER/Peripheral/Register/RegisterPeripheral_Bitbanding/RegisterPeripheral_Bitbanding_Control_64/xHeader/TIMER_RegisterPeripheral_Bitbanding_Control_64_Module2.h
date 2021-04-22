/**
 *
 * @file TIMER_RegisterPeripheral_Bitbanding_Control_64_Module2.h
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
 * @verbatim 9 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE2_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE2_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterDefines/TIMER_RegisterDefines.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral_Bitbanding/xHeader/TIMER_StructPeripheral_Bitbanding_Control_64.h>

#define GPWTM2_BITBANDING_CTL    ((GPWTM_BITBANDING_CTL_TypeDef*) (GPWTM_BITBANDING_BASE + (GPWTM2_OFFSET * 32UL)))

/******************************************************************************************
*********************************** * 1 CFG *********************************************
******************************************************************************************/
#define GPWTM2_BITBANDING_CTL_CFG    ((BITBANDING_GPTMCFG_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM2_OFFSET + GPWTM_CTL_CFG_OFFSET) * 32UL)))

/******************************************************************************************
*********************************** * 27 PP *********************************************
******************************************************************************************/
#define GPWTM2_BITBANDING_CTL_PP    ((BITBANDING_GPTMPP_TypeDef*) (GPWTM_BITBANDING_BASE + ((GPWTM2_OFFSET + GPWTM_CTL_PP_OFFSET) * 32UL)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_BITBANDING_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_TIMER_REGISTERPERIPHERAL_BITBANDING_CONTROL_64_MODULE2_H_ */
