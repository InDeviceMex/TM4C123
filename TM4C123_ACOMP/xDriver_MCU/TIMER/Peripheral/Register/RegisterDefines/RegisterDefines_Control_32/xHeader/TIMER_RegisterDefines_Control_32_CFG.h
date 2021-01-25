/**
 *
 * @file TIMER_RegisterDefines_Control_32_CFG.h
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
 * @verbatim 5 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_CFG_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_CFG_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_CTL_GPTMCFG_R_GPTMCFG_MASK     ((uint32_t)0x00000007U)
#define GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT      (0U)
#define GPTM_CTL_GPTMCFG_R_GPTMCFG_BOTH     ((uint32_t)0x00000000U)
#define GPTM_CTL_GPTMCFG_R_GPTMCFG_RTC      ((uint32_t)0x00000001U)
#define GPTM_CTL_GPTMCFG_R_GPTMCFG_SINGLE   ((uint32_t)0x00000004U)

#define GPTM_CTL_GPTMCFG_GPTMCFG_MASK       ((uint32_t)0x00000007U)
#define GPTM_CTL_GPTMCFG_GPTMCFG_BOTH       ((uint32_t)0x00000000U)
#define GPTM_CTL_GPTMCFG_GPTMCFG_RTC        ((uint32_t)0x00000001U)
#define GPTM_CTL_GPTMCFG_GPTMCFG_SINGLE     ((uint32_t)0x00000004U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_32_CFG_H_ */
