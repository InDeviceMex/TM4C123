/**
 *
 * @file TIMER_RegisterDefines_Control_64_GPTMCFG.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_64_GPTMCFG_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_64_GPTMCFG_H_

#include <stdint.h>

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_CTL_GPTMCFG_R_GPTMCFG_MASK    ((uint32_t)0x00000007u)
#define GPWTM_CTL_GPTMCFG_R_GPTMCFG_BIT     (0u)
#define GPWTM_CTL_GPTMCFG_R_GPTMCFG_BOTH    ((uint32_t)0x00000000u)
#define GPWTM_CTL_GPTMCFG_R_GPTMCFG_RTC     ((uint32_t)0x00000001u)
#define GPWTM_CTL_GPTMCFG_R_GPTMCFG_SINGLE  ((uint32_t)0x00000004u)

#define GPWTM_CTL_GPTMCFG_GPTMCFG_MASK      ((uint32_t)0x00000007u)
#define GPWTM_CTL_GPTMCFG_GPTMCFG_BOTH      ((uint32_t)0x00000000u)
#define GPWTM_CTL_GPTMCFG_GPTMCFG_RTC       ((uint32_t)0x00000001u)
#define GPWTM_CTL_GPTMCFG_GPTMCFG_SINGLE    ((uint32_t)0x00000004u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_32_TIMER_REGISTERDEFINES_CONTROL_64_GPTMCFG_H_ */
