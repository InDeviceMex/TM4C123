/**
 *
 * @file TIMER_RegisterDefines_ModuleB_16_RIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_GPTMTnRIS_R_TnTORIS_MASK              ((uint32_t)0x00000100U)
#define GPTM_TB_GPTMTnRIS_R_TnTORIS_BIT               (8U)
#define GPTM_TB_GPTMTnRIS_R_TnTORIS_DIS               ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_R_TnTORIS_EN                ((uint32_t)0x00000100U)

#define GPTM_TB_GPTMTnRIS_TnTORIS_MASK                ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnRIS_TnTORIS_DIS                 ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_TnTORIS_EN                  ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnRIS_R_CnMRIS_MASK               ((uint32_t)0x00000200U)
#define GPTM_TB_GPTMTnRIS_R_CnMRIS_BIT                (9U)
#define GPTM_TB_GPTMTnRIS_R_CnMRIS_DIS                ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_R_CnMRIS_EN                 ((uint32_t)0x00000200U)

#define GPTM_TB_GPTMTnRIS_CnMRIS_MASK                 ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnRIS_CnMRIS_DIS                  ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_CnMRIS_EN                   ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnRIS_R_CnERIS_MASK               ((uint32_t)0x00000400U)
#define GPTM_TB_GPTMTnRIS_R_CnERIS_BIT                (10U)
#define GPTM_TB_GPTMTnRIS_R_CnERIS_DIS                ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_R_CnERIS_EN                 ((uint32_t)0x00000400U)

#define GPTM_TB_GPTMTnRIS_CnERIS_MASK                 ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnRIS_CnERIS_DIS                  ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_CnERIS_EN                   ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnRIS_R_TnMRIS_MASK               ((uint32_t)0x00000800U)
#define GPTM_TB_GPTMTnRIS_R_TnMRIS_BIT                (11U)
#define GPTM_TB_GPTMTnRIS_R_TnMRIS_DIS                ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_R_TnMRIS_EN                 ((uint32_t)0x00000800U)

#define GPTM_TB_GPTMTnRIS_TnMRIS_MASK                 ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnRIS_TnMRIS_DIS                  ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnRIS_TnMRIS_EN                   ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_RIS_H_ */
