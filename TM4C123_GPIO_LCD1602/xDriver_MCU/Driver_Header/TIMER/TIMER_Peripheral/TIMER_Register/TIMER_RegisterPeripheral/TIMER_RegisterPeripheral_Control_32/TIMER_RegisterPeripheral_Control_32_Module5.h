/**
 *
 * @file TIMER_RegisterPeripheral_Control_32_Module5.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_32_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE5_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_32_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE5_H_

#include <xDriver_MCU/Driver_Header/TIMER/TIMER_Peripheral/TIMER_Struct/TIMER_StructPeripheral/TIMER_StructPeripheral_Control_32.h>

#define GPTM5_CTL                (((GPTM_CTL_TypeDef*)(GPTM5_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM5_CTL_GPTMCFG               (((GPTMCFG_TypeDef*)(GPTM5_BASE + GPTM_CTL_GPTMCFG_OFFSET )))
#define GPTM5_CTL_GPTMCFG_R             (*((volatile uint32_t *)(GPTM5_BASE +GPTM_CTL_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/
#define GPTM5_CTL_GPTMPP               (((GPTMPP_TypeDef*)(GPTM5_BASE + GPTM_CTL_GPTMPP_OFFSET )))
#define GPTM5_CTL_GPTMPP_R             (*((volatile uint32_t *)(GPTM5_BASE +GPTM_CTL_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_32_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE5_H_ */
