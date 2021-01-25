/**
 *
 * @file TIMER_RegisterDefines_ModuleB_16_MR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_MR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_MR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 3 GPTMTBMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnMR_MASK        ((uint32_t)0x00000003U)
#define GPTM_TB_GPTMTnMR_R_TnMR_BIT         (0U)
#define GPTM_TB_GPTMTnMR_R_TnMR_ONESHOT     ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_R_TnMR_PERIOD      ((uint32_t)0x00000002U)
#define GPTM_TB_GPTMTnMR_R_TnMR_CAPTURE     ((uint32_t)0x00000003U)

#define GPTM_TB_GPTMTnMR_TnMR_MASK          ((uint32_t)0x00000003U)
#define GPTM_TB_GPTMTnMR_TnMR_ONESHOT       ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnMR_PERIOD        ((uint32_t)0x00000002U)
#define GPTM_TB_GPTMTnMR_TnMR_CAPTURE       ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnCMR_MASK       ((uint32_t)0x00000004U)
#define GPTM_TB_GPTMTnMR_R_TnCMR_BIT        (2U)
#define GPTM_TB_GPTMTnMR_R_TnCMR_EDGECOUNT  ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnCMR_EDGETIME   ((uint32_t)0x00000004U)

#define GPTM_TB_GPTMTnMR_TnCMR_MASK         ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnCMR_EDGECOUNT    ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnCMR_EDGETIME     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnAMS_MASK       ((uint32_t)0x00000008U)
#define GPTM_TB_GPTMTnMR_R_TnAMS_BIT        (3U)
#define GPTM_TB_GPTMTnMR_R_TnAMS_CAPCOMP    ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnAMS_PWM        ((uint32_t)0x00000008U)

#define GPTM_TB_GPTMTnMR_TnAMS_MASK         ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnAMS_CAPCOMP      ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnAMS_PWM          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnCDIR_MASK      ((uint32_t)0x00000010U)
#define GPTM_TB_GPTMTnMR_R_TnCDIR_BIT       (4U)
#define GPTM_TB_GPTMTnMR_R_TnCDIR_DOWN      ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnCDIR_UP        ((uint32_t)0x00000010U)

#define GPTM_TB_GPTMTnMR_TnCDIR_MASK        ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnCDIR_DOWN        ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnCDIR_UP          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnMIE_MASK       ((uint32_t)0x00000020U)
#define GPTM_TB_GPTMTnMR_R_TnMIE_BIT        (5U)
#define GPTM_TB_GPTMTnMR_R_TnMIE_DIS        ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnMIE_EN         ((uint32_t)0x00000020U)

#define GPTM_TB_GPTMTnMR_TnMIE_MASK         ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnMIE_DIS          ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnMIE_EN           ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnWOT_MASK       ((uint32_t)0x00000040U)
#define GPTM_TB_GPTMTnMR_R_TnWOT_BIT        (6U)
#define GPTM_TB_GPTMTnMR_R_TnWOT_INSTBNT    ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnWOT_TRIGGER    ((uint32_t)0x00000040U)

#define GPTM_TB_GPTMTnMR_TnWOT_MASK         ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnWOT_INSTBNT      ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnWOT_TRIGGER      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnSNAPS_MASK     ((uint32_t)0x00000080U)
#define GPTM_TB_GPTMTnMR_R_TnSNAPS_BIT      (7U)
#define GPTM_TB_GPTMTnMR_R_TnSNAPS_DIS      ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnSNAPS_EN       ((uint32_t)0x00000080U)

#define GPTM_TB_GPTMTnMR_TnSNAPS_MASK       ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnSNAPS_DIS        ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnSNAPS_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnILD_MASK       ((uint32_t)0x00000100U)
#define GPTM_TB_GPTMTnMR_R_TnILD_BIT        (8U)
#define GPTM_TB_GPTMTnMR_R_TnILD_NEXT       ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnILD_TIMEOUT    ((uint32_t)0x00000100U)

#define GPTM_TB_GPTMTnMR_TnILD_MASK         ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnILD_NEXT         ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnILD_TIMEOUT      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnPWMIE_MASK     ((uint32_t)0x00000200U)
#define GPTM_TB_GPTMTnMR_R_TnPWMIE_BIT      (9U)
#define GPTM_TB_GPTMTnMR_R_TnPWMIE_DIS      ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnPWMIE_EN       ((uint32_t)0x00000200U)

#define GPTM_TB_GPTMTnMR_TnPWMIE_MASK       ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnPWMIE_DIS        ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnPWMIE_EN         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnMRSU_MASK      ((uint32_t)0x00000400U)
#define GPTM_TB_GPTMTnMR_R_TnMRSU_BIT       (10U)
#define GPTM_TB_GPTMTnMR_R_TnMRSU_NEXT      ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnMRSU_TIMEOUT   ((uint32_t)0x00000400U)

#define GPTM_TB_GPTMTnMR_TnMRSU_MASK        ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnMRSU_NEXT        ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnMRSU_TIMEOUT     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_TB_GPTMTnMR_R_TnPLO_MASK       ((uint32_t)0x00000800U)
#define GPTM_TB_GPTMTnMR_R_TnPLO_BIT        (11U)
#define GPTM_TB_GPTMTnMR_R_TnPLO_LOW        ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_R_TnPLO_HIGH       ((uint32_t)0x00000800U)

#define GPTM_TB_GPTMTnMR_TnPLO_MASK         ((uint32_t)0x00000001U)
#define GPTM_TB_GPTMTnMR_TnPLO_LOW          ((uint32_t)0x00000000U)
#define GPTM_TB_GPTMTnMR_TnPLO_HIGH         ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEB_16_TIMER_REGISTERDEFINES_MODULEB_16_MR_H_ */
