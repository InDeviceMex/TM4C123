/**
 *
 * @file TIMER_RegisterDefines_Standard_64_TBMR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TBMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TBMR_H_

#include <stdint.h>

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBMR_MASK          ((uint32_t)0x00000003u)
#define GPWTM_GPTMTBMR_R_TBMR_BIT           (0u)
#define GPWTM_GPTMTBMR_R_TBMR_ONESHOT       ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_R_TBMR_PERIOD        ((uint32_t)0x00000002u)
#define GPWTM_GPTMTBMR_R_TBMR_CAPTURE       ((uint32_t)0x00000003u)

#define GPWTM_GPTMTBMR_TBMR_MASK            ((uint32_t)0x00000003u)
#define GPWTM_GPTMTBMR_TBMR_ONESHOT         ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBMR_PERIOD          ((uint32_t)0x00000002u)
#define GPWTM_GPTMTBMR_TBMR_CAPTURE         ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBCMR_MASK         ((uint32_t)0x00000004u)
#define GPWTM_GPTMTBMR_R_TBCMR_BIT          (2u)
#define GPWTM_GPTMTBMR_R_TBCMR_EDGECOUNT    ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBCMR_EDGETIME     ((uint32_t)0x00000004u)

#define GPWTM_GPTMTBMR_TBCMR_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBCMR_EDGECOUNT      ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBCMR_EDGETIME       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBAMS_MASK         ((uint32_t)0x00000008u)
#define GPWTM_GPTMTBMR_R_TBAMS_BIT          (3u)
#define GPWTM_GPTMTBMR_R_TBAMS_CAPCOMP      ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBAMS_PWM          ((uint32_t)0x00000008u)

#define GPWTM_GPTMTBMR_TBAMS_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBAMS_CAPCOMP        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBAMS_PWM            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBCDIR_MASK        ((uint32_t)0x00000010u)
#define GPWTM_GPTMTBMR_R_TBCDIR_BIT         (4u)
#define GPWTM_GPTMTBMR_R_TBCDIR_DOWN        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBCDIR_UP          ((uint32_t)0x00000010u)

#define GPWTM_GPTMTBMR_TBCDIR_MASK          ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBCDIR_DOWN          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBCDIR_UP            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBMIE_MASK         ((uint32_t)0x00000020u)
#define GPWTM_GPTMTBMR_R_TBMIE_BIT          (5u)
#define GPWTM_GPTMTBMR_R_TBMIE_DIS          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBMIE_EN           ((uint32_t)0x00000020u)

#define GPWTM_GPTMTBMR_TBMIE_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBMIE_DIS            ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBMIE_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBWOT_MASK         ((uint32_t)0x00000040u)
#define GPWTM_GPTMTBMR_R_TBWOT_BIT          (6u)
#define GPWTM_GPTMTBMR_R_TBWOT_INSTBNT      ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBWOT_TRIGGER      ((uint32_t)0x00000040u)

#define GPWTM_GPTMTBMR_TBWOT_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBWOT_INSTBNT        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBWOT_TRIGGER        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBSNAPS_MASK       ((uint32_t)0x00000080u)
#define GPWTM_GPTMTBMR_R_TBSNAPS_BIT        (7u)
#define GPWTM_GPTMTBMR_R_TBSNAPS_DIS        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBSNAPS_EN         ((uint32_t)0x00000080u)

#define GPWTM_GPTMTBMR_TBSNAPS_MASK         ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBSNAPS_DIS          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBSNAPS_EN           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBILD_MASK         ((uint32_t)0x00000100u)
#define GPWTM_GPTMTBMR_R_TBILD_BIT          (8u)
#define GPWTM_GPTMTBMR_R_TBILD_NEXT         ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBILD_TIMEOUT      ((uint32_t)0x00000100u)

#define GPWTM_GPTMTBMR_TBILD_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBILD_NEXT           ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBILD_TIMEOUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBPWMIE_MASK       ((uint32_t)0x00000200u)
#define GPWTM_GPTMTBMR_R_TBPWMIE_BIT        (9u)
#define GPWTM_GPTMTBMR_R_TBPWMIE_DIS        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBPWMIE_EN         ((uint32_t)0x00000200u)

#define GPWTM_GPTMTBMR_TBPWMIE_MASK         ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBPWMIE_DIS          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBPWMIE_EN           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBMRSU_MASK        ((uint32_t)0x00000400u)
#define GPWTM_GPTMTBMR_R_TBMRSU_BIT         (10u)
#define GPWTM_GPTMTBMR_R_TBMRSU_NEXT        ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBMRSU_TIMEOUT     ((uint32_t)0x00000400u)

#define GPWTM_GPTMTBMR_TBMRSU_MASK          ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBMRSU_NEXT          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBMRSU_TIMEOUT       ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMTBMR_R_TBPLO_MASK         ((uint32_t)0x00000800u)
#define GPWTM_GPTMTBMR_R_TBPLO_BIT          (11u)
#define GPWTM_GPTMTBMR_R_TBPLO_LOW          ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_R_TBPLO_HIGH         ((uint32_t)0x00000800u)

#define GPWTM_GPTMTBMR_TBPLO_MASK           ((uint32_t)0x00000001u)
#define GPWTM_GPTMTBMR_TBPLO_LOW            ((uint32_t)0x00000000u)
#define GPWTM_GPTMTBMR_TBPLO_HIGH           ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_TBMR_H_ */
