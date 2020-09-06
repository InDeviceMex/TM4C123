/**
 *
 * @file TIMER_RegisterDefines_Standard_64_IMR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_IMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_IMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 6 GPTMIMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMIMR_R_TATOIM_MASK              ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_R_TATOIM_BIT               (0u)
#define GPWTM_GPTMIMR_R_TATOIM_DIS               ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_TATOIM_EN                ((uint32_t)0x00000001u)

#define GPWTM_GPTMIMR_TATOIM_MASK                ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_TATOIM_DIS                 ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_TATOIM_EN                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_CAMIM_MASK               ((uint32_t)0x00000002u)
#define GPWTM_GPTMIMR_R_CAMIM_BIT                (1u)
#define GPWTM_GPTMIMR_R_CAMIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_CAMIM_EN                 ((uint32_t)0x00000002u)

#define GPWTM_GPTMIMR_CAMIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_CAMIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_CAMIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_CAEIM_MASK               ((uint32_t)0x00000004u)
#define GPWTM_GPTMIMR_R_CAEIM_BIT                (2u)
#define GPWTM_GPTMIMR_R_CAEIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_CAEIM_EN                 ((uint32_t)0x00000004u)

#define GPWTM_GPTMIMR_CAEIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_CAEIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_CAEIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_RTCIM_MASK               ((uint32_t)0x00000008u)
#define GPWTM_GPTMIMR_R_RTCIM_BIT                (3u)
#define GPWTM_GPTMIMR_R_RTCIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_RTCIM_EN                 ((uint32_t)0x00000008u)

#define GPWTM_GPTMIMR_RTCIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_RTCIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_RTCIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_TAMIM_MASK               ((uint32_t)0x00000010u)
#define GPWTM_GPTMIMR_R_TAMIM_BIT                (4u)
#define GPWTM_GPTMIMR_R_TAMIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_TAMIM_EN                 ((uint32_t)0x00000010u)

#define GPWTM_GPTMIMR_TAMIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_TAMIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_TAMIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_TBTOIM_MASK              ((uint32_t)0x00000100u)
#define GPWTM_GPTMIMR_R_TBTOIM_BIT               (8u)
#define GPWTM_GPTMIMR_R_TBTOIM_DIS               ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_TBTOIM_EN                ((uint32_t)0x00000100u)

#define GPWTM_GPTMIMR_TBTOIM_MASK                ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_TBTOIM_DIS                 ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_TBTOIM_EN                  ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_CBMIM_MASK               ((uint32_t)0x00000200u)
#define GPWTM_GPTMIMR_R_CBMIM_BIT                (9u)
#define GPWTM_GPTMIMR_R_CBMIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_CBMIM_EN                 ((uint32_t)0x00000200u)

#define GPWTM_GPTMIMR_CBMIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_CBMIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_CBMIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_CBEIM_MASK               ((uint32_t)0x00000400u)
#define GPWTM_GPTMIMR_R_CBEIM_BIT                (10u)
#define GPWTM_GPTMIMR_R_CBEIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_CBEIM_EN                 ((uint32_t)0x00000400u)

#define GPWTM_GPTMIMR_CBEIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_CBEIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_CBEIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_TBMIM_MASK               ((uint32_t)0x00000800u)
#define GPWTM_GPTMIMR_R_TBMIM_BIT                (11u)
#define GPWTM_GPTMIMR_R_TBMIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_TBMIM_EN                 ((uint32_t)0x00000800u)

#define GPWTM_GPTMIMR_TBMIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_TBMIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_TBMIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMIMR_R_WUEIM_MASK               ((uint32_t)0x00010000u)
#define GPWTM_GPTMIMR_R_WUEIM_BIT                (16u)
#define GPWTM_GPTMIMR_R_WUEIM_DIS                ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_R_WUEIM_EN                 ((uint32_t)0x00010000u)

#define GPWTM_GPTMIMR_WUEIM_MASK                 ((uint32_t)0x00000001u)
#define GPWTM_GPTMIMR_WUEIM_DIS                  ((uint32_t)0x00000000u)
#define GPWTM_GPTMIMR_WUEIM_EN                   ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_IMR_H_ */
