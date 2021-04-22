/**
 *
 * @file TIMER_RegisterDefines_ModuleB_32_IMR.h
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
 * @verbatim 6 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_IMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 IMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TB_TnIMR_R_TnTOIM_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_TB_TnIMR_R_TnTOIM_BIT    (8UL)
#define GPWTM_TB_TnIMR_R_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_R_TnTOIM_EN    ((uint32_t) 0x00000100UL)

#define GPWTM_TB_TnIMR_TnTOIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnIMR_TnTOIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_TnTOIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_TnIMR_R_CnMIM_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_TB_TnIMR_R_CnMIM_BIT    (9UL)
#define GPWTM_TB_TnIMR_R_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_R_CnMIM_EN    ((uint32_t) 0x00000200UL)

#define GPWTM_TB_TnIMR_CnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnIMR_CnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_CnMIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_TnIMR_R_CnEIM_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_TB_TnIMR_R_CnEIM_BIT    (10UL)
#define GPWTM_TB_TnIMR_R_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_R_CnEIM_EN    ((uint32_t) 0x00000400UL)

#define GPWTM_TB_TnIMR_CnEIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnIMR_CnEIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_CnEIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_TB_TnIMR_R_TnMIM_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_TB_TnIMR_R_TnMIM_BIT    (11UL)
#define GPWTM_TB_TnIMR_R_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_R_TnMIM_EN    ((uint32_t) 0x00000800UL)

#define GPWTM_TB_TnIMR_TnMIM_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_TB_TnIMR_TnMIM_DIS    ((uint32_t) 0x00000000UL)
#define GPWTM_TB_TnIMR_TnMIM_EN    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_IMR_H_ */
