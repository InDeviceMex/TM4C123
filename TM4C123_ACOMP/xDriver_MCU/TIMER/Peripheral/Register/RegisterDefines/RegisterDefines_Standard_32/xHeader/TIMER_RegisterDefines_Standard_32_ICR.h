/**
 *
 * @file TIMER_RegisterDefines_Standard_32_ICR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_ICR_H_

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPTM_GPTMICR_R_TATOCINT_MASK                    ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_R_TATOCINT_BIT                     (0U)
#define GPTM_GPTMICR_R_TATOCINT_CLEAR                   ((uint32_t)0x00000001U)

#define GPTM_GPTMICR_TATOCINT_MASK                      ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_TATOCINT_CLEAR                     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_CAMCINT_MASK                     ((uint32_t)0x00000002U)
#define GPTM_GPTMICR_R_CAMCINT_BIT                      (1U)
#define GPTM_GPTMICR_R_CAMCINT_CLEAR                    ((uint32_t)0x00000002U)

#define GPTM_GPTMICR_CAMCINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_CAMCINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_CAECINT_MASK                     ((uint32_t)0x00000004U)
#define GPTM_GPTMICR_R_CAECINT_BIT                      (2U)
#define GPTM_GPTMICR_R_CAECINT_CLEAR                    ((uint32_t)0x00000004U)

#define GPTM_GPTMICR_CAECINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_CAECINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_RTCCINT_MASK                     ((uint32_t)0x00000008U)
#define GPTM_GPTMICR_R_RTCCINT_BIT                      (3U)
#define GPTM_GPTMICR_R_RTCCINT_CLEAR                    ((uint32_t)0x00000008U)

#define GPTM_GPTMICR_RTCCINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_RTCCINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_TAMCINT_MASK                     ((uint32_t)0x00000010U)
#define GPTM_GPTMICR_R_TAMCINT_BIT                      (4U)
#define GPTM_GPTMICR_R_TAMCINT_CLEAR                    ((uint32_t)0x00000010U)

#define GPTM_GPTMICR_TAMCINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_TAMCINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_TBTOCINT_MASK                    ((uint32_t)0x00000100U)
#define GPTM_GPTMICR_R_TBTOCINT_BIT                     (8U)
#define GPTM_GPTMICR_R_TBTOCINT_CLEAR                   ((uint32_t)0x00000100U)

#define GPTM_GPTMICR_TBTOCINT_MASK                      ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_TBTOCINT_CLEAR                     ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_CBMCINT_MASK                     ((uint32_t)0x00000200U)
#define GPTM_GPTMICR_R_CBMCINT_BIT                      (9U)
#define GPTM_GPTMICR_R_CBMCINT_CLEAR                    ((uint32_t)0x00000200U)

#define GPTM_GPTMICR_CBMCINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_CBMCINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_CBECINT_MASK                     ((uint32_t)0x00000400U)
#define GPTM_GPTMICR_R_CBECINT_BIT                      (10U)
#define GPTM_GPTMICR_R_CBECINT_CLEAR                    ((uint32_t)0x00000400U)

#define GPTM_GPTMICR_CBECINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_CBECINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_TBMCINT_MASK                     ((uint32_t)0x00000800U)
#define GPTM_GPTMICR_R_TBMCINT_BIT                      (11U)
#define GPTM_GPTMICR_R_TBMCINT_CLEAR                    ((uint32_t)0x00000800U)

#define GPTM_GPTMICR_TBMCINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_TBMCINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

/*----------*/
#define GPTM_GPTMICR_R_WUECINT_MASK                     ((uint32_t)0x00010000U)
#define GPTM_GPTMICR_R_WUECINT_BIT                      (16U)
#define GPTM_GPTMICR_R_WUECINT_CLEAR                    ((uint32_t)0x00010000U)

#define GPTM_GPTMICR_WUECINT_MASK                       ((uint32_t)0x00000001U)
#define GPTM_GPTMICR_WUECINT_CLEAR                      ((uint32_t)0x00000001U)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_32_TIMER_REGISTERDEFINES_STANDARD_32_ICR_H_ */
