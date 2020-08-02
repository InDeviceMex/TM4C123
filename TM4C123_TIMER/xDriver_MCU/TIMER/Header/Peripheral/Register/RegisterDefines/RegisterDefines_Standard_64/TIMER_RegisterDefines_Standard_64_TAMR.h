/**
 *
 * @file TIMER_RegisterDefines_Standard_64_TAMR.h
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
 * @verbatim 5 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TAMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TAMR_H_

#include <stdint.h>

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAMR_MASK          ((uint32_t)0x00000003u)
#define GPWTM_GPTMTAMR_R_TAMR_BIT           (0u)
#define GPWTM_GPTMTAMR_R_TAMR_ONESHOT       ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_R_TAMR_PERIOD        ((uint32_t)0x00000002u)
#define GPWTM_GPTMTAMR_R_TAMR_CAPTURE       ((uint32_t)0x00000003u)

#define GPWTM_GPTMTAMR_TAMR_MASK            ((uint32_t)0x00000003u)
#define GPWTM_GPTMTAMR_TAMR_ONESHOT         ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAMR_PERIOD          ((uint32_t)0x00000002u)
#define GPWTM_GPTMTAMR_TAMR_CAPTURE         ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TACMR_MASK         ((uint32_t)0x00000004u)
#define GPWTM_GPTMTAMR_R_TACMR_BIT          (2u)
#define GPWTM_GPTMTAMR_R_TACMR_EDGECOUNT    ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TACMR_EDGETIME     ((uint32_t)0x00000004u)

#define GPWTM_GPTMTAMR_TACMR_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TACMR_EDGECOUNT      ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TACMR_EDGETIME       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAAMS_MASK         ((uint32_t)0x00000008u)
#define GPWTM_GPTMTAMR_R_TAAMS_BIT          (3u)
#define GPWTM_GPTMTAMR_R_TAAMS_CAPCOMP      ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAAMS_PWM          ((uint32_t)0x00000008u)

#define GPWTM_GPTMTAMR_TAAMS_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAAMS_CAPCOMP        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAAMS_PWM            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TACDIR_MASK        ((uint32_t)0x00000010u)
#define GPWTM_GPTMTAMR_R_TACDIR_BIT         (4u)
#define GPWTM_GPTMTAMR_R_TACDIR_DOWN        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TACDIR_UP          ((uint32_t)0x00000010u)

#define GPWTM_GPTMTAMR_TACDIR_MASK          ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TACDIR_DOWN          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TACDIR_UP            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAMIE_MASK         ((uint32_t)0x00000020u)
#define GPWTM_GPTMTAMR_R_TAMIE_BIT          (5u)
#define GPWTM_GPTMTAMR_R_TAMIE_DIS          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAMIE_EN           ((uint32_t)0x00000020u)

#define GPWTM_GPTMTAMR_TAMIE_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAMIE_DIS            ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAMIE_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAWOT_MASK         ((uint32_t)0x00000040u)
#define GPWTM_GPTMTAMR_R_TAWOT_BIT          (6u)
#define GPWTM_GPTMTAMR_R_TAWOT_INSTANT      ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAWOT_TRIGGER      ((uint32_t)0x00000040u)

#define GPWTM_GPTMTAMR_TAWOT_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAWOT_INSTANT        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAWOT_TRIGGER        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TASNAPS_MASK       ((uint32_t)0x00000080u)
#define GPWTM_GPTMTAMR_R_TASNAPS_BIT        (7u)
#define GPWTM_GPTMTAMR_R_TASNAPS_DIS        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TASNAPS_EN         ((uint32_t)0x00000080u)

#define GPWTM_GPTMTAMR_TASNAPS_MASK         ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TASNAPS_DIS          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TASNAPS_EN           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAILD_MASK         ((uint32_t)0x00000100u)
#define GPWTM_GPTMTAMR_R_TAILD_BIT          (8u)
#define GPWTM_GPTMTAMR_R_TAILD_NEXT         ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAILD_TIMEOUT      ((uint32_t)0x00000100u)

#define GPWTM_GPTMTAMR_TAILD_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAILD_NEXT           ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAILD_TIMEOUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAPWMIE_MASK       ((uint32_t)0x00000200u)
#define GPWTM_GPTMTAMR_R_TAPWMIE_BIT        (9u)
#define GPWTM_GPTMTAMR_R_TAPWMIE_DIS        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAPWMIE_EN         ((uint32_t)0x00000200u)

#define GPWTM_GPTMTAMR_TAPWMIE_MASK         ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAPWMIE_DIS          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAPWMIE_EN           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAMRSU_MASK        ((uint32_t)0x00000400u)
#define GPWTM_GPTMTAMR_R_TAMRSU_BIT         (10u)
#define GPWTM_GPTMTAMR_R_TAMRSU_NEXT        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAMRSU_TIMEOUT     ((uint32_t)0x00000400u)

#define GPWTM_GPTMTAMR_TAMRSU_MASK          ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAMRSU_NEXT          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAMRSU_TIMEOUT       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTAMR_R_TAPLO_MASK         ((uint32_t)0x00000800u)
#define GPWTM_GPTMTAMR_R_TAPLO_BIT          (11u)
#define GPWTM_GPTMTAMR_R_TAPLO_LOW          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_R_TAPLO_HIGH         ((uint32_t)0x00000800u)

#define GPWTM_GPTMTAMR_TAPLO_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTAMR_TAPLO_LOW            ((uint32_t)0x00000000u)
#define GPWTM_GPTMTAMR_TAPLO_HIGH           ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TAMR_H_ */
