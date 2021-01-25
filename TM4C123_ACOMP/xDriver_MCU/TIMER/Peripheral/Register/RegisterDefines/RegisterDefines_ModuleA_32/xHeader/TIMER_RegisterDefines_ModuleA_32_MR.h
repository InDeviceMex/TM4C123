/**
 *
 * @file TIMER_RegisterDefines_ModuleA_32_MR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_MR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_MR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnMR_MASK       ((uint32_t)0x00000003U)
#define GPWTM_TA_GPTMTnMR_R_TnMR_BIT        (0U)
#define GPWTM_TA_GPTMTnMR_R_TnMR_ONESHOT    ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_R_TnMR_PERIOD     ((uint32_t)0x00000002U)
#define GPWTM_TA_GPTMTnMR_R_TnMR_CAPTURE    ((uint32_t)0x00000003U)

#define GPWTM_TA_GPTMTnMR_TnMR_MASK         ((uint32_t)0x00000003U)
#define GPWTM_TA_GPTMTnMR_TnMR_ONESHOT      ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnMR_PERIOD       ((uint32_t)0x00000002U)
#define GPWTM_TA_GPTMTnMR_TnMR_CAPTURE      ((uint32_t)0x00000003U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnCMR_MASK      ((uint32_t)0x00000004U)
#define GPWTM_TA_GPTMTnMR_R_TnCMR_BIT       (2U)
#define GPWTM_TA_GPTMTnMR_R_TnCMR_EDGECOUNT ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnCMR_EDGETIME  ((uint32_t)0x00000004U)

#define GPWTM_TA_GPTMTnMR_TnCMR_MASK        ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnCMR_EDGECOUNT   ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnCMR_EDGETIME    ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnAMS_MASK      ((uint32_t)0x00000008U)
#define GPWTM_TA_GPTMTnMR_R_TnAMS_BIT       (3U)
#define GPWTM_TA_GPTMTnMR_R_TnAMS_CAPCOMP   ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnAMS_PWM       ((uint32_t)0x00000008U)

#define GPWTM_TA_GPTMTnMR_TnAMS_MASK        ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnAMS_CAPCOMP     ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnAMS_PWM         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnCDIR_MASK     ((uint32_t)0x00000010U)
#define GPWTM_TA_GPTMTnMR_R_TnCDIR_BIT      (4U)
#define GPWTM_TA_GPTMTnMR_R_TnCDIR_DOWN     ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnCDIR_UP       ((uint32_t)0x00000010U)

#define GPWTM_TA_GPTMTnMR_TnCDIR_MASK       ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnCDIR_DOWN       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnCDIR_UP         ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnMIE_MASK      ((uint32_t)0x00000020U)
#define GPWTM_TA_GPTMTnMR_R_TnMIE_BIT       (5U)
#define GPWTM_TA_GPTMTnMR_R_TnMIE_DIS       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnMIE_EN        ((uint32_t)0x00000020U)

#define GPWTM_TA_GPTMTnMR_TnMIE_MASK        ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnMIE_DIS         ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnMIE_EN          ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnWOT_MASK      ((uint32_t)0x00000040U)
#define GPWTM_TA_GPTMTnMR_R_TnWOT_BIT       (6U)
#define GPWTM_TA_GPTMTnMR_R_TnWOT_INSTANT   ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnWOT_TRIGGER   ((uint32_t)0x00000040U)

#define GPWTM_TA_GPTMTnMR_TnWOT_MASK        ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnWOT_INSTANT     ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnWOT_TRIGGER     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnSNAPS_MASK    ((uint32_t)0x00000080U)
#define GPWTM_TA_GPTMTnMR_R_TnSNAPS_BIT     (7U)
#define GPWTM_TA_GPTMTnMR_R_TnSNAPS_DIS     ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnSNAPS_EN      ((uint32_t)0x00000080U)

#define GPWTM_TA_GPTMTnMR_TnSNAPS_MASK      ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnSNAPS_DIS       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnSNAPS_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnILD_MASK      ((uint32_t)0x00000100U)
#define GPWTM_TA_GPTMTnMR_R_TnILD_BIT       (8U)
#define GPWTM_TA_GPTMTnMR_R_TnILD_NEXT      ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnILD_TIMEOUT   ((uint32_t)0x00000100U)

#define GPWTM_TA_GPTMTnMR_TnILD_MASK        ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnILD_NEXT        ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnILD_TIMEOUT     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnPWMIE_MASK    ((uint32_t)0x00000200U)
#define GPWTM_TA_GPTMTnMR_R_TnPWMIE_BIT     (9U)
#define GPWTM_TA_GPTMTnMR_R_TnPWMIE_DIS     ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnPWMIE_EN      ((uint32_t)0x00000200U)

#define GPWTM_TA_GPTMTnMR_TnPWMIE_MASK      ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnPWMIE_DIS       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnPWMIE_EN        ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnMRSU_MASK     ((uint32_t)0x00000400U)
#define GPWTM_TA_GPTMTnMR_R_TnMRSU_BIT      (10U)
#define GPWTM_TA_GPTMTnMR_R_TnMRSU_NEXT     ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnMRSU_TIMEOUT  ((uint32_t)0x00000400U)

#define GPWTM_TA_GPTMTnMR_TnMRSU_MASK       ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnMRSU_NEXT       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnMRSU_TIMEOUT    ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPWTM_TA_GPTMTnMR_R_TnPLO_MASK      ((uint32_t)0x00000800U)
#define GPWTM_TA_GPTMTnMR_R_TnPLO_BIT       (11U)
#define GPWTM_TA_GPTMTnMR_R_TnPLO_LOW       ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_R_TnPLO_HIGH      ((uint32_t)0x00000800U)

#define GPWTM_TA_GPTMTnMR_TnPLO_MASK        ((uint32_t)0x00000001U)
#define GPWTM_TA_GPTMTnMR_TnPLO_LOW         ((uint32_t)0x00000000U)
#define GPWTM_TA_GPTMTnMR_TnPLO_HIGH        ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEA_32_TIMER_REGISTERDEFINES_MODULEA_32_MR_H_ */
