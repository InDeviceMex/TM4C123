/**
 *
 * @file TIMER_RegisterDefines_Standard_32_TBMR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TBMR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TBMR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_GPTMTBMR_R_TBMR_MASK           ((uint32_t)0x00000003U)
#define GPTM_GPTMTBMR_R_TBMR_BIT            (0U)
#define GPTM_GPTMTBMR_R_TBMR_ONESHOT        ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_R_TBMR_PERIOD         ((uint32_t)0x00000002U)
#define GPTM_GPTMTBMR_R_TBMR_CAPTURE        ((uint32_t)0x00000003U)

#define GPTM_GPTMTBMR_TBMR_MASK             ((uint32_t)0x00000003U)
#define GPTM_GPTMTBMR_TBMR_ONESHOT          ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBMR_PERIOD           ((uint32_t)0x00000002U)
#define GPTM_GPTMTBMR_TBMR_CAPTURE          ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBCMR_MASK          ((uint32_t)0x00000004U)
#define GPTM_GPTMTBMR_R_TBCMR_BIT           (2U)
#define GPTM_GPTMTBMR_R_TBCMR_EDGECOUNT     ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBCMR_EDGETIME      ((uint32_t)0x00000004U)

#define GPTM_GPTMTBMR_TBCMR_MASK            ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBCMR_EDGECOUNT       ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBCMR_EDGETIME        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBAMS_MASK          ((uint32_t)0x00000008U)
#define GPTM_GPTMTBMR_R_TBAMS_BIT           (3U)
#define GPTM_GPTMTBMR_R_TBAMS_CAPCOMP       ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBAMS_PWM           ((uint32_t)0x00000008U)

#define GPTM_GPTMTBMR_TBAMS_MASK            ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBAMS_CAPCOMP         ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBAMS_PWM             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBCDIR_MASK         ((uint32_t)0x00000010U)
#define GPTM_GPTMTBMR_R_TBCDIR_BIT          (4U)
#define GPTM_GPTMTBMR_R_TBCDIR_DOWN         ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBCDIR_UP           ((uint32_t)0x00000010U)

#define GPTM_GPTMTBMR_TBCDIR_MASK           ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBCDIR_DOWN           ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBCDIR_UP             ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBMIE_MASK          ((uint32_t)0x00000020U)
#define GPTM_GPTMTBMR_R_TBMIE_BIT           (5U)
#define GPTM_GPTMTBMR_R_TBMIE_DIS           ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBMIE_EN            ((uint32_t)0x00000020U)

#define GPTM_GPTMTBMR_TBMIE_MASK            ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBMIE_DIS             ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBMIE_EN              ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBWOT_MASK          ((uint32_t)0x00000040U)
#define GPTM_GPTMTBMR_R_TBWOT_BIT           (6U)
#define GPTM_GPTMTBMR_R_TBWOT_INSTBNT       ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBWOT_TRIGGER       ((uint32_t)0x00000040U)

#define GPTM_GPTMTBMR_TBWOT_MASK            ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBWOT_INSTBNT         ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBWOT_TRIGGER         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBSNAPS_MASK        ((uint32_t)0x00000080U)
#define GPTM_GPTMTBMR_R_TBSNAPS_BIT         (7U)
#define GPTM_GPTMTBMR_R_TBSNAPS_DIS         ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBSNAPS_EN          ((uint32_t)0x00000080U)

#define GPTM_GPTMTBMR_TBSNAPS_MASK          ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBSNAPS_DIS           ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBSNAPS_EN            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBILD_MASK          ((uint32_t)0x00000100U)
#define GPTM_GPTMTBMR_R_TBILD_BIT           (8U)
#define GPTM_GPTMTBMR_R_TBILD_NEXT          ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBILD_TIMEOUT       ((uint32_t)0x00000100U)

#define GPTM_GPTMTBMR_TBILD_MASK            ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBILD_NEXT            ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBILD_TIMEOUT         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBPWMIE_MASK        ((uint32_t)0x00000200U)
#define GPTM_GPTMTBMR_R_TBPWMIE_BIT         (9U)
#define GPTM_GPTMTBMR_R_TBPWMIE_DIS         ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBPWMIE_EN          ((uint32_t)0x00000200U)

#define GPTM_GPTMTBMR_TBPWMIE_MASK          ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBPWMIE_DIS           ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBPWMIE_EN            ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBMRSU_MASK         ((uint32_t)0x00000400U)
#define GPTM_GPTMTBMR_R_TBMRSU_BIT          (10U)
#define GPTM_GPTMTBMR_R_TBMRSU_NEXT         ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBMRSU_TIMEOUT      ((uint32_t)0x00000400U)

#define GPTM_GPTMTBMR_TBMRSU_MASK           ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBMRSU_NEXT           ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBMRSU_TIMEOUT        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMTBMR_R_TBPLO_MASK          ((uint32_t)0x00000800U)
#define GPTM_GPTMTBMR_R_TBPLO_BIT           (11U)
#define GPTM_GPTMTBMR_R_TBPLO_LOW           ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_R_TBPLO_HIGH          ((uint32_t)0x00000800U)

#define GPTM_GPTMTBMR_TBPLO_MASK            ((uint32_t)0x00000001U)
#define GPTM_GPTMTBMR_TBPLO_LOW             ((uint32_t)0x00000000U)
#define GPTM_GPTMTBMR_TBPLO_HIGH            ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_TBMR_H_ */
