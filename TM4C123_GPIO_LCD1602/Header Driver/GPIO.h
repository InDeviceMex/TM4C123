/*
 * GPIO.h
 *
 *  Created on: Dec 27, 2017
 *      Author: Lalo_Alvarez
 */

#ifndef GPIO_H_
#define GPIO_H_


#include <stdint.h>
#include "SCB.h"
#include "NVIC.h"
#include "SYSCTL.h"

#define GPIO_APB_BASE               (0x40004000)
#define GPIOA_APB_BASE              (0x40004000)
#define GPIOB_APB_BASE              (0x40005000)
#define GPIOC_APB_BASE              (0x40006000)
#define GPIOD_APB_BASE              (0x40007000)
#define GPIOE_APB_BASE              (0x40024000)
#define GPIOF_APB_BASE              (0x40025000)

#define GPIO_APB_OFFSET             (0x00004000)
#define GPIOA_APB_OFFSET            (0x00004000)
#define GPIOB_APB_OFFSET            (0x00005000)
#define GPIOC_APB_OFFSET            (0x00006000)
#define GPIOD_APB_OFFSET            (0x00007000)
#define GPIOE_APB_OFFSET            (0x00024000)
#define GPIOF_APB_OFFSET            (0x00025000)

#define GPIO_AHB_BASE               (0x40058000)
#define GPIOA_AHB_BASE              (0x40058000)
#define GPIOB_AHB_BASE              (0x40059000)
#define GPIOC_AHB_BASE              (0x4005A000)
#define GPIOD_AHB_BASE              (0x4005B000)
#define GPIOE_AHB_BASE              (0x4005C000)
#define GPIOF_AHB_BASE              (0x4005D000)

#define GPIO_AHB_OFFSET             (0x00058000)
#define GPIOA_AHB_OFFSET            (0x00058000)
#define GPIOB_AHB_OFFSET            (0x00059000)
#define GPIOC_AHB_OFFSET            (0x0005A000)
#define GPIOD_AHB_OFFSET            (0x0005B000)
#define GPIOE_AHB_OFFSET            (0x0005C000)
#define GPIOF_AHB_OFFSET            (0x0005D000)

#define GPIO_BITBANDING_BASE        (0x42000000)

typedef volatile struct
{
    volatile uint32_t DATA0    :1;
    volatile uint32_t DATA1    :1;
    volatile uint32_t DATA2    :1;
    volatile uint32_t DATA3    :1;
    volatile uint32_t DATA4    :1;
    volatile uint32_t DATA5    :1;
    volatile uint32_t DATA6    :1;
    volatile uint32_t DATA7    :1;
    const    uint32_t reserved :24;
}GPIODATA_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t       DATA_MASK[255];
        GPIODATA_TypeDef        DATA_MASK_Bit[255];
    };
    union
    {
        volatile uint32_t       DATA;
        GPIODATA_TypeDef        DATA_Bit;
    };
}GPIODATA_MASK_TypeDef;

typedef volatile struct
{
    volatile uint32_t DIR0    :1;
    volatile uint32_t DIR1    :1;
    volatile uint32_t DIR2    :1;
    volatile uint32_t DIR3    :1;
    volatile uint32_t DIR4    :1;
    volatile uint32_t DIR5    :1;
    volatile uint32_t DIR6    :1;
    volatile uint32_t DIR7    :1;
    const    uint32_t reserved:24;
}GPIODIR_TypeDef;


typedef volatile struct
{
    volatile uint32_t IS0     :1;
    volatile uint32_t IS1     :1;
    volatile uint32_t IS2     :1;
    volatile uint32_t IS3     :1;
    volatile uint32_t IS4     :1;
    volatile uint32_t IS5     :1;
    volatile uint32_t IS6     :1;
    volatile uint32_t IS7     :1;
    const    uint32_t reserved:24;
}GPIOIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IBE0     :1;
    volatile uint32_t IBE1     :1;
    volatile uint32_t IBE2     :1;
    volatile uint32_t IBE3     :1;
    volatile uint32_t IBE4     :1;
    volatile uint32_t IBE5     :1;
    volatile uint32_t IBE6     :1;
    volatile uint32_t IBE7     :1;
    const    uint32_t reserved :24;
}GPIOIBE_TypeDef;

typedef volatile struct
{
    volatile uint32_t IEV0     :1;
    volatile uint32_t IEV1     :1;
    volatile uint32_t IEV2     :1;
    volatile uint32_t IEV3     :1;
    volatile uint32_t IEV4     :1;
    volatile uint32_t IEV5     :1;
    volatile uint32_t IEV6     :1;
    volatile uint32_t IEV7     :1;
    const    uint32_t reserved :24;
}GPIOIEV_TypeDef;

typedef volatile struct
{
    volatile uint32_t IME0     :1;
    volatile uint32_t IME1     :1;
    volatile uint32_t IME2     :1;
    volatile uint32_t IME3     :1;
    volatile uint32_t IME4     :1;
    volatile uint32_t IME5     :1;
    volatile uint32_t IME6     :1;
    volatile uint32_t IME7     :1;
    const    uint32_t reserved :24;
}GPIOIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RIS0     :1;
    volatile const uint32_t RIS1     :1;
    volatile const uint32_t RIS2     :1;
    volatile const uint32_t RIS3     :1;
    volatile const uint32_t RIS4     :1;
    volatile const uint32_t RIS5     :1;
    volatile const uint32_t RIS6     :1;
    volatile const uint32_t RIS7     :1;
    const    uint32_t       reserved :24;
}GPIORIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MIS0     :1;
    volatile const uint32_t MIS1     :1;
    volatile const uint32_t MIS2     :1;
    volatile const uint32_t MIS3     :1;
    volatile const uint32_t MIS4     :1;
    volatile const uint32_t MIS5     :1;
    volatile const uint32_t MIS6     :1;
    volatile const uint32_t MIS7     :1;
    const    uint32_t       reserved :24;
}GPIOMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IC0     :1;
    volatile uint32_t IC1     :1;
    volatile uint32_t IC2     :1;
    volatile uint32_t IC3     :1;
    volatile uint32_t IC4     :1;
    volatile uint32_t IC5     :1;
    volatile uint32_t IC6     :1;
    volatile uint32_t IC7     :1;
    const    uint32_t reserved:24;
}GPIOICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t AFSEL0     :1;
    volatile uint32_t AFSEL1     :1;
    volatile uint32_t AFSEL2     :1;
    volatile uint32_t AFSEL3     :1;
    volatile uint32_t AFSEL4     :1;
    volatile uint32_t AFSEL5     :1;
    volatile uint32_t AFSEL6     :1;
    volatile uint32_t AFSEL7     :1;
    const    uint32_t reserved   :24;
}GPIOAFSEL_TypeDef;

typedef volatile struct
{
    volatile uint32_t DRV0     :1;
    volatile uint32_t DRV1     :1;
    volatile uint32_t DRV2     :1;
    volatile uint32_t DRV3     :1;
    volatile uint32_t DRV4     :1;
    volatile uint32_t DRV5     :1;
    volatile uint32_t DRV6     :1;
    volatile uint32_t DRV7     :1;
    const    uint32_t reserved :24;
}GPIODRR_TypeDef;


typedef volatile struct
{
    union
    {
        volatile uint32_t DRV[3];
        GPIODRR_TypeDef DRV_bit[3];
    };
}GPIODRR_ARRAY_TypeDef;

typedef volatile struct
{
    volatile uint32_t DRV20     :1;
    volatile uint32_t DRV21     :1;
    volatile uint32_t DRV22     :1;
    volatile uint32_t DRV23     :1;
    volatile uint32_t DRV24     :1;
    volatile uint32_t DRV25     :1;
    volatile uint32_t DRV26     :1;
    volatile uint32_t DRV27     :1;
    const    uint32_t reserved  :24;
}GPIODR2R_TypeDef;

typedef volatile struct
{
    volatile uint32_t DRV40     :1;
    volatile uint32_t DRV41     :1;
    volatile uint32_t DRV42     :1;
    volatile uint32_t DRV43     :1;
    volatile uint32_t DRV44     :1;
    volatile uint32_t DRV45     :1;
    volatile uint32_t DRV46     :1;
    volatile uint32_t DRV47     :1;
    const    uint32_t reserved  :24;
}GPIODR4R_TypeDef;


typedef volatile struct
{
    volatile uint32_t DRV80     :1;
    volatile uint32_t DRV81     :1;
    volatile uint32_t DRV82     :1;
    volatile uint32_t DRV83     :1;
    volatile uint32_t DRV84     :1;
    volatile uint32_t DRV85     :1;
    volatile uint32_t DRV86     :1;
    volatile uint32_t DRV87     :1;
    const    uint32_t reserved  :24;
}GPIODR8R_TypeDef;

typedef volatile struct
{
    volatile uint32_t ODE0     :1;
    volatile uint32_t ODE1     :1;
    volatile uint32_t ODE2     :1;
    volatile uint32_t ODE3     :1;
    volatile uint32_t ODE4     :1;
    volatile uint32_t ODE5     :1;
    volatile uint32_t ODE6     :1;
    volatile uint32_t ODE7     :1;
    const    uint32_t reserved  :24;
}GPIOODR_TypeDef;

typedef volatile struct
{
    volatile uint32_t PUE0     :1;
    volatile uint32_t PUE1     :1;
    volatile uint32_t PUE2     :1;
    volatile uint32_t PUE3     :1;
    volatile uint32_t PUE4     :1;
    volatile uint32_t PUE5     :1;
    volatile uint32_t PUE6     :1;
    volatile uint32_t PUE7     :1;
    const    uint32_t reserved  :24;
}GPIOPUR_TypeDef;

typedef volatile struct
{
    volatile uint32_t PDE0     :1;
    volatile uint32_t PDE1     :1;
    volatile uint32_t PDE2     :1;
    volatile uint32_t PDE3     :1;
    volatile uint32_t PDE4     :1;
    volatile uint32_t PDE5     :1;
    volatile uint32_t PDE6     :1;
    volatile uint32_t PDE7     :1;
    const    uint32_t reserved  :24;
}GPIOPDR_TypeDef;



typedef volatile struct
{
    volatile uint32_t SRL0     :1;
    volatile uint32_t SRL1     :1;
    volatile uint32_t SRL2     :1;
    volatile uint32_t SRL3     :1;
    volatile uint32_t SRL4     :1;
    volatile uint32_t SRL5     :1;
    volatile uint32_t SRL6     :1;
    volatile uint32_t SRL7     :1;
    const    uint32_t reserved  :24;
}GPIOSLR_TypeDef;


typedef volatile struct
{
    volatile uint32_t DEN0     :1;
    volatile uint32_t DEN1     :1;
    volatile uint32_t DEN2     :1;
    volatile uint32_t DEN3     :1;
    volatile uint32_t DEN4     :1;
    volatile uint32_t DEN5     :1;
    volatile uint32_t DEN6     :1;
    volatile uint32_t DEN7     :1;
    const    uint32_t reserved  :24;
}GPIODEN_TypeDef;


typedef volatile struct
{
    volatile uint32_t LOCK     :32;
}GPIOLOCK_TypeDef;


typedef volatile struct
{
    volatile uint32_t CR0     :1;
    volatile uint32_t CR1     :1;
    volatile uint32_t CR2     :1;
    volatile uint32_t CR3     :1;
    volatile uint32_t CR4     :1;
    volatile uint32_t CR5     :1;
    volatile uint32_t CR6     :1;
    volatile uint32_t CR7     :1;
    const    uint32_t reserved:24;
}GPIOCR_TypeDef;


typedef volatile struct
{
    volatile uint32_t AMSEL0     :1;
    volatile uint32_t AMSEL1     :1;
    volatile uint32_t AMSEL2     :1;
    volatile uint32_t AMSEL3     :1;
    volatile uint32_t AMSEL4     :1;
    volatile uint32_t AMSEL5     :1;
    volatile uint32_t AMSEL6     :1;
    volatile uint32_t AMSEL7     :1;
    const    uint32_t reserved       :24;
}GPIOAMSEL_TypeDef;


typedef volatile struct
{
    volatile uint32_t PMC0 :4;
    volatile uint32_t PMC1 :4;
    volatile uint32_t PMC2 :4;
    volatile uint32_t PMC3 :4;
    volatile uint32_t PMC4 :4;
    volatile uint32_t PMC5 :4;
    volatile uint32_t PMC6 :4;
    volatile uint32_t PMC7 :4;
}GPIOPCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ADCEN0     :1;
    volatile uint32_t ADCEN1     :1;
    volatile uint32_t ADCEN2     :1;
    volatile uint32_t ADCEN3     :1;
    volatile uint32_t ADCEN4     :1;
    volatile uint32_t ADCEN5     :1;
    volatile uint32_t ADCEN6     :1;
    volatile uint32_t ADCEN7     :1;
    const    uint32_t reserved  :24;
}GPIOADCCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t DMAEN0     :1;
    volatile uint32_t DMAEN1     :1;
    volatile uint32_t DMAEN2     :1;
    volatile uint32_t DMAEN3     :1;
    volatile uint32_t DMAEN4     :1;
    volatile uint32_t DMAEN5     :1;
    volatile uint32_t DMAEN6     :1;
    volatile uint32_t DMAEN7     :1;
    const    uint32_t reserved  :24;
}GPIODMACTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID4      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID4_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID5      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID5_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID6      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID6_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID7      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3      :8;
    const    uint32_t       reserved  :24;
}GPIOPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0      :8;
    const    uint32_t       reserved  :24;
}GPIOPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1      :8;
    const    uint32_t       reserved  :24;
}GPIOPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2      :8;
    const    uint32_t       reserved  :24;
}GPIOPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3      :8;
    const    uint32_t       reserved  :24;
}GPIOPCellID3_TypeDef;


typedef volatile struct
{
    volatile uint32_t P0 :1;
    volatile uint32_t P1 :1;
    volatile uint32_t P2 :1;
    volatile uint32_t P3 :1;
    volatile uint32_t P4 :1;
    volatile uint32_t P5 :1;
    volatile uint32_t P6 :1;
    volatile uint32_t P7 :1;
    const    uint32_t reserved :24;
}PINES8_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0 :1;
    volatile uint32_t P1 :1;
    volatile uint32_t P2 :1;
    volatile uint32_t P3 :1;
    volatile uint32_t P4 :1;
    volatile uint32_t P5 :1;
    volatile uint32_t P6 :1;
    volatile uint32_t P7 :1;
    volatile uint32_t P8 :1;
    volatile uint32_t P9 :1;
    volatile uint32_t P10 :1;
    volatile uint32_t P11 :1;
    volatile uint32_t P12 :1;
    volatile uint32_t P13 :1;
    volatile uint32_t P14 :1;
    volatile uint32_t P15 :1;
    const    uint32_t reserved :16;
}PINES16_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0 :1;
    volatile uint32_t P1 :1;
    volatile uint32_t P2 :1;
    volatile uint32_t P3 :1;
    volatile uint32_t P4 :1;
    volatile uint32_t P5 :1;
    volatile uint32_t P6 :1;
    volatile uint32_t P7 :1;
    volatile uint32_t P8 :1;
    volatile uint32_t P9 :1;
    volatile uint32_t P10 :1;
    volatile uint32_t P11 :1;
    volatile uint32_t P12 :1;
    volatile uint32_t P13 :1;
    volatile uint32_t P14 :1;
    volatile uint32_t P15 :1;
    volatile uint32_t P16 :1;
    volatile uint32_t P17 :1;
    volatile uint32_t P18 :1;
    volatile uint32_t P19 :1;
    volatile uint32_t P20 :1;
    volatile uint32_t P21 :1;
    volatile uint32_t P22 :1;
    volatile uint32_t P23 :1;
    volatile uint32_t P24 :1;
    volatile uint32_t P25 :1;
    volatile uint32_t P26 :1;
    volatile uint32_t P27 :1;
    volatile uint32_t P28 :1;
    volatile uint32_t P29 :1;
    volatile uint32_t P30 :1;
    volatile uint32_t P31 :1;
}PINES32_TypeDef;




typedef volatile struct
{
    volatile uint32_t DATA0    ;
    volatile uint32_t DATA1    ;
    volatile uint32_t DATA2    ;
    volatile uint32_t DATA3    ;
    volatile uint32_t DATA4    ;
    volatile uint32_t DATA5    ;
    volatile uint32_t DATA6    ;
    volatile uint32_t DATA7    ;
    const    uint32_t reserved [24];
}BITBANDING_GPIODATA_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t               DATA_MASK[255][32];
        BITBANDING_GPIODATA_TypeDef     DATA_MASK_Bit[255];
    };
    union
    {
        volatile uint32_t               DATA[32];
        BITBANDING_GPIODATA_TypeDef     DATA_Bit;
    };
}BITBANDING_GPIODATA_MASK_TypeDef;

typedef volatile struct
{
    volatile uint32_t DIR0    ;
    volatile uint32_t DIR1    ;
    volatile uint32_t DIR2    ;
    volatile uint32_t DIR3    ;
    volatile uint32_t DIR4    ;
    volatile uint32_t DIR5    ;
    volatile uint32_t DIR6    ;
    volatile uint32_t DIR7    ;
    const    uint32_t reserved[24];
}BITBANDING_GPIODIR_TypeDef;


typedef volatile struct
{
    volatile uint32_t IS0     ;
    volatile uint32_t IS1     ;
    volatile uint32_t IS2     ;
    volatile uint32_t IS3     ;
    volatile uint32_t IS4     ;
    volatile uint32_t IS5     ;
    volatile uint32_t IS6     ;
    volatile uint32_t IS7     ;
    const    uint32_t reserved[24];
}BITBANDING_GPIOIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IBE0     ;
    volatile uint32_t IBE1     ;
    volatile uint32_t IBE2     ;
    volatile uint32_t IBE3     ;
    volatile uint32_t IBE4     ;
    volatile uint32_t IBE5     ;
    volatile uint32_t IBE6     ;
    volatile uint32_t IBE7     ;
    const    uint32_t reserved [24];
}BITBANDING_GPIOIBE_TypeDef;

typedef volatile struct
{
    volatile uint32_t IEV0     ;
    volatile uint32_t IEV1     ;
    volatile uint32_t IEV2     ;
    volatile uint32_t IEV3     ;
    volatile uint32_t IEV4     ;
    volatile uint32_t IEV5     ;
    volatile uint32_t IEV6     ;
    volatile uint32_t IEV7     ;
    const    uint32_t reserved [24];
}BITBANDING_GPIOIEV_TypeDef;

typedef volatile struct
{
    volatile uint32_t IME0     ;
    volatile uint32_t IME1     ;
    volatile uint32_t IME2     ;
    volatile uint32_t IME3     ;
    volatile uint32_t IME4     ;
    volatile uint32_t IME5     ;
    volatile uint32_t IME6     ;
    volatile uint32_t IME7     ;
    const    uint32_t reserved [24];
}BITBANDING_GPIOIM_TypeDef;

typedef volatile struct
{
    volatile const uint32_t RIS0     ;
    volatile const uint32_t RIS1     ;
    volatile const uint32_t RIS2     ;
    volatile const uint32_t RIS3     ;
    volatile const uint32_t RIS4     ;
    volatile const uint32_t RIS5     ;
    volatile const uint32_t RIS6     ;
    volatile const uint32_t RIS7     ;
    const    uint32_t       reserved [24];
}BITBANDING_GPIORIS_TypeDef;

typedef volatile struct
{
    volatile const uint32_t MIS0     ;
    volatile const uint32_t MIS1     ;
    volatile const uint32_t MIS2     ;
    volatile const uint32_t MIS3     ;
    volatile const uint32_t MIS4     ;
    volatile const uint32_t MIS5     ;
    volatile const uint32_t MIS6     ;
    volatile const uint32_t MIS7     ;
    const    uint32_t       reserved [24];
}BITBANDING_GPIOMIS_TypeDef;

typedef volatile struct
{
    volatile uint32_t IC0     ;
    volatile uint32_t IC1     ;
    volatile uint32_t IC2     ;
    volatile uint32_t IC3     ;
    volatile uint32_t IC4     ;
    volatile uint32_t IC5     ;
    volatile uint32_t IC6     ;
    volatile uint32_t IC7     ;
    const    uint32_t reserved[24];
}BITBANDING_GPIOICR_TypeDef;

typedef volatile struct
{
    volatile uint32_t AFSEL0     ;
    volatile uint32_t AFSEL1     ;
    volatile uint32_t AFSEL2     ;
    volatile uint32_t AFSEL3     ;
    volatile uint32_t AFSEL4     ;
    volatile uint32_t AFSEL5     ;
    volatile uint32_t AFSEL6     ;
    volatile uint32_t AFSEL7     ;
    const    uint32_t reserved   [24];
}BITBANDING_GPIOAFSEL_TypeDef;


typedef volatile struct
{
    volatile uint32_t DRV0     ;
    volatile uint32_t DRV1     ;
    volatile uint32_t DRV2     ;
    volatile uint32_t DRV3     ;
    volatile uint32_t DRV4     ;
    volatile uint32_t DRV5     ;
    volatile uint32_t DRV6     ;
    volatile uint32_t DRV7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIODRR_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t DRV[3][32];
        BITBANDING_GPIODRR_TypeDef DRV_bit[3];
    };
}BITBANDING_GPIODRR_ARRAY_TypeDef;

typedef volatile struct
{
    volatile uint32_t DRV20     ;
    volatile uint32_t DRV21     ;
    volatile uint32_t DRV22     ;
    volatile uint32_t DRV23     ;
    volatile uint32_t DRV24     ;
    volatile uint32_t DRV25     ;
    volatile uint32_t DRV26     ;
    volatile uint32_t DRV27     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIODR2R_TypeDef;

typedef volatile struct
{
    volatile uint32_t DRV40     ;
    volatile uint32_t DRV41     ;
    volatile uint32_t DRV42     ;
    volatile uint32_t DRV43     ;
    volatile uint32_t DRV44     ;
    volatile uint32_t DRV45     ;
    volatile uint32_t DRV46     ;
    volatile uint32_t DRV47     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIODR4R_TypeDef;


typedef volatile struct
{
    volatile uint32_t DRV80     ;
    volatile uint32_t DRV81     ;
    volatile uint32_t DRV82     ;
    volatile uint32_t DRV83     ;
    volatile uint32_t DRV84     ;
    volatile uint32_t DRV85     ;
    volatile uint32_t DRV86     ;
    volatile uint32_t DRV87     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIODR8R_TypeDef;

typedef volatile struct
{
    volatile uint32_t ODE0     ;
    volatile uint32_t ODE1     ;
    volatile uint32_t ODE2     ;
    volatile uint32_t ODE3     ;
    volatile uint32_t ODE4     ;
    volatile uint32_t ODE5     ;
    volatile uint32_t ODE6     ;
    volatile uint32_t ODE7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIOODR_TypeDef;

typedef volatile struct
{
    volatile uint32_t PUE0     ;
    volatile uint32_t PUE1     ;
    volatile uint32_t PUE2     ;
    volatile uint32_t PUE3     ;
    volatile uint32_t PUE4     ;
    volatile uint32_t PUE5     ;
    volatile uint32_t PUE6     ;
    volatile uint32_t PUE7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIOPUR_TypeDef;

typedef volatile struct
{
    volatile uint32_t PDE0     ;
    volatile uint32_t PDE1     ;
    volatile uint32_t PDE2     ;
    volatile uint32_t PDE3     ;
    volatile uint32_t PDE4     ;
    volatile uint32_t PDE5     ;
    volatile uint32_t PDE6     ;
    volatile uint32_t PDE7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIOPDR_TypeDef;



typedef volatile struct
{
    volatile uint32_t SRL0     ;
    volatile uint32_t SRL1     ;
    volatile uint32_t SRL2     ;
    volatile uint32_t SRL3     ;
    volatile uint32_t SRL4     ;
    volatile uint32_t SRL5     ;
    volatile uint32_t SRL6     ;
    volatile uint32_t SRL7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIOSLR_TypeDef;


typedef volatile struct
{
    volatile uint32_t DEN0     ;
    volatile uint32_t DEN1     ;
    volatile uint32_t DEN2     ;
    volatile uint32_t DEN3     ;
    volatile uint32_t DEN4     ;
    volatile uint32_t DEN5     ;
    volatile uint32_t DEN6     ;
    volatile uint32_t DEN7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIODEN_TypeDef;


typedef volatile struct
{
    volatile uint32_t LOCK     [32];
}BITBANDING_GPIOLOCK_TypeDef;


typedef volatile struct
{
    volatile uint32_t CR0     ;
    volatile uint32_t CR1     ;
    volatile uint32_t CR2     ;
    volatile uint32_t CR3     ;
    volatile uint32_t CR4     ;
    volatile uint32_t CR5     ;
    volatile uint32_t CR6     ;
    volatile uint32_t CR7     ;
    const    uint32_t reserved[24];
}BITBANDING_GPIOCR_TypeDef;


typedef volatile struct
{
    volatile uint32_t AMSEL0     ;
    volatile uint32_t AMSEL1     ;
    volatile uint32_t AMSEL2     ;
    volatile uint32_t AMSEL3     ;
    volatile uint32_t AMSEL4     ;
    volatile uint32_t AMSEL5     ;
    volatile uint32_t AMSEL6     ;
    volatile uint32_t AMSEL7     ;
    const    uint32_t reserved       [24];
}BITBANDING_GPIOAMSEL_TypeDef;


typedef volatile struct
{
    volatile uint32_t PMC0 [4];
    volatile uint32_t PMC1 [4];
    volatile uint32_t PMC2 [4];
    volatile uint32_t PMC3 [4];
    volatile uint32_t PMC4 [4];
    volatile uint32_t PMC5 [4];
    volatile uint32_t PMC6 [4];
    volatile uint32_t PMC7 [4];
}BITBANDING_GPIOPCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t ADCEN0     ;
    volatile uint32_t ADCEN1     ;
    volatile uint32_t ADCEN2     ;
    volatile uint32_t ADCEN3     ;
    volatile uint32_t ADCEN4     ;
    volatile uint32_t ADCEN5     ;
    volatile uint32_t ADCEN6     ;
    volatile uint32_t ADCEN7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIOADCCTL_TypeDef;


typedef volatile struct
{
    volatile uint32_t DMAEN0     ;
    volatile uint32_t DMAEN1     ;
    volatile uint32_t DMAEN2     ;
    volatile uint32_t DMAEN3     ;
    volatile uint32_t DMAEN4     ;
    volatile uint32_t DMAEN5     ;
    volatile uint32_t DMAEN6     ;
    volatile uint32_t DMAEN7     ;
    const    uint32_t reserved  [24];
}BITBANDING_GPIODMACTL_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID4      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID4_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID5      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID5_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID6      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID6_TypeDef;


typedef volatile struct
{
    volatile const uint32_t PID7      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID7_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID0      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID1      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID2      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t PID3      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPeriphID3_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID0      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPCellID0_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID1      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPCellID1_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID2      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPCellID2_TypeDef;

typedef volatile struct
{
    volatile const uint32_t CID3      [8];
    const    uint32_t       reserved  [24];
}BITBANDING_GPIOPCellID3_TypeDef;


typedef volatile struct
{
    volatile uint32_t P0 ;
    volatile uint32_t P1 ;
    volatile uint32_t P2 ;
    volatile uint32_t P3 ;
    volatile uint32_t P4 ;
    volatile uint32_t P5 ;
    volatile uint32_t P6 ;
    volatile uint32_t P7 ;
    const    uint32_t reserved [24];
}BITBANDING_PINES8_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0 ;
    volatile uint32_t P1 ;
    volatile uint32_t P2 ;
    volatile uint32_t P3 ;
    volatile uint32_t P4 ;
    volatile uint32_t P5 ;
    volatile uint32_t P6 ;
    volatile uint32_t P7 ;
    volatile uint32_t P8 ;
    volatile uint32_t P9 ;
    volatile uint32_t P10 ;
    volatile uint32_t P11 ;
    volatile uint32_t P12 ;
    volatile uint32_t P13 ;
    volatile uint32_t P14 ;
    volatile uint32_t P15 ;
    const    uint32_t reserved [16];
}BITBANDING_PINES16_TypeDef;

typedef volatile struct
{
    volatile uint32_t P0 ;
    volatile uint32_t P1 ;
    volatile uint32_t P2 ;
    volatile uint32_t P3 ;
    volatile uint32_t P4 ;
    volatile uint32_t P5 ;
    volatile uint32_t P6 ;
    volatile uint32_t P7 ;
    volatile uint32_t P8 ;
    volatile uint32_t P9 ;
    volatile uint32_t P10 ;
    volatile uint32_t P11 ;
    volatile uint32_t P12 ;
    volatile uint32_t P13 ;
    volatile uint32_t P14 ;
    volatile uint32_t P15 ;
    volatile uint32_t P16 ;
    volatile uint32_t P17 ;
    volatile uint32_t P18 ;
    volatile uint32_t P19 ;
    volatile uint32_t P20 ;
    volatile uint32_t P21 ;
    volatile uint32_t P22 ;
    volatile uint32_t P23 ;
    volatile uint32_t P24 ;
    volatile uint32_t P25 ;
    volatile uint32_t P26 ;
    volatile uint32_t P27 ;
    volatile uint32_t P28 ;
    volatile uint32_t P29 ;
    volatile uint32_t P30 ;
    volatile uint32_t P31 ;
}BITBANDING_PINES32_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t       GPIODATA_MASK[255];
        GPIODATA_TypeDef        GPIODATA_MASK_Bit[255];
    };
    union
    {
        volatile uint32_t       GPIODATA;
        GPIODATA_TypeDef        GPIODATA_Bit;
    };
    union
    {
        volatile uint32_t       GPIODIR;
        GPIODIR_TypeDef         GPIODIR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIS;
        GPIOIS_TypeDef          GPIOIS_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIBE;
        GPIOIBE_TypeDef         GPIOIBE_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIEV;
        GPIOIEV_TypeDef         GPIOIEV_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIM;
        GPIOIM_TypeDef          GPIOIM_Bit;
    };
    union
    {
        volatile const uint32_t GPIORIS;
        GPIORIS_TypeDef         GPIORIS_Bit;
    };
    union
    {
        volatile const uint32_t GPIOMIS;
        GPIOMIS_TypeDef         GPIOMIS_Bit;
    };
    union
    {
        volatile uint32_t       GPIOICR;
        GPIOICR_TypeDef         GPIOICR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOAFSEL;
        GPIOAFSEL_TypeDef       GPIOAFSEL_Bit;
    };
    const    uint32_t           reserved[55];
    union
    {
        volatile uint32_t       GPIODR2R;
        GPIODR2R_TypeDef        GPIODR2R_Bit;
    };
    union
    {
        volatile uint32_t       GPIODR4R;
        GPIODR4R_TypeDef        GPIODR4R_Bit;
    };
    union
    {
        volatile uint32_t       GPIODR8R;
        GPIODR8R_TypeDef        GPIODR8R_Bit;
    };
    union
    {
        volatile uint32_t       GPIOODR;
        GPIOODR_TypeDef         GPIOODR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPUR;
        GPIOPUR_TypeDef         GPIOPUR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPDR;
        GPIOPDR_TypeDef         GPIOPDR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOSLR;
        GPIOSLR_TypeDef         GPIOSLR_Bit;
    };
    union
    {
        volatile uint32_t       GPIODEN;
        GPIODEN_TypeDef         GPIODEN_Bit;
    };
    union
    {
        volatile uint32_t       GPIOLOCK;
        GPIOLOCK_TypeDef        GPIOLOCK_Bit;
    };
    union
    {
        volatile uint32_t       GPIOCR;
        GPIOCR_TypeDef          GPIOCR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOAMSEL;
        GPIOAMSEL_TypeDef       GPIOAMSEL_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCTL;
        GPIOPCTL_TypeDef        GPIOPCTL_Bit;
    };
    union
    {
        volatile uint32_t       GPIOADCCTL;
        GPIOADCCTL_TypeDef      GPIOADCCTL_Bit;
    };
    union
    {
        volatile uint32_t       GPIODMACTL;
        GPIODMACTL_TypeDef      GPIODMACTL_Bit;
    };
    const uint32_t              reserved1[678];
    union
    {
        volatile uint32_t       GPIOPeriphID4;
        GPIOPeriphID4_TypeDef   GPIOPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID5;
        GPIOPeriphID5_TypeDef   GPIOPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID6;
        GPIOPeriphID6_TypeDef   GPIOPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID7;
        GPIOPeriphID7_TypeDef   GPIOPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID0;
        GPIOPeriphID0_TypeDef   GPIOPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID1;
        GPIOPeriphID1_TypeDef   GPIOPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID2;
        GPIOPeriphID2_TypeDef   GPIOPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID3;
        GPIOPeriphID3_TypeDef   GPIOPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID0;
        GPIOPCellID0_TypeDef    GPIOPCellID0_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID1;
        GPIOPCellID1_TypeDef    GPIOPCellID1_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID2;
        GPIOPCellID2_TypeDef    GPIOPCellID2_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID3;
        GPIOPCellID3_TypeDef    GPIOPCellID3_Bit;
    };
}GPIO_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t       GPIODATA_MASK[255];
        GPIODATA_TypeDef        GPIODATA_MASK_Bit[255];
    };
    union
    {
        volatile uint32_t       GPIODATA;
        GPIODATA_TypeDef        GPIODATA_Bit;
    };
    union
    {
        volatile uint32_t       GPIODIR;
        GPIODIR_TypeDef         GPIODIR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIS;
        GPIOIS_TypeDef          GPIOIS_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIBE;
        GPIOIBE_TypeDef         GPIOIBE_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIEV;
        GPIOIEV_TypeDef         GPIOIEV_Bit;
    };
    union
    {
        volatile uint32_t       GPIOIM;
        GPIOIM_TypeDef          GPIOIM_Bit;
    };
    union
    {
        volatile const uint32_t GPIORIS;
        GPIORIS_TypeDef         GPIORIS_Bit;
    };
    union
    {
        volatile const uint32_t GPIOMIS;
        GPIOMIS_TypeDef         GPIOMIS_Bit;
    };
    union
    {
        volatile uint32_t       GPIOICR;
        GPIOICR_TypeDef         GPIOICR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOAFSEL;
        GPIOAFSEL_TypeDef       GPIOAFSEL_Bit;
    };
    const    uint32_t           reserved[55];
    union
    {
        volatile uint32_t       GPIODRR[3];
        GPIODRR_TypeDef         GPIODRR_Bit[3];
    };

    union
    {
        volatile uint32_t       GPIOODR;
        GPIOODR_TypeDef         GPIOODR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPUR;
        GPIOPUR_TypeDef         GPIOPUR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPDR;
        GPIOPDR_TypeDef         GPIOPDR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOSLR;
        GPIOSLR_TypeDef         GPIOSLR_Bit;
    };
    union
    {
        volatile uint32_t       GPIODEN;
        GPIODEN_TypeDef         GPIODEN_Bit;
    };
    union
    {
        volatile uint32_t       GPIOLOCK;
        GPIOLOCK_TypeDef        GPIOLOCK_Bit;
    };
    union
    {
        volatile uint32_t       GPIOCR;
        GPIOCR_TypeDef          GPIOCR_Bit;
    };
    union
    {
        volatile uint32_t       GPIOAMSEL;
        GPIOAMSEL_TypeDef       GPIOAMSEL_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCTL;
        GPIOPCTL_TypeDef        GPIOPCTL_Bit;
    };
    union
    {
        volatile uint32_t       GPIOADCCTL;
        GPIOADCCTL_TypeDef      GPIOADCCTL_Bit;
    };
    union
    {
        volatile uint32_t       GPIODMACTL;
        GPIODMACTL_TypeDef      GPIODMACTL_Bit;
    };
    const uint32_t              reserved1[678];
    union
    {
        volatile uint32_t       GPIOPeriphID4;
        GPIOPeriphID4_TypeDef   GPIOPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID5;
        GPIOPeriphID5_TypeDef   GPIOPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID6;
        GPIOPeriphID6_TypeDef   GPIOPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID7;
        GPIOPeriphID7_TypeDef   GPIOPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID0;
        GPIOPeriphID0_TypeDef   GPIOPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID1;
        GPIOPeriphID1_TypeDef   GPIOPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID2;
        GPIOPeriphID2_TypeDef   GPIOPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPeriphID3;
        GPIOPeriphID3_TypeDef   GPIOPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID0;
        GPIOPCellID0_TypeDef    GPIOPCellID0_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID1;
        GPIOPCellID1_TypeDef    GPIOPCellID1_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID2;
        GPIOPCellID2_TypeDef    GPIOPCellID2_Bit;
    };
    union
    {
        volatile uint32_t       GPIOPCellID3;
        GPIOPCellID3_TypeDef    GPIOPCellID3_Bit;
    };
}GPIO_AUX_TypeDef;

typedef volatile struct
{
    union
    {
        volatile uint32_t                   GPIODATA_MASK[255][32];
        BITBANDING_GPIODATA_TypeDef         GPIODATA_MASK_Bit[255];
    };
    union
    {
        volatile uint32_t                   GPIODATA[32];
        BITBANDING_GPIODATA_TypeDef         GPIODATA_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODIR[32];
        BITBANDING_GPIODIR_TypeDef          GPIODIR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIS[32];
        BITBANDING_GPIOIS_TypeDef           GPIOIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIBE[32];
        BITBANDING_GPIOIBE_TypeDef          GPIOIBE_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIEV[32];
        BITBANDING_GPIOIEV_TypeDef          GPIOIEV_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIM[32];
        BITBANDING_GPIOIM_TypeDef           GPIOIM_Bit;
    };
    union
    {
        volatile const uint32_t             GPIORIS[32];
        BITBANDING_GPIORIS_TypeDef          GPIORIS_Bit;
    };
    union
    {
        volatile const uint32_t             GPIOMIS[32];
        BITBANDING_GPIOMIS_TypeDef          GPIOMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOICR[32];
        BITBANDING_GPIOICR_TypeDef          GPIOICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOAFSEL[32];
        BITBANDING_GPIOAFSEL_TypeDef        GPIOAFSEL_Bit;
    };
    const    uint32_t                       reserved[55*32];
    union
    {
        volatile uint32_t                   GPIODR2R[32];
        BITBANDING_GPIODR2R_TypeDef         GPIODR2R_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODR4R[32];
        BITBANDING_GPIODR4R_TypeDef         GPIODR4R_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODR8R[32];
        BITBANDING_GPIODR8R_TypeDef         GPIODR8R_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOODR[32];
        BITBANDING_GPIOODR_TypeDef          GPIOODR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPUR[32];
        BITBANDING_GPIOPUR_TypeDef          GPIOPUR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPDR[32];
        BITBANDING_GPIOPDR_TypeDef          GPIOPDR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOSLR[32];
        BITBANDING_GPIOSLR_TypeDef          GPIOSLR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODEN[32];
        BITBANDING_GPIODEN_TypeDef          GPIODEN_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOLOCK[32];
        BITBANDING_GPIOLOCK_TypeDef         GPIOLOCK_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOCR[32];
        BITBANDING_GPIOCR_TypeDef           GPIOCR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOAMSEL[32];
        BITBANDING_GPIOAMSEL_TypeDef        GPIOAMSEL_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCTL[32];
        BITBANDING_GPIOPCTL_TypeDef         GPIOPCTL_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOADCCTL[32];
        BITBANDING_GPIOADCCTL_TypeDef       GPIOADCCTL_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODMACTL[32];
        BITBANDING_GPIODMACTL_TypeDef       GPIODMACTL_Bit;
    };
    const uint32_t                          reserved1[678*32];
    union
    {
        volatile uint32_t                   GPIOPeriphID4[32];
        BITBANDING_GPIOPeriphID4_TypeDef    GPIOPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID5[32];
        BITBANDING_GPIOPeriphID5_TypeDef    GPIOPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID6[32];
        BITBANDING_GPIOPeriphID6_TypeDef    GPIOPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID7[32];
        BITBANDING_GPIOPeriphID7_TypeDef    GPIOPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID0[32];
        BITBANDING_GPIOPeriphID0_TypeDef    GPIOPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID1[32];
        BITBANDING_GPIOPeriphID1_TypeDef    GPIOPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID2[32];
        BITBANDING_GPIOPeriphID2_TypeDef    GPIOPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID3[32];
        BITBANDING_GPIOPeriphID3_TypeDef    GPIOPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID0[32];
        BITBANDING_GPIOPCellID0_TypeDef     GPIOPCellID0_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID1[32];
        BITBANDING_GPIOPCellID1_TypeDef     GPIOPCellID1_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID2[32];
        BITBANDING_GPIOPCellID2_TypeDef     GPIOPCellID2_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID3[32];
        BITBANDING_GPIOPCellID3_TypeDef     GPIOPCellID3_Bit;
    };
}GPIO_BITBANDING_TypeDef;



typedef volatile struct
{
    union
    {
        volatile uint32_t                   GPIODATA_MASK[255][32];
        BITBANDING_GPIODATA_TypeDef         GPIODATA_MASK_Bit[255];
    };
    union
    {
        volatile uint32_t                   GPIODATA[32];
        BITBANDING_GPIODATA_TypeDef         GPIODATA_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODIR[32];
        BITBANDING_GPIODIR_TypeDef          GPIODIR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIS[32];
        BITBANDING_GPIOIS_TypeDef           GPIOIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIBE[32];
        BITBANDING_GPIOIBE_TypeDef          GPIOIBE_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIEV[32];
        BITBANDING_GPIOIEV_TypeDef          GPIOIEV_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOIM[32];
        BITBANDING_GPIOIM_TypeDef           GPIOIM_Bit;
    };
    union
    {
        volatile const uint32_t             GPIORIS[32];
        BITBANDING_GPIORIS_TypeDef          GPIORIS_Bit;
    };
    union
    {
        volatile const uint32_t             GPIOMIS[32];
        BITBANDING_GPIOMIS_TypeDef          GPIOMIS_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOICR[32];
        BITBANDING_GPIOICR_TypeDef          GPIOICR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOAFSEL[32];
        BITBANDING_GPIOAFSEL_TypeDef        GPIOAFSEL_Bit;
    };
    const    uint32_t                       reserved[55*32];
    union
    {
        volatile uint32_t                   GPIODRR[32][3];
        BITBANDING_GPIODRR_TypeDef         GPIODRR_Bit[3];
    };
    union
    {
        volatile uint32_t                   GPIOODR[32];
        BITBANDING_GPIOODR_TypeDef          GPIOODR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPUR[32];
        BITBANDING_GPIOPUR_TypeDef          GPIOPUR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPDR[32];
        BITBANDING_GPIOPDR_TypeDef          GPIOPDR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOSLR[32];
        BITBANDING_GPIOSLR_TypeDef          GPIOSLR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODEN[32];
        BITBANDING_GPIODEN_TypeDef          GPIODEN_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOLOCK[32];
        BITBANDING_GPIOLOCK_TypeDef         GPIOLOCK_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOCR[32];
        BITBANDING_GPIOCR_TypeDef           GPIOCR_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOAMSEL[32];
        BITBANDING_GPIOAMSEL_TypeDef        GPIOAMSEL_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCTL[32];
        BITBANDING_GPIOPCTL_TypeDef         GPIOPCTL_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOADCCTL[32];
        BITBANDING_GPIOADCCTL_TypeDef       GPIOADCCTL_Bit;
    };
    union
    {
        volatile uint32_t                   GPIODMACTL[32];
        BITBANDING_GPIODMACTL_TypeDef       GPIODMACTL_Bit;
    };
    const uint32_t                          reserved1[678*32];
    union
    {
        volatile uint32_t                   GPIOPeriphID4[32];
        BITBANDING_GPIOPeriphID4_TypeDef    GPIOPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID5[32];
        BITBANDING_GPIOPeriphID5_TypeDef    GPIOPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID6[32];
        BITBANDING_GPIOPeriphID6_TypeDef    GPIOPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID7[32];
        BITBANDING_GPIOPeriphID7_TypeDef    GPIOPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID0[32];
        BITBANDING_GPIOPeriphID0_TypeDef    GPIOPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID1[32];
        BITBANDING_GPIOPeriphID1_TypeDef    GPIOPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID2[32];
        BITBANDING_GPIOPeriphID2_TypeDef    GPIOPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPeriphID3[32];
        BITBANDING_GPIOPeriphID3_TypeDef    GPIOPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID0[32];
        BITBANDING_GPIOPCellID0_TypeDef     GPIOPCellID0_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID1[32];
        BITBANDING_GPIOPCellID1_TypeDef     GPIOPCellID1_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID2[32];
        BITBANDING_GPIOPCellID2_TypeDef     GPIOPCellID2_Bit;
    };
    union
    {
        volatile uint32_t                   GPIOPCellID3[32];
        BITBANDING_GPIOPCellID3_TypeDef     GPIOPCellID3_Bit;
    };
}GPIO_BITBANDING_AUX_TypeDef;


typedef volatile struct
{
    GPIO_TypeDef AHB[6];
}GPIO_AHB_TypeDef;

typedef volatile struct
{
    GPIO_AUX_TypeDef AHB[6];
}GPIO_AHB_AUX_TypeDef;

typedef volatile struct
{
    GPIO_BITBANDING_TypeDef AHB[6];
}GPIO_AHB_BITBANDING_TypeDef;

typedef volatile struct
{
    GPIO_BITBANDING_AUX_TypeDef AHB[6];
}GPIO_AHB_BITBANDING_AUX_TypeDef;

typedef volatile struct
{
    GPIO_TypeDef          APB_A;
    GPIO_TypeDef          APB_B;
    GPIO_TypeDef          APB_C;
    GPIO_TypeDef          APB_D;
    const    GPIO_TypeDef reserved[28];
    GPIO_TypeDef          APB_E;
    GPIO_TypeDef          APB_F;
}GPIO_APB_TypeDef;

typedef volatile struct
{
    GPIO_AUX_TypeDef          APB_A;
    GPIO_AUX_TypeDef          APB_B;
    GPIO_AUX_TypeDef          APB_C;
    GPIO_AUX_TypeDef          APB_D;
    const    GPIO_AUX_TypeDef reserved[28];
    GPIO_AUX_TypeDef          APB_E;
    GPIO_AUX_TypeDef          APB_F;
}GPIO_APB_AUX_TypeDef;

typedef volatile struct
{
    GPIO_BITBANDING_TypeDef          APB_A;
    GPIO_BITBANDING_TypeDef          APB_B;
    GPIO_BITBANDING_TypeDef          APB_C;
    GPIO_BITBANDING_TypeDef          APB_D;
    const    GPIO_BITBANDING_TypeDef reserved[28];
    GPIO_BITBANDING_TypeDef          APB_E;
    GPIO_BITBANDING_TypeDef          APB_F;
}GPIO_APB_BITBANDING_TypeDef;

typedef volatile struct
{
    GPIO_BITBANDING_AUX_TypeDef          APB_A;
    GPIO_BITBANDING_AUX_TypeDef          APB_B;
    GPIO_BITBANDING_AUX_TypeDef          APB_C;
    GPIO_BITBANDING_AUX_TypeDef          APB_D;
    const    GPIO_BITBANDING_AUX_TypeDef reserved[28];
    GPIO_BITBANDING_AUX_TypeDef          APB_E;
    GPIO_BITBANDING_AUX_TypeDef          APB_F;
}GPIO_APB_BITBANDING_AUX_TypeDef;

#define GPIO_APB                (((GPIO_APB_TypeDef*)(GPIO_APB_BASE)))
#define GPIO_AHB                (((GPIO_AHB_TypeDef*)(GPIO_AHB_BASE)))
#define GPIO_APB_BITBANDING     (((GPIO_APB_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_APB_OFFSET*32))))
#define GPIO_AHB_BITBANDING     (((GPIO_AHB_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_AHB_OFFSET*32))))

#define GPIO_APB_AUX            (((GPIO_APB_AUX_TypeDef*)(GPIO_APB_BASE)))
#define GPIO_AHB_AUX            (((GPIO_AHB_AUX_TypeDef*)(GPIO_AHB_BASE)))
#define GPIO_APB_BITBANDING_AUX (((GPIO_APB_BITBANDING_AUX_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_APB_OFFSET*32))))
#define GPIO_AHB_BITBANDING_AUX (((GPIO_AHB_BITBANDING_AUX_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_AHB_OFFSET*32))))

#define GPIOA_APB               (((GPIO_TypeDef*)(GPIOA_APB_BASE)))
#define GPIOB_APB               (((GPIO_TypeDef*)(GPIOB_APB_BASE)))
#define GPIOC_APB               (((GPIO_TypeDef*)(GPIOC_APB_BASE)))
#define GPIOD_APB               (((GPIO_TypeDef*)(GPIOD_APB_BASE)))
#define GPIOE_APB               (((GPIO_TypeDef*)(GPIOE_APB_BASE)))
#define GPIOF_APB               (((GPIO_TypeDef*)(GPIOF_APB_BASE)))

#define GPIOA_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOA_APB_BASE)))
#define GPIOB_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOB_APB_BASE)))
#define GPIOC_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOC_APB_BASE)))
#define GPIOD_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOD_APB_BASE)))
#define GPIOE_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOE_APB_BASE)))
#define GPIOF_APB_AUX               (((GPIO_AUX_TypeDef*)(GPIOF_APB_BASE)))

#define GPIOA_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_APB_OFFSET*32))))
#define GPIOB_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOB_APB_OFFSET*32))))
#define GPIOC_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOC_APB_OFFSET*32))))
#define GPIOD_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOD_APB_OFFSET*32))))
#define GPIOE_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOE_APB_OFFSET*32))))
#define GPIOF_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOF_APB_OFFSET*32))))

#define GPIOA_AHB               (((GPIO_TypeDef*)(GPIOA_AHB_BASE)))
#define GPIOB_AHB               (((GPIO_TypeDef*)(GPIOB_AHB_BASE)))
#define GPIOC_AHB               (((GPIO_TypeDef*)(GPIOC_AHB_BASE)))
#define GPIOD_AHB               (((GPIO_TypeDef*)(GPIOD_AHB_BASE)))
#define GPIOE_AHB               (((GPIO_TypeDef*)(GPIOE_AHB_BASE)))
#define GPIOF_AHB               (((GPIO_TypeDef*)(GPIOF_AHB_BASE)))

#define GPIOA_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOA_AHB_BASE)))
#define GPIOB_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOB_AHB_BASE)))
#define GPIOC_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOC_AHB_BASE)))
#define GPIOD_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOD_AHB_BASE)))
#define GPIOE_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOE_AHB_BASE)))
#define GPIOF_AHB_AUX               (((GPIO_AUX_TypeDef*)(GPIOF_AHB_BASE)))

#define GPIOA_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_AHB_OFFSET*32))))
#define GPIOB_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOB_AHB_OFFSET*32))))
#define GPIOC_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOC_AHB_OFFSET*32))))
#define GPIOD_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOD_AHB_OFFSET*32))))
#define GPIOE_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOE_AHB_OFFSET*32))))
#define GPIOF_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOF_AHB_OFFSET*32))))


#define GPIO_GPIODATA_MASK_OFFSET        (0x000)
#define GPIO_GPIODATA0_MASK_OFFSET       (0x004)
#define GPIO_GPIODATA1_MASK_OFFSET       (0x008)
#define GPIO_GPIODATA2_MASK_OFFSET       (0x010)
#define GPIO_GPIODATA3_MASK_OFFSET       (0x020)
#define GPIO_GPIODATA4_MASK_OFFSET       (0x040)
#define GPIO_GPIODATA5_MASK_OFFSET       (0x080)
#define GPIO_GPIODATA6_MASK_OFFSET       (0x100)
#define GPIO_GPIODATA7_MASK_OFFSET       (0x200)
#define GPIO_GPIODATA_OFFSET             (0x3FC)
#define GPIO_GPIODIR_OFFSET              (0x400)
#define GPIO_GPIOIS_OFFSET               (0x404)
#define GPIO_GPIOIBE_OFFSET              (0x408)
#define GPIO_GPIOIEV_OFFSET              (0x40C)
#define GPIO_GPIOIM_OFFSET               (0x410)
#define GPIO_GPIORIS_OFFSET              (0x414)
#define GPIO_GPIOMIS_OFFSET              (0x418)
#define GPIO_GPIOICR_OFFSET              (0x41C)
#define GPIO_GPIOAFSEL_OFFSET            (0x420)
#define GPIO_GPIODR2R_OFFSET             (0x500)
#define GPIO_GPIODR4R_OFFSET             (0x504)
#define GPIO_GPIODR8R_OFFSET             (0x508)
#define GPIO_GPIOODR_OFFSET              (0x50C)
#define GPIO_GPIOPUR_OFFSET              (0x510)
#define GPIO_GPIOPDR_OFFSET              (0x514)
#define GPIO_GPIOSLR_OFFSET              (0x518)
#define GPIO_GPIODEN_OFFSET              (0x51C)
#define GPIO_GPIOLOCK_OFFSET             (0x520)
#define GPIO_GPIOCR_OFFSET               (0x524)
#define GPIO_GPIOAMSEL_OFFSET            (0x528)
#define GPIO_GPIOPCTL_OFFSET             (0x52C)
#define GPIO_GPIOADCCTL_OFFSET           (0x530)
#define GPIO_GPIODMACTL_OFFSET           (0x534)
#define GPIO_GPIOPeriphID4_OFFSET        (0xFD0)
#define GPIO_GPIOPeriphID5_OFFSET        (0xFD4)
#define GPIO_GPIOPeriphID6_OFFSET        (0xFD8)
#define GPIO_GPIOPeriphID7_OFFSET        (0xFDC)
#define GPIO_GPIOPeriphID0_OFFSET        (0xFE0)
#define GPIO_GPIOPeriphID1_OFFSET        (0xFE4)
#define GPIO_GPIOPeriphID2_OFFSET        (0xFE8)
#define GPIO_GPIOPeriphID3_OFFSET        (0xFEC)
#define GPIO_GPIOPCellID0_OFFSET         (0xFF0)
#define GPIO_GPIOPCellID1_OFFSET         (0xFF4)
#define GPIO_GPIOPCellID2_OFFSET         (0xFF8)
#define GPIO_GPIOPCellID3_OFFSET         (0xFFC)

#define PIN0   (0x000000001)
#define PIN1   (0x000000002)
#define PIN2   (0x000000004)
#define PIN3   (0x000000008)
#define PIN4   (0x000000010)
#define PIN5   (0x000000020)
#define PIN6   (0x000000040)
#define PIN7   (0x000000080)
#define PIN8   (0x000000100)
#define PIN9   (0x000000200)
#define PIN10  (0x000000400)
#define PIN11  (0x000000800)
#define PIN12  (0x000001000)
#define PIN13  (0x000002000)
#define PIN14  (0x000004000)
#define PIN15  (0x000008000)
#define PIN16  (0x000100000)
#define PIN17  (0x000200000)
#define PIN18  (0x000400000)
#define PIN19  (0x000800000)
#define PIN20  (0x001000000)
#define PIN21  (0x002000000)
#define PIN22  (0x004000000)
#define PIN23  (0x008000000)
#define PIN24  (0x010000000)
#define PIN25  (0x020000000)
#define PIN26  (0x040000000)
#define PIN27  (0x080000000)
#define PIN28  (0x100000000)
#define PIN29  (0x200000000)
#define PIN30  (0x400000000)
#define PIN31  (0x800000000)


#define BIT0   (0x000000001)
#define BIT1   (0x000000002)
#define BIT2   (0x000000004)
#define BIT3   (0x000000008)
#define BIT4   (0x000000010)
#define BIT5   (0x000000020)
#define BIT6   (0x000000040)
#define BIT7   (0x000000080)
#define BIT8   (0x000000100)
#define BIT9   (0x000000200)
#define BIT10  (0x000000400)
#define BIT11  (0x000000800)
#define BIT12  (0x000001000)
#define BIT13  (0x000002000)
#define BIT14  (0x000004000)
#define BIT15  (0x000008000)
#define BIT16  (0x000100000)
#define BIT17  (0x000200000)
#define BIT18  (0x000400000)
#define BIT19  (0x000800000)
#define BIT20  (0x001000000)
#define BIT21  (0x002000000)
#define BIT22  (0x004000000)
#define BIT23  (0x008000000)
#define BIT24  (0x010000000)
#define BIT25  (0x020000000)
#define BIT26  (0x040000000)
#define BIT27  (0x080000000)
#define BIT28  (0x100000000)
#define BIT29  (0x200000000)
#define BIT30  (0x400000000)
#define BIT31  (0x800000000)

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/

/* GPIOA AHB DATA*/
#define GPIOA_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOA_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOA_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOA_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOA_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOA_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOA_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOA APB DATA*/
#define GPIOA_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOA_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOA_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOA_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOA_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOA_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOA_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOB AHB DATA*/
#define GPIOB_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOB_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOB_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOB_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOB_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOB_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOB_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOB APB DATA*/
#define GPIOB_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOB_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOB_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOB_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOB_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOB_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOB_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOC AHB DATA*/
#define GPIOC_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOC_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOC_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOC_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOC_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOC_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOC_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOC APB DATA*/
#define GPIOC_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOC_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOC_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOC_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOC_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOC_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOC_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOD AHB DATA*/
#define GPIOD_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOD_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOD_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOD_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOD_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOD_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOD_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOD APB DATA*/
#define GPIOD_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOD_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOD_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOD_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOD_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOD_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOD_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOE AHB DATA*/
#define GPIOE_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOE_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOE_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOE_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOE_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOE_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOE_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOE APB DATA*/
#define GPIOE_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOE_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOE_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOE_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOE_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOE_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOE_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOF AHB DATA*/
#define GPIOF_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOF_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOF_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOF_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOF_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOF_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOF_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOF APB DATA*/
#define GPIOF_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32))))
#define GPIOF_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOF_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOF_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOF_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32))))
#define GPIOF_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOF_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODATA_OFFSET)))


//--------
#define GPIO_GPIODATA_R_DATA_MASK      (0x000000FF)
#define GPIO_GPIODATA_R_DATA_BIT       (0)
#define GPIO_GPIODATA_R_DATA_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA_HIGH      (0x000000FF)

#define GPIO_GPIODATA_DATA_MASK        (0x000000FF)
#define GPIO_GPIODATA_DATA_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA_HIGH        (0x000000FF)
//--------

//--------
#define GPIO_GPIODATA_R_DATA0_MASK      (0x00000001)
#define GPIO_GPIODATA_R_DATA0_BIT       (0)
#define GPIO_GPIODATA_R_DATA0_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA0_HIGH      (0x00000001)

#define GPIO_GPIODATA_DATA0_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA0_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA0_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA1_MASK      (0x00000002)
#define GPIO_GPIODATA_R_DATA1_BIT       (1)
#define GPIO_GPIODATA_R_DATA1_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA1_HIGH      (0x00000002)

#define GPIO_GPIODATA_DATA1_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA1_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA1_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA2_MASK      (0x00000004)
#define GPIO_GPIODATA_R_DATA2_BIT       (2)
#define GPIO_GPIODATA_R_DATA2_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA2_HIGH      (0x00000004)

#define GPIO_GPIODATA_DATA2_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA2_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA2_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA3_MASK      (0x00000008)
#define GPIO_GPIODATA_R_DATA3_BIT       (3)
#define GPIO_GPIODATA_R_DATA3_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA3_HIGH      (0x00000008)

#define GPIO_GPIODATA_DATA3_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA3_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA3_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA4_MASK      (0x00000010)
#define GPIO_GPIODATA_R_DATA4_BIT       (4)
#define GPIO_GPIODATA_R_DATA4_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA4_HIGH      (0x00000010)

#define GPIO_GPIODATA_DATA4_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA4_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA4_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA5_MASK      (0x00000020)
#define GPIO_GPIODATA_R_DATA5_BIT       (5)
#define GPIO_GPIODATA_R_DATA5_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA5_HIGH      (0x00000020)

#define GPIO_GPIODATA_DATA5_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA5_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA5_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA6_MASK      (0x00000040)
#define GPIO_GPIODATA_R_DATA6_BIT       (6)
#define GPIO_GPIODATA_R_DATA6_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA6_HIGH      (0x00000040)

#define GPIO_GPIODATA_DATA6_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA6_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA6_HIGH        (0x00000001)
//--------

//--------
#define GPIO_GPIODATA_R_DATA7_MASK      (0x00000080)
#define GPIO_GPIODATA_R_DATA7_BIT       (7)
#define GPIO_GPIODATA_R_DATA7_LOW       (0x00000000)
#define GPIO_GPIODATA_R_DATA7_HIGH      (0x00000080)

#define GPIO_GPIODATA_DATA7_MASK        (0x00000001)
#define GPIO_GPIODATA_DATA7_LOW         (0x00000000)
#define GPIO_GPIODATA_DATA7_HIGH        (0x00000001)
//--------

/* GPIOA AHB DATA BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOA_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOA APB DATA BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOA_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOB AHB DATA BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOB_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOB APB DATA BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOB_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOC AHB DATA BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOC_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOC APB DATA BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOC_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOD AHB DATA BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOD_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOD APB DATA BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOD_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOE AHB DATA BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOE_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOE APB DATA BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOE_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOF AHB DATA BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOF_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

/* GPIOF APB DATA BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))

#define GPIOF_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32)+(GPIO_GPIODATA_R_DATA7_BIT*4))))


/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOA AHB DIR*/
#define GPIOA_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOA_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOA_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOA APB DIR*/
#define GPIOA_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOA_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOA_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOB AHB DIR*/
#define GPIOB_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOB_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOB_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOB APB DIR*/
#define GPIOB_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOB_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOB_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOC AHB DIR*/
#define GPIOC_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOC_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOC_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOC APB DIR*/
#define GPIOC_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOC_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOC_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOD AHB DIR*/
#define GPIOD_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOD_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOD_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOD APB DIR*/
#define GPIOD_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOD_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOD_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOE AHB DIR*/
#define GPIOE_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOE_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOE_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOE APB DIR*/
#define GPIOE_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOE_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOE_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOF AHB DIR*/
#define GPIOF_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOF_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOF_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOF APB DIR*/
#define GPIOF_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32))))
#define GPIOF_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOF_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODIR_OFFSET)))



//--------
#define GPIO_GPIODIR_R_DIR_MASK         (0x000000FF)
#define GPIO_GPIODIR_R_DIR_BIT          (0)
#define GPIO_GPIODIR_R_DIR_INPUT        (0x00000000)
#define GPIO_GPIODIR_R_DIR_OUTPUT       (0x000000FF)

#define GPIO_GPIODIR_DIR_MASK           (0x000000FF)
#define GPIO_GPIODIR_DIR_INPUT          (0x00000000)
#define GPIO_GPIODIR_DIR_OUTPUT         (0x000000FF)
//--------

//--------
#define GPIO_GPIODIR_R_DIR0_MASK        (0x00000001)
#define GPIO_GPIODIR_R_DIR0_BIT         (0)
#define GPIO_GPIODIR_R_DIR0_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR0_OUTPUT      (0x00000001)

#define GPIO_GPIODIR_DIR0_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR0_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR0_OUTPUT        (0x00000001)
//--------

//--------
#define GPIO_GPIODIR_R_DIR1_MASK        (0x00000002)
#define GPIO_GPIODIR_R_DIR1_BIT         (1)
#define GPIO_GPIODIR_R_DIR1_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR1_OUTPUT      (0x00000002)

#define GPIO_GPIODIR_DIR1_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR1_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR1_OUTPUT        (0x00000001)
//--------

//--------
#define GPIO_GPIODIR_R_DIR2_MASK        (0x00000004)
#define GPIO_GPIODIR_R_DIR2_BIT         (2)
#define GPIO_GPIODIR_R_DIR2_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR2_OUTPUT      (0x00000004)

#define GPIO_GPIODIR_DIR2_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR2_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR2_OUTPUT        (0x00000001)
//--------

//--------
#define GPIO_GPIODIR_R_DIR3_MASK        (0x00000008)
#define GPIO_GPIODIR_R_DIR3_BIT         (3)
#define GPIO_GPIODIR_R_DIR3_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR3_OUTPUT      (0x00000008)

#define GPIO_GPIODIR_DIR3_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR3_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR3_OUTPUT        (0x00000001)
//--------

//--------DATA
#define GPIO_GPIODIR_R_DIR4_MASK        (0x00000010)
#define GPIO_GPIODIR_R_DIR4_BIT         (4)
#define GPIO_GPIODIR_R_DIR4_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR4_OUTPUT      (0x00000010)

#define GPIO_GPIODIR_DIR4_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR4_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR4_OUTPUT        (0x00000001)
//--------

//--------
#define GPIO_GPIODIR_R_DIR5_MASK        (0x00000020)
#define GPIO_GPIODIR_R_DIR5_BIT         (5)
#define GPIO_GPIODIR_R_DIR5_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR5_OUTPUT      (0x00000020)

#define GPIO_GPIODIR_DIR5_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR5_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR5_OUTPUT        (0x00000001)
//--------

//--------
#define GPIO_GPIODIR_R_DIR6_MASK        (0x00000040)
#define GPIO_GPIODIR_R_DIR6_BIT         (6)
#define GPIO_GPIODIR_R_DIR6_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR6_OUTPUT      (0x00000040)

#define GPIO_GPIODIR_DIR6_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR6_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR6_OUTPUT        (0x00000001)
//--------

//--------
#define GPIO_GPIODIR_R_DIR7_MASK        (0x00000080)
#define GPIO_GPIODIR_R_DIR7_BIT         (7)
#define GPIO_GPIODIR_R_DIR7_INPUT       (0x00000000)
#define GPIO_GPIODIR_R_DIR7_OUTPUT      (0x00000080)

#define GPIO_GPIODIR_DIR7_MASK          (0x00000001)
#define GPIO_GPIODIR_DIR7_INPUT         (0x00000000)
#define GPIO_GPIODIR_DIR7_OUTPUT        (0x00000001)
//--------

/* GPIOA AHB DIR BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOA APB DIR BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOB AHB DIR BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOB APB DIR BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOC AHB DIR BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOC APB DIR BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOD AHB DIR BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOD APB DIR BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOE AHB DIR BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOE APB DIR BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOF AHB DIR BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))

/* GPIOF APB DIR BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32)+(GPIO_GPIODIR_R_DIR7_BIT*4))))


/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOA AHB IS*/
#define GPIOA_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOA_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOA_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOA APB IS*/
#define GPIOA_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOA_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOA_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOB AHB IS*/
#define GPIOB_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOB_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOB_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOB APB IS*/
#define GPIOB_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOB_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOB_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOC AHB IS*/
#define GPIOC_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOC_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOC_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOC APB IS*/
#define GPIOC_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOC_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOC_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOD AHB IS*/
#define GPIOD_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOD_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOD_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOD APB IS*/
#define GPIOD_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOD_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOD_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOE AHB IS*/
#define GPIOE_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOE_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOE_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOE APB IS*/
#define GPIOE_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOE_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOE_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOF AHB IS*/
#define GPIOF_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOF_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOF_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOF APB IS*/
#define GPIOF_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32))))
#define GPIOF_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOF_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIS_OFFSET)))



//--------
#define GPIO_GPIOIS_R_IS_MASK           (0x000000FF)
#define GPIO_GPIOIS_R_IS_BIT            (0)
#define GPIO_GPIOIS_R_IS_EDGE           (0x00000000)
#define GPIO_GPIOIS_R_IS_LEVEL          (0x000000FF)

#define GPIO_GPIOIS_IS_MASK             (0x000000FF)
#define GPIO_GPIOIS_IS_EDGE             (0x00000000)
#define GPIO_GPIOIS_IS_LEVEL            (0x000000FF)
//--------

//--------
#define GPIO_GPIOIS_R_IS0_MASK          (0x00000001)
#define GPIO_GPIOIS_R_IS0_BIT           (0)
#define GPIO_GPIOIS_R_IS0_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS0_LEVEL         (0x00000001)

#define GPIO_GPIOIS_IS0_MASK            (0x00000001)
#define GPIO_GPIOIS_IS0_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS0_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS1_MASK          (0x00000002)
#define GPIO_GPIOIS_R_IS1_BIT           (1)
#define GPIO_GPIOIS_R_IS1_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS1_LEVEL         (0x00000002)

#define GPIO_GPIOIS_IS1_MASK            (0x00000001)
#define GPIO_GPIOIS_IS1_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS1_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS2_MASK          (0x00000004)
#define GPIO_GPIOIS_R_IS2_BIT           (2)
#define GPIO_GPIOIS_R_IS2_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS2_LEVEL         (0x00000004)

#define GPIO_GPIOIS_IS2_MASK            (0x00000001)
#define GPIO_GPIOIS_IS2_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS2_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS3_MASK          (0x00000008)
#define GPIO_GPIOIS_R_IS3_BIT           (3)
#define GPIO_GPIOIS_R_IS3_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS3_LEVEL         (0x00000008)

#define GPIO_GPIOIS_IS3_MASK            (0x00000001)
#define GPIO_GPIOIS_IS3_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS3_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS4_MASK          (0x00000010)
#define GPIO_GPIOIS_R_IS4_BIT           (4)
#define GPIO_GPIOIS_R_IS4_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS4_LEVEL         (0x00000010)

#define GPIO_GPIOIS_IS4_MASK            (0x00000001)
#define GPIO_GPIOIS_IS4_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS4_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS5_MASK          (0x00000020)
#define GPIO_GPIOIS_R_IS5_BIT           (5)
#define GPIO_GPIOIS_R_IS5_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS5_LEVEL         (0x00000020)

#define GPIO_GPIOIS_IS5_MASK            (0x00000001)
#define GPIO_GPIOIS_IS5_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS5_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS6_MASK          (0x00000040)
#define GPIO_GPIOIS_R_IS6_BIT           (6)
#define GPIO_GPIOIS_R_IS6_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS6_LEVEL         (0x00000040)

#define GPIO_GPIOIS_IS6_MASK            (0x00000001)
#define GPIO_GPIOIS_IS6_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS6_LEVEL           (0x00000001)
//--------

//--------
#define GPIO_GPIOIS_R_IS7_MASK          (0x00000080)
#define GPIO_GPIOIS_R_IS7_BIT           (7)
#define GPIO_GPIOIS_R_IS7_EDGE          (0x00000000)
#define GPIO_GPIOIS_R_IS7_LEVEL         (0x00000080)

#define GPIO_GPIOIS_IS7_MASK            (0x00000001)
#define GPIO_GPIOIS_IS7_EDGE            (0x00000000)
#define GPIO_GPIOIS_IS7_LEVEL           (0x00000001)
//--------

/* GPIOA AHB IS BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOA APB IS BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOB AHB IS BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOB APB IS BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOC AHB IS BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOC APB IS BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOD AHB IS BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOD APB IS BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOE AHB IS BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOE APB IS BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOF AHB IS BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/* GPIOF APB IS BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32)+(GPIO_GPIOIS_R_IS7_BIT*4))))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOA AHB IBE*/
#define GPIOA_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOA_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOA_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOA APB IBE*/
#define GPIOA_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOA_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOA_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOB AHB IBE*/
#define GPIOB_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOB_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOB_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOB APB IBE*/
#define GPIOB_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOB_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOB_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOC AHB IBE*/
#define GPIOC_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOC_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOC_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOC APB IBE*/
#define GPIOC_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOC_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOC_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOD AHB IBE*/
#define GPIOD_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOD_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOD_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOD APB IBE*/
#define GPIOD_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOD_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOD_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOE AHB IBE*/
#define GPIOE_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOE_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOE_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOE APB IBE*/
#define GPIOE_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOE_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOE_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOF AHB IBE*/
#define GPIOF_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOF_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOF_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOF APB IBE*/
#define GPIOF_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32))))
#define GPIOF_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOF_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIBE_OFFSET)))



//--------
#define GPIO_GPIOIBE_R_IBE_MASK             (0x000000FF)
#define GPIO_GPIOIBE_R_IBE_BIT              (0)
#define GPIO_GPIOIBE_R_IBE_SINGLE           (0x00000000)
#define GPIO_GPIOIBE_R_IBE_BOTH             (0x000000FF)

#define GPIO_GPIOIBE_IBE_MASK               (0x000000FF)
#define GPIO_GPIOIBE_IBE_SINGLE             (0x00000000)
#define GPIO_GPIOIBE_IBE_BOTH               (0x000000FF)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE0_MASK            (0x00000001)
#define GPIO_GPIOIBE_R_IBE0_BIT             (0)
#define GPIO_GPIOIBE_R_IBE0_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE0_BOTH            (0x00000001)

#define GPIO_GPIOIBE_IBE0_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE0_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE0_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE1_MASK            (0x00000002)
#define GPIO_GPIOIBE_R_IBE1_BIT             (1)
#define GPIO_GPIOIBE_R_IBE1_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE1_BOTH            (0x00000002)

#define GPIO_GPIOIBE_IBE1_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE1_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE1_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE2_MASK            (0x00000004)
#define GPIO_GPIOIBE_R_IBE2_BIT             (2)
#define GPIO_GPIOIBE_R_IBE2_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE2_BOTH            (0x00000004)

#define GPIO_GPIOIBE_IBE2_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE2_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE2_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE3_MASK            (0x00000008)
#define GPIO_GPIOIBE_R_IBE3_BIT             (3)
#define GPIO_GPIOIBE_R_IBE3_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE3_BOTH            (0x00000008)

#define GPIO_GPIOIBE_IBE3_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE3_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE3_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE4_MASK            (0x00000010)
#define GPIO_GPIOIBE_R_IBE4_BIT             (4)
#define GPIO_GPIOIBE_R_IBE4_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE4_BOTH            (0x00000010)

#define GPIO_GPIOIBE_IBE4_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE4_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE4_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE5_MASK            (0x00000020)
#define GPIO_GPIOIBE_R_IBE5_BIT             (5)
#define GPIO_GPIOIBE_R_IBE5_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE5_BOTH            (0x00000020)

#define GPIO_GPIOIBE_IBE5_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE5_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE5_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE6_MASK            (0x00000040)
#define GPIO_GPIOIBE_R_IBE6_BIT             (6)
#define GPIO_GPIOIBE_R_IBE6_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE6_BOTH            (0x00000040)

#define GPIO_GPIOIBE_IBE6_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE6_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE6_BOTH              (0x00000001)
//--------

//--------
#define GPIO_GPIOIBE_R_IBE7_MASK            (0x00000080)
#define GPIO_GPIOIBE_R_IBE7_BIT             (7)
#define GPIO_GPIOIBE_R_IBE7_SINGLE          (0x00000000)
#define GPIO_GPIOIBE_R_IBE7_BOTH            (0x00000080)

#define GPIO_GPIOIBE_IBE7_MASK              (0x00000001)
#define GPIO_GPIOIBE_IBE7_SINGLE            (0x00000000)
#define GPIO_GPIOIBE_IBE7_BOTH              (0x00000001)
//--------

/* GPIOA AHB IBE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOA APB IBE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOB AHB IBE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOB APB IBE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOC AHB IBE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOC APB IBE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOD AHB IBE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOD APB IBE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOE AHB IBE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOE APB IBE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOF AHB IBE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))

/* GPIOF APB IBE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32)+(GPIO_GPIOIBE_R_IBE7_BIT*4))))



/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOA AHB IEV*/
#define GPIOA_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOA_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOA_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOA APB IEV*/
#define GPIOA_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOA_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOA_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOB AHB IEV*/
#define GPIOB_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOB_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOB_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOB APB IEV*/
#define GPIOB_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOB_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOB_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOC AHB IEV*/
#define GPIOC_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOC_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOC_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOC APB IEV*/
#define GPIOC_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOC_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOC_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOD AHB IEV*/
#define GPIOD_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOD_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOD_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOD APB IEV*/
#define GPIOD_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOD_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOD_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOE AHB IEV*/
#define GPIOE_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOE_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOE_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOE APB IEV*/
#define GPIOE_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOE_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOE_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOF AHB IEV*/
#define GPIOF_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOF_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOF_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOF APB IEV*/
#define GPIOF_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32))))
#define GPIOF_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOF_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIEV_OFFSET)))



//--------
#define GPIO_GPIOIEV_R_IEV_MASK             (0x000000FF)
#define GPIO_GPIOIEV_R_IEV_BIT              (0)
#define GPIO_GPIOIEV_R_IEV_FALLING          (0x00000000)
#define GPIO_GPIOIEV_R_IEV_RISING           (0x000000FF)

#define GPIO_GPIOIEV_IEV_MASK               (0x000000FF)
#define GPIO_GPIOIEV_IEV_FALLING            (0x00000000)
#define GPIO_GPIOIEV_IEV_RISING             (0x000000FF)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV0_MASK            (0x00000001)
#define GPIO_GPIOIEV_R_IEV0_BIT             (0)
#define GPIO_GPIOIEV_R_IEV0_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV0_RISING          (0x00000001)

#define GPIO_GPIOIEV_IEV0_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV0_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV0_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV1_MASK            (0x00000002)
#define GPIO_GPIOIEV_R_IEV1_BIT             (1)
#define GPIO_GPIOIEV_R_IEV1_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV1_RISING          (0x00000002)

#define GPIO_GPIOIEV_IEV1_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV1_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV1_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV2_MASK            (0x00000004)
#define GPIO_GPIOIEV_R_IEV2_BIT             (2)
#define GPIO_GPIOIEV_R_IEV2_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV2_RISING          (0x00000004)

#define GPIO_GPIOIEV_IEV2_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV2_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV2_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV3_MASK            (0x00000008)
#define GPIO_GPIOIEV_R_IEV3_BIT             (3)
#define GPIO_GPIOIEV_R_IEV3_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV3_RISING          (0x00000008)

#define GPIO_GPIOIEV_IEV3_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV3_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV3_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV4_MASK            (0x00000010)
#define GPIO_GPIOIEV_R_IEV4_BIT             (4)
#define GPIO_GPIOIEV_R_IEV4_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV4_RISING          (0x00000010)

#define GPIO_GPIOIEV_IEV4_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV4_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV4_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV5_MASK            (0x00000020)
#define GPIO_GPIOIEV_R_IEV5_BIT             (5)
#define GPIO_GPIOIEV_R_IEV5_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV5_RISING          (0x00000020)

#define GPIO_GPIOIEV_IEV5_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV5_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV5_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV6_MASK            (0x00000040)
#define GPIO_GPIOIEV_R_IEV6_BIT             (6)
#define GPIO_GPIOIEV_R_IEV6_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV6_RISING          (0x00000040)

#define GPIO_GPIOIEV_IEV6_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV6_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV6_RISING            (0x00000001)
//--------

//--------
#define GPIO_GPIOIEV_R_IEV7_MASK            (0x00000080)
#define GPIO_GPIOIEV_R_IEV7_BIT             (7)
#define GPIO_GPIOIEV_R_IEV7_FALLING         (0x00000000)
#define GPIO_GPIOIEV_R_IEV7_RISING          (0x00000080)

#define GPIO_GPIOIEV_IEV7_MASK              (0x00000001)
#define GPIO_GPIOIEV_IEV7_FALLING           (0x00000000)
#define GPIO_GPIOIEV_IEV7_RISING            (0x00000001)
//--------

/* GPIOA AHB IEV BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOA APB IEV BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOB AHB IEV BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOB APB IEV BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOC AHB IEV BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOC APB IEV BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOD AHB IEV BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOD APB IEV BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOE AHB IEV BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOE APB IEV BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOF AHB IEV BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))

/* GPIOF APB IEV BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32)+(GPIO_GPIOIEV_R_IEV7_BIT*4))))


/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOA AHB IME*/
#define GPIOA_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOA_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOA_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOA APB IME*/
#define GPIOA_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOA_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOA_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOB AHB IME*/
#define GPIOB_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOB_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOB_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOB APB IME*/
#define GPIOB_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOB_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOB_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOC AHB IME*/
#define GPIOC_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOC_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOC_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOC APB IME*/
#define GPIOC_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOC_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOC_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOD AHB IME*/
#define GPIOD_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOD_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOD_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOD APB IME*/
#define GPIOD_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOD_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOD_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOE AHB IME*/
#define GPIOE_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOE_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOE_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOE APB IME*/
#define GPIOE_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOE_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOE_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOF AHB IME*/
#define GPIOF_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOF_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOF_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOF APB IME*/
#define GPIOF_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32))))
#define GPIOF_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOF_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIM_OFFSET)))



//--------
#define GPIO_GPIOIM_R_IME_MASK          (0x000000FF)
#define GPIO_GPIOIM_R_IME_BIT           (0)
#define GPIO_GPIOIM_R_IME_DIS           (0x00000000)
#define GPIO_GPIOIM_R_IME_EN            (0x000000FF)

#define GPIO_GPIOIM_IME_MASK            (0x000000FF)
#define GPIO_GPIOIM_IME_DIS             (0x00000000)
#define GPIO_GPIOIM_IME_EN              (0x000000FF)
//--------

//--------
#define GPIO_GPIOIM_R_IME0_MASK         (0x00000001)
#define GPIO_GPIOIM_R_IME0_BIT          (0)
#define GPIO_GPIOIM_R_IME0_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME0_EN           (0x00000001)

#define GPIO_GPIOIM_IME0_MASK           (0x00000001)
#define GPIO_GPIOIM_IME0_DIS            (0x00000000)
#define GPIO_GPIOIM_IME0_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME1_MASK         (0x00000002)
#define GPIO_GPIOIM_R_IME1_BIT          (1)
#define GPIO_GPIOIM_R_IME1_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME1_EN           (0x00000002)

#define GPIO_GPIOIM_IME1_MASK           (0x00000001)
#define GPIO_GPIOIM_IME1_DIS            (0x00000000)
#define GPIO_GPIOIM_IME1_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME2_MASK         (0x00000004)
#define GPIO_GPIOIM_R_IME2_BIT          (2)
#define GPIO_GPIOIM_R_IME2_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME2_EN           (0x00000004)

#define GPIO_GPIOIM_IME2_MASK           (0x00000001)
#define GPIO_GPIOIM_IME2_DIS            (0x00000000)
#define GPIO_GPIOIM_IME2_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME3_MASK         (0x00000008)
#define GPIO_GPIOIM_R_IME3_BIT          (3)
#define GPIO_GPIOIM_R_IME3_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME3_EN           (0x00000008)

#define GPIO_GPIOIM_IME3_MASK           (0x00000001)
#define GPIO_GPIOIM_IME3_DIS            (0x00000000)
#define GPIO_GPIOIM_IME3_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME4_MASK         (0x00000010)
#define GPIO_GPIOIM_R_IME4_BIT          (4)
#define GPIO_GPIOIM_R_IME4_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME4_EN           (0x00000010)

#define GPIO_GPIOIM_IME4_MASK           (0x00000001)
#define GPIO_GPIOIM_IME4_DIS            (0x00000000)
#define GPIO_GPIOIM_IME4_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME5_MASK         (0x00000020)
#define GPIO_GPIOIM_R_IME5_BIT          (5)
#define GPIO_GPIOIM_R_IME5_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME5_EN           (0x00000020)

#define GPIO_GPIOIM_IME5_MASK           (0x00000001)
#define GPIO_GPIOIM_IME5_DIS            (0x00000000)
#define GPIO_GPIOIM_IME5_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME6_MASK         (0x00000040)
#define GPIO_GPIOIM_R_IME6_BIT          (6)
#define GPIO_GPIOIM_R_IME6_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME6_EN           (0x00000040)

#define GPIO_GPIOIM_IME6_MASK           (0x00000001)
#define GPIO_GPIOIM_IME6_DIS            (0x00000000)
#define GPIO_GPIOIM_IME6_EN             (0x00000001)
//--------

//--------
#define GPIO_GPIOIM_R_IME7_MASK         (0x00000080)
#define GPIO_GPIOIM_R_IME7_BIT          (7)
#define GPIO_GPIOIM_R_IME7_DIS          (0x00000000)
#define GPIO_GPIOIM_R_IME7_EN           (0x00000080)

#define GPIO_GPIOIM_IME7_MASK           (0x00000001)
#define GPIO_GPIOIM_IME7_DIS            (0x00000000)
#define GPIO_GPIOIM_IME7_EN             (0x00000001)
//--------

/* GPIOA AHB IME BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOA APB IME BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOB AHB IME BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOB APB IME BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOC AHB IME BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOC APB IME BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOD AHB IME BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOD APB IME BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOE AHB IME BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOE APB IME BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOF AHB IME BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))

/* GPIOF APB IME BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32)+(GPIO_GPIOIM_R_IME7_BIT*4))))


/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOA AHB RIS*/
#define GPIOA_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOA_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOA_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOA APB RIS*/
#define GPIOA_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOA_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOA_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOB AHB RIS*/
#define GPIOB_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOB_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOB_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOB APB RIS*/
#define GPIOB_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOB_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOB_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOC AHB RIS*/
#define GPIOC_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOC_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOC_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOC APB RIS*/
#define GPIOC_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOC_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOC_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOD AHB RIS*/
#define GPIOD_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOD_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOD_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOD APB RIS*/
#define GPIOD_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOD_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOD_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOE AHB RIS*/
#define GPIOE_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOE_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOE_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOE APB RIS*/
#define GPIOE_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOE_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOE_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOF AHB RIS*/
#define GPIOF_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOF_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOF_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOF APB RIS*/
#define GPIOF_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32))))
#define GPIOF_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOF_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIORIS_OFFSET)))



//--------
#define GPIO_GPIORIS_R_RIS_MASK             (0x000000FF)
#define GPIO_GPIORIS_R_RIS_BIT              (0)
#define GPIO_GPIORIS_R_RIS_NOACTIVE         (0x00000000)
#define GPIO_GPIORIS_R_RIS_ACTIVE           (0x000000FF)

#define GPIO_GPIORIS_RIS_MASK               (0x000000FF)
#define GPIO_GPIORIS_RIS_NOACTIVE           (0x00000000)
#define GPIO_GPIORIS_RIS_ACTIVE             (0x000000FF)
//--------

//--------
#define GPIO_GPIORIS_R_RIS0_MASK            (0x00000001)
#define GPIO_GPIORIS_R_RIS0_BIT             (0)
#define GPIO_GPIORIS_R_RIS0_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS0_ACTIVE          (0x00000001)

#define GPIO_GPIORIS_RIS0_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS0_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS0_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS1_MASK            (0x00000002)
#define GPIO_GPIORIS_R_RIS1_BIT             (1)
#define GPIO_GPIORIS_R_RIS1_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS1_ACTIVE          (0x00000002)

#define GPIO_GPIORIS_RIS1_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS1_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS1_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS2_MASK            (0x00000004)
#define GPIO_GPIORIS_R_RIS2_BIT             (2)
#define GPIO_GPIORIS_R_RIS2_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS2_ACTIVE          (0x00000004)

#define GPIO_GPIORIS_RIS2_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS2_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS2_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS3_MASK            (0x00000008)
#define GPIO_GPIORIS_R_RIS3_BIT             (3)
#define GPIO_GPIORIS_R_RIS3_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS3_ACTIVE          (0x00000008)

#define GPIO_GPIORIS_RIS3_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS3_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS3_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS4_MASK            (0x00000010)
#define GPIO_GPIORIS_R_RIS4_BIT             (4)
#define GPIO_GPIORIS_R_RIS4_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS4_ACTIVE          (0x00000010)

#define GPIO_GPIORIS_RIS4_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS4_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS4_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS5_MASK            (0x00000020)
#define GPIO_GPIORIS_R_RIS5_BIT             (5)
#define GPIO_GPIORIS_R_RIS5_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS5_ACTIVE          (0x00000020)

#define GPIO_GPIORIS_RIS5_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS5_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS5_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS6_MASK            (0x00000040)
#define GPIO_GPIORIS_R_RIS6_BIT             (6)
#define GPIO_GPIORIS_R_RIS6_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS6_ACTIVE          (0x00000040)

#define GPIO_GPIORIS_RIS6_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS6_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS6_ACTIVE            (0x00000001)
//--------

//--------
#define GPIO_GPIORIS_R_RIS7_MASK            (0x00000080)
#define GPIO_GPIORIS_R_RIS7_BIT             (7)
#define GPIO_GPIORIS_R_RIS7_NOACTIVE        (0x00000000)
#define GPIO_GPIORIS_R_RIS7_ACTIVE          (0x00000080)

#define GPIO_GPIORIS_RIS7_MASK              (0x00000001)
#define GPIO_GPIORIS_RIS7_NOACTIVE          (0x00000000)
#define GPIO_GPIORIS_RIS7_ACTIVE            (0x00000001)
//--------

/* GPIOA AHB RIS BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOA APB RIS BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOB AHB RIS BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOB APB RIS BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOC AHB RIS BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOC APB RIS BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOD AHB RIS BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOD APB RIS BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOE AHB RIS BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOE APB RIS BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOF AHB RIS BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))

/* GPIOF APB RIS BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32)+(GPIO_GPIORIS_R_RIS7_BIT*4))))


/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOA AHB MIS*/
#define GPIOA_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOA_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOA_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOA APB MIS*/
#define GPIOA_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOA_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOA_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOB AHB MIS*/
#define GPIOB_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOB_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOB_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOB APB MIS*/
#define GPIOB_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOB_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOB_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOC AHB MIS*/
#define GPIOC_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOC_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOC_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOC APB MIS*/
#define GPIOC_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOC_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOC_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOD AHB MIS*/
#define GPIOD_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOD_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOD_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOD APB MIS*/
#define GPIOD_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOD_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOD_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOE AHB MIS*/
#define GPIOE_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOE_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOE_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOE APB MIS*/
#define GPIOE_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOE_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOE_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOF AHB MIS*/
#define GPIOF_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOF_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOF_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOF APB MIS*/
#define GPIOF_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32))))
#define GPIOF_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOF_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOMIS_OFFSET)))



//--------
#define GPIO_GPIOMIS_R_MIS_MASK             (0x000000FF)
#define GPIO_GPIOMIS_R_MIS_BIT              (0)
#define GPIO_GPIOMIS_R_MIS_NOOCCUR          (0x00000000)
#define GPIO_GPIOMIS_R_MIS_OCCUR            (0x000000FF)

#define GPIO_GPIOMIS_MIS_MASK               (0x000000FF)
#define GPIO_GPIOMIS_MIS_NOOCCUR            (0x00000000)
#define GPIO_GPIOMIS_MIS_OCCUR              (0x000000FF)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS0_MASK            (0x00000001)
#define GPIO_GPIOMIS_R_MIS0_BIT             (0)
#define GPIO_GPIOMIS_R_MIS0_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS0_OCCUR           (0x00000001)

#define GPIO_GPIOMIS_MIS0_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS0_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS0_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS1_MASK            (0x00000002)
#define GPIO_GPIOMIS_R_MIS1_BIT             (1)
#define GPIO_GPIOMIS_R_MIS1_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS1_OCCUR           (0x00000002)

#define GPIO_GPIOMIS_MIS1_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS1_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS1_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS2_MASK            (0x00000004)
#define GPIO_GPIOMIS_R_MIS2_BIT             (2)
#define GPIO_GPIOMIS_R_MIS2_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS2_OCCUR           (0x00000004)

#define GPIO_GPIOMIS_MIS2_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS2_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS2_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS3_MASK            (0x00000008)
#define GPIO_GPIOMIS_R_MIS3_BIT             (3)
#define GPIO_GPIOMIS_R_MIS3_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS3_OCCUR           (0x00000008)

#define GPIO_GPIOMIS_MIS3_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS3_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS3_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS4_MASK            (0x00000010)
#define GPIO_GPIOMIS_R_MIS4_BIT             (4)
#define GPIO_GPIOMIS_R_MIS4_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS4_OCCUR           (0x00000010)

#define GPIO_GPIOMIS_MIS4_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS4_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS4_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS5_MASK            (0x00000020)
#define GPIO_GPIOMIS_R_MIS5_BIT             (5)
#define GPIO_GPIOMIS_R_MIS5_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS5_OCCUR           (0x00000020)

#define GPIO_GPIOMIS_MIS5_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS5_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS5_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS6_MASK            (0x00000040)
#define GPIO_GPIOMIS_R_MIS6_BIT             (6)
#define GPIO_GPIOMIS_R_MIS6_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS6_OCCUR           (0x00000040)

#define GPIO_GPIOMIS_MIS6_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS6_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS6_OCCUR             (0x00000001)
//--------

//--------
#define GPIO_GPIOMIS_R_MIS7_MASK            (0x00000080)
#define GPIO_GPIOMIS_R_MIS7_BIT             (7)
#define GPIO_GPIOMIS_R_MIS7_NOOCCUR         (0x00000000)
#define GPIO_GPIOMIS_R_MIS7_OCCUR           (0x00000080)

#define GPIO_GPIOMIS_MIS7_MASK              (0x00000001)
#define GPIO_GPIOMIS_MIS7_NOOCCUR           (0x00000000)
#define GPIO_GPIOMIS_MIS7_OCCUR             (0x00000001)
//--------

/* GPIOA AHB MIS BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOA APB MIS BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOB AHB MIS BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOB APB MIS BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOC AHB MIS BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOC APB MIS BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOD AHB MIS BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOD APB MIS BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOE AHB MIS BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOE APB MIS BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOF AHB MIS BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))

/* GPIOF APB MIS BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32)+(GPIO_GPIOMIS_R_MIS7_BIT*4))))


/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOA AHB IC*/
#define GPIOA_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOA_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOA_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOA APB IC*/
#define GPIOA_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOA_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOA_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOB AHB IC*/
#define GPIOB_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOB_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOB_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOB APB IC*/
#define GPIOB_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOB_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOB_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOC AHB IC*/
#define GPIOC_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOC_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOC_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOC APB IC*/
#define GPIOC_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOC_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOC_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOD AHB IC*/
#define GPIOD_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOD_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOD_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOD APB IC*/
#define GPIOD_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOD_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOD_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOE AHB IC*/
#define GPIOE_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOE_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOE_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOE APB IC*/
#define GPIOE_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOE_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOE_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOF AHB IC*/
#define GPIOF_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOF_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOF_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOF APB IC*/
#define GPIOF_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32))))
#define GPIOF_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOF_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOICR_OFFSET)))



//--------
#define GPIO_GPIOICR_R_IC_MASK              (0x000000FF)
#define GPIO_GPIOICR_R_IC_BIT               (0)
#define GPIO_GPIOICR_R_IC_NOEFFECT          (0x00000000)
#define GPIO_GPIOICR_R_IC_CLEAR             (0x000000FF)

#define GPIO_GPIOICR_IC_MASK                (0x000000FF)
#define GPIO_GPIOICR_IC_NOEFFECT            (0x00000000)
#define GPIO_GPIOICR_IC_CLEAR               (0x000000FF)
//--------

//--------
#define GPIO_GPIOICR_R_IC0_MASK             (0x00000001)
#define GPIO_GPIOICR_R_IC0_BIT              (0)
#define GPIO_GPIOICR_R_IC0_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC0_CLEAR            (0x00000001)

#define GPIO_GPIOICR_IC0_MASK               (0x00000001)
#define GPIO_GPIOICR_IC0_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC0_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC1_MASK             (0x00000002)
#define GPIO_GPIOICR_R_IC1_BIT              (1)
#define GPIO_GPIOICR_R_IC1_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC1_CLEAR            (0x00000002)

#define GPIO_GPIOICR_IC1_MASK               (0x00000001)
#define GPIO_GPIOICR_IC1_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC1_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC2_MASK             (0x00000004)
#define GPIO_GPIOICR_R_IC2_BIT              (2)
#define GPIO_GPIOICR_R_IC2_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC2_CLEAR            (0x00000004)

#define GPIO_GPIOICR_IC2_MASK               (0x00000001)
#define GPIO_GPIOICR_IC2_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC2_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC3_MASK             0x00000008)
#define GPIO_GPIOICR_R_IC3_BIT              (3)
#define GPIO_GPIOICR_R_IC3_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC3_CLEAR            (0x00000008)

#define GPIO_GPIOICR_IC3_MASK               (0x00000001)
#define GPIO_GPIOICR_IC3_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC3_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC4_MASK             (0x00000010)
#define GPIO_GPIOICR_R_IC4_BIT              (4)
#define GPIO_GPIOICR_R_IC4_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC4_CLEAR            (0x00000010)

#define GPIO_GPIOICR_IC4_MASK               (0x00000001)
#define GPIO_GPIOICR_IC4_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC4_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC5_MASK             (0x00000020)
#define GPIO_GPIOICR_R_IC5_BIT              (5)
#define GPIO_GPIOICR_R_IC5_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC5_CLEAR            (0x00000020)

#define GPIO_GPIOICR_IC5_MASK               (0x00000001)
#define GPIO_GPIOICR_IC5_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC5_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC6_MASK             (0x00000040)
#define GPIO_GPIOICR_R_IC6_BIT              (6)
#define GPIO_GPIOICR_R_IC6_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC6_CLEAR            (0x00000040)

#define GPIO_GPIOICR_IC6_MASK               (0x00000001)
#define GPIO_GPIOICR_IC6_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC6_CLEAR              (0x00000001)
//--------

//--------
#define GPIO_GPIOICR_R_IC7_MASK             (0x00000080)
#define GPIO_GPIOICR_R_IC7_BIT              (7)
#define GPIO_GPIOICR_R_IC7_NOEFFECT         (0x00000000)
#define GPIO_GPIOICR_R_IC7_CLEAR            (0x00000080)

#define GPIO_GPIOICR_IC7_MASK               (0x00000001)
#define GPIO_GPIOICR_IC7_NOEFFECT           (0x00000000)
#define GPIO_GPIOICR_IC7_CLEAR              (0x00000001)
//--------

/* GPIOA AHB IC BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOA APB IC BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOB AHB IC BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOB APB IC BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOC AHB IC BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOC APB IC BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOD AHB IC BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOD APB IC BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOE AHB IC BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOE APB IC BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOF AHB IC BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))

/* GPIOF APB IC BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32)+(GPIO_GPIOICR_R_IC7_BIT*4))))


/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOA AHB AFSEL*/
#define GPIOA_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOA_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOA_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOA APB AFSEL*/
#define GPIOA_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOA_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOA_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOB AHB AFSEL*/
#define GPIOB_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOB_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOB_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOB APB AFSEL*/
#define GPIOB_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOB_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOB_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOC AHB AFSEL*/
#define GPIOC_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOC_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOC_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOC APB AFSEL*/
#define GPIOC_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOC_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOC_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOD AHB AFSEL*/
#define GPIOD_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOD_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOD_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOD APB AFSEL*/
#define GPIOD_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOD_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOD_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOE AHB AFSEL*/
#define GPIOE_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOE_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOE_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOE APB AFSEL*/
#define GPIOE_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOE_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOE_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOF AHB AFSEL*/
#define GPIOF_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOF_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOF_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOF APB AFSEL*/
#define GPIOF_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32))))
#define GPIOF_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOF_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))


//--------
#define GPIOF_APB_GPIOAFSEL_R_AFSEL_MASK        (0x000000FF)
#define GPIOF_APB_GPIOAFSEL_R_AFSEL_BIT         (0)
#define GPIOF_APB_GPIOAFSEL_R_AFSEL0_GPIO       (0x00000000)
#define GPIOF_APB_GPIOAFSEL_R_AFSEL0_ALT        (0x000000FF)


#define GPIO_GPIOAFSEL_AFSEL_MASK               (0x000000FF)
#define GPIO_GPIOAFSEL_AFSEL_GPIO               (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL_ALT                (0x000000FF)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL0_MASK            (0x00000001)
#define GPIO_GPIOAFSEL_R_AFSEL0_BIT             (0)
#define GPIO_GPIOAFSEL_R_AFSEL0_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL0_ALT             (0x00000001)

#define GPIO_GPIOAFSEL_AFSEL0_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL0_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL0_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL1_MASK            (0x00000002)
#define GPIO_GPIOAFSEL_R_AFSEL1_BIT             (1)
#define GPIO_GPIOAFSEL_R_AFSEL1_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL1_ALT             (0x00000002)

#define GPIO_GPIOAFSEL_AFSEL1_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL1_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL1_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL2_MASK            (0x00000004)
#define GPIO_GPIOAFSEL_R_AFSEL2_BIT             (2)
#define GPIO_GPIOAFSEL_R_AFSEL2_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL2_ALT             (0x00000004)

#define GPIO_GPIOAFSEL_AFSEL2_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL2_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL2_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL3_MASK            (0x00000008)
#define GPIO_GPIOAFSEL_R_AFSEL3_BIT             (3)
#define GPIO_GPIOAFSEL_R_AFSEL3_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL3_ALT             (0x00000008)

#define GPIO_GPIOAFSEL_AFSEL3_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL3_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL3_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL4_MASK            (0x00000010)
#define GPIO_GPIOAFSEL_R_AFSEL4_BIT             (4)
#define GPIO_GPIOAFSEL_R_AFSEL4_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL4_ALT             (0x00000010)

#define GPIO_GPIOAFSEL_AFSEL4_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL4_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL4_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL5_MASK            (0x00000020)
#define GPIO_GPIOAFSEL_R_AFSEL5_BIT             (5)
#define GPIO_GPIOAFSEL_R_AFSEL5_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL5_ALT             (0x00000020)

#define GPIO_GPIOAFSEL_AFSEL5_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL5_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL5_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL6_MASK            (0x00000040)
#define GPIO_GPIOAFSEL_R_AFSEL6_BIT             (6)
#define GPIO_GPIOAFSEL_R_AFSEL6_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL6_ALT             (0x00000040)

#define GPIO_GPIOAFSEL_AFSEL6_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL6_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL6_ALT               (0x00000001)
//--------

//--------
#define GPIO_GPIOAFSEL_R_AFSEL7_MASK            (0x00000080)
#define GPIO_GPIOAFSEL_R_AFSEL7_BIT             (7)
#define GPIO_GPIOAFSEL_R_AFSEL7_GPIO            (0x00000000)
#define GPIO_GPIOAFSEL_R_AFSEL7_ALT             (0x00000080)

#define GPIO_GPIOAFSEL_AFSEL7_MASK              (0x00000001)
#define GPIO_GPIOAFSEL_AFSEL7_GPIO              (0x00000000)
#define GPIO_GPIOAFSEL_AFSEL7_ALT               (0x00000001)
//--------

/* GPIOA AHB AFSEL BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOA APB AFSEL BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOB AHB AFSEL BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOB APB AFSEL BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOC AHB AFSEL BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOC APB AFSEL BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOD AHB AFSEL BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOD APB AFSEL BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOE AHB AFSEL BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOE APB AFSEL BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOF AHB AFSEL BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/* GPIOF APB AFSEL BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4))))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOA_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOA APB DRV2*/
#define GPIOA_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOA_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB AHB DRV2*/
#define GPIOB_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOB_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB APB DRV2*/
#define GPIOB_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOB_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC AHB DRV2*/
#define GPIOC_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOC_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC APB DRV2*/
#define GPIOC_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOC_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD AHB DRV2*/
#define GPIOD_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOD_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD APB DRV2*/
#define GPIOD_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOD_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE AHB DRV2*/
#define GPIOE_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOE_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE APB DRV2*/
#define GPIOE_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOE_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF AHB DRV2*/
#define GPIOF_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOF_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF APB DRV2*/
#define GPIOF_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOF_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR2R_OFFSET)))


/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOA_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOA_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOA APB DRV2*/
#define GPIOA_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOA_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOA_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB AHB DRV2*/
#define GPIOB_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOB_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOB_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB APB DRV2*/
#define GPIOB_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOB_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOB_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC AHB DRV2*/
#define GPIOC_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOC_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOC_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC APB DRV2*/
#define GPIOC_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOC_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOC_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD AHB DRV2*/
#define GPIOD_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOD_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOD_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD APB DRV2*/
#define GPIOD_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOD_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOD_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE AHB DRV2*/
#define GPIOE_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOE_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOE_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE APB DRV2*/
#define GPIOE_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOE_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOE_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF AHB DRV2*/
#define GPIOF_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOF_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOF_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF APB DRV2*/
#define GPIOF_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32))))
#define GPIOF_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOF_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODR2R_OFFSET)))



//--------
#define GPIO_GPIODR2R_R_DRV2_MASK           (0x000000FF)
#define GPIO_GPIODR2R_R_DRV2_BIT            (0)
#define GPIO_GPIODR2R_R_DRV2_DIS            (0x00000000)
#define GPIO_GPIODR2R_R_DRV2_EN             (0x000000FF)

#define GPIO_GPIODR2R_DRV2_MASK             (0x000000FF)
#define GPIO_GPIODR2R_DRV2_DIS              (0x00000000)
#define GPIO_GPIODR2R_DRV2_EN               (0x000000FF)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV20_MASK          (0x00000001)
#define GPIO_GPIODR2R_R_DRV20_BIT           (0)
#define GPIO_GPIODR2R_R_DRV20_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV20_EN            (0x00000001)

#define GPIO_GPIODR2R_DRV20_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV20_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV20_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV21_MASK          (0x00000002)
#define GPIO_GPIODR2R_R_DRV21_BIT           (1)
#define GPIO_GPIODR2R_R_DRV21_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV21_EN            (0x00000002)

#define GPIO_GPIODR2R_DRV21_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV21_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV21_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV22_MASK          (0x00000004)
#define GPIO_GPIODR2R_R_DRV22_BIT           (2)
#define GPIO_GPIODR2R_R_DRV22_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV22_EN            (0x00000004)

#define GPIO_GPIODR2R_DRV22_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV22_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV22_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV23_MASK          (0x00000008)
#define GPIO_GPIODR2R_R_DRV23_BIT           (3)
#define GPIO_GPIODR2R_R_DRV23_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV23_EN            (0x00000008)

#define GPIO_GPIODR2R_DRV23_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV23_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV23_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV24_MASK          (0x00000010)
#define GPIO_GPIODR2R_R_DRV24_BIT           (4)
#define GPIO_GPIODR2R_R_DRV24_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV24_EN            (0x00000010)

#define GPIO_GPIODR2R_DRV24_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV24_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV24_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV25_MASK          (0x00000020)
#define GPIO_GPIODR2R_R_DRV25_BIT           (5)
#define GPIO_GPIODR2R_R_DRV25_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV25_EN            (0x00000020)

#define GPIO_GPIODR2R_DRV25_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV25_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV25_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV26_MASK          (0x00000040)
#define GPIO_GPIODR2R_R_DRV26_BIT           (6)
#define GPIO_GPIODR2R_R_DRV26_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV26_EN            (0x00000040)

#define GPIO_GPIODR2R_DRV26_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV26_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV26_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR2R_R_DRV27_MASK          (0x00000080)
#define GPIO_GPIODR2R_R_DRV27_BIT           (7)
#define GPIO_GPIODR2R_R_DRV27_DIS           (0x00000000)
#define GPIO_GPIODR2R_R_DRV27_EN            (0x00000080)

#define GPIO_GPIODR2R_DRV27_MASK            (0x00000001)
#define GPIO_GPIODR2R_DRV27_DIS             (0x00000000)
#define GPIO_GPIODR2R_DRV27_EN              (0x00000001)
//--------

/* GPIOA AHB DRV2 BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOA APB DRV2 BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOB AHB DRV2 BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOB APB DRV2 BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOC AHB DRV2 BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOC APB DRV2 BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOD AHB DRV2 BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOD APB DRV2 BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOE AHB DRV2 BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOE APB DRV2 BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOF AHB DRV2 BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))

/* GPIOF APB DRV2 BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV20_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV21_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV22_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV23_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV24_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV25_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV26_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32)+(GPIO_GPIODR2R_R_DRV27_BIT*4))))



/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV4*/
#define GPIOA_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOA_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOA_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOA APB DRV4*/
#define GPIOA_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOA_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOA_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOB AHB DRV4*/
#define GPIOB_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOB_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOB_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOB APB DRV4*/
#define GPIOB_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOB_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOB_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOC AHB DRV4*/
#define GPIOC_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOC_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOC_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOC APB DRV4*/
#define GPIOC_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOC_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOC_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOD AHB DRV4*/
#define GPIOD_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOD_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOD_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOD APB DRV4*/
#define GPIOD_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOD_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOD_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOE AHB DRV4*/
#define GPIOE_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOE_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOE_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOE APB DRV4*/
#define GPIOE_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOE_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOE_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOF AHB DRV4*/
#define GPIOF_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOF_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOF_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOF APB DRV4*/
#define GPIOF_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32))))
#define GPIOF_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOF_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODR4R_OFFSET)))



//--------
#define GPIO_GPIODR4R_R_DRV4_MASK           (0x000000FF)
#define GPIO_GPIODR4R_R_DRV4_BIT            (0)
#define GPIO_GPIODR4R_R_DRV4_DIS            (0x00000000)
#define GPIO_GPIODR4R_R_DRV4_EN             (0x000000FF)

#define GPIO_GPIODR4R_DRV4_MASK             (0x000000FF)
#define GPIO_GPIODR4R_DRV4_DIS              (0x00000000)
#define GPIO_GPIODR4R_DRV4_EN               (0x000000FF)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV40_MASK          (0x00000001)
#define GPIO_GPIODR4R_R_DRV40_BIT           (0)
#define GPIO_GPIODR4R_R_DRV40_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV40_EN            (0x00000001)

#define GPIO_GPIODR4R_DRV40_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV40_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV40_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV41_MASK          (0x00000002)
#define GPIO_GPIODR4R_R_DRV41_BIT           (1)
#define GPIO_GPIODR4R_R_DRV41_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV41_EN            (0x00000002)

#define GPIO_GPIODR4R_DRV41_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV41_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV41_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV42_MASK          (0x00000004)
#define GPIO_GPIODR4R_R_DRV42_BIT           (2)
#define GPIO_GPIODR4R_R_DRV42_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV42_EN            (0x00000004)

#define GPIO_GPIODR4R_DRV42_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV42_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV42_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV43_MASK          (0x00000008)
#define GPIO_GPIODR4R_R_DRV43_BIT           (3)
#define GPIO_GPIODR4R_R_DRV43_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV43_EN            (0x00000008)

#define GPIO_GPIODR4R_DRV43_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV43_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV43_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV44_MASK          (0x00000010)
#define GPIO_GPIODR4R_R_DRV44_BIT           (4)
#define GPIO_GPIODR4R_R_DRV44_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV44_EN            (0x00000010)

#define GPIO_GPIODR4R_DRV44_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV44_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV44_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV45_MASK          (0x00000020)
#define GPIO_GPIODR4R_R_DRV45_BIT           (5)
#define GPIO_GPIODR4R_R_DRV45_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV45_EN            (0x00000020)

#define GPIO_GPIODR4R_DRV45_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV45_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV45_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV46_MASK          (0x00000040)
#define GPIO_GPIODR4R_R_DRV46_BIT           (6)
#define GPIO_GPIODR4R_R_DRV46_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV46_EN            (0x00000040)

#define GPIO_GPIODR4R_DRV46_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV46_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV46_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR4R_R_DRV47_MASK          (0x00000080)
#define GPIO_GPIODR4R_R_DRV47_BIT           (7)
#define GPIO_GPIODR4R_R_DRV47_DIS           (0x00000000)
#define GPIO_GPIODR4R_R_DRV47_EN            (0x00000080)

#define GPIO_GPIODR4R_DRV47_MASK            (0x00000001)
#define GPIO_GPIODR4R_DRV47_DIS             (0x00000000)
#define GPIO_GPIODR4R_DRV47_EN              (0x00000001)
//--------

/* GPIOA AHB DRV4 BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOA APB DRV4 BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOB AHB DRV4 BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOB APB DRV4 BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOC AHB DRV4 BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOC APB DRV4 BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOD AHB DRV4 BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOD APB DRV4 BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOE AHB DRV4 BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOE APB DRV4 BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOF AHB DRV4 BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))

/* GPIOF APB DRV4 BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV40_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV41_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV42_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV43_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV44_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV45_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV46_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32)+(GPIO_GPIODR4R_R_DRV47_BIT*4))))



/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV8*/
#define GPIOA_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOA_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOA_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOA APB DRV8*/
#define GPIOA_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOA_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOA_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOB AHB DRV8*/
#define GPIOB_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOB_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOB_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOB APB DRV8*/
#define GPIOB_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOB_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOB_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOC AHB DRV8*/
#define GPIOC_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOC_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOC_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOC APB DRV8*/
#define GPIOC_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOC_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOC_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOD AHB DRV8*/
#define GPIOD_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOD_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOD_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOD APB DRV8*/
#define GPIOD_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOD_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOD_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOE AHB DRV8*/
#define GPIOE_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOE_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOE_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOE APB DRV8*/
#define GPIOE_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOE_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOE_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOF AHB DRV8*/
#define GPIOF_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOF_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOF_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOF APB DRV8*/
#define GPIOF_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32))))
#define GPIOF_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOF_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODR8R_OFFSET)))


//--------
#define GPIO_GPIODR8R_R_DRV8_MASK           (0x000000FF)
#define GPIO_GPIODR8R_R_DRV8_BIT            (0)
#define GPIO_GPIODR8R_R_DRV8_DIS            (0x00000000)
#define GPIO_GPIODR8R_R_DRV8_EN             (0x000000FF)

#define GPIO_GPIODR8R_DRV8_MASK             (0x000000FF)
#define GPIO_GPIODR8R_DRV8_DIS              (0x00000000)
#define GPIO_GPIODR8R_DRV8_EN               (0x000000FF)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV80_MASK          (0x00000001)
#define GPIO_GPIODR8R_R_DRV80_BIT           (0)
#define GPIO_GPIODR8R_R_DRV80_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV80_EN            (0x00000001)

#define GPIO_GPIODR8R_DRV80_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV80_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV80_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV81_MASK          (0x00000002)
#define GPIO_GPIODR8R_R_DRV81_BIT           (1)
#define GPIO_GPIODR8R_R_DRV81_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV81_EN            (0x00000002)

#define GPIO_GPIODR8R_DRV81_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV81_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV81_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV82_MASK          (0x00000004)
#define GPIO_GPIODR8R_R_DRV82_BIT           (2)
#define GPIO_GPIODR8R_R_DRV82_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV82_EN            (0x00000004)

#define GPIO_GPIODR8R_DRV82_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV82_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV82_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV83_MASK          (0x00000008)
#define GPIO_GPIODR8R_R_DRV83_BIT           (3)
#define GPIO_GPIODR8R_R_DRV83_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV83_EN            (0x00000008)

#define GPIO_GPIODR8R_DRV83_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV83_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV83_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV84_MASK          (0x00000010)
#define GPIO_GPIODR8R_R_DRV84_BIT           (4)
#define GPIO_GPIODR8R_R_DRV84_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV84_EN            (0x00000010)

#define GPIO_GPIODR8R_DRV84_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV84_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV84_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV85_MASK          (0x00000020)
#define GPIO_GPIODR8R_R_DRV85_BIT           (5)
#define GPIO_GPIODR8R_R_DRV85_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV85_EN            (0x00000020)

#define GPIO_GPIODR8R_DRV85_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV85_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV85_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV86_MASK          (0x00000040)
#define GPIO_GPIODR8R_R_DRV86_BIT           (6)
#define GPIO_GPIODR8R_R_DRV86_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV86_EN            (0x00000040)

#define GPIO_GPIODR8R_DRV86_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV86_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV86_EN              (0x00000001)
//--------

//--------
#define GPIO_GPIODR8R_R_DRV87_MASK          (0x00000080)
#define GPIO_GPIODR8R_R_DRV87_BIT           (7)
#define GPIO_GPIODR8R_R_DRV87_DIS           (0x00000000)
#define GPIO_GPIODR8R_R_DRV87_EN            (0x00000080)

#define GPIO_GPIODR8R_DRV87_MASK            (0x00000001)
#define GPIO_GPIODR8R_DRV87_DIS             (0x00000000)
#define GPIO_GPIODR8R_DRV87_EN              (0x00000001)
//--------

/* GPIOA AHB DRV8 BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOA APB DRV8 BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOB AHB DRV8 BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOB APB DRV8 BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOC AHB DRV8 BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOC APB DRV8 BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOD AHB DRV8 BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOD APB DRV8 BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOE AHB DRV8 BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOE APB DRV8 BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOF AHB DRV8 BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))

/* GPIOF APB DRV8 BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV80_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV81_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV82_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV83_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV84_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV85_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV86_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32)+(GPIO_GPIODR8R_R_DRV87_BIT*4))))


/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOA AHB ODE*/
#define GPIOA_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOA_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOA_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOA APB ODE*/
#define GPIOA_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOA_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOA_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOB AHB ODE*/
#define GPIOB_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOB_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOB_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOB APB ODE*/
#define GPIOB_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOB_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOB_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOC AHB ODE*/
#define GPIOC_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOC_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOC_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOC APB ODE*/
#define GPIOC_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOC_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOC_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOD AHB ODE*/
#define GPIOD_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOD_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOD_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOD APB ODE*/
#define GPIOD_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOD_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOD_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOE AHB ODE*/
#define GPIOE_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOE_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOE_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOE APB ODE*/
#define GPIOE_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOE_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOE_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOF AHB ODE*/
#define GPIOF_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOF_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOF_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOF APB ODE*/
#define GPIOF_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32))))
#define GPIOF_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOF_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOODR_OFFSET)))


//--------
#define GPIO_GPIOODR_R_ODE_MASK             (0x000000FF)
#define GPIO_GPIOODR_R_ODE_BIT              (0)
#define GPIO_GPIOODR_R_ODE_PP               (0x00000000)
#define GPIO_GPIOODR_R_ODE_OD               (0x000000FF)

#define GPIO_GPIOODR_ODE_MASK               (0x000000FF)
#define GPIO_GPIOODR_ODE_PP                 (0x00000000)
#define GPIO_GPIOODR_ODE_OD                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOODR_R_ODE0_MASK            (0x00000001)
#define GPIO_GPIOODR_R_ODE0_BIT             (0)
#define GPIO_GPIOODR_R_ODE0_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE0_OD              (0x00000001)

#define GPIO_GPIOODR_ODE0_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE0_PP                (0x00000000)
#define GPIO_GPIOODR_ODE0_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE1_MASK            (0x00000002)
#define GPIO_GPIOODR_R_ODE1_BIT             (1)
#define GPIO_GPIOODR_R_ODE1_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE1_OD              (0x00000002)

#define GPIO_GPIOODR_ODE1_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE1_PP                (0x00000000)
#define GPIO_GPIOODR_ODE1_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE2_MASK            (0x00000004)
#define GPIO_GPIOODR_R_ODE2_BIT             (2)
#define GPIO_GPIOODR_R_ODE2_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE2_OD              (0x00000004)

#define GPIO_GPIOODR_ODE2_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE2_PP                (0x00000000)
#define GPIO_GPIOODR_ODE2_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE3_MASK            (0x00000008)
#define GPIO_GPIOODR_R_ODE3_BIT             (3)
#define GPIO_GPIOODR_R_ODE3_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE3_OD              (0x00000008)

#define GPIO_GPIOODR_ODE3_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE3_PP                (0x00000000)
#define GPIO_GPIOODR_ODE3_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE4_MASK            (0x00000010)
#define GPIO_GPIOODR_R_ODE4_BIT             (4)
#define GPIO_GPIOODR_R_ODE4_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE4_OD              (0x00000010)

#define GPIO_GPIOODR_ODE4_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE4_PP                (0x00000000)
#define GPIO_GPIOODR_ODE4_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE5_MASK            (0x00000020)
#define GPIO_GPIOODR_R_ODE5_BIT             (5)
#define GPIO_GPIOODR_R_ODE5_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE5_OD              (0x00000020)

#define GPIO_GPIOODR_ODE5_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE5_PP                (0x00000000)
#define GPIO_GPIOODR_ODE5_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE6_MASK            (0x00000040)
#define GPIO_GPIOODR_R_ODE6_BIT             (6)
#define GPIO_GPIOODR_R_ODE6_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE6_OD              (0x00000040)

#define GPIO_GPIOODR_ODE6_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE6_PP                (0x00000000)
#define GPIO_GPIOODR_ODE6_OD                (0x00000001)
//--------

//--------
#define GPIO_GPIOODR_R_ODE7_MASK            (0x00000080)
#define GPIO_GPIOODR_R_ODE7_BIT             (7)
#define GPIO_GPIOODR_R_ODE7_PP              (0x00000000)
#define GPIO_GPIOODR_R_ODE7_OD              (0x00000080)

#define GPIO_GPIOODR_ODE7_MASK              (0x00000001)
#define GPIO_GPIOODR_ODE7_PP                (0x00000000)
#define GPIO_GPIOODR_ODE7_OD                (0x00000001)
//--------


/* GPIOA AHB ODE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOA APB ODE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOB AHB ODE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOB APB ODE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOC AHB ODE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOC APB ODE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOD AHB ODE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOD APB ODE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOE AHB ODE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOE APB ODE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOF AHB ODE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))

/* GPIOF APB ODE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32)+(GPIO_GPIOODR_R_ODE7_BIT*4))))



/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOA AHB PUE*/
#define GPIOA_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOA_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOA_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOA APB PUE*/
#define GPIOA_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOA_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOA_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOB AHB PUE*/
#define GPIOB_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOB_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOB_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOB APB PUE*/
#define GPIOB_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOB_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOB_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOC AHB PUE*/
#define GPIOC_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOC_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOC_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOC APB PUE*/
#define GPIOC_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOC_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOC_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOD AHB PUE*/
#define GPIOD_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOD_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOD_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOD APB PUE*/
#define GPIOD_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOD_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOD_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOE AHB PUE*/
#define GPIOE_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOE_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOE_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOE APB PUE*/
#define GPIOE_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOE_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOE_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOF AHB PUE*/
#define GPIOF_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOF_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOF_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOF APB PUE*/
#define GPIOF_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32))))
#define GPIOF_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOF_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPUR_OFFSET)))


//--------
#define GPIO_GPIOPUR_R_PUE_MASK             (0x000000FF)
#define GPIO_GPIOPUR_R_PUE_BIT              (0)
#define GPIO_GPIOPUR_R_PUE_DIS              (0x00000000)
#define GPIO_GPIOPUR_R_PUE_EN               (0x000000FF)

#define GPIO_GPIOPUR_PUE_MASK               (0x000000FF)
#define GPIO_GPIOPUR_PUE_DIS                (0x00000000)
#define GPIO_GPIOPUR_PUE_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE0_MASK            (0x00000001)
#define GPIO_GPIOPUR_R_PUE0_BIT             (0)
#define GPIO_GPIOPUR_R_PUE0_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE0_EN              (0x00000001)

#define GPIO_GPIOPUR_PUE0_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE0_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE1_MASK            (0x00000002)
#define GPIO_GPIOPUR_R_PUE1_BIT             (1)
#define GPIO_GPIOPUR_R_PUE1_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE1_EN              (0x00000002)

#define GPIO_GPIOPUR_PUE1_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE1_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE2_MASK            (0x00000004)
#define GPIO_GPIOPUR_R_PUE2_BIT             (2)
#define GPIO_GPIOPUR_R_PUE2_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE2_EN              (0x00000004)

#define GPIO_GPIOPUR_PUE2_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE2_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE3_MASK            (0x00000008)
#define GPIO_GPIOPUR_R_PUE3_BIT             (3)
#define GPIO_GPIOPUR_R_PUE3_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE3_EN              (0x00000008)

#define GPIO_GPIOPUR_PUE3_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE3_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE4_MASK            (0x00000010)
#define GPIO_GPIOPUR_R_PUE4_BIT             (4)
#define GPIO_GPIOPUR_R_PUE4_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE4_EN              (0x00000010)

#define GPIO_GPIOPUR_PUE4_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE4_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE5_MASK            (0x00000020)
#define GPIO_GPIOPUR_R_PUE5_BIT             (5)
#define GPIO_GPIOPUR_R_PUE5_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE5_EN              (0x00000020)

#define GPIO_GPIOPUR_PUE5_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE5_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE6_MASK            (0x00000040)
#define GPIO_GPIOPUR_R_PUE6_BIT             (6)
#define GPIO_GPIOPUR_R_PUE6_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE6_EN              (0x00000040)

#define GPIO_GPIOPUR_PUE6_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE6_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE6_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPUR_R_PUE7_MASK            (0x00000080)
#define GPIO_GPIOPUR_R_PUE7_BIT             (7)
#define GPIO_GPIOPUR_R_PUE7_DIS             (0x00000000)
#define GPIO_GPIOPUR_R_PUE7_EN              (0x00000080)

#define GPIO_GPIOPUR_PUE7_MASK              (0x00000001)
#define GPIO_GPIOPUR_PUE7_DIS               (0x00000000)
#define GPIO_GPIOPUR_PUE7_EN                (0x00000001)
//--------


/* GPIOA AHB PUE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOA APB PUE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOB AHB PUE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOB APB PUE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOC AHB PUE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOC APB PUE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOD AHB PUE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOD APB PUE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOE AHB PUE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOE APB PUE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOF AHB PUE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))

/* GPIOF APB PUE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32)+(GPIO_GPIOPUR_R_PUE7_BIT*4))))




/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOA AHB PDE*/
#define GPIOA_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOA_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOA_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOA APB PDE*/
#define GPIOA_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOA_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOA_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOB AHB PDE*/
#define GPIOB_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOB_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOB_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOB APB PDE*/
#define GPIOB_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOB_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOB_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOC AHB PDE*/
#define GPIOC_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOC_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOC_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOC APB PDE*/
#define GPIOC_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOC_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOC_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOD AHB PDE*/
#define GPIOD_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOD_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOD_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOD APB PDE*/
#define GPIOD_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOD_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOD_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOE AHB PDE*/
#define GPIOE_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOE_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOE_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOE APB PDE*/
#define GPIOE_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOE_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOE_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOF AHB PDE*/
#define GPIOF_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOF_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOF_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOF APB PDE*/
#define GPIOF_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32))))
#define GPIOF_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOF_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPDR_OFFSET)))


//--------
#define GPIO_GPIOPDR_R_PDE_MASK             (0x000000FF)
#define GPIO_GPIOPDR_R_PDE_BIT              (0)
#define GPIO_GPIOPDR_R_PDE_DIS              (0x00000000)
#define GPIO_GPIOPDR_R_PDE_EN               (0x000000FF)

#define GPIO_GPIOPDR_PDE_MASK               (0x000000FF)
#define GPIO_GPIOPDR_PDE_DIS                (0x00000000)
#define GPIO_GPIOPDR_PDE_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE0_MASK            (0x00000001)
#define GPIO_GPIOPDR_R_PDE0_BIT             (0)
#define GPIO_GPIOPDR_R_PDE0_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE0_EN              (0x00000001)

#define GPIO_GPIOPDR_PDE0_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE0_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE1_MASK            (0x00000002)
#define GPIO_GPIOPDR_R_PDE1_BIT             (1)
#define GPIO_GPIOPDR_R_PDE1_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE1_EN              (0x00000002)

#define GPIO_GPIOPDR_PDE1_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE1_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE2_MASK            (0x00000004)
#define GPIO_GPIOPDR_R_PDE2_BIT             (2)
#define GPIO_GPIOPDR_R_PDE2_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE2_EN              (0x00000004)

#define GPIO_GPIOPDR_PDE2_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE2_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE3_MASK            (0x00000008)
#define GPIO_GPIOPDR_R_PDE3_BIT             (3)
#define GPIO_GPIOPDR_R_PDE3_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE3_EN              (0x00000008)

#define GPIO_GPIOPDR_PDE3_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE3_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE4_MASK            (0x00000010)
#define GPIO_GPIOPDR_R_PDE4_BIT             (4)
#define GPIO_GPIOPDR_R_PDE4_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE4_EN              (0x00000010)

#define GPIO_GPIOPDR_PDE4_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE4_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE5_MASK            (0x00000020)
#define GPIO_GPIOPDR_R_PDE5_BIT             (5)
#define GPIO_GPIOPDR_R_PDE5_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE5_EN              (0x00000020)

#define GPIO_GPIOPDR_PDE5_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE5_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOPDR_R_PDE6_MASK            (0x00000040)
#define GPIO_GPIOPDR_R_PDE6_BIT             (6)
#define GPIO_GPIOPDR_R_PDE6_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE6_EN              (0x00000040)

#define GPIO_GPIOPDR_PDE6_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE6_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE6_EN                (0x00000001)
//--------

//--------

#define GPIO_GPIOPDR_R_PDE7_MASK            (0x00000080)
#define GPIO_GPIOPDR_R_PDE7_BIT             (7)
#define GPIO_GPIOPDR_R_PDE7_DIS             (0x00000000)
#define GPIO_GPIOPDR_R_PDE7_EN              (0x00000080)

#define GPIO_GPIOPDR_PDE7_MASK              (0x00000001)
#define GPIO_GPIOPDR_PDE7_DIS               (0x00000000)
#define GPIO_GPIOPDR_PDE7_EN                (0x00000001)
//--------


/* GPIOA AHB PDE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOA APB PDE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOB AHB PDE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOB APB PDE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOC AHB PDE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOC APB PDE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOD AHB PDE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOD APB PDE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOE AHB PDE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOE APB PDE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOF AHB PDE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))

/* GPIOF APB PDE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32)+(GPIO_GPIOPDR_R_PDE7_BIT*4))))


/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOA AHB SLR*/
#define GPIOA_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOA_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOA_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOA APB SLR*/
#define GPIOA_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOA_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOA_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOB AHB SLR*/
#define GPIOB_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOB_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOB_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOB APB SLR*/
#define GPIOB_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOB_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOB_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOC AHB SLR*/
#define GPIOC_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOC_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOC_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOC APB SLR*/
#define GPIOC_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOC_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOC_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOD AHB SLR*/
#define GPIOD_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOD_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOD_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOD APB SLR*/
#define GPIOD_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOD_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOD_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOE AHB SLR*/
#define GPIOE_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOE_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOE_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOE APB SLR*/
#define GPIOE_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOE_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOE_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOF AHB SLR*/
#define GPIOF_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOF_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOF_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOF APB SLR*/
#define GPIOF_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32))))
#define GPIOF_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOF_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOSLR_OFFSET)))


//--------
#define GPIO_GPIOSLR_R_SLR_MASK             (0x000000FF)
#define GPIO_GPIOSLR_R_SLR_BIT              (0)
#define GPIO_GPIOSLR_R_SLR_DIS              (0x00000000)
#define GPIO_GPIOSLR_R_SLR_EN               (0x000000FF)

#define GPIO_GPIOSLR_SLR_MASK               (0x000000FF)
#define GPIO_GPIOSLR_SLR_DIS                (0x00000000)
#define GPIO_GPIOSLR_SLR_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR0_MASK            (0x00000001)
#define GPIO_GPIOSLR_R_SLR0_BIT             (0)
#define GPIO_GPIOSLR_R_SLR0_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR0_EN              (0x00000001)

#define GPIO_GPIOSLR_SLR0_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR0_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR1_MASK            (0x00000002)
#define GPIO_GPIOSLR_R_SLR1_BIT             (1)
#define GPIO_GPIOSLR_R_SLR1_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR1_EN              (0x00000002)

#define GPIO_GPIOSLR_SLR1_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR1_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR2_MASK            (0x00000004)
#define GPIO_GPIOSLR_R_SLR2_BIT             (2)
#define GPIO_GPIOSLR_R_SLR2_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR2_EN              (0x00000004)

#define GPIO_GPIOSLR_SLR2_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR2_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR3_MASK            (0x00000008)
#define GPIO_GPIOSLR_R_SLR3_BIT             (3)
#define GPIO_GPIOSLR_R_SLR3_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR3_EN              (0x00000008)

#define GPIO_GPIOSLR_SLR3_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR3_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR4_MASK            (0x00000010)
#define GPIO_GPIOSLR_R_SLR4_BIT             (4)
#define GPIO_GPIOSLR_R_SLR4_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR4_EN              (0x00000010)

#define GPIO_GPIOSLR_SLR4_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR4_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR5_MASK            (0x00000020)
#define GPIO_GPIOSLR_R_SLR5_BIT             (5)
#define GPIO_GPIOSLR_R_SLR5_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR5_EN              (0x00000020)

#define GPIO_GPIOSLR_SLR5_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR5_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR6_MASK            (0x00000040)
#define GPIO_GPIOSLR_R_SLR6_BIT             (6)
#define GPIO_GPIOSLR_R_SLR6_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR6_EN              (0x00000040)

#define GPIO_GPIOSLR_SLR6_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR6_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR6_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOSLR_R_SLR7_MASK            (0x00000080)
#define GPIO_GPIOSLR_R_SLR7_BIT             (7)
#define GPIO_GPIOSLR_R_SLR7_DIS             (0x00000000)
#define GPIO_GPIOSLR_R_SLR7_EN              (0x00000080)

#define GPIO_GPIOSLR_SLR7_MASK              (0x00000001)
#define GPIO_GPIOSLR_SLR7_DIS               (0x00000000)
#define GPIO_GPIOSLR_SLR7_EN                (0x00000001)
//--------


/* GPIOA AHB SLR BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOA APB SLR BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOB AHB SLR BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOB APB SLR BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOC AHB SLR BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOC APB SLR BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOD AHB SLR BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOD APB SLR BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOE AHB SLR BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOE APB SLR BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOF AHB SLR BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))

/* GPIOF APB SLR BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32)+(GPIO_GPIOSLR_R_SLR7_BIT*4))))




/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOA AHB DEN*/
#define GPIOA_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOA_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOA_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOA APB DEN*/
#define GPIOA_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOA_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOA_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOB AHB DEN*/
#define GPIOB_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOB_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOB_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOB APB DEN*/
#define GPIOB_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOB_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOB_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOC AHB DEN*/
#define GPIOC_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOC_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOC_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOC APB DEN*/
#define GPIOC_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOC_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOC_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOD AHB DEN*/
#define GPIOD_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOD_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOD_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOD APB DEN*/
#define GPIOD_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOD_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOD_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOE AHB DEN*/
#define GPIOE_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOE_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOE_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOE APB DEN*/
#define GPIOE_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOE_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOE_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOF AHB DEN*/
#define GPIOF_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOF_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOF_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOF APB DEN*/
#define GPIOF_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32))))
#define GPIOF_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOF_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODEN_OFFSET)))


//--------
#define GPIO_GPIODEN_R_DEN_MASK             (0x000000FF)
#define GPIO_GPIODEN_R_DEN_BIT              (0)
#define GPIO_GPIODEN_R_DEN_DIS              (0x00000000)
#define GPIO_GPIODEN_R_DEN_EN               (0x000000FF)

#define GPIO_GPIODEN_DEN_MASK               (0x000000FF)
#define GPIO_GPIODEN_DEN_DIS                (0x00000000)
#define GPIO_GPIODEN_DEN_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIODEN_R_DEN0_MASK            (0x00000001)
#define GPIO_GPIODEN_R_DEN0_BIT             (0)
#define GPIO_GPIODEN_R_DEN0_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN0_EN              (0x00000001)

#define GPIO_GPIODEN_DEN0_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN0_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN1_MASK            (0x00000002)
#define GPIO_GPIODEN_R_DEN1_BIT             (1)
#define GPIO_GPIODEN_R_DEN1_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN1_EN              (0x00000002)

#define GPIO_GPIODEN_DEN1_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN1_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN2_MASK            (0x00000004)
#define GPIO_GPIODEN_R_DEN2_BIT             (2)
#define GPIO_GPIODEN_R_DEN2_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN2_EN              (0x00000004)

#define GPIO_GPIODEN_DEN2_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN2_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN3_MASK            (0x00000008)
#define GPIO_GPIODEN_R_DEN3_BIT             (3)
#define GPIO_GPIODEN_R_DEN3_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN3_EN              (0x00000008)

#define GPIO_GPIODEN_DEN3_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN3_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN4_MASK            (0x00000010)
#define GPIO_GPIODEN_R_DEN4_BIT             (4)
#define GPIO_GPIODEN_R_DEN4_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN4_EN              (0x00000010)

#define GPIO_GPIODEN_DEN4_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN4_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN5_MASK            (0x00000020)
#define GPIO_GPIODEN_R_DEN5_BIT             (5)
#define GPIO_GPIODEN_R_DEN5_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN5_EN              (0x00000020)

#define GPIO_GPIODEN_DEN5_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN5_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN6_MASK            (0x00000040)
#define GPIO_GPIODEN_R_DEN6_BIT             (6)
#define GPIO_GPIODEN_R_DEN6_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN6_EN              (0x00000040)

#define GPIO_GPIODEN_DEN6_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN6_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN6_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODEN_R_DEN7_MASK            (0x00000080)
#define GPIO_GPIODEN_R_DEN7_BIT             (7)
#define GPIO_GPIODEN_R_DEN7_DIS             (0x00000000)
#define GPIO_GPIODEN_R_DEN7_EN              (0x00000080)

#define GPIO_GPIODEN_DEN7_MASK              (0x00000001)
#define GPIO_GPIODEN_DEN7_DIS               (0x00000000)
#define GPIO_GPIODEN_DEN7_EN                (0x00000001)
//--------


/* GPIOA AHB DEN BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOA APB DEN BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOB AHB DEN BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOB APB DEN BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOC AHB DEN BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOC APB DEN BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOD AHB DEN BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOD APB DEN BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOE AHB DEN BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOE APB DEN BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOF AHB DEN BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))

/* GPIOF APB DEN BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32)+(GPIO_GPIODEN_R_DEN7_BIT*4))))


/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOA AHB LOCK*/
#define GPIOA_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOA_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOA_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOA APB LOCK*/
#define GPIOA_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOA_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOA_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOB AHB LOCK*/
#define GPIOB_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOB_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOB_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOB APB LOCK*/
#define GPIOB_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOB_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOB_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOC AHB LOCK*/
#define GPIOC_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOC_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOC_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOC APB LOCK*/
#define GPIOC_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOC_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOC_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOD AHB LOCK*/
#define GPIOD_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOD_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOD_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOD APB LOCK*/
#define GPIOD_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOD_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOD_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOE AHB LOCK*/
#define GPIOE_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOE_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOE_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOE APB LOCK*/
#define GPIOE_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOE_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOE_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOF AHB LOCK*/
#define GPIOF_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOF_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOF_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOF APB LOCK*/
#define GPIOF_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32))))
#define GPIOF_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOF_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOLOCK_OFFSET)))


//--------
#define GPIO_GPIOLOCK_R_LOCK_MASK     (0xFFFFFFFF)
#define GPIO_GPIOLOCK_R_LOCK_BIT      (0)
#define GPIO_GPIOLOCK_R_LOCK_KEY      (0x4C4F434B)
#define GPIO_GPIOLOCK_R_LOCK_UNLOCK   (0x00000000)
#define GPIO_GPIOLOCK_R_LOCK_LOCK     (0x00000001)

#define GPIO_GPIOLOCK_LOCK_MASK       (0xFFFFFFFF)
#define GPIO_GPIOLOCK_LOCK_KEY        (0x4C4F434B)
#define GPIO_GPIOLOCK_LOCK_UNLOCK     (0x00000000)
#define GPIO_GPIOLOCK_LOCK_LOCK       (0x00000001)
//--------


/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOA AHB CR*/
#define GPIOA_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOA_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOA_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOA APB CR*/
#define GPIOA_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOA_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOA_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOB AHB CR*/
#define GPIOB_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOB_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOB_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOB APB CR*/
#define GPIOB_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOB_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOB_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOC AHB CR*/
#define GPIOC_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOC_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOC_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOC APB CR*/
#define GPIOC_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOC_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOC_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOD AHB CR*/
#define GPIOD_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOD_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOD_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOD APB CR*/
#define GPIOD_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOD_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOD_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOE AHB CR*/
#define GPIOE_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOE_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOE_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOE APB CR*/
#define GPIOE_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOE_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOE_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOF AHB CR*/
#define GPIOF_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOF_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOF_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOF APB CR*/
#define GPIOF_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32))))
#define GPIOF_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOF_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCR_OFFSET)))


//--------
#define GPIO_GPIOCR_R_CR_MASK             (0x000000FF)
#define GPIO_GPIOCR_R_CR_BIT              (0)
#define GPIO_GPIOCR_R_CR_DIS              (0x00000000)
#define GPIO_GPIOCR_R_CR_EN               (0x000000FF)

#define GPIO_GPIOCR_CR_MASK               (0x000000FF)
#define GPIO_GPIOCR_CR_DIS                (0x00000000)
#define GPIO_GPIOCR_CR_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOCR_R_CR0_MASK            (0x00000001)
#define GPIO_GPIOCR_R_CR0_BIT             (0)
#define GPIO_GPIOCR_R_CR0_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR0_EN              (0x00000001)

#define GPIO_GPIOCR_CR0_MASK              (0x00000001)
#define GPIO_GPIOCR_CR0_DIS               (0x00000000)
#define GPIO_GPIOCR_CR0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR1_MASK            (0x00000002)
#define GPIO_GPIOCR_R_CR1_BIT             (1)
#define GPIO_GPIOCR_R_CR1_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR1_EN              (0x00000002)

#define GPIO_GPIOCR_CR1_MASK              (0x00000001)
#define GPIO_GPIOCR_CR1_DIS               (0x00000000)
#define GPIO_GPIOCR_CR1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR2_MASK            (0x00000004)
#define GPIO_GPIOCR_R_CR2_BIT             (2)
#define GPIO_GPIOCR_R_CR2_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR2_EN              (0x00000004)

#define GPIO_GPIOCR_CR2_MASK              (0x00000001)
#define GPIO_GPIOCR_CR2_DIS               (0x00000000)
#define GPIO_GPIOCR_CR2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR3_MASK            (0x00000008)
#define GPIO_GPIOCR_R_CR3_BIT             (3)
#define GPIO_GPIOCR_R_CR3_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR3_EN              (0x00000008)

#define GPIO_GPIOCR_CR3_MASK              (0x00000001)
#define GPIO_GPIOCR_CR3_DIS               (0x00000000)
#define GPIO_GPIOCR_CR3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR4_MASK            (0x00000010)
#define GPIO_GPIOCR_R_CR4_BIT             (4)
#define GPIO_GPIOCR_R_CR4_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR4_EN              (0x00000010)

#define GPIO_GPIOCR_CR4_MASK              (0x00000001)
#define GPIO_GPIOCR_CR4_DIS               (0x00000000)
#define GPIO_GPIOCR_CR4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR5_MASK            (0x00000020)
#define GPIO_GPIOCR_R_CR5_BIT             (5)
#define GPIO_GPIOCR_R_CR5_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR5_EN              (0x00000020)

#define GPIO_GPIOCR_CR5_MASK              (0x00000001)
#define GPIO_GPIOCR_CR5_DIS               (0x00000000)
#define GPIO_GPIOCR_CR5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR6_MASK            (0x00000040)
#define GPIO_GPIOCR_R_CR6_BIT             (6)
#define GPIO_GPIOCR_R_CR6_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR6_EN              (0x00000040)

#define GPIO_GPIOCR_CR6_MASK              (0x00000001)
#define GPIO_GPIOCR_CR6_DIS               (0x00000000)
#define GPIO_GPIOCR_CR6_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOCR_R_CR7_MASK            (0x00000080)
#define GPIO_GPIOCR_R_CR7_BIT             (7)
#define GPIO_GPIOCR_R_CR7_DIS             (0x00000000)
#define GPIO_GPIOCR_R_CR7_EN              (0x00000080)

#define GPIO_GPIOCR_CR7_MASK              (0x00000001)
#define GPIO_GPIOCR_CR7_DIS               (0x00000000)
#define GPIO_GPIOCR_CR7_EN                (0x00000001)
//--------


/* GPIOA AHB CR BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOA APB CR BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOB AHB CR BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOB APB CR BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOC AHB CR BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOC APB CR BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOD AHB CR BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOD APB CR BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOE AHB CR BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOE APB CR BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOF AHB CR BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))

/* GPIOF APB CR BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32)+(GPIO_GPIOCR_R_CR7_BIT*4))))



/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOA AHB AMSEL*/
#define GPIOA_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOA_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOA_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOA APB AMSEL*/
#define GPIOA_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOA_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOA_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOB AHB AMSEL*/
#define GPIOB_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOB_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOB_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOB APB AMSEL*/
#define GPIOB_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOB_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOB_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOC AHB AMSEL*/
#define GPIOC_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOC_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOC_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOC APB AMSEL*/
#define GPIOC_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOC_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOC_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOD AHB AMSEL*/
#define GPIOD_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOD_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOD_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOD APB AMSEL*/
#define GPIOD_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOD_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOD_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOE AHB AMSEL*/
#define GPIOE_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOE_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOE_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOE APB AMSEL*/
#define GPIOE_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOE_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOE_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOF AHB AMSEL*/
#define GPIOF_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOF_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOF_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOF APB AMSEL*/
#define GPIOF_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32))))
#define GPIOF_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOF_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))


//--------
#define GPIO_GPIOAMSEL_R_AMSEL_MASK             (0x000000FF)
#define GPIO_GPIOAMSEL_R_AMSEL_BIT              (0)
#define GPIO_GPIOAMSEL_R_AMSEL_DIS              (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL_EN               (0x000000FF)

#define GPIO_GPIOAMSEL_AMSEL_MASK               (0x000000FF)
#define GPIO_GPIOAMSEL_AMSEL_DIS                (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL0_MASK            (0x00000001)
#define GPIO_GPIOAMSEL_R_AMSEL0_BIT             (0)
#define GPIO_GPIOAMSEL_R_AMSEL0_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL0_EN              (0x00000001)

#define GPIO_GPIOAMSEL_AMSEL0_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL0_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL1_MASK            (0x00000002)
#define GPIO_GPIOAMSEL_R_AMSEL1_BIT             (1)
#define GPIO_GPIOAMSEL_R_AMSEL1_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL1_EN              (0x00000002)

#define GPIO_GPIOAMSEL_AMSEL1_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL1_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL2_MASK            (0x00000004)
#define GPIO_GPIOAMSEL_R_AMSEL2_BIT             (2)
#define GPIO_GPIOAMSEL_R_AMSEL2_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL2_EN              (0x00000004)

#define GPIO_GPIOAMSEL_AMSEL2_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL2_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL3_MASK            (0x00000008)
#define GPIO_GPIOAMSEL_R_AMSEL3_BIT             (3)
#define GPIO_GPIOAMSEL_R_AMSEL3_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL3_EN              (0x00000008)

#define GPIO_GPIOAMSEL_AMSEL3_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL3_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL4_MASK            (0x00000010)
#define GPIO_GPIOAMSEL_R_AMSEL4_BIT             (4)
#define GPIO_GPIOAMSEL_R_AMSEL4_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL4_EN              (0x00000010)

#define GPIO_GPIOAMSEL_AMSEL4_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL4_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL5_MASK            (0x00000020)
#define GPIO_GPIOAMSEL_R_AMSEL5_BIT             (5)
#define GPIO_GPIOAMSEL_R_AMSEL5_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL5_EN              (0x00000020)

#define GPIO_GPIOAMSEL_AMSEL5_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL5_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL6_MASK            (0x00000040)
#define GPIO_GPIOAMSEL_R_AMSEL6_BIT             (6)
#define GPIO_GPIOAMSEL_R_AMSEL6_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL6_EN              (0x00000040)

#define GPIO_GPIOAMSEL_AMSEL6_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL6_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL6_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOAMSEL_R_AMSEL7_MASK            (0x00000080)
#define GPIO_GPIOAMSEL_R_AMSEL7_BIT             (7)
#define GPIO_GPIOAMSEL_R_AMSEL7_DIS             (0x00000000)
#define GPIO_GPIOAMSEL_R_AMSEL7_EN              (0x00000080)

#define GPIO_GPIOAMSEL_AMSEL7_MASK              (0x00000001)
#define GPIO_GPIOAMSEL_AMSEL7_DIS               (0x00000000)
#define GPIO_GPIOAMSEL_AMSEL7_EN                (0x00000001)
//--------


/* GPIOA AHB AMSEL BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOA APB AMSEL BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOB AHB AMSEL BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOB APB AMSEL BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOC AHB AMSEL BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOC APB AMSEL BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOD AHB AMSEL BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOD APB AMSEL BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOE AHB AMSEL BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOE APB AMSEL BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOF AHB AMSEL BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))

/* GPIOF APB AMSEL BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4))))


/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOA AHB PCM*/
#define GPIOA_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOA_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOA_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOA APB PCM*/
#define GPIOA_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOA_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOA_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOB AHB PCM*/
#define GPIOB_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOB_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOB_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOB APB PCM*/
#define GPIOB_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOB_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOB_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOC AHB PCM*/
#define GPIOC_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOC_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOC_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOC APB PCM*/
#define GPIOC_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOC_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOC_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOD AHB PCM*/
#define GPIOD_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOD_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOD_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOD APB PCM*/
#define GPIOD_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOD_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOD_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOE AHB PCM*/
#define GPIOE_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOE_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOE_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOE APB PCM*/
#define GPIOE_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOE_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOE_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOF AHB PCM*/
#define GPIOF_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOF_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOF_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOF APB PCM*/
#define GPIOF_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32))))
#define GPIOF_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOF_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

//--------
#define GPIOA_GPIOPCTL_R_PCM0_MASK   (0x0000000F)
#define GPIOA_GPIOPCTL_R_PCM0_BIT    (0)
#define GPIOA_GPIOPCTL_R_PCM0_GPIO   (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM0_U0Rx   (0x00000001)
#define GPIOA_GPIOPCTL_R_PCM0_CAN1Rx (0x00000008)

#define GPIOA_GPIOPCTL_PCM0_MASK     (0x0000000F)
#define GPIOA_GPIOPCTL_PCM0_GPIO     (0x00000000)
#define GPIOA_GPIOPCTL_PCM0_U0Rx     (0x00000001)
#define GPIOA_GPIOPCTL_PCM0_CAN1Rx   (0x00000008)
//--------

//--------
#define GPIOA_GPIOPCTL_R_PCM1_MASK   (0x000000F0)
#define GPIOA_GPIOPCTL_R_PCM1_BIT    (4)
#define GPIOA_GPIOPCTL_R_PCM1_GPIO   (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM1_U0Tx   (0x00000010)
#define GPIOA_GPIOPCTL_R_PCM1_CAN1Tx (0x00000080)

#define GPIOA_GPIOPCTL_PCM1_MASK     (0x0000000F)
#define GPIOA_GPIOPCTL_PCM1_GPIO     (0x00000000)
#define GPIOA_GPIOPCTL_PCM1_U0Tx     (0x00000001)
#define GPIOA_GPIOPCTL_PCM1_CAN1Tx   (0x00000008)
//--------

//--------
#define GPIOA_GPIOPCTL_R_PCM2_MASK    (0x00000F00)
#define GPIOA_GPIOPCTL_R_PCM2_BIT     (8)
#define GPIOA_GPIOPCTL_R_PCM2_GPIO    (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM2_SSI0Clk (0x00000200)

#define GPIOA_GPIOPCTL_PCM2_MASK      (0x0000000F)
#define GPIOA_GPIOPCTL_PCM2_GPIO      (0x00000000)
#define GPIOA_GPIOPCTL_PCM2_SSI0Clk   (0x00000002)
//--------

//--------
#define GPIOA_GPIOPCTL_R_PCM3_MASK    (0x0000F000)
#define GPIOA_GPIOPCTL_R_PCM3_BIT     (12)
#define GPIOA_GPIOPCTL_R_PCM3_GPIO    (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM3_SSI0Fss (0x00002000)

#define GPIOA_GPIOPCTL_PCM3_MASK      (0x0000000F)
#define GPIOA_GPIOPCTL_PCM3_GPIO      (0x00000000)
#define GPIOA_GPIOPCTL_PCM3_SSI0Fss   (0x00000002)
//--------


//--------
#define GPIOA_GPIOPCTL_R_PCM4_MASK    (0x000F0000)
#define GPIOA_GPIOPCTL_R_PCM4_BIT     (16)
#define GPIOA_GPIOPCTL_R_PCM4_GPIO    (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM4_SSI0Rx  (0x00020000)

#define GPIOA_GPIOPCTL_PCM4_MASK      (0x0000000F)
#define GPIOA_GPIOPCTL_PCM4_GPIO      (0x00000000)
#define GPIOA_GPIOPCTL_PCM4_SSI0Rx    (0x00000002)
//--------

//--------
#define GPIOA_GPIOPCTL_R_PCM5_MASK    (0x00F00000)
#define GPIOA_GPIOPCTL_R_PCM5_BIT     (20)
#define GPIOA_GPIOPCTL_R_PCM5_GPIO    (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM5_SSI0Tx  (0x00200000)

#define GPIOA_GPIOPCTL_PCM5_MASK      (0x0000000F)
#define GPIOA_GPIOPCTL_PCM5_GPIO      (0x00000000)
#define GPIOA_GPIOPCTL_PCM5_SSI0Tx    (0x00000002)
//--------

//--------
#define GPIOA_GPIOPCTL_R_PCM6_MASK    (0x0F000000)
#define GPIOA_GPIOPCTL_R_PCM6_BIT     (24)
#define GPIOA_GPIOPCTL_R_PCM6_GPIO    (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM6_I2C1SCL (0x03000000)
#define GPIOA_GPIOPCTL_R_PCM6_M1PWM2  (0x05000000)

#define GPIOA_GPIOPCTL_PCM6_MASK      (0x0000000F)
#define GPIOA_GPIOPCTL_PCM6_GPIO      (0x00000000)
#define GPIOA_GPIOPCTL_PCM6_I2C1SCL   (0x00000003)
#define GPIOA_GPIOPCTL_PCM6_M1PWM2    (0x00000005)
//--------

//--------
#define GPIOA_GPIOPCTL_R_PCM7_MASK    (0xF0000000)
#define GPIOA_GPIOPCTL_R_PCM7_BIT     (28)
#define GPIOA_GPIOPCTL_R_PCM7_GPIO    (0x00000000)
#define GPIOA_GPIOPCTL_R_PCM7_I2C1SDA (0x30000000)
#define GPIOA_GPIOPCTL_R_PCM7_M1PWM3  (0x50000000)

#define GPIOA_GPIOPCTL_PCM7_MASK      (0x0000000F)
#define GPIOA_GPIOPCTL_PCM7_GPIO      (0x00000000)
#define GPIOA_GPIOPCTL_PCM7_I2C1SDA   (0x00000003)
#define GPIOA_GPIOPCTL_PCM7_M1PWM3    (0x00000005)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM0_MASK   (0x0000000F)
#define GPIOB_GPIOPCTL_R_PCM0_BIT    (0)
#define GPIOB_GPIOPCTL_R_PCM0_GPIO   (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM0_U1Rx   (0x00000001)
#define GPIOB_GPIOPCTL_R_PCM0_T2CCP0 (0x00000007)

#define GPIOB_GPIOPCTL_PCM0_MASK     (0x0000000F)
#define GPIOB_GPIOPCTL_PCM0_GPIO     (0x00000000)
#define GPIOB_GPIOPCTL_PCM0_U1Rx     (0x00000001)
#define GPIOB_GPIOPCTL_PCM0_T2CCP0   (0x00000007)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM1_MASK   (0x000000F0)
#define GPIOB_GPIOPCTL_R_PCM1_BIT    (4)
#define GPIOB_GPIOPCTL_R_PCM1_GPIO   (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM1_U1Tx   (0x00000010)
#define GPIOB_GPIOPCTL_R_PCM1_T2CCP1 (0x00000070)

#define GPIOB_GPIOPCTL_PCM1_MASK     (0x0000000F)
#define GPIOB_GPIOPCTL_PCM1_GPIO     (0x00000000)
#define GPIOB_GPIOPCTL_PCM1_U1Tx     (0x00000001)
#define GPIOB_GPIOPCTL_PCM1_T2CCP1   (0x00000007)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM2_MASK    (0x00000F00)
#define GPIOB_GPIOPCTL_R_PCM2_BIT     (8)
#define GPIOB_GPIOPCTL_R_PCM2_GPIO    (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM2_I2C0SCL (0x00000300)
#define GPIOB_GPIOPCTL_R_PCM2_T3CCP0  (0x00000700)

#define GPIOB_GPIOPCTL_PCM2_MASK      (0x0000000F)
#define GPIOB_GPIOPCTL_PCM2_GPIO      (0x00000000)
#define GPIOB_GPIOPCTL_PCM2_I2C0SCL   (0x00000003)
#define GPIOB_GPIOPCTL_PCM2_T3CCP0    (0x00000007)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM3_MASK    (0x0000F000)
#define GPIOB_GPIOPCTL_R_PCM3_BIT     (12)
#define GPIOB_GPIOPCTL_R_PCM3_GPIO    (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM3_I2C0SDA (0x00003000)
#define GPIOB_GPIOPCTL_R_PCM3_T3CCP1  (0x00007000)

#define GPIOB_GPIOPCTL_PCM3_MASK      (0x0000000F)
#define GPIOB_GPIOPCTL_PCM3_GPIO      (0x00000000)
#define GPIOB_GPIOPCTL_PCM3_I2C0SDA   (0x00000003)
#define GPIOB_GPIOPCTL_PCM3_T3CCP1    (0x00000007)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM4_MASK    (0x000F0000)
#define GPIOB_GPIOPCTL_R_PCM4_BIT     (16)
#define GPIOB_GPIOPCTL_R_PCM4_GPIO    (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM4_SSI2Clk (0x00020000)
#define GPIOB_GPIOPCTL_R_PCM4_M0PWM2  (0x00040000)
#define GPIOB_GPIOPCTL_R_PCM4_T1CCP0  (0x00070000)
#define GPIOB_GPIOPCTL_R_PCM4_CAN0Rx  (0x00080000)

#define GPIOB_GPIOPCTL_PCM4_MASK      (0x0000000F)
#define GPIOB_GPIOPCTL_PCM4_GPIO      (0x00000000)
#define GPIOB_GPIOPCTL_PCM4_SSSI2Clk  (0x00000002)
#define GPIOB_GPIOPCTL_PCM4_M0PWM2    (0x00000004)
#define GPIOB_GPIOPCTL_PCM4_T1CCP0    (0x00000007)
#define GPIOB_GPIOPCTL_PCM4_CAN0Rx    (0x00000008)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM5_MASK    (0x00F00000)
#define GPIOB_GPIOPCTL_R_PCM5_BIT     (20)
#define GPIOB_GPIOPCTL_R_PCM5_GPIO    (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM5_SSI2Fss (0x00200000)
#define GPIOB_GPIOPCTL_R_PCM5_M0PWM3  (0x00400000)
#define GPIOB_GPIOPCTL_R_PCM5_T1CCP1  (0x00700000)
#define GPIOB_GPIOPCTL_R_PCM5_CAN0Tx  (0x00800000)

#define GPIOB_GPIOPCTL_PCM5_MASK      (0x0000000F)
#define GPIOB_GPIOPCTL_PCM5_GPIO      (0x00000000)
#define GPIOB_GPIOPCTL_PCM5_SSI2Fss   (0x00000002)
#define GPIOB_GPIOPCTL_PCM5_M0PWM3    (0x00000004)
#define GPIOB_GPIOPCTL_PCM5_T1CCP1    (0x00000007)
#define GPIOB_GPIOPCTL_PCM5_CAN0Tx    (0x00000008)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM6_MASK    (0x0F000000)
#define GPIOB_GPIOPCTL_R_PCM6_BIT     (24)
#define GPIOB_GPIOPCTL_R_PCM6_GPIO    (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM6_SSI2Rx  (0x02000000)
#define GPIOB_GPIOPCTL_R_PCM6_M0PWM0  (0x04000000)
#define GPIOB_GPIOPCTL_R_PCM6_T0CCP0  (0x07000000)

#define GPIOB_GPIOPCTL_PCM6_MASK      (0x0000000F)
#define GPIOB_GPIOPCTL_PCM6_GPIO      (0x00000000)
#define GPIOB_GPIOPCTL_PCM6_SSI2Rx    (0x00000002)
#define GPIOB_GPIOPCTL_PCM6_M0PWM0    (0x00000004)
#define GPIOB_GPIOPCTL_PCM6_T0CCP0    (0x00000007)
//--------

//--------
#define GPIOB_GPIOPCTL_R_PCM7_MASK    (0xF0000000)
#define GPIOB_GPIOPCTL_R_PCM7_BIT     (28)
#define GPIOB_GPIOPCTL_R_PCM7_GPIO    (0x00000000)
#define GPIOB_GPIOPCTL_R_PCM7_SSI2Tx  (0x20000000)
#define GPIOB_GPIOPCTL_R_PCM7_M0PWM1  (0x40000000)
#define GPIOB_GPIOPCTL_R_PCM7_T0CCP1  (0x70000000)

#define GPIOB_GPIOPCTL_PCM7_MASK      (0x0000000F)
#define GPIOB_GPIOPCTL_PCM7_GPIO      (0x00000000)
#define GPIOB_GPIOPCTL_PCM7_SSI2Tx    (0x00000002)
#define GPIOB_GPIOPCTL_PCM7_M0PWM1    (0x00000004)
#define GPIOB_GPIOPCTL_PCM7_T0CCP1    (0x00000007)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM0_MASK   (0x0000000F)
#define GPIOC_GPIOPCTL_R_PCM0_BIT    (0)
#define GPIOC_GPIOPCTL_R_PCM0_GPIO   (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM0_TCK    (0x00000001)
#define GPIOC_GPIOPCTL_R_PCM0_T4CCP0 (0x00000007)

#define GPIOC_GPIOPCTL_PCM0_MASK     (0x0000000F)
#define GPIOC_GPIOPCTL_PCM0_GPIO     (0x00000000)
#define GPIOC_GPIOPCTL_PCM0_TCK      (0x00000001)
#define GPIOC_GPIOPCTL_PCM0_T4CCP0   (0x00000007)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM1_MASK   (0x000000F0)
#define GPIOC_GPIOPCTL_R_PCM1_BIT    (4)
#define GPIOC_GPIOPCTL_R_PCM1_GPIO   (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM1_TMS    (0x00000010)
#define GPIOC_GPIOPCTL_R_PCM1_T4CCP1 (0x00000070)

#define GPIOC_GPIOPCTL_PCM1_MASK     (0x0000000F)
#define GPIOC_GPIOPCTL_PCM1_GPIO     (0x00000000)
#define GPIOC_GPIOPCTL_PCM1_TMS      (0x00000001)
#define GPIOC_GPIOPCTL_PCM1_T4CCP1   (0x00000007)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM2_MASK    (0x00000F00)
#define GPIOC_GPIOPCTL_R_PCM2_BIT     (8)
#define GPIOC_GPIOPCTL_R_PCM2_GPIO    (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM2_TDI     (0x00000100)
#define GPIOC_GPIOPCTL_R_PCM2_T5CCP0  (0x00000700)

#define GPIOC_GPIOPCTL_PCM2_MASK      (0x0000000F)
#define GPIOC_GPIOPCTL_PCM2_GPIO      (0x00000000)
#define GPIOC_GPIOPCTL_PCM2_TDI       (0x00000001)
#define GPIOC_GPIOPCTL_PCM2_T5CCP0    (0x00000007)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM3_MASK    (0x0000F000)
#define GPIOC_GPIOPCTL_R_PCM3_BIT     (12)
#define GPIOC_GPIOPCTL_R_PCM3_GPIO    (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM3_TDO     (0x00001000)
#define GPIOC_GPIOPCTL_R_PCM3_T5CCP1  (0x00007000)

#define GPIOC_GPIOPCTL_PCM3_MASK      (0x0000000F)
#define GPIOC_GPIOPCTL_PCM3_GPIO      (0x00000000)
#define GPIOC_GPIOPCTL_PCM3_TDO       (0x00000001)
#define GPIOC_GPIOPCTL_PCM3_T5CCP1    (0x00000007)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM4_MASK    (0x000F0000)
#define GPIOC_GPIOPCTL_R_PCM4_BIT     (16)
#define GPIOC_GPIOPCTL_R_PCM4_GPIO    (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM4_U4Rx    (0x00010000)
#define GPIOC_GPIOPCTL_R_PCM4_U1Rx    (0x00020000)
#define GPIOC_GPIOPCTL_R_PCM4_M0PWM6  (0x00040000)
#define GPIOC_GPIOPCTL_R_PCM4_IDX1    (0x00060000)
#define GPIOC_GPIOPCTL_R_PCM4_WT0CCP0 (0x00070000)
#define GPIOC_GPIOPCTL_R_PCM4_U1RTS   (0x00080000)

#define GPIOC_GPIOPCTL_PCM4_MASK      (0x0000000F)
#define GPIOC_GPIOPCTL_PCM4_GPIO      (0x00000000)
#define GPIOC_GPIOPCTL_PCM4_U4Rx      (0x00000001)
#define GPIOC_GPIOPCTL_PCM4_U1Rx      (0x00000002)
#define GPIOC_GPIOPCTL_PCM4_M0PWM6    (0x00000004)
#define GPIOC_GPIOPCTL_PCM4_IDX1      (0x00000006)
#define GPIOC_GPIOPCTL_PCM4_WT0CCP0   (0x00000007)
#define GPIOC_GPIOPCTL_PCM4_U1RTS     (0x00000008)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM5_MASK    (0x00F00000)
#define GPIOC_GPIOPCTL_R_PCM5_BIT     (20)
#define GPIOC_GPIOPCTL_R_PCM5_GPIO    (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM5_U4Tx    (0x00100000)
#define GPIOC_GPIOPCTL_R_PCM5_U1Tx    (0x00200000)
#define GPIOC_GPIOPCTL_R_PCM5_M0PWM7  (0x00400000)
#define GPIOC_GPIOPCTL_R_PCM5_PhA1    (0x00600000)
#define GPIOC_GPIOPCTL_R_PCM5_WT0CCP1 (0x00700000)
#define GPIOC_GPIOPCTL_R_PCM5_U1CTS   (0x00800000)

#define GPIOC_GPIOPCTL_PCM5_MASK      (0x0000000F)
#define GPIOC_GPIOPCTL_PCM5_GPIO      (0x00000000)
#define GPIOC_GPIOPCTL_PCM5_U4Tx      (0x00000001)
#define GPIOC_GPIOPCTL_PCM5_U1Tx      (0x00000002)
#define GPIOC_GPIOPCTL_PCM5_M0PWM7    (0x00000004)
#define GPIOC_GPIOPCTL_PCM5_PhA1      (0x00000006)
#define GPIOC_GPIOPCTL_PCM5_WT0CCP1   (0x00000007)
#define GPIOC_GPIOPCTL_PCM5_U1CTS     (0x00000008)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM6_MASK     (0x0F000000)
#define GPIOC_GPIOPCTL_R_PCM6_BIT      (24)
#define GPIOC_GPIOPCTL_R_PCM6_GPIO     (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM6_U3Rx     (0x01000000)
#define GPIOC_GPIOPCTL_R_PCM6_PhB1     (0x06000000)
#define GPIOC_GPIOPCTL_R_PCM6_WT1CCP0  (0x07000000)
#define GPIOC_GPIOPCTL_R_PCM6_USB0EPEN (0x08000000)

#define GPIOC_GPIOPCTL_PCM6_MASK      (0x0000000F)
#define GPIOC_GPIOPCTL_PCM6_GPIO      (0x00000000)
#define GPIOC_GPIOPCTL_PCM6_U3Rx      (0x00000001)
#define GPIOC_GPIOPCTL_PCM6_PhB1      (0x00000006)
#define GPIOC_GPIOPCTL_PCM6_WT1CCP0   (0x00000007)
#define GPIOC_GPIOPCTL_PCM6_USB0EPEN  (0x00000008)
//--------

//--------
#define GPIOC_GPIOPCTL_R_PCM7_MASK     (0xF000000)
#define GPIOC_GPIOPCTL_R_PCM7_BIT      (28)
#define GPIOC_GPIOPCTL_R_PCM7_GPIO     (0x00000000)
#define GPIOC_GPIOPCTL_R_PCM7_U3Tx     (0x10000000)
#define GPIOC_GPIOPCTL_R_PCM7_WT1CCP1  (0x70000000)
#define GPIOC_GPIOPCTL_R_PCM7_USB0PFLT (0x80000000)

#define GPIOC_GPIOPCTL_PCM7_MASK      (0x0000000F)
#define GPIOC_GPIOPCTL_PCM7_GPIO      (0x00000000)
#define GPIOC_GPIOPCTL_PCM7_U3Tx      (0x00000001)
#define GPIOC_GPIOPCTL_PCM7_WT1CCP1   (0x00000007)
#define GPIOC_GPIOPCTL_PCM7_USB0PFLT  (0x00000008)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM0_MASK    (0x0000000F)
#define GPIOD_GPIOPCTL_R_PCM0_BIT     (0)
#define GPIOD_GPIOPCTL_R_PCM0_GPIO    (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM0_SSI3Clk (0x00000001)
#define GPIOD_GPIOPCTL_R_PCM0_SSI1Clk (0x00000002)
#define GPIOD_GPIOPCTL_R_PCM0_I2C3SCL (0x00000003)
#define GPIOD_GPIOPCTL_R_PCM0_M0PWM6  (0x00000004)
#define GPIOD_GPIOPCTL_R_PCM0_M1PWM0  (0x00000005)
#define GPIOD_GPIOPCTL_R_PCM0_WT2CCP0 (0x00000007)

#define GPIOD_GPIOPCTL_PCM0_MASK     (0x0000000F)
#define GPIOD_GPIOPCTL_PCM0_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_PCM0_SSI3Clk  (0x00000001)
#define GPIOD_GPIOPCTL_PCM0_SSI1Clk  (0x00000002)
#define GPIOD_GPIOPCTL_PCM0_I2C3SCL  (0x00000003)
#define GPIOD_GPIOPCTL_PCM0_M0PWM6   (0x00000004)
#define GPIOD_GPIOPCTL_PCM0_M1PWM0   (0x00000005)
#define GPIOD_GPIOPCTL_PCM0_WT2CCP0  (0x00000007)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM1_MASK    (0x000000F0)
#define GPIOD_GPIOPCTL_R_PCM1_BIT     (4)
#define GPIOD_GPIOPCTL_R_PCM1_GPIO    (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM1_SSI3Fss (0x00000010)
#define GPIOD_GPIOPCTL_R_PCM1_SSI1Fss (0x00000020)
#define GPIOD_GPIOPCTL_R_PCM1_I2C3SDA (0x00000030)
#define GPIOD_GPIOPCTL_R_PCM1_M0PWM7  (0x00000040)
#define GPIOD_GPIOPCTL_R_PCM1_M1PWM1  (0x00000050)
#define GPIOD_GPIOPCTL_R_PCM1_WT2CCP1 (0x00000070)

#define GPIOD_GPIOPCTL_PCM1_MASK     (0x0000000F)
#define GPIOD_GPIOPCTL_PCM1_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_PCM1_SSI3Fss  (0x00000001)
#define GPIOD_GPIOPCTL_PCM1_SSI1Fss  (0x00000002)
#define GPIOD_GPIOPCTL_PCM1_I2C3SDA  (0x00000003)
#define GPIOD_GPIOPCTL_PCM1_M0PWM7   (0x00000004)
#define GPIOD_GPIOPCTL_PCM1_M1PWM1   (0x00000005)
#define GPIOD_GPIOPCTL_PCM1_WT2CCP1  (0x00000007)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM2_MASK     (0x00000F00)
#define GPIOD_GPIOPCTL_R_PCM2_BIT      (8)
#define GPIOD_GPIOPCTL_R_PCM2_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM2_SSI3Rx   (0x00000100)
#define GPIOD_GPIOPCTL_R_PCM2_SSI1Rx   (0x00000200)
#define GPIOD_GPIOPCTL_R_PCM2_M0FAULT0 (0x00000400)
#define GPIOD_GPIOPCTL_R_PCM2_WT3CCP0  (0x00000700)
#define GPIOD_GPIOPCTL_R_PCM2_USB0EPEN (0x00000800)

#define GPIOD_GPIOPCTL_PCM2_MASK     (0x0000000F)
#define GPIOD_GPIOPCTL_PCM2_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_PCM2_SSI3Rx   (0x00000001)
#define GPIOD_GPIOPCTL_PCM2_SSI1Rx   (0x00000002)
#define GPIOD_GPIOPCTL_PCM2_M0FAULT0 (0x00000004)
#define GPIOD_GPIOPCTL_PCM2_WT3CCP0  (0x00000007)
#define GPIOD_GPIOPCTL_PCM2_USB0EPEN (0x00000008)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM3_MASK     (0x0000F000)
#define GPIOD_GPIOPCTL_R_PCM3_BIT      (12)
#define GPIOD_GPIOPCTL_R_PCM3_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM3_SSI3Tx   (0x00001000)
#define GPIOD_GPIOPCTL_R_PCM3_SSI1Tx   (0x00002000)
#define GPIOD_GPIOPCTL_R_PCM3_IDX0     (0x00006000)
#define GPIOD_GPIOPCTL_R_PCM3_WT3CCP1  (0x00007000)
#define GPIOD_GPIOPCTL_R_PCM3_USB0PFLT (0x00008000)

#define GPIOD_GPIOPCTL_PCM3_MASK     (0x0000000F)
#define GPIOD_GPIOPCTL_PCM3_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_PCM3_SSI3Tx   (0x00000001)
#define GPIOD_GPIOPCTL_PCM3_SSI1Tx   (0x00000002)
#define GPIOD_GPIOPCTL_PCM3_IDX0     (0x00000006)
#define GPIOD_GPIOPCTL_PCM3_WT3CCP1  (0x00000007)
#define GPIOD_GPIOPCTL_PCM3_USB0PFLT (0x00000008)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM4_MASK    (0x000F0000)
#define GPIOD_GPIOPCTL_R_PCM4_BIT     (16)
#define GPIOD_GPIOPCTL_R_PCM4_GPIO    (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM4_U6Rx    (0x00010000)
#define GPIOD_GPIOPCTL_R_PCM4_WT4CCP0 (0x00070000)

#define GPIOD_GPIOPCTL_PCM4_MASK      (0x0000000F)
#define GPIOD_GPIOPCTL_PCM4_GPIO      (0x00000000)
#define GPIOD_GPIOPCTL_PCM4_U6Rx      (0x00000001)
#define GPIOD_GPIOPCTL_PCM4_WT4CCP0   (0x00000007)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM5_MASK    (0x00F00000)
#define GPIOD_GPIOPCTL_R_PCM5_BIT     (20)
#define GPIOD_GPIOPCTL_R_PCM5_GPIO    (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM5_U6Tx    (0x00100000)
#define GPIOD_GPIOPCTL_R_PCM5_WT4CCP1 (0x00700000)

#define GPIOD_GPIOPCTL_PCM5_MASK      (0x0000000F)
#define GPIOD_GPIOPCTL_PCM5_GPIO      (0x00000000)
#define GPIOD_GPIOPCTL_PCM5_U6Tx      (0x00000001)
#define GPIOD_GPIOPCTL_PCM5_WT4CCP1   (0x00000007)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM6_MASK     (0x0F000000)
#define GPIOD_GPIOPCTL_R_PCM6_BIT      (24)
#define GPIOD_GPIOPCTL_R_PCM6_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM6_U2Rx     (0x01000000)
#define GPIOD_GPIOPCTL_R_PCM6_M0FAULT0 (0x04000000)
#define GPIOD_GPIOPCTL_R_PCM6_PhA0     (0x06000000)
#define GPIOD_GPIOPCTL_R_PCM6_WT5CCP0  (0x07000000)

#define GPIOD_GPIOPCTL_PCM6_MASK      (0x0000000F)
#define GPIOD_GPIOPCTL_PCM6_GPIO      (0x00000000)
#define GPIOD_GPIOPCTL_PCM6_U2Rx      (0x00000001)
#define GPIOD_GPIOPCTL_PCM6_M0FAULT0  (0x00000004)
#define GPIOD_GPIOPCTL_PCM6_PhA0      (0x00000006)
#define GPIOD_GPIOPCTL_PCM6_WT5CCP0   (0x00000007)
//--------

//--------
#define GPIOD_GPIOPCTL_R_PCM7_MASK     (0xF000000)
#define GPIOD_GPIOPCTL_R_PCM7_BIT      (28)
#define GPIOD_GPIOPCTL_R_PCM7_GPIO     (0x00000000)
#define GPIOD_GPIOPCTL_R_PCM7_U2Tx     (0x10000000)
#define GPIOD_GPIOPCTL_R_PCM7_PhB0     (0x60000000)
#define GPIOD_GPIOPCTL_R_PCM7_WT5CCP1  (0x70000000)
#define GPIOD_GPIOPCTL_R_PCM7_NMI      (0x80000000)

#define GPIOD_GPIOPCTL_PCM7_MASK      (0x0000000F)
#define GPIOD_GPIOPCTL_PCM7_GPIO      (0x00000000)
#define GPIOD_GPIOPCTL_PCM7_U2Tx      (0x00000001)
#define GPIOD_GPIOPCTL_PCM7_PhB0      (0x00000006)
#define GPIOD_GPIOPCTL_PCM7_WT5CCP1   (0x00000007)
#define GPIOD_GPIOPCTL_PCM7_NMI       (0x00000008)
//--------

//--------
#define GPIOE_GPIOPCTL_R_PCM0_MASK    (0x0000000F)
#define GPIOE_GPIOPCTL_R_PCM0_BIT     (0)
#define GPIOE_GPIOPCTL_R_PCM0_GPIO    (0x00000000)
#define GPIOE_GPIOPCTL_R_PCM0_U7Rx    (0x00000001)

#define GPIOE_GPIOPCTL_PCM0_MASK     (0x0000000F)
#define GPIOE_GPIOPCTL_PCM0_GPIO     (0x00000000)
#define GPIOE_GPIOPCTL_PCM0_U7Rx     (0x00000001)
//--------

//--------
#define GPIOE_GPIOPCTL_R_PCM1_MASK    (0x000000F0)
#define GPIOE_GPIOPCTL_R_PCM1_BIT     (4)
#define GPIOE_GPIOPCTL_R_PCM1_GPIO    (0x00000000)
#define GPIOE_GPIOPCTL_R_PCM1_U7Tx    (0x00000010)

#define GPIOE_GPIOPCTL_PCM1_MASK     (0x0000000F)
#define GPIOE_GPIOPCTL_PCM1_GPIO     (0x00000000)
#define GPIOE_GPIOPCTL_PCM1_U7Tx     (0x00000001)
//--------

//--------
#define GPIOE_GPIOPCTL_R_PCM2_MASK     (0x00000F00)
#define GPIOE_GPIOPCTL_R_PCM2_BIT      (8)
#define GPIOE_GPIOPCTL_R_PCM2_GPIO     (0x00000000)

#define GPIOE_GPIOPCTL_PCM2_MASK     (0x0000000F)
#define GPIOE_GPIOPCTL_PCM2_GPIO     (0x00000000)
//--------

//--------
#define GPIOE_GPIOPCTL_R_PCM3_MASK     (0x0000F000)
#define GPIOE_GPIOPCTL_R_PCM3_BIT      (12)
#define GPIOE_GPIOPCTL_R_PCM3_GPIO     (0x00000000)

#define GPIOE_GPIOPCTL_PCM3_MASK     (0x0000000F)
#define GPIOE_GPIOPCTL_PCM3_GPIO     (0x00000000)
//--------

//--------
#define GPIOE_GPIOPCTL_R_PCM4_MASK    (0x000F0000)
#define GPIOE_GPIOPCTL_R_PCM4_BIT     (16)
#define GPIOE_GPIOPCTL_R_PCM4_GPIO    (0x00000000)
#define GPIOE_GPIOPCTL_R_PCM4_U5Rx    (0x00010000)
#define GPIOE_GPIOPCTL_R_PCM4_I2C2SCL (0x00030000)
#define GPIOE_GPIOPCTL_R_PCM4_M0PWM4  (0x00040000)
#define GPIOE_GPIOPCTL_R_PCM4_M1PWM2  (0x00050000)
#define GPIOE_GPIOPCTL_R_PCM4_CAN0Rx  (0x00080000)

#define GPIOE_GPIOPCTL_PCM4_MASK      (0x0000000F)
#define GPIOE_GPIOPCTL_PCM4_GPIO      (0x00000000)
#define GPIOE_GPIOPCTL_PCM4_U5Rx      (0x00000001)
#define GPIOE_GPIOPCTL_PCM4_I2C2SCL   (0x00000003)
#define GPIOE_GPIOPCTL_PCM4_M0PWM4    (0x00000004)
#define GPIOE_GPIOPCTL_PCM4_M1PWM2    (0x00000005)
#define GPIOE_GPIOPCTL_PCM4_CAN0Rx    (0x00000008)
//--------

//--------
#define GPIOE_GPIOPCTL_R_PCM5_MASK    (0x00F00000)
#define GPIOE_GPIOPCTL_R_PCM5_BIT     (20)
#define GPIOE_GPIOPCTL_R_PCM5_GPIO    (0x00000000)
#define GPIOE_GPIOPCTL_R_PCM5_U5Tx    (0x00100000)
#define GPIOE_GPIOPCTL_R_PCM5_I2C2SDA (0x00300000)
#define GPIOE_GPIOPCTL_R_PCM5_M0PWM5  (0x00400000)
#define GPIOE_GPIOPCTL_R_PCM5_M1PWM3  (0x00500000)
#define GPIOE_GPIOPCTL_R_PCM5_CAN0Tx  (0x00800000)

#define GPIOE_GPIOPCTL_PCM5_MASK      (0x0000000F)
#define GPIOE_GPIOPCTL_PCM5_GPIO      (0x00000000)
#define GPIOE_GPIOPCTL_PCM5_U5Tx      (0x00000001)
#define GPIOE_GPIOPCTL_PCM5_I2C2SDA   (0x00000003)
#define GPIOE_GPIOPCTL_PCM5_M0PWM5    (0x00000004)
#define GPIOE_GPIOPCTL_PCM5_M1PWM3    (0x00000005)
#define GPIOE_GPIOPCTL_PCM5_CAN0Tx    (0x00000008)
//--------

//--------
#define GPIOF_GPIOPCTL_R_PCM0_MASK    (0x0000000F)
#define GPIOF_GPIOPCTL_R_PCM0_BIT     (0)
#define GPIOF_GPIOPCTL_R_PCM0_GPIO    (0x00000000)
#define GPIOF_GPIOPCTL_R_PCM0_U1RTS   (0x00000001)
#define GPIOF_GPIOPCTL_R_PCM0_SSI1Rx  (0x00000002)
#define GPIOF_GPIOPCTL_R_PCM0_CAN0Rx  (0x00000003)
#define GPIOF_GPIOPCTL_R_PCM0_M1PWM4  (0x00000005)
#define GPIOF_GPIOPCTL_R_PCM0_PhA0    (0x00000006)
#define GPIOF_GPIOPCTL_R_PCM0_T0CCP0  (0x00000007)
#define GPIOF_GPIOPCTL_R_PCM0_NMI     (0x00000008)
#define GPIOF_GPIOPCTL_R_PCM0_C0o     (0x00000009)

#define GPIOF_GPIOPCTL_PCM0_MASK     (0x0000000F)
#define GPIOF_GPIOPCTL_PCM0_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_PCM0_U1RTS    (0x00000001)
#define GPIOF_GPIOPCTL_PCM0_SSI1Rx   (0x00000002)
#define GPIOF_GPIOPCTL_PCM0_CAN0Rx   (0x00000003)
#define GPIOF_GPIOPCTL_PCM0_M1PWM4   (0x00000005)
#define GPIOF_GPIOPCTL_PCM0_PhA0     (0x00000006)
#define GPIOF_GPIOPCTL_PCM0_T0CCP0   (0x00000007)
#define GPIOF_GPIOPCTL_PCM0_NMI      (0x00000008)
#define GPIOF_GPIOPCTL_PCM0_C0o      (0x00000009)
//--------

//--------
#define GPIOF_GPIOPCTL_R_PCM1_MASK    (0x000000F0)
#define GPIOF_GPIOPCTL_R_PCM1_BIT     (4)
#define GPIOF_GPIOPCTL_R_PCM1_GPIO    (0x00000000)
#define GPIOF_GPIOPCTL_R_PCM1_U1CTS   (0x00000010)
#define GPIOF_GPIOPCTL_R_PCM1_SSI1Tx  (0x00000020)
#define GPIOF_GPIOPCTL_R_PCM1_M1PWM5  (0x00000050)
#define GPIOF_GPIOPCTL_R_PCM1_PhB0    (0x00000060)
#define GPIOF_GPIOPCTL_R_PCM1_T0CCP1  (0x00000070)
#define GPIOF_GPIOPCTL_R_PCM1_C1o     (0x00000090)
#define GPIOF_GPIOPCTL_R_PCM1_TRD1    (0x000000E0)

#define GPIOF_GPIOPCTL_PCM1_MASK     (0x0000000F)
#define GPIOF_GPIOPCTL_PCM1_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_PCM1_U1CTS    (0x00000001)
#define GPIOF_GPIOPCTL_PCM1_SSI1Tx   (0x00000002)
#define GPIOF_GPIOPCTL_PCM1_M1PWM5   (0x00000005)
#define GPIOF_GPIOPCTL_PCM1_PhB0     (0x00000006)
#define GPIOF_GPIOPCTL_PCM1_T0CCP1   (0x00000007)
#define GPIOF_GPIOPCTL_PCM1_C1o      (0x00000009)
#define GPIOF_GPIOPCTL_PCM1_TRD1     (0x0000000E)
//--------

//--------
#define GPIOF_GPIOPCTL_R_PCM2_MASK     (0x00000F00)
#define GPIOF_GPIOPCTL_R_PCM2_BIT      (8)
#define GPIOF_GPIOPCTL_R_PCM2_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_R_PCM2_SSI1Clk  (0x00000200)
#define GPIOF_GPIOPCTL_R_PCM2_M0FAULT0 (0x00000400)
#define GPIOF_GPIOPCTL_R_PCM2_M1PWM6   (0x00000500)
#define GPIOF_GPIOPCTL_R_PCM2_T1CCP0   (0x00000700)
#define GPIOF_GPIOPCTL_R_PCM2_TRD0     (0x00000E00)

#define GPIOF_GPIOPCTL_PCM2_MASK     (0x0000000F)
#define GPIOF_GPIOPCTL_PCM2_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_PCM2_SSI1Clk  (0x00000002)
#define GPIOF_GPIOPCTL_PCM2_M0FAULT0 (0x00000004)
#define GPIOF_GPIOPCTL_PCM2_M1PWM6   (0x00000005)
#define GPIOF_GPIOPCTL_PCM2_T1CCP0   (0x00000007)
#define GPIOF_GPIOPCTL_PCM2_TRD0     (0x0000000E)
//--------

//--------
#define GPIOF_GPIOPCTL_R_PCM3_MASK     (0x0000F000)
#define GPIOF_GPIOPCTL_R_PCM3_BIT      (12)
#define GPIOF_GPIOPCTL_R_PCM3_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_R_PCM3_SSI1Fss  (0x00002000)
#define GPIOF_GPIOPCTL_R_PCM3_CAN0Tx   (0x00003000)
#define GPIOF_GPIOPCTL_R_PCM3_M1PWM7   (0x00005000)
#define GPIOF_GPIOPCTL_R_PCM3_T1CCP1   (0x00007000)
#define GPIOF_GPIOPCTL_R_PCM3_TRCLK    (0x0000E000)

#define GPIOF_GPIOPCTL_PCM3_MASK     (0x0000000F)
#define GPIOF_GPIOPCTL_PCM3_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_PCM3_SSI1Fss  (0x00000002)
#define GPIOF_GPIOPCTL_PCM3_CAN0Tx   (0x00000003)
#define GPIOF_GPIOPCTL_PCM3_M1PWM7   (0x00000005)
#define GPIOF_GPIOPCTL_PCM3_T1CCP1   (0x00000007)
#define GPIOF_GPIOPCTL_PCM3_TRCLK    (0x0000000E)
//--------

//--------
#define GPIOF_GPIOPCTL_R_PCM4_MASK     (0x000F0000)
#define GPIOF_GPIOPCTL_R_PCM4_BIT      (16)
#define GPIOF_GPIOPCTL_R_PCM4_GPIO     (0x00000000)
#define GPIOF_GPIOPCTL_R_PCM4_M1FAULT0 (0x00050000)
#define GPIOF_GPIOPCTL_R_PCM4_IDX0     (0x00060000)
#define GPIOF_GPIOPCTL_R_PCM4_T2CCP0   (0x00070000)
#define GPIOF_GPIOPCTL_R_PCM4_USB0EPEN (0x00080000)

#define GPIOF_GPIOPCTL_PCM4_MASK      (0x0000000F)
#define GPIOF_GPIOPCTL_PCM4_GPIO      (0x00000000)
#define GPIOF_GPIOPCTL_PCM4_M1FAULT0  (0x00000005)
#define GPIOF_GPIOPCTL_PCM4_IDX0      (0x00000006)
#define GPIOF_GPIOPCTL_PCM4_T2CCP0    (0x00000007)
#define GPIOF_GPIOPCTL_PCM4_USB0EPEN  (0x00000008)
//--------



/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOA AHB ADCEN*/
#define GPIOA_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOA_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOA_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOA APB ADCEN*/
#define GPIOA_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOA_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOA_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOB AHB ADCEN*/
#define GPIOB_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOB_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOB_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOB APB ADCEN*/
#define GPIOB_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOB_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOB_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOC AHB ADCEN*/
#define GPIOC_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOC_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOC_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOC APB ADCEN*/
#define GPIOC_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOC_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOC_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOD AHB ADCEN*/
#define GPIOD_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOD_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOD_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOD APB ADCEN*/
#define GPIOD_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOD_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOD_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOE AHB ADCEN*/
#define GPIOE_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOE_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOE_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOE APB ADCEN*/
#define GPIOE_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOE_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOE_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOF AHB ADCEN*/
#define GPIOF_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOF_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOF_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOF APB ADCEN*/
#define GPIOF_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32))))
#define GPIOF_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOF_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))


//--------
#define GPIO_GPIOADCCTL_R_ADCEN_MASK             (0x000000FF)
#define GPIO_GPIOADCCTL_R_ADCEN_BIT              (0)
#define GPIO_GPIOADCCTL_R_ADCEN_DIS              (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN_EN               (0x000000FF)

#define GPIO_GPIOADCCTL_ADCEN_MASK               (0x000000FF)
#define GPIO_GPIOADCCTL_ADCEN_DIS                (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN0_MASK            (0x00000001)
#define GPIO_GPIOADCCTL_R_ADCEN0_BIT             (0)
#define GPIO_GPIOADCCTL_R_ADCEN0_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN0_EN              (0x00000001)

#define GPIO_GPIOADCCTL_ADCEN0_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN0_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN1_MASK            (0x00000002)
#define GPIO_GPIOADCCTL_R_ADCEN1_BIT             (1)
#define GPIO_GPIOADCCTL_R_ADCEN1_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN1_EN              (0x00000002)

#define GPIO_GPIOADCCTL_ADCEN1_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN1_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN2_MASK            (0x00000004)
#define GPIO_GPIOADCCTL_R_ADCEN2_BIT             (2)
#define GPIO_GPIOADCCTL_R_ADCEN2_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN2_EN              (0x00000004)

#define GPIO_GPIOADCCTL_ADCEN2_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN2_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN3_MASK            (0x00000008)
#define GPIO_GPIOADCCTL_R_ADCEN3_BIT             (3)
#define GPIO_GPIOADCCTL_R_ADCEN3_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN3_EN              (0x00000008)

#define GPIO_GPIOADCCTL_ADCEN3_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN3_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN4_MASK            (0x00000010)
#define GPIO_GPIOADCCTL_R_ADCEN4_BIT             (4)
#define GPIO_GPIOADCCTL_R_ADCEN4_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN4_EN              (0x00000010)

#define GPIO_GPIOADCCTL_ADCEN4_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN4_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN5_MASK            (0x00000020)
#define GPIO_GPIOADCCTL_R_ADCEN5_BIT             (5)
#define GPIO_GPIOADCCTL_R_ADCEN5_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN5_EN              (0x00000020)

#define GPIO_GPIOADCCTL_ADCEN5_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN5_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIOADCCTL_R_ADCEN6_MASK            (0x00000040)
#define GPIO_GPIOADCCTL_R_ADCEN6_BIT             (6)
#define GPIO_GPIOADCCTL_R_ADCEN6_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN6_EN              (0x00000040)

#define GPIO_GPIOADCCTL_ADCEN6_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN6_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN6_EN                (0x00000001)
//--------

//--------

#define GPIO_GPIOADCCTL_R_ADCEN7_MASK            (0x00000080)
#define GPIO_GPIOADCCTL_R_ADCEN7_BIT             (7)
#define GPIO_GPIOADCCTL_R_ADCEN7_DIS             (0x00000000)
#define GPIO_GPIOADCCTL_R_ADCEN7_EN              (0x00000080)

#define GPIO_GPIOADCCTL_ADCEN7_MASK              (0x00000001)
#define GPIO_GPIOADCCTL_ADCEN7_DIS               (0x00000000)
#define GPIO_GPIOADCCTL_ADCEN7_EN                (0x00000001)
//--------


/* GPIOA AHB ADCEN BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOA APB ADCEN BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOB AHB ADCEN BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOB APB ADCEN BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOC AHB ADCEN BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOC APB ADCEN BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOD AHB ADCEN BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOD APB ADCEN BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOE AHB ADCEN BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOE APB ADCEN BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOF AHB ADCEN BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))

/* GPIOF APB ADCEN BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4))))



/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOA AHB DMAEN*/
#define GPIOA_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOA_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOA_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOA APB DMAEN*/
#define GPIOA_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOA_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOA_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOB AHB DMAEN*/
#define GPIOB_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOB_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOB_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOB APB DMAEN*/
#define GPIOB_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOB_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOB_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOC AHB DMAEN*/
#define GPIOC_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOC_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOC_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOC APB DMAEN*/
#define GPIOC_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOC_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOC_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOD AHB DMAEN*/
#define GPIOD_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOD_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOD_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOD APB DMAEN*/
#define GPIOD_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOD_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOD_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOE AHB DMAEN*/
#define GPIOE_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOE_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOE_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOE APB DMAEN*/
#define GPIOE_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOE_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOE_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOF AHB DMAEN*/
#define GPIOF_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOF_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOF_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOF APB DMAEN*/
#define GPIOF_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32))))
#define GPIOF_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOF_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODMACTL_OFFSET)))


//--------
#define GPIO_GPIODMACTL_R_DMAEN_MASK             (0x000000FF)
#define GPIO_GPIODMACTL_R_DMAEN_BIT              (0)
#define GPIO_GPIODMACTL_R_DMAEN_DIS              (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN_EN               (0x000000FF)

#define GPIO_GPIODMACTL_DMAEN_MASK               (0x000000FF)
#define GPIO_GPIODMACTL_DMAEN_DIS                (0x00000000)
#define GPIO_GPIODMACTL_DMAEN_EN                 (0x000000FF)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN0_MASK            (0x00000001)
#define GPIO_GPIODMACTL_R_DMAEN0_BIT             (0)
#define GPIO_GPIODMACTL_R_DMAEN0_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN0_EN              (0x00000001)

#define GPIO_GPIODMACTL_DMAEN0_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN0_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN0_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN1_MASK            (0x00000002)
#define GPIO_GPIODMACTL_R_DMAEN1_BIT             (1)
#define GPIO_GPIODMACTL_R_DMAEN1_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN1_EN              (0x00000002)

#define GPIO_GPIODMACTL_DMAEN1_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN1_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN1_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN2_MASK            (0x00000004)
#define GPIO_GPIODMACTL_R_DMAEN2_BIT             (2)
#define GPIO_GPIODMACTL_R_DMAEN2_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN2_EN              (0x00000004)

#define GPIO_GPIODMACTL_DMAEN2_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN2_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN2_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN3_MASK            (0x00000008)
#define GPIO_GPIODMACTL_R_DMAEN3_BIT             (3)
#define GPIO_GPIODMACTL_R_DMAEN3_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN3_EN              (0x00000008)

#define GPIO_GPIODMACTL_DMAEN3_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN3_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN3_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN4_MASK            (0x00000010)
#define GPIO_GPIODMACTL_R_DMAEN4_BIT             (4)
#define GPIO_GPIODMACTL_R_DMAEN4_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN4_EN              (0x00000010)

#define GPIO_GPIODMACTL_DMAEN4_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN4_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN4_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN5_MASK            (0x00000020)
#define GPIO_GPIODMACTL_R_DMAEN5_BIT             (5)
#define GPIO_GPIODMACTL_R_DMAEN5_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN5_EN              (0x00000020)

#define GPIO_GPIODMACTL_DMAEN5_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN5_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN5_EN                (0x00000001)
//--------

//--------
#define GPIO_GPIODMACTL_R_DMAEN6_MASK            (0x00000040)
#define GPIO_GPIODMACTL_R_DMAEN6_BIT             (6)
#define GPIO_GPIODMACTL_R_DMAEN6_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN6_EN              (0x00000040)

#define GPIO_GPIODMACTL_DMAEN6_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN6_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN6_EN                (0x00000001)
//--------

//--------

#define GPIO_GPIODMACTL_R_DMAEN7_MASK            (0x00000080)
#define GPIO_GPIODMACTL_R_DMAEN7_BIT             (7)
#define GPIO_GPIODMACTL_R_DMAEN7_DIS             (0x00000000)
#define GPIO_GPIODMACTL_R_DMAEN7_EN              (0x00000080)

#define GPIO_GPIODMACTL_DMAEN7_MASK              (0x00000001)
#define GPIO_GPIODMACTL_DMAEN7_DIS               (0x00000000)
#define GPIO_GPIODMACTL_DMAEN7_EN                (0x00000001)
//--------


/* GPIOA AHB DMAEN BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOA APB DMAEN BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOB AHB DMAEN BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOB APB DMAEN BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOC AHB DMAEN BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOC APB DMAEN BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOD AHB DMAEN BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOD APB DMAEN BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOE AHB DMAEN BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOE APB DMAEN BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOF AHB DMAEN BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))

/* GPIOF APB DMAEN BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4))))



/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOA AHB PID4*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOA APB PID4*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOA_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOB AHB PID4*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOB APB PID4*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOB_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOC AHB PID4*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOC APB PID4*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOC_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOD AHB PID4*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOD APB PID4*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOD_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOE AHB PID4*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOE APB PID4*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOE_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOF AHB PID4*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOF APB PID4*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOF_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))


//--------
#define GPIO_GPIOPeriphID4_R_PID4_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID4_R_PID4_BIT      (0)
#define GPIO_GPIOPeriphID4_R_PID4_DEFAULT  (0x00000000)

#define GPIO_GPIOPeriphID4_PID4_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID4_PID4_DEFAULT    (0x00000000)
//--------



/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOA AHB PID5*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOA APB PID5*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOA_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOB AHB PID5*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOB APB PID5*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOB_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOC AHB PID5*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOC APB PID5*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOC_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOD AHB PID5*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOD APB PID5*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOD_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOE AHB PID5*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOE APB PID5*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOE_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOF AHB PID5*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOF APB PID5*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOF_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))


//--------
#define GPIO_GPIOPeriphID5_R_PID5_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID5_R_PID5_BIT      (0)
#define GPIO_GPIOPeriphID5_R_PID5_DEFAULT  (0x00000000)

#define GPIO_GPIOPeriphID5_PID5_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID5_PID5_DEFAULT    (0x00000000)
//--------


/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOA AHB PID6*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOA APB PID6*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOA_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOB AHB PID6*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOB APB PID6*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOB_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOC AHB PID6*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOC APB PID6*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOC_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOD AHB PID6*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOD APB PID6*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOD_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOE AHB PID6*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOE APB PID6*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOE_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOF AHB PID6*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOF APB PID6*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOF_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))


//--------
#define GPIO_GPIOPeriphID6_R_PID6_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID6_R_PID6_BIT      (0)
#define GPIO_GPIOPeriphID6_R_PID6_DEFAULT  (0x00000000)

#define GPIO_GPIOPeriphID6_PID6_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID6_PID6_DEFAULT    (0x00000000)
//--------



/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOA AHB PID7*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOA APB PID7*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOA_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOB AHB PID7*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOB APB PID7*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOB_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOC AHB PID7*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOC APB PID7*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOC_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOD AHB PID7*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOD APB PID7*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOD_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOE AHB PID7*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOE APB PID7*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOE_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOF AHB PID7*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOF APB PID7*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOF_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))


//--------
#define GPIO_GPIOPeriphID7_R_PID7_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID7_R_PID7_BIT      (0)
#define GPIO_GPIOPeriphID7_R_PID7_DEFAULT  (0x00000000)

#define GPIO_GPIOPeriphID7_PID7_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID7_PID7_DEFAULT    (0x00000000)
//--------

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOA AHB PID0*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOA APB PID0*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOA_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOB AHB PID0*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOB APB PID0*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOB_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOC AHB PID0*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOC APB PID0*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOC_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOD AHB PID0*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOD APB PID0*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOD_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOE AHB PID0*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOE APB PID0*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOE_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOF AHB PID0*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOF APB PID0*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOF_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))


//--------
#define GPIO_GPIOPeriphID0_R_PID0_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID0_R_PID0_BIT      (0)
#define GPIO_GPIOPeriphID0_R_PID0_DEFAULT  (0x00000061)

#define GPIO_GPIOPeriphID0_PID0_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID0_PID0_DEFAULT    (0x00000061)
//--------


/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOA AHB PID1*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOA APB PID1*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOA_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOB AHB PID1*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOB APB PID1*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOB_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOC AHB PID1*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOC APB PID1*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOC_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOD AHB PID1*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOD APB PID1*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOD_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOE AHB PID1*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOE APB PID1*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOE_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOF AHB PID1*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOF APB PID1*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOF_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))


//--------
#define GPIO_GPIOPeriphID1_R_PID1_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID1_R_PID1_BIT      (0)
#define GPIO_GPIOPeriphID1_R_PID1_DEFAULT  (0x00000000)

#define GPIO_GPIOPeriphID1_PID1_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID1_PID1_DEFAULT    (0x00000000)
//--------


/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOA AHB PID2*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOA APB PID2*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOA_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOB AHB PID2*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOB APB PID2*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOB_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOC AHB PID2*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOC APB PID2*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOC_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOD AHB PID2*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOD APB PID2*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOD_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOE AHB PID2*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOE APB PID2*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOE_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOF AHB PID2*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOF APB PID2*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOF_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))


//--------
#define GPIO_GPIOPeriphID2_R_PID2_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID2_R_PID2_BIT      (0)
#define GPIO_GPIOPeriphID2_R_PID2_DEFAULT  (0x00000018)

#define GPIO_GPIOPeriphID2_PID2_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID2_PID2_DEFAULT    (0x00000018)
//--------



/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOA AHB PID3*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOA_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOA APB PID3*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOA_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOA_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOB AHB PID3*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOB_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOB APB PID3*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOB_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOB_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOC AHB PID3*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOC_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOC APB PID3*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOC_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOC_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOD AHB PID3*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOD_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOD APB PID3*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOD_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOD_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOE AHB PID3*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOE_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOE APB PID3*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOE_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOE_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOF AHB PID3*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOF_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOF APB PID3*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32))))
#define GPIOF_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOF_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))


//--------
#define GPIO_GPIOPeriphID3_R_PID3_MASK     (0x000000FF)
#define GPIO_GPIOPeriphID3_R_PID3_BIT      (0)
#define GPIO_GPIOPeriphID3_R_PID3_DEFAULT  (0x00000001)

#define GPIO_GPIOPeriphID3_PID3_MASK       (0x000000FF)
#define GPIO_GPIOPeriphID3_PID3_DEFAULT    (0x00000001)
//--------


/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOA AHB CID0*/
#define GPIOA_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOA_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOA_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOA APB CID0*/
#define GPIOA_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOA_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOA_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOB AHB CID0*/
#define GPIOB_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOB_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOB_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOB APB CID0*/
#define GPIOB_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOB_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOB_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOC AHB CID0*/
#define GPIOC_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOC_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOC_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOC APB CID0*/
#define GPIOC_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOC_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOC_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOD AHB CID0*/
#define GPIOD_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOD_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOD_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOD APB CID0*/
#define GPIOD_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOD_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOD_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOE AHB CID0*/
#define GPIOE_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOE_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOE_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOE APB CID0*/
#define GPIOE_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOE_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOE_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOF AHB CID0*/
#define GPIOF_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOF_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOF_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOF APB CID0*/
#define GPIOF_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32))))
#define GPIOF_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOF_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID0_OFFSET)))


//--------
#define GPIO_GPIOPCellID0_R_CID0_MASK     (0x000000FF)
#define GPIO_GPIOPCellID0_R_CID0_BIT      (0)
#define GPIO_GPIOPCellID0_R_CID0_DEFAULT  (0x0000000D)

#define GPIO_GPIOPCellID0_CID0_MASK       (0x000000FF)
#define GPIO_GPIOPCellID0_CID0_DEFAULT    (0x0000000D)
//--------


/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOA AHB CID1*/
#define GPIOA_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOA_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOA_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOA APB CID1*/
#define GPIOA_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOA_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOA_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOB AHB CID1*/
#define GPIOB_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOB_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOB_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOB APB CID1*/
#define GPIOB_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOB_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOB_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOC AHB CID1*/
#define GPIOC_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOC_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOC_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOC APB CID1*/
#define GPIOC_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOC_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOC_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOD AHB CID1*/
#define GPIOD_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOD_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOD_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOD APB CID1*/
#define GPIOD_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOD_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOD_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOE AHB CID1*/
#define GPIOE_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOE_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOE_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOE APB CID1*/
#define GPIOE_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOE_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOE_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOF AHB CID1*/
#define GPIOF_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOF_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOF_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOF APB CID1*/
#define GPIOF_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32))))
#define GPIOF_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOF_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID1_OFFSET)))


//--------
#define GPIO_GPIOPCellID1_R_CID1_MASK     (0x000000FF)
#define GPIO_GPIOPCellID1_R_CID1_BIT      (0)
#define GPIO_GPIOPCellID1_R_CID1_DEFAULT  (0x000000F0)

#define GPIO_GPIOPCellID1_CID1_MASK       (0x000000FF)
#define GPIO_GPIOPCellID1_CID1_DEFAULT    (0x000000F0)
//--------



/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOA AHB CID2*/
#define GPIOA_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOA_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOA_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOA APB CID2*/
#define GPIOA_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOA_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOA_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOB AHB CID2*/
#define GPIOB_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOB_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOB_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOB APB CID2*/
#define GPIOB_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOB_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOB_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOC AHB CID2*/
#define GPIOC_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOC_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOC_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOC APB CID2*/
#define GPIOC_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOC_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOC_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOD AHB CID2*/
#define GPIOD_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOD_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOD_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOD APB CID2*/
#define GPIOD_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOD_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOD_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOE AHB CID2*/
#define GPIOE_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOE_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOE_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOE APB CID2*/
#define GPIOE_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOE_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOE_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOF AHB CID2*/
#define GPIOF_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOF_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOF_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOF APB CID2*/
#define GPIOF_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32))))
#define GPIOF_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOF_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID2_OFFSET)))


//--------
#define GPIO_GPIOPCellID2_R_CID2_MASK     (0x000000FF)
#define GPIO_GPIOPCellID2_R_CID2_BIT      (0)
#define GPIO_GPIOPCellID2_R_CID2_DEFAULT  (0x00000005)

#define GPIO_GPIOPCellID2_CID2_MASK       (0x000000FF)
#define GPIO_GPIOPCellID2_CID2_DEFAULT    (0x00000005)
//--------



/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOA AHB CID3*/
#define GPIOA_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOA_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOA_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOA APB CID3*/
#define GPIOA_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOA_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOA_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOB AHB CID3*/
#define GPIOB_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOB_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOB_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOB APB CID3*/
#define GPIOB_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOB_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOB_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOC AHB CID3*/
#define GPIOC_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOC_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOC_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOC APB CID3*/
#define GPIOC_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOC_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOC_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOD AHB CID3*/
#define GPIOD_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOD_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOD_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOD APB CID3*/
#define GPIOD_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOD_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOD_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOE AHB CID3*/
#define GPIOE_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOE_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOE_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOE APB CID3*/
#define GPIOE_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOE_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOE_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOF AHB CID3*/
#define GPIOF_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOF_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOF_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOF APB CID3*/
#define GPIOF_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32))))
#define GPIOF_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOF_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID3_OFFSET)))


//--------
#define GPIO_GPIOPCellID3_R_CID3_MASK     (0x000000FF)
#define GPIO_GPIOPCellID3_R_CID3_BIT      (0)
#define GPIO_GPIOPCellID3_R_CID3_DEFAULT  (0x000000B1)

#define GPIO_GPIOPCellID3_CID3_MASK       (0x000000FF)
#define GPIO_GPIOPCellID3_CID3_DEFAULT    (0x000000B1)
//--------

typedef enum
{
    GPIO_enOK=0,
    GPIO_enERROR=1,
    GPIO_enSTATUS_UNDEF=0xFF,
}GPIO_nSTATUS;

typedef enum
{
    GPIO_enINT_NOOCCUR=0,
    GPIO_enINT_OCCUR=1,
    GPIO_enINT_STATUS_UNDEF=0xFF,
}GPIO_nINT_STATUS;

typedef enum
{
    GPIO_enNOREADY=0,
    GPIO_enREADY=1,
}GPIO_nREADY;

typedef enum
{
    GPIO_enAPB=0,
    GPIO_enAHB=1,
}GPIO_nBUS;
typedef enum
{
    GPIO_enPORTA=0,
    GPIO_enPORTB=1,
    GPIO_enPORTC=2,
    GPIO_enPORTD=3,
    GPIO_enPORTE=4,
    GPIO_enPORTF=5,
    GPIO_enMAX=5,
}GPIO_nPORT;
typedef enum
{
    GPIO_enPIN0=0x1,
    GPIO_enPIN1=0x2,
    GPIO_enPIN2=0x4,
    GPIO_enPIN3=0x8,
    GPIO_enPIN4=0x10,
    GPIO_enPIN5=0x20,
    GPIO_enPIN6=0x40,
    GPIO_enPIN7=0x80,
    GPIO_enALL=0xFF,
}GPIO_nPIN;

typedef enum
{
    GPIO_enDIR_INPUT=0,
    GPIO_enDIR_OUTPUT=1,
    GPIO_enDIR_UNDEF=0xFF,
}GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE=0,
    GPIO_enSENSE_LEVEL=1,
    GPIO_enSENSE_UNDEF=0xFF,
}GPIO_nSENSE;

typedef enum
{
    GPIO_enEDGE_FALLING=0,
    GPIO_enEDGE_RISING=1,
    GPIO_enEDGE_BOTH=2,
    GPIO_enEDGE_UNDEF=0xFF,
}GPIO_nEDGE;

typedef enum
{
    GPIO_enDRIVE_2mA=0,
    GPIO_enDRIVE_4mA=1,
    GPIO_enDRIVE_8mA=2,
    GPIO_enDRIVE_8mA_SLR=(1<<8)|2,
    GPIO_enDRIVE_UNDEF=0xFF,
}GPIO_nDRIVE;

typedef enum
{
    GPIO_enLEVEL_LOW=0,
    GPIO_enLEVEL_HIGH=1,
    GPIO_enLEVEL_UNDEF=0xFF,
}GPIO_nLEVEL;

typedef enum
{
    GPIO_enOUTMODE_PP=0,
    GPIO_enOUTMODE_OD=1,
    GPIO_enOUTMODE_UNDEF=0xFF,
}GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE=0,
    GPIO_enRESMODE_PULLUP=1,
    GPIO_enRESMODE_PULLDOWN=2,
    GPIO_enRESMODE_UNDEF=0xFF,
}GPIO_nRESMODE;


//PORT PIN VALUE
typedef enum
{
    //GPIOA
    GPIO_enGPIOA0   =(0<<16)|((0*4)<<8)|(0),
    GPIO_enU0Rx     =(0<<16)|((0*4)<<8)|(1),
    GPIO_enCAN1Rx   =(0<<16)|((0*4)<<8)|(8),

    GPIO_enGPIOA1   =(0<<16)|((1*4)<<8)|(0),
    GPIO_enU0Tx     =(0<<16)|((1*4)<<8)|(1),
    GPIO_enCAN1Tx   =(0<<16)|((1*4)<<8)|(8),

    GPIO_enGPIOA2   =(0<<16)|((2*4)<<8)|(0),
    GPIO_enSSI0Clk  =(0<<16)|((2*4)<<8)|(2),

    GPIO_enGPIOA3   =(0<<16)|((3*4)<<8)|(0),
    GPIO_enSSI0Fss  =(0<<16)|((3*4)<<8)|(2),

    GPIO_enGPIOA4   =(0<<16)|((4*4)<<8)|(0),
    GPIO_enSSI0Rx   =(0<<16)|((4*4)<<8)|(2),

    GPIO_enGPIOA5   =(0<<16)|((5*4)<<8)|(0),
    GPIO_enSSI0Tx   =(0<<16)|((5*4)<<8)|(2),

    GPIO_enGPIOA6   =(0<<16)|((6*4)<<8)|(0),
    GPIO_enI2C1SCL  =(0<<16)|((6*4)<<8)|(3),
    GPIO_enM1PWM2   =(0<<16)|((6*4)<<8)|(5),

    GPIO_enGPIOA7   =(0<<16)|((7*4)<<8)|(0),
    GPIO_enI2C1SDA  =(0<<16)|((7*4)<<8)|(3),
    GPIO_enM1PWM3   =(0<<16)|((7*4)<<8)|(5),

    //GPIOB
    GPIO_enGPIOB0   =(1<<16)|((0*4)<<8)|(0),
    GPIO_enU1Rx     =(1<<16)|((0*4)<<8)|(1),
    GPIO_enT2CCP0   =(1<<16)|((0*4)<<8)|(7),

    GPIO_enGPIOB1   =(1<<16)|((1*4)<<8)|(0),
    GPIO_enU1Tx     =(1<<16)|((1*4)<<8)|(1),
    GPIO_enT2CCP1   =(1<<16)|((1*4)<<8)|(7),

    GPIO_enGPIOB2   =(1<<16)|((2*4)<<8)|(0),
    GPIO_enI2C0SCL  =(1<<16)|((2*4)<<8)|(3),
    GPIO_enT3CCP0   =(1<<16)|((2*4)<<8)|(7),

    GPIO_enGPIOB3   =(1<<16)|((3*4)<<8)|(0),
    GPIO_enI2C0SDA  =(1<<16)|((3*4)<<8)|(3),
    GPIO_enT3CCP1   =(1<<16)|((3*4)<<8)|(7),

    GPIO_enGPIOB4   =(1<<16)|((4*4)<<8)|(0),
    GPIO_enSSI2Clk  =(1<<16)|((4*4)<<8)|(2),
    GPIO_enM0PWM2   =(1<<16)|((4*4)<<8)|(4),
    GPIO_enT1CCP0   =(1<<16)|((4*4)<<8)|(7),
    GPIO_enCAN0Rx   =(1<<16)|((4*4)<<8)|(8),

    GPIO_enGPIOB5   =(1<<16)|((5*4)<<8)|(0),
    GPIO_enSSI2Fss  =(1<<16)|((5*4)<<8)|(2),
    GPIO_enM0PWM3   =(1<<16)|((5*4)<<8)|(4),
    GPIO_enT1CCP1   =(1<<16)|((5*4)<<8)|(7),
    GPIO_enCAN0Tx   =(1<<16)|((5*4)<<8)|(8),

    GPIO_enGPIOB6   =(1<<16)|((6*4)<<8)|(0),
    GPIO_enSSI2Rx   =(1<<16)|((6*4)<<8)|(2),
    GPIO_enM0PWM0   =(1<<16)|((6*4)<<8)|(4),
    GPIO_enT0CCP0   =(1<<16)|((6*4)<<8)|(7),

    GPIO_enGPIOB7   =(1<<16)|((7*4)<<8)|(0),
    GPIO_enSSI2Tx   =(1<<16)|((7*4)<<8)|(2),
    GPIO_enM0PWM1   =(1<<16)|((7*4)<<8)|(4),
    GPIO_enT0CCP1   =(1<<16)|((7*4)<<8)|(7),

    //GPIOC
    GPIO_enGPIOC0    =(2<<16)|((0*4)<<8)|(0),
    GPIO_enTCK       =(2<<16)|((0*4)<<8)|(1),
    GPIO_enT4CCP0    =(2<<16)|((0*4)<<8)|(7),

    GPIO_enGPIOC1    =(2<<16)|((1*4)<<8)|(0),
    GPIO_enTMS       =(2<<16)|((1*4)<<8)|(1),
    GPIO_enT4CCP1    =(2<<16)|((1*4)<<8)|(7),

    GPIO_enGPIOC2    =(2<<16)|((2*4)<<8)|(0),
    GPIO_enTDI       =(2<<16)|((2*4)<<8)|(1),
    GPIO_enT5CCP0    =(2<<16)|((2*4)<<8)|(7),

    GPIO_enGPIOC3    =(2<<16)|((3*4)<<8)|(0),
    GPIO_enTDO       =(2<<16)|((3*4)<<8)|(1),
    GPIO_enT5CCP1    =(2<<16)|((3*4)<<8)|(7),

    GPIO_enGPIOC4    =(2<<16)|((4*4)<<8)|(0),
    GPIO_enU4Rx      =(2<<16)|((4*4)<<8)|(1),
    GPIO_enU1Rx_C4   =(2<<16)|((4*4)<<8)|(2),
    GPIO_enM0PWM6    =(2<<16)|((4*4)<<8)|(4),
    GPIO_enIDX1      =(2<<16)|((4*4)<<8)|(6),
    GPIO_enWT0CCP0   =(2<<16)|((4*4)<<8)|(7),
    GPIO_enU1RTS     =(2<<16)|((4*4)<<8)|(8),

    GPIO_enGPIOC5    =(2<<16)|((5*4)<<8)|(0),
    GPIO_enU4Tx      =(2<<16)|((5*4)<<8)|(1),
    GPIO_enU1Tx_C4   =(2<<16)|((5*4)<<8)|(2),
    GPIO_enM0PWM7    =(2<<16)|((5*4)<<8)|(4),
    GPIO_enPhA1      =(2<<16)|((5*4)<<8)|(6),
    GPIO_enWT0CCP1   =(2<<16)|((5*4)<<8)|(7),
    GPIO_enU1CTS     =(2<<16)|((5*4)<<8)|(8),

    GPIO_enGPIOC6    =(2<<16)|((6*4)<<8)|(0),
    GPIO_enU3Rx      =(2<<16)|((6*4)<<8)|(1),
    GPIO_enPhB1      =(2<<16)|((6*4)<<8)|(6),
    GPIO_enWT1CCP0   =(2<<16)|((6*4)<<8)|(7),
    GPIO_enUSB0EPEN  =(2<<16)|((6*4)<<8)|(8),

    GPIO_enGPIOC7    =(2<<16)|((7*4)<<8)|(0),
    GPIO_enU3Tx      =(2<<16)|((7*4)<<8)|(1),
    GPIO_enWT1CCP1   =(2<<16)|((7*4)<<8)|(7),
    GPIO_enUSB0PFLT  =(2<<16)|((7*4)<<8)|(8),

    //GPIOD
    GPIO_enGPIOD0    =(3<<16)|((0*4)<<8)|(0),
    GPIO_enSSI3Clk   =(3<<16)|((0*4)<<8)|(1),
    GPIO_enSSI1Clk   =(3<<16)|((0*4)<<8)|(2),
    GPIO_enI2C3SCL   =(3<<16)|((0*4)<<8)|(3),
    GPIO_enM0PWM6_D0 =(3<<16)|((0*4)<<8)|(4),
    GPIO_enM1PWM0    =(3<<16)|((0*4)<<8)|(5),
    GPIO_enWT2CCP0   =(3<<16)|((0*4)<<8)|(7),

    GPIO_enGPIOD1    =(3<<16)|((1*4)<<8)|(0),
    GPIO_enSSI3Fss   =(3<<16)|((1*4)<<8)|(1),
    GPIO_enSSI1Fss   =(3<<16)|((1*4)<<8)|(2),
    GPIO_enI2C3SDA   =(3<<16)|((1*4)<<8)|(3),
    GPIO_enM0PWM7_D1 =(3<<16)|((1*4)<<8)|(4),
    GPIO_enM1PWM1    =(3<<16)|((1*4)<<8)|(5),
    GPIO_enWT2CCP1   =(3<<16)|((1*4)<<8)|(7),

    GPIO_enGPIOD2    =(3<<16)|((2*4)<<8)|(0),
    GPIO_enSSI3Rx    =(3<<16)|((2*4)<<8)|(1),
    GPIO_enSSI1Rx    =(3<<16)|((2*4)<<8)|(2),
    GPIO_enM0FAULT0  =(3<<16)|((2*4)<<8)|(4),
    GPIO_enWT3CCP0   =(3<<16)|((2*4)<<8)|(7),
    GPIO_enUSB0EPEN_D2=(3<<16)|((2*4)<<8)|(8),

    GPIO_enGPIOD3    =(3<<16)|((3*4)<<8)|(0),
    GPIO_enSSI3Tx    =(3<<16)|((3*4)<<8)|(1),
    GPIO_enSSI1Tx    =(3<<16)|((3*4)<<8)|(2),
    GPIO_enIDX0      =(3<<16)|((3*4)<<8)|(6),
    GPIO_enWT3CCP1   =(3<<16)|((3*4)<<8)|(7),
    GPIO_enUSB0PFLT_D3=(3<<16)|((3*4)<<8)|(8),

    GPIO_enGPIOD4    =(3<<16)|((4*4)<<8)|(0),
    GPIO_enU6Rx      =(3<<16)|((4*4)<<8)|(1),
    GPIO_enWT4CCP0   =(3<<16)|((4*4)<<8)|(7),

    GPIO_enGPIOD5    =(3<<16)|((5*4)<<8)|(0),
    GPIO_enU6Tx      =(3<<16)|((5*4)<<8)|(1),
    GPIO_enWT4CCP1   =(3<<16)|((5*4)<<8)|(7),

    GPIO_enGPIOD6    =(3<<16)|((6*4)<<8)|(0),
    GPIO_enU2Rx      =(3<<16)|((6*4)<<8)|(1),
    GPIO_enM0FAULT0_D6=(3<<16)|((6*4)<<8)|(4),
    GPIO_enPhA0      =(3<<16)|((6*4)<<8)|(6),
    GPIO_enWT5CCP0   =(3<<16)|((6*4)<<8)|(7),

    GPIO_enGPIOD7    =(3<<16)|((7*4)<<8)|(0),
    GPIO_enU2Tx      =(3<<16)|((7*4)<<8)|(1),
    GPIO_enPhB0      =(3<<16)|((7*4)<<8)|(6),
    GPIO_enWT5CCP1   =(3<<16)|((7*4)<<8)|(7),
    GPIO_enNMI       =(3<<16)|((7*4)<<8)|(8),

    //GPIOE
    GPIO_enGPIOE0    =(4<<16)|((0*4)<<8)|(0),
    GPIO_enU7Rx      =(4<<16)|((0*4)<<8)|(1),

    GPIO_enGPIOE1    =(4<<16)|((1*4)<<8)|(0),
    GPIO_enU7Tx      =(4<<16)|((1*4)<<8)|(1),

    GPIO_enGPIOE2    =(4<<16)|((2*4)<<8)|(0),
    GPIO_enGPIOE3    =(4<<16)|((3*4)<<8)|(0),

    GPIO_enGPIOE4    =(4<<16)|((4*4)<<8)|(0),
    GPIO_enU5Rx      =(4<<16)|((4*4)<<8)|(1),
    GPIO_enI2C2SCL   =(4<<16)|((4*4)<<8)|(3),
    GPIO_enM0PWM4    =(4<<16)|((4*4)<<8)|(4),
    GPIO_enM1PWM2_E4 =(4<<16)|((4*4)<<8)|(5),
    GPIO_enCAN0Rx_E4 =(4<<16)|((4*4)<<8)|(8),

    GPIO_enGPIOE5    =(4<<16)|((5*4)<<8)|(0),
    GPIO_enU5Tx      =(4<<16)|((5*4)<<8)|(1),
    GPIO_enI2C2SDA   =(4<<16)|((5*4)<<8)|(3),
    GPIO_enM0PWM5    =(4<<16)|((5*4)<<8)|(4),
    GPIO_enM1PWM3_E5 =(4<<16)|((5*4)<<8)|(5),
    GPIO_enCAN0Tx_E5 =(4<<16)|((5*4)<<8)|(8),

    GPIO_enGPIOE6    =(4<<16)|((6*4)<<8)|(0),
    GPIO_enGPIOE7    =(4<<16)|((7*4)<<8)|(0),

    //GPIOF
    GPIO_enGPIOF0    =(5<<16)|((0*4)<<8)|(0),
    GPIO_enU1RTS_F0  =(5<<16)|((0*4)<<8)|(1),
    GPIO_enSSI1Rx_F0 =(5<<16)|((0*4)<<8)|(2),
    GPIO_enCAN0Rx_F0 =(5<<16)|((0*4)<<8)|(3),
    GPIO_enM1PWM4    =(5<<16)|((0*4)<<8)|(5),
    GPIO_enPhA0_F0   =(5<<16)|((0*4)<<8)|(6),
    GPIO_enT0CCP0_F0 =(5<<16)|((0*4)<<8)|(7),
    GPIO_enNMI_F0    =(5<<16)|((0*4)<<8)|(8),
    GPIO_enC0o       =(5<<16)|((0*4)<<8)|(9),

    GPIO_enGPIOF1    =(5<<16)|((1*4)<<8)|(0),
    GPIO_enU1CTS_F1  =(5<<16)|((1*4)<<8)|(1),
    GPIO_enSSI1Tx_F1 =(5<<16)|((1*4)<<8)|(2),
    GPIO_enM1PWM5    =(5<<16)|((1*4)<<8)|(5),
    GPIO_enPhB0_F1   =(5<<16)|((1*4)<<8)|(6),
    GPIO_enT0CCP1_F1 =(5<<16)|((1*4)<<8)|(7),
    GPIO_enC1o       =(5<<16)|((1*4)<<8)|(9),
    GPIO_enTRD1      =(5<<16)|((1*4)<<8)|(14),

    GPIO_enGPIOF2    =(5<<16)|((2*4)<<8)|(0),
    GPIO_enSSI1Clk_F2=(5<<16)|((2*4)<<8)|(2),
    GPIO_enM0FAULT0_F2=(5<<16)|((2*4)<<8)|(4),
    GPIO_enM1PWM6    =(5<<16)|((2*4)<<8)|(5),
    GPIO_enT1CCP0_F2 =(5<<16)|((2*4)<<8)|(7),
    GPIO_enTRD0      =(5<<16)|((2*4)<<8)|(14),

    GPIO_enGPIOF3    =(5<<16)|((3*4)<<8)|(0),
    GPIO_enSSI1Fss_F3=(5<<16)|((3*4)<<8)|(2),
    GPIO_enCAN0Tx_F3 =(5<<16)|((3*4)<<8)|(3),
    GPIO_enM1PWM7    =(5<<16)|((3*4)<<8)|(5),
    GPIO_enT1CCP1_F3 =(5<<16)|((3*4)<<8)|(7),
    GPIO_enTRCLK     =(5<<16)|((3*4)<<8)|(14),

    GPIO_enGPIOF4    =(5<<16)|((4*4)<<8)|(0),
    GPIO_enM1FAULT0  =(5<<16)|((4*4)<<8)|(5),
    GPIO_enIDX0_F4   =(5<<16)|((4*4)<<8)|(6),
    GPIO_enT2CCP0_F4 =(5<<16)|((4*4)<<8)|(7),
    GPIO_enUSB0EPEN_F4=(5<<16)|((4*4)<<8)|(8),

    GPIO_enGPIOF5    =(5<<16)|((5*4)<<8)|(0),
    GPIO_enGPIOF6    =(5<<16)|((6*4)<<8)|(0),
    GPIO_enGPIOF7    =(5<<16)|((7*4)<<8)|(0),
}GPIO_nDIGITAL_FUNCTION;

//PORT PIN
typedef enum
{
    GPIO_enUSB0ID=(1<<8)|(0),
    GPIO_enUSB0VBUS=(1<<8)|(1),
    GPIO_enAIN10=(1<<8)|(4),
    GPIO_enAIN11=(1<<8)|(5),

    GPIO_enC1M=(2<<8)|(4),
    GPIO_enC1P=(2<<8)|(5),
    GPIO_enC0P=(2<<8)|(6),
    GPIO_enC0M=(2<<8)|(7),

    GPIO_enAIN7=(3<<8)|(0),
    GPIO_enAIN6=(3<<8)|(1),
    GPIO_enAIN5=(3<<8)|(2),
    GPIO_enAIN4=(3<<8)|(3),
    GPIO_enUSB0DM=(3<<8)|(4),
    GPIO_enUSB0DP=(3<<8)|(5),

    GPIO_enAIN3=(4<<8)|(0),
    GPIO_enAIN2=(4<<8)|(1),
    GPIO_enAIN1=(4<<8)|(2),
    GPIO_enAIN0=(4<<8)|(3),
    GPIO_enAIN9=(4<<8)|(4),
    GPIO_enAIN8=(4<<8)|(5),
}GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enPRI0=0,
    GPIO_enPRI1=1,
    GPIO_enPRI2=2,
    GPIO_enPRI3=3,
    GPIO_enPRI4=4,
    GPIO_enPRI5=5,
    GPIO_enPRI6=6,
    GPIO_enPRI7=7,
    GPIO_enDEFAULT=0xFF,
}GPIO_nPRIORITY;


typedef enum
{
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL                = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLUP         = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_2MA_PUSHPULL_PULLDOWN       = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN               = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLUP        = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL                = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLUP         = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_4MA_PUSHPULL_PULLDOWN       = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN               = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLUP        = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_4MA_OPENDRAIN_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL                = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLUP         = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_PUSHPULL_PULLDOWN       = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN               = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLUP        = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_OPENDRAIN_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL            = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLUP     = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_PUSHPULL_PULLDOWN   = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN           = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLUP    = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_INPUT_8MA_SLR_OPENDRAIN_PULLDOWN  = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_INPUT<<8)  |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL               = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLUP        = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN              = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLUP       = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_2MA_OPENDRAIN_PULLDOWN     = ((uint32_t)GPIO_enDRIVE_2mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL               = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLUP        = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_4MA_PUSHPULL_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN              = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLUP       = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_4MA_OPENDRAIN_PULLDOWN     = ((uint32_t)GPIO_enDRIVE_4mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL               = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLUP        = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_PUSHPULL_PULLDOWN      = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN              = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLUP       = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_OPENDRAIN_PULLDOWN     = ((uint32_t)GPIO_enDRIVE_8mA<<16)      |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL           = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLUP    = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_PUSHPULL_PULLDOWN  = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_PP<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN          = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_INACTIVE<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLUP   = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLUP<<0),
    GPIO_enCONFIG_OUTPUT_8MA_SLR_OPENDRAIN_PULLDOWN = ((uint32_t)GPIO_enDRIVE_8mA_SLR<<16)  |((uint32_t)GPIO_enDIR_OUTPUT<<8) |((uint32_t)GPIO_enOUTMODE_OD<<4)|((uint32_t)GPIO_enRESMODE_PULLDOWN<<0),
    GPIO_enCONFIG_UNDEF = 0xFFFFFFFF,
}GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING= ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_FALLING<<0),
    GPIO_enINT_CONFIG_EDGE_RISING=  ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_RISING<<0),
    GPIO_enINT_CONFIG_EDGE_BOTH=    ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_BOTH<<0),
    GPIO_enINT_CONFIG_LEVEL_LOW=    ((uint32_t)GPIO_enSENSE_LEVEL<<8)  |((uint32_t)GPIO_enLEVEL_LOW<<0),
    GPIO_enINT_CONFIG_LEVEL_HIGH=   ((uint32_t)GPIO_enSENSE_LEVEL<<8)  |((uint32_t)GPIO_enLEVEL_HIGH<<0),
    GPIO_enINT_CONFIG_UNDEF=0xFFFF,
}GPIO_nINT_CONFIG;


typedef struct
{
    GPIO_nDRIVE enDrive;
    GPIO_nDIR enDirection;
    GPIO_nOUTMODE enOutputMode;
    GPIO_nRESMODE enResistorMode;
}GPIO_CONFIG_Typedef;

extern GPIO_TypeDef* GPIO_APB_BLOCK[6];
extern GPIO_TypeDef* GPIO_AHB_BLOCK[6];


void GPIO__vInit(void);
void GPIO__vRegisterISR(void (*Isr) (void),GPIO_nPORT enPort,GPIO_nPIN enPin);
void GPIO__vRegisterMODULEISR(void (*Isr) (void),GPIO_nPORT enPort);


void GPIO__vEnInterruptMODULE(GPIO_nPORT enPort,GPIO_nPRIORITY enPriority);
void GPIO__vDisInterruptMODULE(GPIO_nPORT enPort);

void GPIO__vSetReady(GPIO_nPORT enPort);
void GPIO__vClearReady(GPIO_nPORT enPort);
GPIO_nREADY GPIO__enIsReady(GPIO_nPORT enPort);
GPIO_nBUS GPIO__enGetBus(GPIO_nPORT enPort);

void GPIO__vSetDirection(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDIR enDir);
GPIO_nDIR GPIO__enGetDirection(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_AHB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_AHB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_AHB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_AHB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_APB__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_APB__u32GetData(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO_APB__vSetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data);
uint32_t GPIO_APB__u32GetDataOpt(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nSENSE enSense);
GPIO_nSENSE GPIO__enGetIntSense(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nEDGE enEdge);
GPIO_nEDGE GPIO__enGetIntEdge(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nLEVEL enLevel);
GPIO_nLEVEL GPIO__enGetIntLevel(GPIO_nPORT enPort, GPIO_nPIN enPin);


void GPIO__vEnInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vEnInterruptConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nINT_CONFIG enIntConfig);

void GPIO__vDisInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vClearInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);
GPIO_nINT_STATUS GPIO__enStatusInterrupt(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vEnAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisAltFunction(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_nDRIVE enDrive);
GPIO_nDRIVE GPIO__enGetDrive(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nOUTMODE enMode);
GPIO_nOUTMODE GPIO__enGetOutputMode(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetResistorMode(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nRESMODE enMode);
GPIO_nRESMODE GPIO__enGetResistorMode(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vEnDigital(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisDigital(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vUnlock(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vLock(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vEnAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisAnalog(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vSetDigitalFunction(GPIO_nDIGITAL_FUNCTION enFunction);

void GPIO__vCreateConfigStructPointer(GPIO_nCONFIG enConfig,GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psCreateConfigStruct(GPIO_nCONFIG enConfig);

void GPIO__vDeleteConfigStruct(GPIO_CONFIG_Typedef* psConfig);

GPIO_nSTATUS GPIO__enSetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_nCONFIG enConfig);
GPIO_nSTATUS GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPIN enPin,GPIO_CONFIG_Typedef* psConfig);

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin);


GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction,GPIO_nCONFIG enConfig);
GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction,GPIO_CONFIG_Typedef* psConfig);

GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);
void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction);

void GPIO__vEnADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vEnDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);



#endif /* GPIO_H_ */
