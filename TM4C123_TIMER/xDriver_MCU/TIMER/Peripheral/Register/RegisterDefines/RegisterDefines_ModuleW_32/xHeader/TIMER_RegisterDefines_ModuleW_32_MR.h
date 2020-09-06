/**
 *
 * @file TIMER_RegisterDefines_ModuleW_32_MR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_MR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_MR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 2 GPTMTAMR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnMR_MASK        ((uint32_t)0x00000003u)
#define GPTM_TW_GPTMTnMR_R_TnMR_BIT         (0u)
#define GPTM_TW_GPTMTnMR_R_TnMR_ONESHOT     ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_R_TnMR_PERIOD      ((uint32_t)0x00000002u)
#define GPTM_TW_GPTMTnMR_R_TnMR_CAPTURE     ((uint32_t)0x00000003u)

#define GPTM_TW_GPTMTnMR_TnMR_MASK          ((uint32_t)0x00000003u)
#define GPTM_TW_GPTMTnMR_TnMR_ONESHOT       ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnMR_PERIOD        ((uint32_t)0x00000002u)
#define GPTM_TW_GPTMTnMR_TnMR_CAPTURE       ((uint32_t)0x00000003u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnCMR_MASK       ((uint32_t)0x00000004u)
#define GPTM_TW_GPTMTnMR_R_TnCMR_BIT        (2u)
#define GPTM_TW_GPTMTnMR_R_TnCMR_EDGECOUNT  ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnCMR_EDGETIME   ((uint32_t)0x00000004u)

#define GPTM_TW_GPTMTnMR_TnCMR_MASK         ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnCMR_EDGECOUNT    ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnCMR_EDGETIME     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnAMS_MASK       ((uint32_t)0x00000008u)
#define GPTM_TW_GPTMTnMR_R_TnAMS_BIT        (3u)
#define GPTM_TW_GPTMTnMR_R_TnAMS_CAPCOMP    ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnAMS_PWM        ((uint32_t)0x00000008u)

#define GPTM_TW_GPTMTnMR_TnAMS_MASK         ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnAMS_CAPCOMP      ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnAMS_PWM          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnCDIR_MASK      ((uint32_t)0x00000010u)
#define GPTM_TW_GPTMTnMR_R_TnCDIR_BIT       (4u)
#define GPTM_TW_GPTMTnMR_R_TnCDIR_DOWN      ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnCDIR_UP        ((uint32_t)0x00000010u)

#define GPTM_TW_GPTMTnMR_TnCDIR_MASK        ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnCDIR_DOWN        ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnCDIR_UP          ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnMIE_MASK       ((uint32_t)0x00000020u)
#define GPTM_TW_GPTMTnMR_R_TnMIE_BIT        (5u)
#define GPTM_TW_GPTMTnMR_R_TnMIE_DIS        ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnMIE_EN         ((uint32_t)0x00000020u)

#define GPTM_TW_GPTMTnMR_TnMIE_MASK         ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnMIE_DIS          ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnMIE_EN           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnWOT_MASK       ((uint32_t)0x00000040u)
#define GPTM_TW_GPTMTnMR_R_TnWOT_BIT        (6u)
#define GPTM_TW_GPTMTnMR_R_TnWOT_INSTANT    ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnWOT_TRIGGER    ((uint32_t)0x00000040u)

#define GPTM_TW_GPTMTnMR_TnWOT_MASK         ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnWOT_INSTANT      ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnWOT_TRIGGER      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnSNAPS_MASK     ((uint32_t)0x00000080u)
#define GPTM_TW_GPTMTnMR_R_TnSNAPS_BIT      (7u)
#define GPTM_TW_GPTMTnMR_R_TnSNAPS_DIS      ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnSNAPS_EN       ((uint32_t)0x00000080u)

#define GPTM_TW_GPTMTnMR_TnSNAPS_MASK       ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnSNAPS_DIS        ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnSNAPS_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnILD_MASK       ((uint32_t)0x00000100u)
#define GPTM_TW_GPTMTnMR_R_TnILD_BIT        (8u)
#define GPTM_TW_GPTMTnMR_R_TnILD_NEXT       ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnILD_TIMEOUT    ((uint32_t)0x00000100u)

#define GPTM_TW_GPTMTnMR_TnILD_MASK         ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnILD_NEXT         ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnILD_TIMEOUT      ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnPWMIE_MASK     ((uint32_t)0x00000200u)
#define GPTM_TW_GPTMTnMR_R_TnPWMIE_BIT      (9u)
#define GPTM_TW_GPTMTnMR_R_TnPWMIE_DIS      ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnPWMIE_EN       ((uint32_t)0x00000200u)

#define GPTM_TW_GPTMTnMR_TnPWMIE_MASK       ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnPWMIE_DIS        ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnPWMIE_EN         ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnMRSU_MASK      ((uint32_t)0x00000400u)
#define GPTM_TW_GPTMTnMR_R_TnMRSU_BIT       (10u)
#define GPTM_TW_GPTMTnMR_R_TnMRSU_NEXT      ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnMRSU_TIMEOUT   ((uint32_t)0x00000400u)

#define GPTM_TW_GPTMTnMR_TnMRSU_MASK        ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnMRSU_NEXT        ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnMRSU_TIMEOUT     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPTM_TW_GPTMTnMR_R_TnPLO_MASK       ((uint32_t)0x00000800u)
#define GPTM_TW_GPTMTnMR_R_TnPLO_BIT        (11u)
#define GPTM_TW_GPTMTnMR_R_TnPLO_LOW        ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_R_TnPLO_HIGH       ((uint32_t)0x00000800u)

#define GPTM_TW_GPTMTnMR_TnPLO_MASK         ((uint32_t)0x00000001u)
#define GPTM_TW_GPTMTnMR_TnPLO_LOW          ((uint32_t)0x00000000u)
#define GPTM_TW_GPTMTnMR_TnPLO_HIGH         ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_MODULEW_32_TIMER_REGISTERDEFINES_MODULEW_32_MR_H_ */
