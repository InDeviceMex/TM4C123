/**
 *
 * @file SYSTICK_RegisterDefines.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERDEFINES_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERDEFINES_H_

#include <xUtils/Standard/Standard.h>

/*********************************************************************************************
************************************** 1 CSR **********************************************
*********************************************************************************************/
/*--------*/
#define SysTick_CSR_R_COUNTFLAG_MASK        ((uint32_t)0x00010000U)
#define SysTick_CSR_R_COUNTFLAG_BIT         (16U)
#define SysTick_CSR_R_COUNTFLAG_COMPLETE    ((uint32_t)0x00010000U)
#define SysTick_CSR_R_COUNTFLAG_NOCOMPLETE  ((uint32_t)0x00000000U)

#define SysTick_CSR_COUNTFLAG_MASK          ((uint32_t)0x00000001U)
#define SysTick_CSR_COUNTFLAG_COMPLETE      ((uint32_t)0x00000001U)
#define SysTick_CSR_COUNTFLAG_NOCOMPLETE    ((uint32_t)0x00000000U)
/*--------*/

/*--------*/
#define SysTick_CSR_R_CLKSOURCE_MASK   ((uint32_t)0x00000004U)
#define SysTick_CSR_R_CLKSOURCE_BIT    (2U)
#define SysTick_CSR_R_CLKSOURCE_PIOSC4   ((uint32_t)0x00000000U)
#define SysTick_CSR_R_CLKSOURCE_SYSCLK ((uint32_t)0x00000004U)

#define SysTick_CSR_CLKSOURCE_MASK     ((uint32_t)0x00000001U)
#define SysTick_CSR_CLKSOURCE_PIOSC4     ((uint32_t)0x00000000U)
#define SysTick_CSR_CLKSOURCE_SYSCLK   ((uint32_t)0x00000001U)
/*--------*/

/*--------*/
#define SysTick_CSR_R_TICKINT_MASK     ((uint32_t)0x00000002U)
#define SysTick_CSR_R_TICKINT_BIT      (1U)
#define SysTick_CSR_R_TICKINT_EN       ((uint32_t)0x00000002U)
#define SysTick_CSR_R_TICKINT_DIS      ((uint32_t)0x00000000U)

#define SysTick_CSR_TICKINT_MASK       ((uint32_t)0x00000001U)
#define SysTick_CSR_TICKINT_EN         ((uint32_t)0x00000001U)
#define SysTick_CSR_TICKINT_DIS        ((uint32_t)0x00000000U)
/*--------*/

/*--------*/
#define SysTick_CSR_R_ENABLE_MASK       ((uint32_t)0x00000001U)
#define SysTick_CSR_R_ENABLE_BIT        (0U)
#define SysTick_CSR_R_ENABLE_EN         ((uint32_t)0x00000001U)
#define SysTick_CSR_R_ENABLE_DIS        ((uint32_t)0x00000000U)

#define SysTick_CSR_ENABLE_MASK         ((uint32_t)0x00000001U)
#define SysTick_CSR_ENABLE_EN           ((uint32_t)0x00000001U)
#define SysTick_CSR_ENABLE_DIS          ((uint32_t)0x00000000U)
/*--------*/

/*********************************************************************************************
************************************** 2 LOAD **********************************************
*********************************************************************************************/
/*--------*/
#define SysTick_RVR_R_RELOAD_MASK       ((uint32_t)0x00FFFFFFU)
#define SysTick_RVR_R_RELOAD_BIT        (0U)

#define SysTick_RVR_RELOAD_MASK         ((uint32_t)0x00FFFFFFU)
/*--------*/

/*********************************************************************************************
**************************************** 3 VAL **********************************************
***********************************************************************************************/
/*--------*/
#define SysTick_CVR_R_CURRENT_MASK    ((uint32_t)0x00FFFFFFU)
#define SysTick_CVR_R_CURRENT_BIT     (0U)

#define SysTick_CVR_CURRENT_MASK      ((uint32_t)0x00FFFFFFU)
/*--------*/

/*********************************************************************************************
**************************************** 3 CR **********************************************
***********************************************************************************************/
/*--------*/
#define SysTick_CR_R_TENMS_MASK      ((uint32_t)0x00FFFFFFU)
#define SysTick_CR_R_TENMS_BIT       (0U)

#define SysTick_CR_TENMS_MASK        ((uint32_t)0x00FFFFFFU)
/*--------*/

/*--------*/
#define SysTick_CR_R_SKEW_MASK       ((uint32_t)0x40000000U)
#define SysTick_CR_R_SKEW_BIT        (30U)
#define SysTick_CR_R_SKEW_EXACT      ((uint32_t)0x40000000U)
#define SysTick_CR_R_SKEW_INEXACT    ((uint32_t)0x00000000U)

#define SysTick_CR_SKEW_MASK         ((uint32_t)0x00000001U)
#define SysTick_CR_SKEW_EXACT        ((uint32_t)0x00000001U)
#define SysTick_CR_SKEW_INEXACT      ((uint32_t)0x00000000U)
/*--------*/

/*--------*/
#define SysTick_CR_R_NOREF_MASK      ((uint32_t)0x80000000U)
#define SysTick_CR_R_NOREF_BIT       (31U)
#define SysTick_CR_R_NOREF_SAME      ((uint32_t)0x80000000U)
#define SysTick_CR_R_NOREF_OTHER     ((uint32_t)0x00000000U)

#define SysTick_CR_NOREF_MASK        ((uint32_t)0x00000001U)
#define SysTick_CR_NOREF_SAME        ((uint32_t)0x00000001U)
#define SysTick_CR_NOREF_OTHER       ((uint32_t)0x00000000U)
/*--------*/

#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_SYSTICK_REGISTERDEFINES_H_ */
