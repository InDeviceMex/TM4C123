/**
 *
 * @file TIMER_RegisterDefines_Control_64_PP.h
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
 * Date           Author     Version     Description
 * 9 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_64_TIMER_REGISTERDEFINES_CONTROL_64_PP_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_64_TIMER_REGISTERDEFINES_CONTROL_64_PP_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 27 GPTMPP *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_CTL_GPTMPP_R_SIZE_MASK    ((uint32_t)0x0000000FU)
#define GPWTM_CTL_GPTMPP_R_SIZE_BIT     (0U)
#define GPWTM_CTL_GPTMPP_R_SIZE_16b     ((uint32_t)0x00000000U)
#define GPWTM_CTL_GPTMPP_R_SIZE_32b     ((uint32_t)0x00000001U)

#define GPWTM_CTL_GPTMPP_SIZE_MASK      ((uint32_t)0x0000000FU)
#define GPWTM_CTL_GPTMPP_SIZE_BOTH      ((uint32_t)0x00000000U)
#define GPWTM_CTL_GPTMPP_SIZE_16b       ((uint32_t)0x00000000U)
#define GPWTM_CTL_GPTMPP_SIZE_32b       ((uint32_t)0x00000001U)
/*----------*/



#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_CONTROL_64_TIMER_REGISTERDEFINES_CONTROL_64_PP_H_ */
