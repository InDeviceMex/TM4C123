/**
 *
 * @file TIMER_RegisterDefines_ModuleA_16_CTL.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_CTL_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TA_GPTMTnCTL_R_TnEN_MASK       ((uint32_t)0x00000001U)
#define GPTM_TA_GPTMTnCTL_R_TnEN_BIT        (0U)
#define GPTM_TA_GPTMTnCTL_R_TnEN_DIS        ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_R_TnEN_EN         ((uint32_t)0x00000001U)

#define GPTM_TA_GPTMTnCTL_TnEN_MASK         ((uint32_t)0x00000001U)
#define GPTM_TA_GPTMTnCTL_TnEN_DIS          ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_TnEN_EN           ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnCTL_R_TnSTALL_MASK    ((uint32_t)0x00000002U)
#define GPTM_TA_GPTMTnCTL_R_TnSTALL_BIT     (1U)
#define GPTM_TA_GPTMTnCTL_R_TnSTALL_CONTINUE    ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_R_TnSTALL_FREEZE  ((uint32_t)0x00000002U)

#define GPTM_TA_GPTMTnCTL_TnSTALL_MASK      ((uint32_t)0x00000001U)
#define GPTM_TA_GPTMTnCTL_TnSTALL_CONTINUE  ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_TnSTALL_FREEZE    ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnCTL_R_TnEVENT_MASK    ((uint32_t)0x0000000CU)
#define GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT     (2U)
#define GPTM_TA_GPTMTnCTL_R_TnEVENT_POS     ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_R_TnEVENT_NEG     ((uint32_t)0x00000004U)
#define GPTM_TA_GPTMTnCTL_R_TnEVENT_BOTH    ((uint32_t)0x0000000CU)

#define GPTM_TA_GPTMTnCTL_TnEVENT_MASK      ((uint32_t)0x00000003U)
#define GPTM_TA_GPTMTnCTL_TnEVENT_NEG       ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_TnEVENT_POS       ((uint32_t)0x00000001U)
#define GPTM_TA_GPTMTnCTL_TnEVENT_BOTH      ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnCTL_R_TnOTE_MASK      ((uint32_t)0x00000020U)
#define GPTM_TA_GPTMTnCTL_R_TnOTE_BIT       (5U)
#define GPTM_TA_GPTMTnCTL_R_TnOTE_DIS       ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_R_TnOTE_EN        ((uint32_t)0x00000020U)

#define GPTM_TA_GPTMTnCTL_TnOTE_MASK        ((uint32_t)0x00000001U)
#define GPTM_TA_GPTMTnCTL_TnOTE_DIS         ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_TnOTE_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnCTL_R_TnPWML_MASK     ((uint32_t)0x00000040U)
#define GPTM_TA_GPTMTnCTL_R_TnPWML_BIT      (6U)
#define GPTM_TA_GPTMTnCTL_R_TnPWML_NA       ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_R_TnPWML_INV      ((uint32_t)0x00000040U)

#define GPTM_TA_GPTMTnCTL_TnPWML_MASK       ((uint32_t)0x00000001U)
#define GPTM_TA_GPTMTnCTL_TnPWML_NA         ((uint32_t)0x00000000U)
#define GPTM_TA_GPTMTnCTL_TnPWML_INV        ((uint32_t)0x00000001U)
/*----------*/




#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_CTL_H_ */
