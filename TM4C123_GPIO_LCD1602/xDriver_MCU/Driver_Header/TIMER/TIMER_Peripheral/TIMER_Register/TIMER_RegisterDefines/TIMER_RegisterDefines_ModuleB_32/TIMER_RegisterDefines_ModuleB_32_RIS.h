/**
 *
 * @file TIMER_RegisterDefines_ModuleB_32_RIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_RIS_H_

#include <stdint.h>

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TB_GPTMTnRIS_R_TnTORIS_MASK              ((uint32_t)0x00000100u)
#define GPWTM_TB_GPTMTnRIS_R_TnTORIS_BIT               (8u)
#define GPWTM_TB_GPTMTnRIS_R_TnTORIS_DIS               ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_R_TnTORIS_EN                ((uint32_t)0x00000100u)

#define GPWTM_TB_GPTMTnRIS_TnTORIS_MASK                ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnRIS_TnTORIS_DIS                 ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_TnTORIS_EN                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnRIS_R_CnMRIS_MASK               ((uint32_t)0x00000200u)
#define GPWTM_TB_GPTMTnRIS_R_CnMRIS_BIT                (9u)
#define GPWTM_TB_GPTMTnRIS_R_CnMRIS_DIS                ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_R_CnMRIS_EN                 ((uint32_t)0x00000200u)

#define GPWTM_TB_GPTMTnRIS_CnMRIS_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnRIS_CnMRIS_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_CnMRIS_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnRIS_R_CnERIS_MASK               ((uint32_t)0x00000400u)
#define GPWTM_TB_GPTMTnRIS_R_CnERIS_BIT                (10u)
#define GPWTM_TB_GPTMTnRIS_R_CnERIS_DIS                ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_R_CnERIS_EN                 ((uint32_t)0x00000400u)

#define GPWTM_TB_GPTMTnRIS_CnERIS_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnRIS_CnERIS_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_CnERIS_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnRIS_R_TnMRIS_MASK               ((uint32_t)0x00000800u)
#define GPWTM_TB_GPTMTnRIS_R_TnMRIS_BIT                (11u)
#define GPWTM_TB_GPTMTnRIS_R_TnMRIS_DIS                ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_R_TnMRIS_EN                 ((uint32_t)0x00000800u)

#define GPWTM_TB_GPTMTnRIS_TnMRIS_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnRIS_TnMRIS_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnRIS_TnMRIS_EN                   ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_RIS_H_ */
