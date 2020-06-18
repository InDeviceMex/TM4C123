/*
 * SYSTICK_Struct.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_H_

#include <stdint.h>                             /* standard types definitions                      */

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





#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSTICK_SYSTICK_PERIPHERAL_SYSTICK_STRUCT_H_ */
