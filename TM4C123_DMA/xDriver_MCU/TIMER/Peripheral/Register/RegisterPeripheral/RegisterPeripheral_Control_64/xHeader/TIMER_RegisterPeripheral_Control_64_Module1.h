/**
 *
 * @file TIMER_RegisterPeripheral_Control_64_Module1.h
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
 * @verbatim 8 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_64_TIMER_REGISTERPERIPHERAL_CONTROL_64_MODULE1_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_64_TIMER_REGISTERPERIPHERAL_CONTROL_64_MODULE1_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_64.h>

#define GPWTM1_CTL                (((GPWTM_CTL_TypeDef*)(GPWTM1_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPWTM1_CTL_GPTMCFG              (((GPTMCFG_TypeDef*)(GPWTM1_BASE + GPWTM_CTL_GPTMCFG_OFFSET )))
#define GPWTM1_CTL_GPTMCFG_R            (*((volatile uint32_t *)(GPWTM1_BASE +GPWTM_CTL_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/

#define GPWTM1_CTL_GPTMPP              (((GPTMPP_TypeDef*)(GPWTM1_BASE + GPWTM_CTL_GPTMPP_OFFSET )))
#define GPWTM1_CTL_GPTMPP_R            (*((volatile uint32_t *)(GPWTM1_BASE +GPWTM_CTL_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_64_TIMER_REGISTERPERIPHERAL_CONTROL_64_MODULE1_H_ */
