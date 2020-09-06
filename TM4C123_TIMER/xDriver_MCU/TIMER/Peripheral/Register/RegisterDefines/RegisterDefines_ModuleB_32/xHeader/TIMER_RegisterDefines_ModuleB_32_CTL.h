/**
 *
 * @file TIMER_RegisterDefines_ModuleB_32_CTL.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TB_GPTMTnCTL_R_TnEN_MASK            ((uint32_t)0x00000100u)
#define GPWTM_TB_GPTMTnCTL_R_TnEN_BIT             (8u)
#define GPWTM_TB_GPTMTnCTL_R_TnEN_DIS             ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_R_TnEN_EN              ((uint32_t)0x00000100u)

#define GPWTM_TB_GPTMTnCTL_TnEN_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnCTL_TnEN_DIS               ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_TnEN_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnCTL_R_TnSTALL_MASK         ((uint32_t)0x00000200u)
#define GPWTM_TB_GPTMTnCTL_R_TnSTALL_BIT          (9u)
#define GPWTM_TB_GPTMTnCTL_R_TnSTALL_CONTINUE     ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_R_TnSTALL_FREEZE       ((uint32_t)0x00000200u)

#define GPWTM_TB_GPTMTnCTL_TnSTALL_MASK           ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnCTL_TnSTALL_CONTINUE       ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_TnSTALL_FREEZE         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnCTL_R_TnEVENT_MASK         ((uint32_t)0x00000C00u)
#define GPWTM_TB_GPTMTnCTL_R_TnEVENT_BIT          (10u)
#define GPWTM_TB_GPTMTnCTL_R_TnEVENT_POS          ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_R_TnEVENT_NEG          ((uint32_t)0x00000400u)
#define GPWTM_TB_GPTMTnCTL_R_TnEVENT_BOTH         ((uint32_t)0x00000C00u)

#define GPWTM_TB_GPTMTnCTL_TnEVENT_MASK           ((uint32_t)0x00000003u)
#define GPWTM_TB_GPTMTnCTL_TnEVENT_NEG            ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_TnEVENT_POS            ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnCTL_TnEVENT_BOTH           ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnCTL_R_TnOTE_MASK           ((uint32_t)0x00002000u)
#define GPWTM_TB_GPTMTnCTL_R_TnOTE_BIT            (13u)
#define GPWTM_TB_GPTMTnCTL_R_TnOTE_DIS            ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_R_TnOTE_EN             ((uint32_t)0x00002000u)

#define GPWTM_TB_GPTMTnCTL_TnOTE_MASK             ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnCTL_TnOTE_DIS              ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_TnOTE_EN               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TB_GPTMTnCTL_R_TnPWML_MASK          ((uint32_t)0x00004000u)
#define GPWTM_TB_GPTMTnCTL_R_TnPWML_BIT           (14u)
#define GPWTM_TB_GPTMTnCTL_R_TnPWML_NA            ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_R_TnPWML_INV           ((uint32_t)0x00004000u)

#define GPWTM_TB_GPTMTnCTL_TnPWML_MASK            ((uint32_t)0x00000001u)
#define GPWTM_TB_GPTMTnCTL_TnPWML_NA              ((uint32_t)0x00000000u)
#define GPWTM_TB_GPTMTnCTL_TnPWML_INV             ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_32_TIMER_REGISTERDEFINES_MODULEB_32_CTL_H_ */
