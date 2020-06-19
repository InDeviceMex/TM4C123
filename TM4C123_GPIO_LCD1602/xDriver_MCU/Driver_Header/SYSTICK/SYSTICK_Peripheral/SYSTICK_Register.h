/*
 * SYSTICK_Register.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_H_

#include <xDriver_MCU/Driver_Header/SYSTICK/SYSTICK_Peripheral/SYSTICK_Struct.h>

#define SysTick_BASE            ((uint32_t)0xE000E000u)
#define SysTick_VALUEMAX        ((uint32_t)0xFFFFFFu)
#define SysTick_PIOSC4          ((uint32_t)4000000u)
#define SysTick_PIOSC           ((uint32_t)16000000u)

#define SysTick                 (((SysTick_TypeDef*)(SysTick_BASE)))



#define SysTick_CSR_OFFSET      ((uint32_t)0x010u)
#define SysTick_RVR_OFFSET      ((uint32_t)0x014u)
#define SysTick_CVR_OFFSET      ((uint32_t)0x018u)
#define SysTick_CR_OFFSET       ((uint32_t)0x01Cu)

/*********************************************************************************************
************************************** 1 CSR **********************************************
*********************************************************************************************/

#define SysTick_CSR                     (((SysTick_CSR_TypeDef*)(SysTick_BASE+SysTick_CSR_OFFSET)))
#define SysTick_CSR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CSR_OFFSET)))

/*--------*/
#define SysTick_CSR_R_COUNTFLAG_MASK        ((uint32_t)0x00010000u)
#define SysTick_CSR_R_COUNTFLAG_BIT         (16)
#define SysTick_CSR_R_COUNTFLAG_COMPLETE    ((uint32_t)0x00010000u)
#define SysTick_CSR_R_COUNTFLAG_NOCOMPLETE  ((uint32_t)0x00000000u)

#define SysTick_CSR_COUNTFLAG_MASK          ((uint32_t)0x00000001u)
#define SysTick_CSR_COUNTFLAG_COMPLETE      ((uint32_t)0x00000001u)
#define SysTick_CSR_COUNTFLAG_NOCOMPLETE    ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SysTick_CSR_R_CLKSOURCE_MASK   ((uint32_t)0x00000004u)
#define SysTick_CSR_R_CLKSOURCE_BIT    (2)
#define SysTick_CSR_R_CLKSOURCE_PIOSC4   ((uint32_t)0x00000000u)
#define SysTick_CSR_R_CLKSOURCE_SYSCLK ((uint32_t)0x00000004u)

#define SysTick_CSR_CLKSOURCE_MASK     ((uint32_t)0x00000001u)
#define SysTick_CSR_CLKSOURCE_PIOSC4     ((uint32_t)0x00000000u)
#define SysTick_CSR_CLKSOURCE_SYSCLK   ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SysTick_CSR_R_TICKINT_MASK     ((uint32_t)0x00000002u)
#define SysTick_CSR_R_TICKINT_BIT      (1)
#define SysTick_CSR_R_TICKINT_EN       ((uint32_t)0x00000002u)
#define SysTick_CSR_R_TICKINT_DIS      ((uint32_t)0x00000000u)

#define SysTick_CSR_TICKINT_MASK       ((uint32_t)0x00000001u)
#define SysTick_CSR_TICKINT_EN         ((uint32_t)0x00000001u)
#define SysTick_CSR_TICKINT_DIS        ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SysTick_CSR_R_ENABLE_MASK       ((uint32_t)0x00000001u)
#define SysTick_CSR_R_ENABLE_BIT        (0)
#define SysTick_CSR_R_ENABLE_EN         ((uint32_t)0x00000001u)
#define SysTick_CSR_R_ENABLE_DIS        ((uint32_t)0x00000000u)

#define SysTick_CSR_ENABLE_MASK         ((uint32_t)0x00000001u)
#define SysTick_CSR_ENABLE_EN           ((uint32_t)0x00000001u)
#define SysTick_CSR_ENABLE_DIS          ((uint32_t)0x00000000u)
/*--------*/

/*********************************************************************************************
************************************** 2 LOAD **********************************************
*********************************************************************************************/

#define SysTick_RVR                     (((SysTick_RVR_TypeDef*)(SysTick_BASE+SysTick_RVR_OFFSET)))
#define SysTick_RVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_RVR_OFFSET)))

/*--------*/
#define SysTick_RVR_R_RELOAD_MASK       ((uint32_t)0x00FFFFFFu)
#define SysTick_RVR_R_RELOAD_BIT        (0)

#define SysTick_RVR_RELOAD_MASK         ((uint32_t)0x00FFFFFFu)
/*--------*/

/*********************************************************************************************
**************************************** 3 VAL **********************************************
***********************************************************************************************/

#define SysTick_CVR                     (((SysTick_CVR_TypeDef*)(SysTick_BASE+SysTick_CVR_OFFSET)))
#define SysTick_CVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CVR_OFFSET)))

/*--------*/
#define SysTick_CVR_R_CURRENT_MASK    ((uint32_t)0x00FFFFFFu)
#define SysTick_CVR_R_CURRENT_BIT     (0)

#define SysTick_CVR_CURRENT_MASK      ((uint32_t)0x00FFFFFFu)
/*--------*/


/*********************************************************************************************
**************************************** 3 CR **********************************************
***********************************************************************************************/

#define SysTick_CR                   (((SysTick_CR_TypeDef*)(SysTick_BASE+SysTick_CR_OFFSET)))
#define SysTick_CR_R                 (*((volatile uint32_t *)(SysTick_BASE+SysTick_CR_OFFSET)))

/*--------*/
#define SysTick_CR_R_TENMS_MASK      ((uint32_t)0x00FFFFFFu)
#define SysTick_CR_R_TENMS_BIT       (0)

#define SysTick_CR_TENMS_MASK        ((uint32_t)0x00FFFFFFu)
/*--------*/

/*--------*/
#define SysTick_CR_R_SKEW_MASK       ((uint32_t)0x40000000u)
#define SysTick_CR_R_SKEW_BIT        (30)
#define SysTick_CR_R_SKEW_EXACT      ((uint32_t)0x40000000u)
#define SysTick_CR_R_SKEW_INEXACT    ((uint32_t)0x00000000u)

#define SysTick_CR_SKEW_MASK         ((uint32_t)0x00000001u)
#define SysTick_CR_SKEW_EXACT        ((uint32_t)0x00000001u)
#define SysTick_CR_SKEW_INEXACT      ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SysTick_CR_R_NOREF_MASK      ((uint32_t)0x80000000u)
#define SysTick_CR_R_NOREF_BIT       (31)
#define SysTick_CR_R_NOREF_SAME      ((uint32_t)0x80000000u)
#define SysTick_CR_R_NOREF_OTHER     ((uint32_t)0x00000000u)

#define SysTick_CR_NOREF_MASK        ((uint32_t)0x00000001u)
#define SysTick_CR_NOREF_SAME        ((uint32_t)0x00000001u)
#define SysTick_CR_NOREF_OTHER       ((uint32_t)0x00000000u)
/*--------*/


/*********************************************************************************************
************************************** PROTOTYPES **********************************************
*********************************************************************************************/



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_REGISTER_H_ */
