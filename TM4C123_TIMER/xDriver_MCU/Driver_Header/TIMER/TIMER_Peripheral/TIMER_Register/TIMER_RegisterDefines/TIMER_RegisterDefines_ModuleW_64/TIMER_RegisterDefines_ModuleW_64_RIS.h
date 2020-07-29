/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_RIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_RIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_RIS_H_

#include <stdint.h>

/******************************************************************************************
************************************ 7 GPTMRIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TW_GPTMTnRIS_R_TnTORIS_MASK           ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_R_TnTORIS_BIT            (0u)
#define GPWTM_TW_GPTMTnRIS_R_TnTORIS_NOACTIVE       ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_R_TnTORIS_ACTIVE         ((uint32_t)0x00000001u)

#define GPWTM_TW_GPTMTnRIS_TnTORIS_MASK             ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_TnTORIS_NOACTIVE         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_TnTORIS_ACTIVE           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnRIS_R_CnMRIS_MASK            ((uint32_t)0x00000002u)
#define GPWTM_TW_GPTMTnRIS_R_CnMRIS_BIT             (1u)
#define GPWTM_TW_GPTMTnRIS_R_CnMRIS_NOACTIVE        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_R_CnMRIS_ACTIVE          ((uint32_t)0x00000002u)

#define GPWTM_TW_GPTMTnRIS_CnMRIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_CnMRIS_NOACTIVE          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_CnMRIS_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnRIS_R_CnERIS_MASK            ((uint32_t)0x00000004u)
#define GPWTM_TW_GPTMTnRIS_R_CnERIS_BIT             (2u)
#define GPWTM_TW_GPTMTnRIS_R_CnERIS_NOACTIVE        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_R_CnERIS_ACTIVE          ((uint32_t)0x00000004u)

#define GPWTM_TW_GPTMTnRIS_CnERIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_CnERIS_NOACTIVE          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_CnERIS_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnRIS_R_RTCRIS_MASK            ((uint32_t)0x00000008u)
#define GPWTM_TW_GPTMTnRIS_R_RTCRIS_BIT             (3u)
#define GPWTM_TW_GPTMTnRIS_R_RTCRIS_NOACTIVE        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_R_RTCRIS_ACTIVE          ((uint32_t)0x00000008u)

#define GPWTM_TW_GPTMTnRIS_RTCRIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_RTCRIS_NOACTIVE          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_RTCRIS_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnRIS_R_TnMRIS_MASK            ((uint32_t)0x00000010u)
#define GPWTM_TW_GPTMTnRIS_R_TnMRIS_BIT             (4u)
#define GPWTM_TW_GPTMTnRIS_R_TnMRIS_NOACTIVE        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_R_TnMRIS_ACTIVE          ((uint32_t)0x00000010u)

#define GPWTM_TW_GPTMTnRIS_TnMRIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_TnMRIS_NOACTIVE          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_TnMRIS_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnRIS_R_WUERIS_MASK            ((uint32_t)0x00010000u)
#define GPWTM_TW_GPTMTnRIS_R_WUERIS_BIT             (16u)
#define GPWTM_TW_GPTMTnRIS_R_WUERIS_NOACTIVE        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_R_WUERIS_ACTIVE          ((uint32_t)0x00010000u)

#define GPWTM_TW_GPTMTnRIS_WUERIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnRIS_WUERIS_NOACTIVE          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnRIS_WUERIS_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_RIS_H_ */
