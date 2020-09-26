/**
 *
 * @file TIMER_RegisterDefines_ModuleW_32_ICR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_ICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TW_GPTMTnICR_R_TnTOCINT_MASK               ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnICR_R_TnTOCINT_BIT                (0u)
#define GPTM_TW_GPTMTnICR_R_TnTOCINT_CLEAR              ((uint32_t)0x00000001u)

#define GPTM_TW_GPTMTnICR_TnTOCINT_MASK                 ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnICR_TnTOCINT_CLEAR                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnICR_R_CnMCINT_MASK                ((uint32_t)0x00000002u)
#define GPTM_TW_GPTMTnICR_R_CnMCINT_BIT                 (1u)
#define GPTM_TW_GPTMTnICR_R_CnMCINT_CLEAR               ((uint32_t)0x00000002u)

#define GPTM_TW_GPTMTnICR_CnMCINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnICR_CnMCINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnICR_R_CnECINT_MASK                ((uint32_t)0x00000004u)
#define GPTM_TW_GPTMTnICR_R_CnECINT_BIT                 (2u)
#define GPTM_TW_GPTMTnICR_R_CnECINT_CLEAR               ((uint32_t)0x00000004u)

#define GPTM_TW_GPTMTnICR_CnECINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnICR_CnECINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnICR_R_RTCCINT_MASK                ((uint32_t)0x00000008u)
#define GPTM_TW_GPTMTnICR_R_RTCCINT_BIT                 (3u)
#define GPTM_TW_GPTMTnICR_R_RTCCINT_CLEAR               ((uint32_t)0x00000008u)

#define GPTM_TW_GPTMTnICR_RTCCINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnICR_RTCCINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnICR_R_TnMCINT_MASK                ((uint32_t)0x00000010u)
#define GPTM_TW_GPTMTnICR_R_TnMCINT_BIT                 (4u)
#define GPTM_TW_GPTMTnICR_R_TnMCINT_CLEAR               ((uint32_t)0x00000010u)

#define GPTM_TW_GPTMTnICR_TnMCINT_MASK                  ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnICR_TnMCINT_CLEAR                 ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_ICR_H_ */
