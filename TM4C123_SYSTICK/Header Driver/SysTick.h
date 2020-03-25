/*
 * SysTick.h
 *
 *  Created on: 20/03/2020
 *      Author: vyldram
 */

#ifndef HEADER_DRIVER_SYSTICK_H_
#define HEADER_DRIVER_SYSTICK_H_

#include <stdint.h>                             /* standard types definitions                      */
#include "SCB.h"
//#include "RCC.h" //ToDo uncomment when RCC was implemented

#define SysTick_BASE            ((uint32_t)0xE000E000)
#define SysTick_VALUEMAX        ((uint32_t)0xFFFFFF)
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



#define SysTick_CSR_OFFSET      ((uint32_t)0x010)
#define SysTick_RVR_OFFSET      ((uint32_t)0x014)
#define SysTick_CVR_OFFSET      ((uint32_t)0x018)
#define SysTick_CR_OFFSET       ((uint32_t)0x01C)

/*********************************************************************************************
************************************** 1 CSR **********************************************
*********************************************************************************************/

#define SysTick_CSR                     (((SysTick_CSR_TypeDef*)(SysTick_BASE+SysTick_CSR_OFFSET)))
#define SysTick_CSR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CSR_OFFSET)))

/*--------*/
#define SysTick_CSR_R_COUNTFLAG_MASK        ((uint32_t)0x00010000)
#define SysTick_CSR_R_COUNTFLAG_BIT         (16)
#define SysTick_CSR_R_COUNTFLAG_COMPLETE    ((uint32_t)0x00010000)
#define SysTick_CSR_R_COUNTFLAG_NOCOMPLETE  ((uint32_t)0x00000000)

#define SysTick_CSR_COUNTFLAG_MASK          ((uint32_t)0x00000001)
#define SysTick_CSR_COUNTFLAG_COMPLETE      ((uint32_t)0x00000001)
#define SysTick_CSR_COUNTFLAG_NOCOMPLETE    ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SysTick_CSR_R_CLKSOURCE_MASK   ((uint32_t)0x00000004)
#define SysTick_CSR_R_CLKSOURCE_BIT    (2)
#define SysTick_CSR_R_CLKSOURCE_PIOSC4   ((uint32_t)0x00000000)
#define SysTick_CSR_R_CLKSOURCE_SYSCLK ((uint32_t)0x00000004)

#define SysTick_CSR_CLKSOURCE_MASK     ((uint32_t)0x00000001)
#define SysTick_CSR_CLKSOURCE_PIOSC4     ((uint32_t)0x00000000)
#define SysTick_CSR_CLKSOURCE_SYSCLK   ((uint32_t)0x00000001)
/*--------*/

/*--------*/
#define SysTick_CSR_R_TICKINT_MASK     ((uint32_t)0x00000002)
#define SysTick_CSR_R_TICKINT_BIT      (1)
#define SysTick_CSR_R_TICKINT_EN       ((uint32_t)0x00000002)
#define SysTick_CSR_R_TICKINT_DIS      ((uint32_t)0x00000000)

#define SysTick_CSR_TICKINT_MASK       ((uint32_t)0x00000001)
#define SysTick_CSR_TICKINT_EN         ((uint32_t)0x00000001)
#define SysTick_CSR_TICKINT_DIS        ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SysTick_CSR_R_ENABLE_MASK       ((uint32_t)0x00000001)
#define SysTick_CSR_R_ENABLE_BIT        (0)
#define SysTick_CSR_R_ENABLE_EN         ((uint32_t)0x00000001)
#define SysTick_CSR_R_ENABLE_DIS        ((uint32_t)0x00000000)

#define SysTick_CSR_ENABLE_MASK         ((uint32_t)0x00000001)
#define SysTick_CSR_ENABLE_EN           ((uint32_t)0x00000001)
#define SysTick_CSR_ENABLE_DIS          ((uint32_t)0x00000000)
/*--------*/

/*********************************************************************************************
************************************** 2 LOAD **********************************************
*********************************************************************************************/

#define SysTick_RVR                     (((SysTick_RVR_TypeDef*)(SysTick_BASE+SysTick_RVR_OFFSET)))
#define SysTick_RVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_RVR_OFFSET)))

/*--------*/
#define SysTick_RVR_R_RELOAD_MASK       ((uint32_t)0x00FFFFFF)
#define SysTick_RVR_R_RELOAD_BIT        (0)

#define SysTick_RVR_RELOAD_MASK         ((uint32_t)0x00FFFFFF)
/*--------*/

/*********************************************************************************************
**************************************** 3 VAL **********************************************
***********************************************************************************************/

#define SysTick_CVR                     (((SysTick_CVR_TypeDef*)(SysTick_BASE+SysTick_CVR_OFFSET)))
#define SysTick_CVR_R                   (*((volatile uint32_t *)(SysTick_BASE+SysTick_CVR_OFFSET)))

/*--------*/
#define SysTick_CVR_R_CURRENT_MASK    ((uint32_t)0x00FFFFFF)
#define SysTick_CVR_R_CURRENT_BIT     (0)

#define SysTick_CVR_CURRENT_MASK      ((uint32_t)0x00FFFFFF)
/*--------*/


/*********************************************************************************************
**************************************** 3 CR **********************************************
***********************************************************************************************/

#define SysTick_CR                   (((SysTick_CR_TypeDef*)(SysTick_BASE+SysTick_CR_OFFSET)))
#define SysTick_CR_R                 (*((volatile uint32_t *)(SysTick_BASE+SysTick_CR_OFFSET)))

/*--------*/
#define SysTick_CR_R_TENMS_MASK      ((uint32_t)0x00FFFFFF)
#define SysTick_CR_R_TENMS_BIT       (0)

#define SysTick_CR_TENMS_MASK        ((uint32_t)0x00FFFFFF)
/*--------*/

/*--------*/
#define SysTick_CR_R_SKEW_MASK       ((uint32_t)0x40000000)
#define SysTick_CR_R_SKEW_BIT        (30)
#define SysTick_CR_R_SKEW_EXACT      ((uint32_t)0x40000000)
#define SysTick_CR_R_SKEW_INEXACT    ((uint32_t)0x00000000)

#define SysTick_CR_SKEW_MASK         ((uint32_t)0x00000001)
#define SysTick_CR_SKEW_EXACT        ((uint32_t)0x00000001)
#define SysTick_CR_SKEW_INEXACT      ((uint32_t)0x00000000)
/*--------*/

/*--------*/
#define SysTick_CR_R_NOREF_MASK      ((uint32_t)0x80000000)
#define SysTick_CR_R_NOREF_BIT       (31)
#define SysTick_CR_R_NOREF_SAME      ((uint32_t)0x80000000)
#define SysTick_CR_R_NOREF_OTHER     ((uint32_t)0x00000000)

#define SysTick_CR_NOREF_MASK        ((uint32_t)0x00000001)
#define SysTick_CR_NOREF_SAME        ((uint32_t)0x00000001)
#define SysTick_CR_NOREF_OTHER       ((uint32_t)0x00000000)
/*--------*/


/*********************************************************************************************
************************************** PROTOTYPES **********************************************
*********************************************************************************************/

typedef enum
{
    SysTick_enOK=0,
    SysTick_enERROR=1,
}SysTick_nSTATUS;

typedef enum
{
    SysTick_enPIOSC4=0,
    SysTick_enSYSCLK=1,
}SysTick_nCLKSOURCE;

SysTick_nSTATUS SysTick__enInitTick(uint32_t u32Tick, SCB_nSHPR enPriority, SysTick_nCLKSOURCE enClockSource);
SysTick_nSTATUS SysTick__enInitFrequency(float fFrequency, SCB_nSHPR enPriority);
SysTick_nSTATUS SysTick__enInitUs(float fTimeUs, SCB_nSHPR enPriority);

inline float SysTick__fGetTimeUs(void);
inline float SysTick__fGetFrequency(void);
inline void SysTick__vClearCount(void);
inline uint32_t SysTick__u32GetCount(void);
inline uint32_t SysTick__u32GetCurrentTick(void);
inline uint64_t SysTick__u64GetCurrentCountTick(void);
inline uint32_t SysTick__u32GetMaxTick(void);

inline void SysTick__vDelayUs(float fTimeUs);

void SysTickISR(void);



#endif /* HEADER_DRIVER_SYSTICK_H_ */
