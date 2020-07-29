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

#include <stdint.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_GPTMTnICR_R_TnTOCINT_MASK              ((uint32_t)0x00000100u)
#define GPTM_TB_GPTMTnICR_R_TnTOCINT_BIT               (8u)
#define GPTM_TB_GPTMTnICR_R_TnTOCINT_DIS               ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_R_TnTOCINT_EN                ((uint32_t)0x00000100u)

#define GPTM_TB_GPTMTnICR_TnTOCINT_MASK                ((uint32_t)0x00000001u)
#define GPTM_TB_GPTMTnICR_TnTOCINT_DIS                 ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_TnTOCINT_EN                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnICR_R_CnMCINT_MASK               ((uint32_t)0x00000200u)
#define GPTM_TB_GPTMTnICR_R_CnMCINT_BIT                (9u)
#define GPTM_TB_GPTMTnICR_R_CnMCINT_DIS                ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_R_CnMCINT_EN                 ((uint32_t)0x00000200u)

#define GPTM_TB_GPTMTnICR_CnMCINT_MASK                 ((uint32_t)0x00000001u)
#define GPTM_TB_GPTMTnICR_CnMCINT_DIS                  ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_CnMCINT_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnICR_R_CnECINT_MASK               ((uint32_t)0x00000400u)
#define GPTM_TB_GPTMTnICR_R_CnECINT_BIT                (10u)
#define GPTM_TB_GPTMTnICR_R_CnECINT_DIS                ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_R_CnECINT_EN                 ((uint32_t)0x00000400u)

#define GPTM_TB_GPTMTnICR_CnECINT_MASK                 ((uint32_t)0x00000001u)
#define GPTM_TB_GPTMTnICR_CnECINT_DIS                  ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_CnECINT_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnICR_R_TnMCINT_MASK               ((uint32_t)0x00000800u)
#define GPTM_TB_GPTMTnICR_R_TnMCINT_BIT                (11u)
#define GPTM_TB_GPTMTnICR_R_TnMCINT_DIS                ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_R_TnMCINT_EN                 ((uint32_t)0x00000800u)

#define GPTM_TB_GPTMTnICR_TnMCINT_MASK                 ((uint32_t)0x00000001u)
#define GPTM_TB_GPTMTnICR_TnMCINT_DIS                  ((uint32_t)0x00000000u)
#define GPTM_TB_GPTMTnICR_TnMCINT_EN                   ((uint32_t)0x00000001u)
/*----------*/


#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_ICR_H_ */
