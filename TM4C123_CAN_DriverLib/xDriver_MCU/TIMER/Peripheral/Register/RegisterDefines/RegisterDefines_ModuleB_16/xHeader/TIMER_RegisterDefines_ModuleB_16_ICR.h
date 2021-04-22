/**
 *
 * @file TIMER_RegisterDefines_ModuleB_16_ICR.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_ICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 ICR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_TnICR_R_TnTOCINT_MASK    ((uint32_t) 0x00000100UL)
#define GPTM_TB_TnICR_R_TnTOCINT_BIT    (8UL)
#define GPTM_TB_TnICR_R_TnTOCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_R_TnTOCINT_EN    ((uint32_t) 0x00000100UL)

#define GPTM_TB_TnICR_TnTOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnICR_TnTOCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_TnTOCINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnICR_R_CnMCINT_MASK    ((uint32_t) 0x00000200UL)
#define GPTM_TB_TnICR_R_CnMCINT_BIT    (9UL)
#define GPTM_TB_TnICR_R_CnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_R_CnMCINT_EN    ((uint32_t) 0x00000200UL)

#define GPTM_TB_TnICR_CnMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnICR_CnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_CnMCINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnICR_R_CnECINT_MASK    ((uint32_t) 0x00000400UL)
#define GPTM_TB_TnICR_R_CnECINT_BIT    (10UL)
#define GPTM_TB_TnICR_R_CnECINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_R_CnECINT_EN    ((uint32_t) 0x00000400UL)

#define GPTM_TB_TnICR_CnECINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnICR_CnECINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_CnECINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPTM_TB_TnICR_R_TnMCINT_MASK    ((uint32_t) 0x00000800UL)
#define GPTM_TB_TnICR_R_TnMCINT_BIT    (11UL)
#define GPTM_TB_TnICR_R_TnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_R_TnMCINT_EN    ((uint32_t) 0x00000800UL)

#define GPTM_TB_TnICR_TnMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPTM_TB_TnICR_TnMCINT_DIS    ((uint32_t) 0x00000000UL)
#define GPTM_TB_TnICR_TnMCINT_EN    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_ICR_H_ */
