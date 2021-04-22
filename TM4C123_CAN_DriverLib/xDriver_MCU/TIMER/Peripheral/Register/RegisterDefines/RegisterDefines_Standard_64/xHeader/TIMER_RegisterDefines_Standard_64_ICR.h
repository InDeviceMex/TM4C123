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

#include <xUtils/Standard/Standard.h>

/******************************************************************************************
************************************ 9 GPTMICR *********************************************
******************************************************************************************/

/*----------*/
#define GPWTM_GPTMICR_R_TATOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_R_TATOCINT_BIT    (0UL)
#define GPWTM_GPTMICR_R_TATOCINT_CLEAR    ((uint32_t) 0x00000001UL)

#define GPWTM_GPTMICR_TATOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_TATOCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CAMCINT_MASK    ((uint32_t) 0x00000002UL)
#define GPWTM_GPTMICR_R_CAMCINT_BIT    (1UL)
#define GPWTM_GPTMICR_R_CAMCINT_CLEAR    ((uint32_t) 0x00000002UL)

#define GPWTM_GPTMICR_CAMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_CAMCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CAECINT_MASK    ((uint32_t) 0x00000004UL)
#define GPWTM_GPTMICR_R_CAECINT_BIT    (2UL)
#define GPWTM_GPTMICR_R_CAECINT_CLEAR    ((uint32_t) 0x00000004UL)

#define GPWTM_GPTMICR_CAECINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_CAECINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_RTCCINT_MASK    ((uint32_t) 0x00000008UL)
#define GPWTM_GPTMICR_R_RTCCINT_BIT    (3UL)
#define GPWTM_GPTMICR_R_RTCCINT_CLEAR    ((uint32_t) 0x00000008UL)

#define GPWTM_GPTMICR_RTCCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_RTCCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_TAMCINT_MASK    ((uint32_t) 0x00000010UL)
#define GPWTM_GPTMICR_R_TAMCINT_BIT    (4UL)
#define GPWTM_GPTMICR_R_TAMCINT_CLEAR    ((uint32_t) 0x00000010UL)

#define GPWTM_GPTMICR_TAMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_TAMCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_TBTOCINT_MASK    ((uint32_t) 0x00000100UL)
#define GPWTM_GPTMICR_R_TBTOCINT_BIT    (8UL)
#define GPWTM_GPTMICR_R_TBTOCINT_CLEAR    ((uint32_t) 0x00000100UL)

#define GPWTM_GPTMICR_TBTOCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_TBTOCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CBMCINT_MASK    ((uint32_t) 0x00000200UL)
#define GPWTM_GPTMICR_R_CBMCINT_BIT    (9UL)
#define GPWTM_GPTMICR_R_CBMCINT_CLEAR    ((uint32_t) 0x00000200UL)

#define GPWTM_GPTMICR_CBMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_CBMCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_CBECINT_MASK    ((uint32_t) 0x00000400UL)
#define GPWTM_GPTMICR_R_CBECINT_BIT    (10UL)
#define GPWTM_GPTMICR_R_CBECINT_CLEAR    ((uint32_t) 0x00000400UL)

#define GPWTM_GPTMICR_CBECINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_CBECINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_TBMCINT_MASK    ((uint32_t) 0x00000800UL)
#define GPWTM_GPTMICR_R_TBMCINT_BIT    (11UL)
#define GPWTM_GPTMICR_R_TBMCINT_CLEAR    ((uint32_t) 0x00000800UL)

#define GPWTM_GPTMICR_TBMCINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_TBMCINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

/*----------*/
#define GPWTM_GPTMICR_R_WUECINT_MASK    ((uint32_t) 0x00010000UL)
#define GPWTM_GPTMICR_R_WUECINT_BIT    (16UL)
#define GPWTM_GPTMICR_R_WUECINT_CLEAR    ((uint32_t) 0x00010000UL)

#define GPWTM_GPTMICR_WUECINT_MASK    ((uint32_t) 0x00000001UL)
#define GPWTM_GPTMICR_WUECINT_CLEAR    ((uint32_t) 0x00000001UL)
/*----------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_TIMER_TIMER_PERIPHERAL_TIMER_REGISTER_TIMER_REGISTERDEFINES_TIMER_REGISTERDEFINES_STANDARD_64_TIMER_REGISTERDEFINES_STANDARD_64_ICR_H_ */
