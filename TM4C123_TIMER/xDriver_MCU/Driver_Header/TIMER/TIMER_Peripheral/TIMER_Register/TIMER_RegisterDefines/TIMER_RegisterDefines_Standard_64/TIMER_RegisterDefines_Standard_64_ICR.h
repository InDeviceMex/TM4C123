/**
 *
 * @file TIMER_RegisterDefines_Standard_64_ICR.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_ICR_H_
#define XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_ICR_H_

#include <stdint.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMICR_R_TATOCINT_MASK                   ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_R_TATOCINT_BIT                    (0u)
#define GPWTM_GPTMICR_R_TATOCINT_CLEAR                  ((uint32_t)0x00000001u)

#define GPWTM_GPTMICR_TATOCINT_MASK                     ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_TATOCINT_CLEAR                    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CAMCINT_MASK                    ((uint32_t)0x00000002u)
#define GPWTM_GPTMICR_R_CAMCINT_BIT                     (1u)
#define GPWTM_GPTMICR_R_CAMCINT_CLEAR                   ((uint32_t)0x00000002u)

#define GPWTM_GPTMICR_CAMCINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_CAMCINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CAECINT_MASK                    ((uint32_t)0x00000004u)
#define GPWTM_GPTMICR_R_CAECINT_BIT                     (2u)
#define GPWTM_GPTMICR_R_CAECINT_CLEAR                   ((uint32_t)0x00000004u)

#define GPWTM_GPTMICR_CAECINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_CAECINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_RTCCINT_MASK                    ((uint32_t)0x00000008u)
#define GPWTM_GPTMICR_R_RTCCINT_BIT                     (3u)
#define GPWTM_GPTMICR_R_RTCCINT_CLEAR                   ((uint32_t)0x00000008u)

#define GPWTM_GPTMICR_RTCCINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_RTCCINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_TAMCINT_MASK                    ((uint32_t)0x00000010u)
#define GPWTM_GPTMICR_R_TAMCINT_BIT                     (4u)
#define GPWTM_GPTMICR_R_TAMCINT_CLEAR                   ((uint32_t)0x00000010u)

#define GPWTM_GPTMICR_TAMCINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_TAMCINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_TBTOCINT_MASK                   ((uint32_t)0x00000100u)
#define GPWTM_GPTMICR_R_TBTOCINT_BIT                    (8u)
#define GPWTM_GPTMICR_R_TBTOCINT_CLEAR                  ((uint32_t)0x00000100u)

#define GPWTM_GPTMICR_TBTOCINT_MASK                     ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_TBTOCINT_CLEAR                    ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CBMCINT_MASK                    ((uint32_t)0x00000200u)
#define GPWTM_GPTMICR_R_CBMCINT_BIT                     (9u)
#define GPWTM_GPTMICR_R_CBMCINT_CLEAR                   ((uint32_t)0x00000200u)

#define GPWTM_GPTMICR_CBMCINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_CBMCINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CBECINT_MASK                    ((uint32_t)0x00000400u)
#define GPWTM_GPTMICR_R_CBECINT_BIT                     (10u)
#define GPWTM_GPTMICR_R_CBECINT_CLEAR                   ((uint32_t)0x00000400u)

#define GPWTM_GPTMICR_CBECINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_CBECINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_TBMCINT_MASK                    ((uint32_t)0x00000800u)
#define GPWTM_GPTMICR_R_TBMCINT_BIT                     (11u)
#define GPWTM_GPTMICR_R_TBMCINT_CLEAR                   ((uint32_t)0x00000800u)

#define GPWTM_GPTMICR_TBMCINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_TBMCINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_WUECINT_MASK                    ((uint32_t)0x00010000u)
#define GPWTM_GPTMICR_R_WUECINT_BIT                     (16u)
#define GPWTM_GPTMICR_R_WUECINT_CLEAR                   ((uint32_t)0x00010000u)

#define GPWTM_GPTMICR_WUECINT_MASK                      ((uint32_t)0x00000001u)
#define GPWTM_GPTMICR_WUECINT_CLEAR                     ((uint32_t)0x00000001u)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_ICR_H_ */
