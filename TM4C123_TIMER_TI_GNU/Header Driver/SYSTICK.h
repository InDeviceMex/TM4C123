/*
 * SysTick.h
 *
 *  Created on: 20/03/2020
 *      Author: vyldram
 */

#ifndef HEADER_DRIVER_SYSTICK_H_
#define HEADER_DRIVER_SYSTICK_H_

#include <xUtils/Standard/Standard.h>                             /* standard types definitions                      */
#include "SCB.h"
#include "SYSCTL.h"

#define SysTick_BASE            ((uint32_t)0xE000E000u)
#define SysTick_VALUEMAX        ((uint32_t)0xFFFFFFu)
#define SysTick_PIOSC4          ((uint32_t)4000000u)
#define SysTick_PIOSC           ((uint32_t)16000000u)

typedef volatile struct
{
    volatile uint32_t ENABLE            :1;
    volatile uint32_t TICKINT           :1;
    volatile uint32_t CLKSOURCE         :1;
    const    uint32_t reserved          :13;
    const volatile uint32_t COUNTFLAG   :1;
    const    uint32_t reserved1         :15;
}SysTick_CSR_TypeDef;



typedef volatile struct
{
    volatile uint32_t RELOAD            :24;
    const    uint32_t reserved          :8;
}SysTick_RVR_TypeDef;



typedef volatile struct
{
    volatile uint32_t CURRENT           :24;
    const    uint32_t reserved          :8;
}SysTick_CVR_TypeDef;


typedef volatile struct
{
    volatile uint32_t TENMS             :24;
             uint32_t reserved          :6;
    volatile const  uint32_t SKEW       :1;
    volatile const  uint32_t NOREF      :1;
}SysTick_CR_TypeDef;


typedef volatile struct
{
    uint32_t                reserved[4];
    union
    {
        volatile uint32_t       CSR;
        SysTick_CSR_TypeDef     CSR_Bit;
    };
    union
    {
        volatile uint32_t       RVR;
        SysTick_RVR_TypeDef     RVR_Bit;
    };
    union
    {
        volatile uint32_t       CVR;
        SysTick_CVR_TypeDef     CVR_Bit;
    };
    union
    {
        const uint32_t        CR;
        SysTick_CR_TypeDef    CR_Bit;
    };
}SysTick_TypeDef;



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
#define SysTick_CSR_R_COUNTFLAG_BIT         (16u)
#define SysTick_CSR_R_COUNTFLAG_COMPLETE    ((uint32_t)0x00010000u)
#define SysTick_CSR_R_COUNTFLAG_NOCOMPLETE  ((uint32_t)0x00000000u)

#define SysTick_CSR_COUNTFLAG_MASK          ((uint32_t)0x00000001u)
#define SysTick_CSR_COUNTFLAG_COMPLETE      ((uint32_t)0x00000001u)
#define SysTick_CSR_COUNTFLAG_NOCOMPLETE    ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SysTick_CSR_R_CLKSOURCE_MASK   ((uint32_t)0x00000004u)
#define SysTick_CSR_R_CLKSOURCE_BIT    (2u)
#define SysTick_CSR_R_CLKSOURCE_PIOSC4   ((uint32_t)0x00000000u)
#define SysTick_CSR_R_CLKSOURCE_SYSCLK ((uint32_t)0x00000004u)

#define SysTick_CSR_CLKSOURCE_MASK     ((uint32_t)0x00000001u)
#define SysTick_CSR_CLKSOURCE_PIOSC4     ((uint32_t)0x00000000u)
#define SysTick_CSR_CLKSOURCE_SYSCLK   ((uint32_t)0x00000001u)
/*--------*/

/*--------*/
#define SysTick_CSR_R_TICKINT_MASK     ((uint32_t)0x00000002u)
#define SysTick_CSR_R_TICKINT_BIT      (1u)
#define SysTick_CSR_R_TICKINT_EN       ((uint32_t)0x00000002u)
#define SysTick_CSR_R_TICKINT_DIS      ((uint32_t)0x00000000u)

#define SysTick_CSR_TICKINT_MASK       ((uint32_t)0x00000001u)
#define SysTick_CSR_TICKINT_EN         ((uint32_t)0x00000001u)
#define SysTick_CSR_TICKINT_DIS        ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SysTick_CSR_R_ENABLE_MASK       ((uint32_t)0x00000001u)
#define SysTick_CSR_R_ENABLE_BIT        (0u)
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
#define SysTick_RVR_R_RELOAD_BIT        (0u)

#define SysTick_RVR_RELOAD_MASK         ((uint32_t)0x00FFFFFFu)
/*--------*/

/*********************************************************************************************
**************************************** 3 VAL **********************************************
***********************************************************************************************/

#define SysTick_CVR                     (((SysTick_CVR_TypeDef*)(SysTick_BASE+SysTick_CVR_OFFSET)))
#define SysTick_CVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CVR_OFFSET)))

/*--------*/
#define SysTick_CVR_R_CURRENT_MASK    ((uint32_t)0x00FFFFFFu)
#define SysTick_CVR_R_CURRENT_BIT     (0u)

#define SysTick_CVR_CURRENT_MASK      ((uint32_t)0x00FFFFFFu)
/*--------*/


/*********************************************************************************************
**************************************** 3 CR **********************************************
***********************************************************************************************/

#define SysTick_CR                   (((SysTick_CR_TypeDef*)(SysTick_BASE+SysTick_CR_OFFSET)))
#define SysTick_CR_R                 (*((volatile uint32_t *)(SysTick_BASE+SysTick_CR_OFFSET)))

/*--------*/
#define SysTick_CR_R_TENMS_MASK      ((uint32_t)0x00FFFFFFu)
#define SysTick_CR_R_TENMS_BIT       (0u)

#define SysTick_CR_TENMS_MASK        ((uint32_t)0x00FFFFFFu)
/*--------*/

/*--------*/
#define SysTick_CR_R_SKEW_MASK       ((uint32_t)0x40000000u)
#define SysTick_CR_R_SKEW_BIT        (30u)
#define SysTick_CR_R_SKEW_EXACT      ((uint32_t)0x40000000u)
#define SysTick_CR_R_SKEW_INEXACT    ((uint32_t)0x00000000u)

#define SysTick_CR_SKEW_MASK         ((uint32_t)0x00000001u)
#define SysTick_CR_SKEW_EXACT        ((uint32_t)0x00000001u)
#define SysTick_CR_SKEW_INEXACT      ((uint32_t)0x00000000u)
/*--------*/

/*--------*/
#define SysTick_CR_R_NOREF_MASK      ((uint32_t)0x80000000u)
#define SysTick_CR_R_NOREF_BIT       (31u)
#define SysTick_CR_R_NOREF_SAME      ((uint32_t)0x80000000u)
#define SysTick_CR_R_NOREF_OTHER     ((uint32_t)0x00000000u)

#define SysTick_CR_NOREF_MASK        ((uint32_t)0x00000001u)
#define SysTick_CR_NOREF_SAME        ((uint32_t)0x00000001u)
#define SysTick_CR_NOREF_OTHER       ((uint32_t)0x00000000u)
/*--------*/


/*********************************************************************************************
************************************** PROTOTYPES **********************************************
*********************************************************************************************/

typedef enum
{
    SysTick_enOK=0u,
    SysTick_enERROR=1u,
}SysTick_nSTATUS;

typedef enum
{
    SysTick_enPIOSC4=0u,
    SysTick_enSYSCLK=1u,
}SysTick_nCLKSOURCE;

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource);
SysTick_nSTATUS SysTick__enInitFrequency(float32_t fFrequency, SCB_nSHPR enPriority);
SysTick_nSTATUS SysTick__enInitUs(float32_t fTimeUs, SCB_nSHPR enPriority);

float32_t SysTick__fGetTimeUs(void);
float32_t SysTick__fGetFrequency(void);
void SysTick__vClearCount(void);
uint32_t SysTick__u32GetCount(void);
uint32_t SysTick__u32GetCurrentTick(void);
uint64_t SysTick__u64GetCurrentCountTick(void);
uint32_t SysTick__u32GetMaxTick(void);

void SysTick__vDelayUs(float32_t fTimeUs);


#endif /* HEADER_DRIVER_SYSTICK_H_ */
