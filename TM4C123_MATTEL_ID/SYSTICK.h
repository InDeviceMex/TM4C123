/*
 * SYSTICK.h
 *
 *  Created on: Jan 18, 2018
 *      Author: Lalo_Alvarez
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include "SCB.h"
#include "SYSCTL.h"
#include "GPIO.h"
#include <stdint.h>

#define SysTick_BASE            (0xE000E000)


////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// STCTRL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

typedef volatile struct
{
    volatile uint32_t       ENABLE     :1;
    volatile uint32_t       INTEN      :1;
    volatile uint32_t       CLK_SRC    :1;
    const    uint32_t       reserved   :13;
    volatile const uint32_t COUNT      :1;
    const    uint32_t       reserved1  :15;
}STCTRL_TypeDef;



typedef volatile struct
{
    volatile uint32_t RELOAD   :24;
    const    uint32_t reserved :8;
}STRELOAD_TypeDef;



typedef volatile struct
{
    volatile uint32_t CURRENT  :24;
    const    uint32_t reserved :8;
}STCURRENT_TypeDef;


typedef volatile struct
{
    const uint32_t             reserved[4];
    union
    {
        volatile uint32_t      STCTRL;
        STCURRENT_TypeDef           STCTRL_Bit;
    };
    union
    {
        volatile uint32_t      STRELOAD;
        STRELOAD_TypeDef            STRELOAD_Bit;
    };
    union
    {
        volatile uint32_t       STCURRENT;
        STCURRENT_TypeDef            STCURRENT_Bit;
    };
}SysTick_TypeDef;



#define SysTick                 (((SysTick_TypeDef*)(SysTick_BASE)))



#define SysTick_STCTRL_OFFSET    (0x010)
#define SysTick_STRELOAD_OFFSET  (0x014)
#define SysTick_STCURRENT_OFFSET (0x018)

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 1 STCTRL ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SysTick_STCTRL          (((STCTRL_TypeDef*)(SysTick_BASE+SysTick_STCTRL_OFFSET)))
#define SysTick_STCTRL_R        (*((volatile uint32_t *)(SysTick_BASE+SysTick_STCTRL_OFFSET)))

//--------
#define SysTick_STCTRL_R_COUNT_MASK        (0x00010000)
#define SysTick_STCTRL_R_COUNT_BIT         (16)
#define SysTick_STCTRL_R_COUNT_COMPLETE    (0x00010000)
#define SysTick_STCTRL_R_COUNT_NOCOMPLETE  (0x00000000)

#define SysTick_STCTRL_COUNT_MASK           (1)
#define SysTick_STCTRL_COUNT_COMPLETE       (1)
#define SysTick_STCTRL_COUNT_NOCOMPLETE     (0)
//--------

//--------
#define SysTick_STCTRL_R_CLK_SRC_MASK   (0x00000004)
#define SysTick_STCTRL_R_CLK_SRC_BIT    (2)
#define SysTick_STCTRL_R_CLK_SRC_PIOSC  (0x00000000)
#define SysTick_STCTRL_R_CLK_SRC_SYSCLK (0x00000004)

#define SysTick_STCTRL_CLK_SRC_MASK     (1)
#define SysTick_STCTRL_CLK_SRC_PIOSC    (0)
#define SysTick_STCTRL_CLK_SRC_SYSCLK   (1)
//--------

//--------
#define SysTick_STCTRL_R_INTEN_MASK     (0x00000002)
#define SysTick_STCTRL_R_INTEN_BIT      (1)
#define SysTick_STCTRL_R_INTEN_EN       (0x00000002)
#define SysTick_STCTRL_R_INTEN_DIS      (0x00000000)

#define SysTick_STCTRL_INTEN_MASK       (1)
#define SysTick_STCTRL_INTEN_EN         (1)
#define SysTick_STCTRL_INTEN_DIS        (0)
//--------

//--------
#define SysTick_STCTRL_R_ENABLE_MASK    (0x00000001)
#define SysTick_STCTRL_R_ENABLE_BIT     (0)
#define SysTick_STCTRL_R_ENABLE_EN      (0x00000001)
#define SysTick_STCTRL_R_ENABLE_DIS     (0x00000000)

#define SysTick_STCTRL_ENABLE_MASK      (1)
#define SysTick_STCTRL_ENABLE_EN        (1)
#define SysTick_STCTRL_ENABLE_DIS       (0)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 2 STRELOAD ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SysTick_STRELOAD          (((STRELOAD_TypeDef*)(SysTick_BASE+SysTick_STRELOAD_OFFSET)))
#define SysTick_STRELOAD_R        (*((volatile uint32_t *)(SysTick_BASE+SysTick_STRELOAD_OFFSET)))

//--------
#define SysTick_STRELOAD_R_RELOAD_MASK    (0x00FFFFFF)
#define SysTick_STRELOAD_R_RELOAD_BIT     (0)

#define SysTick_STRELOAD_RELOAD_MASK      (0x00FFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// 3 STCURRENT ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

#define SysTick_STCURRENT          (((STCURRENT_Typedef*)(SysTick_BASE+SysTick_STCURRENT_OFFSET)))
#define SysTick_STCURRENT_R        (*((volatile uint32_t *)(SysTick_BASE+SysTick_STCURRENT_OFFSET)))

//--------
#define SysTick_STCURRENT_R_CURRENT_MASK    (0x00FFFFFF)
#define SysTick_STCURRENT_R_CURRENT_BIT     (0)

#define SysTick_STCURRENT_CURRENT_MASK      (0x00FFFFFF)
//--------

////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// PROTOTYPES ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////

int32_t SysTick_Init_us(float time, uint32_t priority);
int32_t SysTick_ChangeTime_us(float time);
void SysTickHandler(void);
int32_t SysTick_State(void);
#endif /* SYSTICK_H_ */
