/**
 *
 * @file TIMER_RegisterDefines_ModuleW_64_MIS.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_MIS_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_MIS_H_

#include <stdint.h>

/******************************************************************************************
************************************ 8 GPTMMIS *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TW_GPTMTnMIS_R_TnTOMIS_MASK           ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_R_TnTOMIS_BIT            (0u)
#define GPWTM_TW_GPTMTnMIS_R_TnTOMIS_NOOCCUR        ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_R_TnTOMIS_OCCUR          ((uint32_t)0x00000001u)

#define GPWTM_TW_GPTMTnMIS_TnTOMIS_MASK             ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_TnTOMIS_NOOCCUR          ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_TnTOMIS_OCCUR            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnMIS_R_CnMMIS_MASK            ((uint32_t)0x00000002u)
#define GPWTM_TW_GPTMTnMIS_R_CnMMIS_BIT             (1u)
#define GPWTM_TW_GPTMTnMIS_R_CnMMIS_NOOCCUR         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_R_CnMMIS_OCCUR           ((uint32_t)0x00000002u)

#define GPWTM_TW_GPTMTnMIS_CnMMIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_CnMMIS_NOOCCUR           ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_CnMMIS_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnMIS_R_CnEMIS_MASK            ((uint32_t)0x00000004u)
#define GPWTM_TW_GPTMTnMIS_R_CnEMIS_BIT             (2u)
#define GPWTM_TW_GPTMTnMIS_R_CnEMIS_NOOCCUR         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_R_CnEMIS_OCCUR           ((uint32_t)0x00000004u)

#define GPWTM_TW_GPTMTnMIS_CnEMIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_CnEMIS_NOOCCUR           ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_CnEMIS_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnMIS_R_RTCMIS_MASK            ((uint32_t)0x00000008u)
#define GPWTM_TW_GPTMTnMIS_R_RTCMIS_BIT             (3u)
#define GPWTM_TW_GPTMTnMIS_R_RTCMIS_NOOCCUR         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_R_RTCMIS_OCCUR           ((uint32_t)0x00000008u)

#define GPWTM_TW_GPTMTnMIS_RTCMIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_RTCMIS_NOOCCUR           ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_RTCMIS_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnMIS_R_TnMMIS_MASK            ((uint32_t)0x00000010u)
#define GPWTM_TW_GPTMTnMIS_R_TnMMIS_BIT             (4u)
#define GPWTM_TW_GPTMTnMIS_R_TnMMIS_NOOCCUR         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_R_TnMMIS_OCCUR           ((uint32_t)0x00000010u)

#define GPWTM_TW_GPTMTnMIS_TnMMIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_TnMMIS_NOOCCUR           ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_TnMMIS_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_TW_GPTMTnMIS_R_WUEMIS_MASK            ((uint32_t)0x00010000u)
#define GPWTM_TW_GPTMTnMIS_R_WUEMIS_BIT             (16u)
#define GPWTM_TW_GPTMTnMIS_R_WUEMIS_NOOCCUR         ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_R_WUEMIS_OCCUR           ((uint32_t)0x00010000u)

#define GPWTM_TW_GPTMTnMIS_WUEMIS_MASK              ((uint32_t)0x00000001u)
#define GPWTM_TW_GPTMTnMIS_WUEMIS_NOOCCUR           ((uint32_t)0x00000000u)
#define GPWTM_TW_GPTMTnMIS_WUEMIS_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_64_TIMER_REGISTERDEFINES_MODULEW_64_MIS_H_ */
