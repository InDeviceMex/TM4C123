/*
 * FPU_Struct.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_H_

#include <stdint.h>

typedef volatile struct
{
    const    uint32_t reserved     :20;
    volatile uint32_t CP10         :2;
    volatile uint32_t CP11         :2;
    const    uint32_t reserved1    :8;
}CPACR_TypeDef;



typedef volatile struct
{
    volatile uint32_t LSPACT        :1;
    volatile uint32_t USER          :1;
    const    uint32_t reserved      :1;
    volatile uint32_t THREAD        :1;
    volatile uint32_t HFRDY         :1;
    volatile uint32_t MMRDY         :1;
    volatile uint32_t BFRDY         :1;
    const    uint32_t reserved1     :1;
    volatile uint32_t MONRDY        :1;
    const    uint32_t reserved2     :21;
    volatile uint32_t LSPEN         :1;
    volatile uint32_t ASPEN         :1;
}FPCCR_TypeDef;



typedef volatile struct
{
    const    uint32_t reserved       :3;
    volatile uint32_t ADDRESS        :29;
}FPCAR_TypeDef;


typedef volatile struct
{
    volatile uint32_t IOC           :1;
    volatile uint32_t DZC           :1;
    volatile uint32_t OFC           :1;
    volatile uint32_t UFC           :1;
    volatile uint32_t IXC           :1;
    const    uint32_t reserved      :2;
    volatile uint32_t IDC           :1;
    const    uint32_t reserved1     :14;
    volatile uint32_t RMODE         :2;
    volatile uint32_t FZ            :1;
    volatile uint32_t DN            :1;
    volatile uint32_t AHP           :1;
    const    uint32_t reserved2     :1;
    volatile uint32_t V             :1;
    volatile uint32_t C             :1;
    volatile uint32_t Z             :1;
    volatile uint32_t N             :1;
}FPSCR_TypeDef;

typedef volatile struct
{
    const    uint32_t reserved      :22;
    volatile uint32_t RMODE         :2;
    volatile uint32_t FZ            :1;
    volatile uint32_t DN            :1;
    volatile uint32_t AHP           :1;
    const    uint32_t reserved1     :5;
}FPDSCR_TypeDef;


typedef volatile struct
{
    const  uint32_t A_SIMD_registers  :4;
    const  uint32_t Single_precision  :4;
    const  uint32_t Double_precision  :4;
    const  uint32_t FP_excep_trapping :4;
    const  uint32_t Divide            :4;
    const  uint32_t Square_root       :4;
    const  uint32_t Short_vectors     :4;
    const  uint32_t P_rounding_modes  :4;
}MVFR0_TypeDef;

typedef volatile struct
{
    const  uint32_t FtZ_mode          :4;
    const  uint32_t D_NaN_mode        :4;
    const  uint32_t reserved          :16;
    const  uint32_t FP_HPFP           :4;
    const  uint32_t FP_fused_MAC      :4;
}MVFR1_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t       CPACR;
        CPACR_TypeDef           CPACR_Bit;
    };
    uint32_t                reserved[106];
    union
    {
        volatile uint32_t       FPCCR;
        FPCCR_TypeDef           FPCCR_Bit;
    };
    union
    {
        volatile uint32_t       FPCAR;
        FPCAR_TypeDef           FPCAR_Bit;
    };
    union
    {
        volatile uint32_t       FPDSCR;
        FPDSCR_TypeDef          FPDSCR_Bit;
    };
    union
    {
        const  uint32_t         MVFR0;
        MVFR0_TypeDef           MVFR0_Bit;
    };
    union
    {
        const  uint32_t         MVFR1;
        MVFR1_TypeDef           MVFR1_Bit;
    };
        const  uint32_t         MVFR2;
}FPU_TypeDef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_STRUCT_H_ */
