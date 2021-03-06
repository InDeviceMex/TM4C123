/**
 *
 * @file TIMER_RegisterDefines_Standard_64_CFG.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CFG_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CFG_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 1 GPTMCFG *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMCFG_R_GPTMCFG_MASK    ((uint32_t) 0x00000007UL)
#define GPWTM_GPTMCFG_R_GPTMCFG_BIT    (0UL)
#define GPWTM_GPTMCFG_R_GPTMCFG_BOTH    ((uint32_t) 0x00000000UL)
#define GPWTM_GPTMCFG_R_GPTMCFG_RTC    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMCFG_R_GPTMCFG_SINGLE    ((uint32_t) 0x00000004UL)

#define GPWTM_GPTMCFG_GPTMCFG_MASK    ((uint32_t) 0x00000007UL)
#define GPWTM_GPTMCFG_GPTMCFG_BOTH    ((uint32_t) 0x00000000UL)
#define GPWTM_GPTMCFG_GPTMCFG_RTC    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMCFG_GPTMCFG_SINGLE    ((uint32_t) 0x00000004UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_CFG_H_ */
