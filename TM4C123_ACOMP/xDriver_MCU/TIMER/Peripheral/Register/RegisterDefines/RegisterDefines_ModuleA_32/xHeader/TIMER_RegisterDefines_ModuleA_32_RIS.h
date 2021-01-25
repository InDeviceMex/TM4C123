/**
 *
 * @file TIMER_RegisterDefines_ModuleA_32_RIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_RIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TA_GPTMTnRIS_R_TnTORIS_MASK           ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnRIS_R_TnTORIS_BIT            (0U)
#define GPWTM_TA_GPTMTnRIS_R_TnTORIS_NOACTIVE       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_R_TnTORIS_ACTIVE         ((uint32_t)0x00000001U)

#define GPWTM_TA_GPTMTnRIS_TnTORIS_MASK             ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnRIS_TnTORIS_NOACTIVE         ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_TnTORIS_ACTIVE           ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnRIS_R_CnMRIS_MASK            ((uint32_t)0x00000002U)
#define GPWTM_TA_GPTMTnRIS_R_CnMRIS_BIT             (1U)
#define GPWTM_TA_GPTMTnRIS_R_CnMRIS_NOACTIVE        ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_R_CnMRIS_ACTIVE          ((uint32_t)0x00000002U)

#define GPWTM_TA_GPTMTnRIS_CnMRIS_MASK              ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnRIS_CnMRIS_NOACTIVE          ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_CnMRIS_ACTIVE            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnRIS_R_CnERIS_MASK            ((uint32_t)0x00000004U)
#define GPWTM_TA_GPTMTnRIS_R_CnERIS_BIT             (2U)
#define GPWTM_TA_GPTMTnRIS_R_CnERIS_NOACTIVE        ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_R_CnERIS_ACTIVE          ((uint32_t)0x00000004U)

#define GPWTM_TA_GPTMTnRIS_CnERIS_MASK              ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnRIS_CnERIS_NOACTIVE          ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_CnERIS_ACTIVE            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnRIS_R_TnMRIS_MASK            ((uint32_t)0x00000010U)
#define GPWTM_TA_GPTMTnRIS_R_TnMRIS_BIT             (4U)
#define GPWTM_TA_GPTMTnRIS_R_TnMRIS_NOACTIVE        ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_R_TnMRIS_ACTIVE          ((uint32_t)0x00000010U)

#define GPWTM_TA_GPTMTnRIS_TnMRIS_MASK              ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnRIS_TnMRIS_NOACTIVE          ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnRIS_TnMRIS_ACTIVE            ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_RIS_H_ */
