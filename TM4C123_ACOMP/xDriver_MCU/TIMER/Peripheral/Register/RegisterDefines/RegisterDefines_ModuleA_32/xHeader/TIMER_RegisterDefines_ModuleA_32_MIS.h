/**
 *
 * @file TIMER_RegisterDefines_ModuleA_32_MIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_MIS_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TA_GPTMTnMIS_R_TnTOMIS_MASK           ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMIS_R_TnTOMIS_BIT            (0U)
#define GPWTM_TA_GPTMTnMIS_R_TnTOMIS_NOOCCUR        ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_R_TnTOMIS_OCCUR          ((uint32_t)0x00000001U)

#define GPWTM_TA_GPTMTnMIS_TnTOMIS_MASK             ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMIS_TnTOMIS_NOOCCUR          ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_TnTOMIS_OCCUR            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMIS_R_CnMMIS_MASK            ((uint32_t)0x00000002U)
#define GPWTM_TA_GPTMTnMIS_R_CnMMIS_BIT             (1U)
#define GPWTM_TA_GPTMTnMIS_R_CnMMIS_NOOCCUR         ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_R_CnMMIS_OCCUR           ((uint32_t)0x00000002U)

#define GPWTM_TA_GPTMTnMIS_CnMMIS_MASK              ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMIS_CnMMIS_NOOCCUR           ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_CnMMIS_OCCUR             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMIS_R_CnEMIS_MASK            ((uint32_t)0x00000004U)
#define GPWTM_TA_GPTMTnMIS_R_CnEMIS_BIT             (2U)
#define GPWTM_TA_GPTMTnMIS_R_CnEMIS_NOOCCUR         ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_R_CnEMIS_OCCUR           ((uint32_t)0x00000004U)

#define GPWTM_TA_GPTMTnMIS_CnEMIS_MASK              ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMIS_CnEMIS_NOOCCUR           ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_CnEMIS_OCCUR             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMIS_R_TnMMIS_MASK            ((uint32_t)0x00000010U)
#define GPWTM_TA_GPTMTnMIS_R_TnMMIS_BIT             (4U)
#define GPWTM_TA_GPTMTnMIS_R_TnMMIS_NOOCCUR         ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_R_TnMMIS_OCCUR           ((uint32_t)0x00000010U)

#define GPWTM_TA_GPTMTnMIS_TnMMIS_MASK              ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMIS_TnMMIS_NOOCCUR           ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMIS_TnMMIS_OCCUR             ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_MIS_H_ */
