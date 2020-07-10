/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_CTL.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_CTL_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_CTL_H_

#include <stdint.h>

/******************************************************************************************
************************************ 4 GPTMCTL *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TW_GPTMTnCTL_R_TnEN_MASK       ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_R_TnEN_BIT        (0u)
#define GPWTM_TW_GPTMTnCTL_R_TnEN_DIS        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_R_TnEN_EN         ((uint32_t)0x00000001u)

#define GPWTM_TW_GPTMTnCTL_TnEN_MASK         ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_TnEN_DIS          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_TnEN_EN           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnCTL_R_TnSTALL_MASK    ((uint32_t)0x00000002u)
#define GPWTM_TW_GPTMTnCTL_R_TnSTALL_BIT     (1u)
#define GPWTM_TW_GPTMTnCTL_R_TnSTALL_CONTINUE    ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_R_TnSTALL_FREEZE  ((uint32_t)0x00000002u)

#define GPWTM_TW_GPTMTnCTL_TnSTALL_MASK      ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_TnSTALL_CONTINUE  ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_TnSTALL_FREEZE    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnCTL_R_TnEVENT_MASK    ((uint32_t)0x0000000Cu)
#define GPWTM_TW_GPTMTnCTL_R_TnEVENT_BIT     (2u)
#define GPWTM_TW_GPTMTnCTL_R_TnEVENT_POS     ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_R_TnEVENT_NEG     ((uint32_t)0x00000004u)
#define GPWTM_TW_GPTMTnCTL_R_TnEVENT_BOTH    ((uint32_t)0x0000000Cu)

#define GPWTM_TW_GPTMTnCTL_TnEVENT_MASK      ((uint32_t)0x00000003u)
#define GPWTM_TW_GPTMTnCTL_TnEVENT_NEG       ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_TnEVENT_POS       ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_TnEVENT_BOTH      ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnCTL_R_RTCEN_MASK      ((uint32_t)0x00000010u)
#define GPWTM_TW_GPTMTnCTL_R_RTCEN_BIT       (4u)
#define GPWTM_TW_GPTMTnCTL_R_RTCEN_DIS       ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_R_RTCEN_EN        ((uint32_t)0x00000010u)

#define GPWTM_TW_GPTMTnCTL_RTCEN_MASK        ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_RTCEN_DIS         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_RTCEN_EN          ((uint32_t)0x00000001u)
/*----------*/
/*----------*/
#define GPWTM_TW_GPTMTnCTL_R_TnOTE_MASK      ((uint32_t)0x00000020u)
#define GPWTM_TW_GPTMTnCTL_R_TnOTE_BIT       (5u)
#define GPWTM_TW_GPTMTnCTL_R_TnOTE_DIS       ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_R_TnOTE_EN        ((uint32_t)0x00000020u)

#define GPWTM_TW_GPTMTnCTL_TnOTE_MASK        ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_TnOTE_DIS         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_TnOTE_EN          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnCTL_R_TnPWML_MASK     ((uint32_t)0x00000040u)
#define GPWTM_TW_GPTMTnCTL_R_TnPWML_BIT      (6u)
#define GPWTM_TW_GPTMTnCTL_R_TnPWML_NA       ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_R_TnPWML_INV      ((uint32_t)0x00000040u)

#define GPWTM_TW_GPTMTnCTL_TnPWML_MASK       ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnCTL_TnPWML_NA         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnCTL_TnPWML_INV        ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_CTL_H_ */
