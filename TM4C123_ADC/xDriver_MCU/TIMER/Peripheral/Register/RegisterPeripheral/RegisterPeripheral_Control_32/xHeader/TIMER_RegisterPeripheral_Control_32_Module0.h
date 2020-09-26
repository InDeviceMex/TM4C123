/**
 *
 * @file TIMER_RegisterPeripheral_Control_32_Module0.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_32_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE0_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_32_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE0_H_

#include <xDriver_MCU/TIMER/Peripheral/Register/RegisterAddress/TIMER_RegisterAddress.h>
#include <xDriver_MCU/TIMER/Peripheral/Struct/StructPeripheral/xHeader/TIMER_StructPeripheral_Control_32.h>

#define GPTM0_CTL                (((GPTM_CTL_TypeDef*)(GPTM0_BASE)))

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/
#define GPTM0_CTL_GPTMCFG               (((GPTMCFG_TypeDef*)(GPTM0_BASE + GPTM_CTL_GPTMCFG_OFFSET )))
#define GPTM0_CTL_GPTMCFG_R             (*((volatile uint32_t *)(GPTM0_BASE +GPTM_CTL_GPTMCFG_OFFSET)))

/******************************************************************************************
************************************ 5 GPTMSYNC *********************************************
******************************************************************************************/

#define GPTM0_CTL_GPTMSYNC                  (((GPTMSYNC_TypeDef*)(GPTM0_BASE + GPTM_CTL_GPTMSYNC_OFFSET )))
#define GPTM0_CTL_GPTMSYNC_R                (*((volatile uint32_t *)(GPTM0_BASE +GPTM_CTL_GPTMSYNC_OFFSET)))

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/

#define GPTM0_CTL_GPTMPP               (((GPTMPP_TypeDef*)(GPTM0_BASE + GPTM_CTL_GPTMPP_OFFSET )))
#define GPTM0_CTL_GPTMPP_R             (*((volatile uint32_t *)(GPTM0_BASE +GPTM_CTL_GPTMPP_OFFSET)))

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERPERIPHERAL_TIMER_REGISTERPERIPHERAL_CONTROL_32_TIMER_REGISTERPERIPHERAL_CONTROL_32_MODULE0_H_ */
