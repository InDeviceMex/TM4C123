/**
 *
 * @file TIMER_RegisterDefines_ModuleA_16_ICR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_ICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TA_GPTMTnICR_R_TnTOCINT_MASK               ((uint32_t)0x00000001u)
#define GPTM_TA_GPTMTnICR_R_TnTOCINT_BIT                (0u)
#define GPTM_TA_GPTMTnICR_R_TnTOCINT_CLEAR              ((uint32_t)0x00000001u)

#define GPTM_TA_GPTMTnICR_TnTOCINT_MASK                 ((uint32_t)0x00000001u)
#define GPTM_TA_GPTMTnICR_TnTOCINT_CLEAR                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnICR_R_CnMCINT_MASK                ((uint32_t)0x00000002u)
#define GPTM_TA_GPTMTnICR_R_CnMCINT_BIT                 (1u)
#define GPTM_TA_GPTMTnICR_R_CnMCINT_CLEAR               ((uint32_t)0x00000002u)

#define GPTM_TA_GPTMTnICR_CnMCINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TA_GPTMTnICR_CnMCINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnICR_R_CnECINT_MASK                ((uint32_t)0x00000004u)
#define GPTM_TA_GPTMTnICR_R_CnECINT_BIT                 (2u)
#define GPTM_TA_GPTMTnICR_R_CnECINT_CLEAR               ((uint32_t)0x00000004u)

#define GPTM_TA_GPTMTnICR_CnECINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TA_GPTMTnICR_CnECINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TA_GPTMTnICR_R_TnMCINT_MASK                ((uint32_t)0x00000010u)
#define GPTM_TA_GPTMTnICR_R_TnMCINT_BIT                 (4u)
#define GPTM_TA_GPTMTnICR_R_TnMCINT_CLEAR               ((uint32_t)0x00000010u)

#define GPTM_TA_GPTMTnICR_TnMCINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TA_GPTMTnICR_TnMCINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_16_TIMER_REGISTERDEFINES_MODULEA_16_ICR_H_ */
