/*
 * GPIO.h
 *
 *  Created on: Dec 27, 2017
 *      Author: Lalo_Alvarez
 */

#ifndef GPIO_H_
#define GPIO_H_


#include <stdint.h>
#include <xDriver_MCU/Driver_Header/NVIC.h>
#include <xDriver_MCU/Driver_Header/SCB.h>
#include <xDriver_MCU/Driver_Header/SYSCTL.h>

#define GPIO_APB_BASE               ((uint32_t)0x40004000u)
#define GPIOA_APB_BASE              ((uint32_t)0x40004000u)
#define GPIOB_APB_BASE              ((uint32_t)0x40005000u)
#define GPIOC_APB_BASE              ((uint32_t)0x40006000u)
#define GPIOD_APB_BASE              ((uint32_t)0x40007000u)
#define GPIOE_APB_BASE              ((uint32_t)0x40024000u)
#define GPIOF_APB_BASE              ((uint32_t)0x40025000u)

#define GPIO_APB_OFFSET             ((uint32_t)0x00004000u)
#define GPIOA_APB_OFFSET            ((uint32_t)0x00004000u)
#define GPIOB_APB_OFFSET            ((uint32_t)0x00005000u)
#define GPIOC_APB_OFFSET            ((uint32_t)0x00006000u)
#define GPIOD_APB_OFFSET            ((uint32_t)0x00007000u)
#define GPIOE_APB_OFFSET            ((uint32_t)0x00024000u)
#define GPIOF_APB_OFFSET            ((uint32_t)0x00025000u)

#define GPIO_AHB_BASE               ((uint32_t)0x40058000u)
#define GPIOA_AHB_BASE              ((uint32_t)0x40058000u)
#define GPIOB_AHB_BASE              ((uint32_t)0x40059000u)
#define GPIOC_AHB_BASE              ((uint32_t)0x4005A000u)
#define GPIOD_AHB_BASE              ((uint32_t)0x4005B000u)
#define GPIOE_AHB_BASE              ((uint32_t)0x4005C000u)
#define GPIOF_AHB_BASE              ((uint32_t)0x4005D000u)

#define GPIO_AHB_OFFSET             ((uint32_t)0x00058000u)
#define GPIOA_AHB_OFFSET            ((uint32_t)0x00058000u)
#define GPIOB_AHB_OFFSET            ((uint32_t)0x00059000u)
#define GPIOC_AHB_OFFSET            ((uint32_t)0x0005A000u)
#define GPIOD_AHB_OFFSET            ((uint32_t)0x0005B000u)
#define GPIOE_AHB_OFFSET            ((uint32_t)0x0005C000u)
#define GPIOF_AHB_OFFSET            ((uint32_t)0x0005D000u)

#define GPIO_BITBANDING_BASE        ((uint32_t)0x42000000u)

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
#define GPIO_APB_BITBANDING     (((GPIO_APB_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_APB_OFFSET*32u))))
#define GPIO_AHB_BITBANDING     (((GPIO_AHB_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_AHB_OFFSET*32u))))

#define GPIO_APB_AUX            (((GPIO_APB_AUX_TypeDef*)(GPIO_APB_BASE)))
#define GPIO_AHB_AUX            (((GPIO_AHB_AUX_TypeDef*)(GPIO_AHB_BASE)))
#define GPIO_APB_BITBANDING_AUX (((GPIO_APB_BITBANDING_AUX_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_APB_OFFSET*32u))))
#define GPIO_AHB_BITBANDING_AUX (((GPIO_AHB_BITBANDING_AUX_TypeDef*)(GPIO_BITBANDING_BASE+(GPIO_AHB_OFFSET*32u))))

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

#define GPIOA_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_APB_OFFSET*32u))))
#define GPIOB_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOB_APB_OFFSET*32u))))
#define GPIOC_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOC_APB_OFFSET*32u))))
#define GPIOD_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOD_APB_OFFSET*32u))))
#define GPIOE_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOE_APB_OFFSET*32u))))
#define GPIOF_APB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOF_APB_OFFSET*32u))))

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

#define GPIOA_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOA_AHB_OFFSET*32u))))
#define GPIOB_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOB_AHB_OFFSET*32u))))
#define GPIOC_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOC_AHB_OFFSET*32u))))
#define GPIOD_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOD_AHB_OFFSET*32u))))
#define GPIOE_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOE_AHB_OFFSET*32u))))
#define GPIOF_AHB_BITBANDING    (((GPIO_BITBANDING_TypeDef*)(GPIO_BITBANDING_BASE+(GPIOF_AHB_OFFSET*32u))))


#define GPIO_GPIODATA_MASK_OFFSET        ((uint32_t)0x000u)
#define GPIO_GPIODATA0_MASK_OFFSET       ((uint32_t)0x004u)
#define GPIO_GPIODATA1_MASK_OFFSET       ((uint32_t)0x008u)
#define GPIO_GPIODATA2_MASK_OFFSET       ((uint32_t)0x010u)
#define GPIO_GPIODATA3_MASK_OFFSET       ((uint32_t)0x020u)
#define GPIO_GPIODATA4_MASK_OFFSET       ((uint32_t)0x040u)
#define GPIO_GPIODATA5_MASK_OFFSET       ((uint32_t)0x080u)
#define GPIO_GPIODATA6_MASK_OFFSET       ((uint32_t)0x100u)
#define GPIO_GPIODATA7_MASK_OFFSET       ((uint32_t)0x200u)
#define GPIO_GPIODATA_OFFSET             ((uint32_t)0x3FCu)
#define GPIO_GPIODIR_OFFSET              ((uint32_t)0x400u)
#define GPIO_GPIOIS_OFFSET               ((uint32_t)0x404u)
#define GPIO_GPIOIBE_OFFSET              ((uint32_t)0x408u)
#define GPIO_GPIOIEV_OFFSET              ((uint32_t)0x40Cu)
#define GPIO_GPIOIM_OFFSET               ((uint32_t)0x410u)
#define GPIO_GPIORIS_OFFSET              ((uint32_t)0x414u)
#define GPIO_GPIOMIS_OFFSET              ((uint32_t)0x418u)
#define GPIO_GPIOICR_OFFSET              ((uint32_t)0x41Cu)
#define GPIO_GPIOAFSEL_OFFSET            ((uint32_t)0x420u)
#define GPIO_GPIODR2R_OFFSET             ((uint32_t)0x500u)
#define GPIO_GPIODR4R_OFFSET             ((uint32_t)0x504u)
#define GPIO_GPIODR8R_OFFSET             ((uint32_t)0x508u)
#define GPIO_GPIOODR_OFFSET              ((uint32_t)0x50Cu)
#define GPIO_GPIOPUR_OFFSET              ((uint32_t)0x510u)
#define GPIO_GPIOPDR_OFFSET              ((uint32_t)0x514u)
#define GPIO_GPIOSLR_OFFSET              ((uint32_t)0x518u)
#define GPIO_GPIODEN_OFFSET              ((uint32_t)0x51Cu)
#define GPIO_GPIOLOCK_OFFSET             ((uint32_t)0x520u)
#define GPIO_GPIOCR_OFFSET               ((uint32_t)0x524u)
#define GPIO_GPIOAMSEL_OFFSET            ((uint32_t)0x528u)
#define GPIO_GPIOPCTL_OFFSET             ((uint32_t)0x52Cu)
#define GPIO_GPIOADCCTL_OFFSET           ((uint32_t)0x530u)
#define GPIO_GPIODMACTL_OFFSET           ((uint32_t)0x534u)
#define GPIO_GPIOPeriphID4_OFFSET        ((uint32_t)0xFD0u)
#define GPIO_GPIOPeriphID5_OFFSET        ((uint32_t)0xFD4u)
#define GPIO_GPIOPeriphID6_OFFSET        ((uint32_t)0xFD8u)
#define GPIO_GPIOPeriphID7_OFFSET        ((uint32_t)0xFDCu)
#define GPIO_GPIOPeriphID0_OFFSET        ((uint32_t)0xFE0u)
#define GPIO_GPIOPeriphID1_OFFSET        ((uint32_t)0xFE4u)
#define GPIO_GPIOPeriphID2_OFFSET        ((uint32_t)0xFE8u)
#define GPIO_GPIOPeriphID3_OFFSET        ((uint32_t)0xFECu)
#define GPIO_GPIOPCellID0_OFFSET         ((uint32_t)0xFF0u)
#define GPIO_GPIOPCellID1_OFFSET         ((uint32_t)0xFF4u)
#define GPIO_GPIOPCellID2_OFFSET         ((uint32_t)0xFF8u)
#define GPIO_GPIOPCellID3_OFFSET         ((uint32_t)0xFFCu)

#define PIN0   ((uint32_t)0x000000001u)
#define PIN1   ((uint32_t)0x000000002u)
#define PIN2   ((uint32_t)0x000000004u)
#define PIN3   ((uint32_t)0x000000008u)
#define PIN4   ((uint32_t)0x000000010u)
#define PIN5   ((uint32_t)0x000000020u)
#define PIN6   ((uint32_t)0x000000040u)
#define PIN7   ((uint32_t)0x000000080u)
#define PIN8   ((uint32_t)0x000000100u)
#define PIN9   ((uint32_t)0x000000200u)
#define PIN10  ((uint32_t)0x000000400u)
#define PIN11  ((uint32_t)0x000000800u)
#define PIN12  ((uint32_t)0x000001000u)
#define PIN13  ((uint32_t)0x000002000u)
#define PIN14  ((uint32_t)0x000004000u)
#define PIN15  ((uint32_t)0x000008000u)
#define PIN16  ((uint32_t)0x000100000u)
#define PIN17  ((uint32_t)0x000200000u)
#define PIN18  ((uint32_t)0x000400000u)
#define PIN19  ((uint32_t)0x000800000u)
#define PIN20  ((uint32_t)0x001000000u)
#define PIN21  ((uint32_t)0x002000000u)
#define PIN22  ((uint32_t)0x004000000u)
#define PIN23  ((uint32_t)0x008000000u)
#define PIN24  ((uint32_t)0x010000000u)
#define PIN25  ((uint32_t)0x020000000u)
#define PIN26  ((uint32_t)0x040000000u)
#define PIN27  ((uint32_t)0x080000000u)
#define PIN28  ((uint32_t)0x100000000u)
#define PIN29  ((uint32_t)0x200000000u)
#define PIN30  ((uint32_t)0x400000000u)
#define PIN31  ((uint32_t)0x800000000u)


#define BIT0   ((uint32_t)0x000000001u)
#define BIT1   ((uint32_t)0x000000002u)
#define BIT2   ((uint32_t)0x000000004u)
#define BIT3   ((uint32_t)0x000000008u)
#define BIT4   ((uint32_t)0x000000010u)
#define BIT5   ((uint32_t)0x000000020u)
#define BIT6   ((uint32_t)0x000000040u)
#define BIT7   ((uint32_t)0x000000080u)
#define BIT8   ((uint32_t)0x000000100u)
#define BIT9   ((uint32_t)0x000000200u)
#define BIT10  ((uint32_t)0x000000400u)
#define BIT11  ((uint32_t)0x000000800u)
#define BIT12  ((uint32_t)0x000001000u)
#define BIT13  ((uint32_t)0x000002000u)
#define BIT14  ((uint32_t)0x000004000u)
#define BIT15  ((uint32_t)0x000008000u)
#define BIT16  ((uint32_t)0x000100000u)
#define BIT17  ((uint32_t)0x000200000u)
#define BIT18  ((uint32_t)0x000400000u)
#define BIT19  ((uint32_t)0x000800000u)
#define BIT20  ((uint32_t)0x001000000u)
#define BIT21  ((uint32_t)0x002000000u)
#define BIT22  ((uint32_t)0x004000000u)
#define BIT23  ((uint32_t)0x008000000u)
#define BIT24  ((uint32_t)0x010000000u)
#define BIT25  ((uint32_t)0x020000000u)
#define BIT26  ((uint32_t)0x040000000u)
#define BIT27  ((uint32_t)0x080000000u)
#define BIT28  ((uint32_t)0x100000000u)
#define BIT29  ((uint32_t)0x200000000u)
#define BIT30  ((uint32_t)0x400000000u)
#define BIT31  ((uint32_t)0x800000000u)

/******************************************************************************************
************************************ 1 GPIODATA *********************************************
******************************************************************************************/

/* GPIOA AHB DATA*/
#define GPIOA_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOA_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOA_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOA_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOA_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOA_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOA_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOA_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOA_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOA APB DATA*/
#define GPIOA_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOA_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOA_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOA_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOA_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOA_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOA_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOA_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOA_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOB AHB DATA*/
#define GPIOB_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOB_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOB_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOB_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOB_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOB_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOB_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOB_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOB_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOB APB DATA*/
#define GPIOB_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOB_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOB_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOB_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOB_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOB_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOB_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOB_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOB_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOC AHB DATA*/
#define GPIOC_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOC_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOC_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOC_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOC_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOC_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOC_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOC_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOC_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOC APB DATA*/
#define GPIOC_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOC_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOC_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOC_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOC_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOC_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOC_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOC_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOC_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOD AHB DATA*/
#define GPIOD_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOD_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOD_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOD_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOD_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOD_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOD_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOD_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOD_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOD APB DATA*/
#define GPIOD_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOD_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOD_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOD_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOD_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOD_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOD_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOD_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOD_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOE AHB DATA*/
#define GPIOE_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOE_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOE_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOE_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOE_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOE_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOE_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOE_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOE_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOE APB DATA*/
#define GPIOE_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOE_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOE_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOE_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOE_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOE_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOE_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOE_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOE_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOF AHB DATA*/
#define GPIOF_AHB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOF_AHB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOF_AHB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOF_AHB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOF_AHB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOF_AHB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOF_AHB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOF_AHB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOF_AHB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODATA_OFFSET)))

/* GPIOF APB DATA*/
#define GPIOF_APB_BITBANDING_GPIODATA_MASK  (((BITBANDING_GPIODATA_MASK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_MASK_OFFSET)*32u))))
#define GPIOF_APB_GPIODATA_MASK             (((GPIODATA_MASK_TypeDef*)(GPIOF_APB_BASE+GPIO_GPIODATA_MASK_OFFSET)))
#define GPIOF_APB_GPIODATA0_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA0_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA1_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA1_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA2_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA2_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA3_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA3_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA4_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA4_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA5_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA5_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA6_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA6_MASK_OFFSET )))
#define GPIOF_APB_GPIODATA7_MASK_R          (*((volatile uint32_t *)(GPIOF_APB_BASE+GPIO_GPIODATA7_MASK_OFFSET )))

#define GPIOF_APB_BITBANDING_GPIODATA       (((BITBANDING_GPIODATA_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u))))
#define GPIOF_APB_GPIODATA                  (((GPIODATA_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODATA_OFFSET)))
#define GPIOF_APB_GPIODATA_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODATA_OFFSET)))


/*----------*/
#define GPIO_GPIODATA_R_DATA_MASK      ((uint32_t)0x000000FFu)
#define GPIO_GPIODATA_R_DATA_BIT       (0u)
#define GPIO_GPIODATA_R_DATA_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA_HIGH      ((uint32_t)0x000000FFu)

#define GPIO_GPIODATA_DATA_MASK        ((uint32_t)0x000000FFu)
#define GPIO_GPIODATA_DATA_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA_HIGH        ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA0_MASK      ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_R_DATA0_BIT       (0u)
#define GPIO_GPIODATA_R_DATA0_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA0_HIGH      ((uint32_t)0x00000001u)

#define GPIO_GPIODATA_DATA0_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA0_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA0_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA1_MASK      ((uint32_t)0x00000002u)
#define GPIO_GPIODATA_R_DATA1_BIT       (1u)
#define GPIO_GPIODATA_R_DATA1_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA1_HIGH      ((uint32_t)0x00000002u)

#define GPIO_GPIODATA_DATA1_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA1_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA1_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA2_MASK      ((uint32_t)0x00000004u)
#define GPIO_GPIODATA_R_DATA2_BIT       (2u)
#define GPIO_GPIODATA_R_DATA2_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA2_HIGH      ((uint32_t)0x00000004u)

#define GPIO_GPIODATA_DATA2_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA2_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA2_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA3_MASK      ((uint32_t)0x00000008u)
#define GPIO_GPIODATA_R_DATA3_BIT       (3u)
#define GPIO_GPIODATA_R_DATA3_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA3_HIGH      ((uint32_t)0x00000008u)

#define GPIO_GPIODATA_DATA3_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA3_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA3_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA4_MASK      ((uint32_t)0x00000010u)
#define GPIO_GPIODATA_R_DATA4_BIT       (4u)
#define GPIO_GPIODATA_R_DATA4_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA4_HIGH      ((uint32_t)0x00000010u)

#define GPIO_GPIODATA_DATA4_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA4_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA4_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA5_MASK      ((uint32_t)0x00000020u)
#define GPIO_GPIODATA_R_DATA5_BIT       (5u)
#define GPIO_GPIODATA_R_DATA5_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA5_HIGH      ((uint32_t)0x00000020u)

#define GPIO_GPIODATA_DATA5_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA5_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA5_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA6_MASK      ((uint32_t)0x00000040u)
#define GPIO_GPIODATA_R_DATA6_BIT       (6u)
#define GPIO_GPIODATA_R_DATA6_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA6_HIGH      ((uint32_t)0x00000040u)

#define GPIO_GPIODATA_DATA6_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA6_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA6_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODATA_R_DATA7_MASK      ((uint32_t)0x00000080u)
#define GPIO_GPIODATA_R_DATA7_BIT       (7u)
#define GPIO_GPIODATA_R_DATA7_LOW       ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_R_DATA7_HIGH      ((uint32_t)0x00000080u)

#define GPIO_GPIODATA_DATA7_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODATA_DATA7_LOW         ((uint32_t)0x00000000u)
#define GPIO_GPIODATA_DATA7_HIGH        ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB DATA BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOA_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOA APB DATA BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOA_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOB AHB DATA BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOB_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOB APB DATA BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOB_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOC AHB DATA BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOC_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOC APB DATA BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOC_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOD AHB DATA BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOD_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOD APB DATA BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOD_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOE AHB DATA BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOE_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOE APB DATA BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOE_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOF AHB DATA BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOF_AHB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

/* GPIOF APB DATA BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODATA0_MASK_DATA0   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA0_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA1_MASK_DATA1   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA1_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA2_MASK_DATA2   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA2_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA3_MASK_DATA3   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA3_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA4_MASK_DATA4   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA4_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA5_MASK_DATA5   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA5_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA6_MASK_DATA6   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA6_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA7_MASK_DATA7   (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA7_MASK_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))

#define GPIOF_APB_BITBANDING_GPIODATA_DATA0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODATA_DATA7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODATA_OFFSET)*32u)+(GPIO_GPIODATA_R_DATA7_BIT*4u))))


/******************************************************************************************
************************************ 2 GPIODIR *********************************************
******************************************************************************************/
/* GPIOA AHB DIR*/
#define GPIOA_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOA_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOA_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOA APB DIR*/
#define GPIOA_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOA_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOA_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOB AHB DIR*/
#define GPIOB_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOB_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOB_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOB APB DIR*/
#define GPIOB_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOB_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOB_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOC AHB DIR*/
#define GPIOC_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOC_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOC_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOC APB DIR*/
#define GPIOC_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOC_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOC_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOD AHB DIR*/
#define GPIOD_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOD_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOD_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOD APB DIR*/
#define GPIOD_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOD_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOD_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOE AHB DIR*/
#define GPIOE_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOE_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOE_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOE APB DIR*/
#define GPIOE_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOE_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOE_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOF AHB DIR*/
#define GPIOF_AHB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOF_AHB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOF_AHB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODIR_OFFSET)))

/* GPIOF APB DIR*/
#define GPIOF_APB_BITBANDING_GPIODIR       (((BITBANDING_GPIODIR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u))))
#define GPIOF_APB_GPIODIR                  (((GPIODIR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODIR_OFFSET)))
#define GPIOF_APB_GPIODIR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODIR_OFFSET)))



/*----------*/
#define GPIO_GPIODIR_R_DIR_MASK         ((uint32_t)0x000000FFu)
#define GPIO_GPIODIR_R_DIR_BIT          (0u)
#define GPIO_GPIODIR_R_DIR_INPUT        ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR_OUTPUT       ((uint32_t)0x000000FFu)

#define GPIO_GPIODIR_DIR_MASK           ((uint32_t)0x000000FFu)
#define GPIO_GPIODIR_DIR_INPUT          ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR_OUTPUT         ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR0_MASK        ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_R_DIR0_BIT         (0u)
#define GPIO_GPIODIR_R_DIR0_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR0_OUTPUT      ((uint32_t)0x00000001u)

#define GPIO_GPIODIR_DIR0_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR0_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR0_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR1_MASK        ((uint32_t)0x00000002u)
#define GPIO_GPIODIR_R_DIR1_BIT         (1u)
#define GPIO_GPIODIR_R_DIR1_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR1_OUTPUT      ((uint32_t)0x00000002u)

#define GPIO_GPIODIR_DIR1_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR1_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR1_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR2_MASK        ((uint32_t)0x00000004u)
#define GPIO_GPIODIR_R_DIR2_BIT         (2u)
#define GPIO_GPIODIR_R_DIR2_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR2_OUTPUT      ((uint32_t)0x00000004u)

#define GPIO_GPIODIR_DIR2_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR2_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR2_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR3_MASK        ((uint32_t)0x00000008u)
#define GPIO_GPIODIR_R_DIR3_BIT         (3u)
#define GPIO_GPIODIR_R_DIR3_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR3_OUTPUT      ((uint32_t)0x00000008u)

#define GPIO_GPIODIR_DIR3_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR3_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR3_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR4_MASK        ((uint32_t)0x00000010u)
#define GPIO_GPIODIR_R_DIR4_BIT         (4u)
#define GPIO_GPIODIR_R_DIR4_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR4_OUTPUT      ((uint32_t)0x00000010u)

#define GPIO_GPIODIR_DIR4_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR4_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR4_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR5_MASK        ((uint32_t)0x00000020u)
#define GPIO_GPIODIR_R_DIR5_BIT         (5u)
#define GPIO_GPIODIR_R_DIR5_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR5_OUTPUT      ((uint32_t)0x00000020u)

#define GPIO_GPIODIR_DIR5_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR5_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR5_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR6_MASK        ((uint32_t)0x00000040u)
#define GPIO_GPIODIR_R_DIR6_BIT         (6u)
#define GPIO_GPIODIR_R_DIR6_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR6_OUTPUT      ((uint32_t)0x00000040u)

#define GPIO_GPIODIR_DIR6_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR6_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR6_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODIR_R_DIR7_MASK        ((uint32_t)0x00000080u)
#define GPIO_GPIODIR_R_DIR7_BIT         (7u)
#define GPIO_GPIODIR_R_DIR7_INPUT       ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_R_DIR7_OUTPUT      ((uint32_t)0x00000080u)

#define GPIO_GPIODIR_DIR7_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODIR_DIR7_INPUT         ((uint32_t)0x00000000u)
#define GPIO_GPIODIR_DIR7_OUTPUT        ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB DIR BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOA APB DIR BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOB AHB DIR BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOB APB DIR BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOC AHB DIR BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOC APB DIR BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOD AHB DIR BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOD APB DIR BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOE AHB DIR BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOE APB DIR BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOF AHB DIR BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))

/* GPIOF APB DIR BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODIR_DIR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODIR_DIR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODIR_OFFSET)*32u)+(GPIO_GPIODIR_R_DIR7_BIT*4u))))


/******************************************************************************************
************************************ 3 GPIOIS *********************************************
******************************************************************************************/
/* GPIOA AHB IS*/
#define GPIOA_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOA_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOA_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOA APB IS*/
#define GPIOA_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOA_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOA_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOB AHB IS*/
#define GPIOB_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOB_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOB_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOB APB IS*/
#define GPIOB_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOB_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOB_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOC AHB IS*/
#define GPIOC_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOC_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOC_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOC APB IS*/
#define GPIOC_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOC_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOC_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOD AHB IS*/
#define GPIOD_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOD_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOD_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOD APB IS*/
#define GPIOD_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOD_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOD_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOE AHB IS*/
#define GPIOE_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOE_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOE_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOE APB IS*/
#define GPIOE_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOE_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOE_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOF AHB IS*/
#define GPIOF_AHB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOF_AHB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOF_AHB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIS_OFFSET)))

/* GPIOF APB IS*/
#define GPIOF_APB_BITBANDING_GPIOIS       (((BITBANDING_GPIOIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u))))
#define GPIOF_APB_GPIOIS                  (((GPIOIS_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIS_OFFSET)))
#define GPIOF_APB_GPIOIS_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIS_OFFSET)))



/*----------*/
#define GPIO_GPIOIS_R_IS_MASK           ((uint32_t)0x000000FFu)
#define GPIO_GPIOIS_R_IS_BIT            (0u)
#define GPIO_GPIOIS_R_IS_EDGE           ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS_LEVEL          ((uint32_t)0x000000FFu)

#define GPIO_GPIOIS_IS_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOIS_IS_EDGE             ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS_LEVEL            ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS0_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_R_IS0_BIT           (0u)
#define GPIO_GPIOIS_R_IS0_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS0_LEVEL         ((uint32_t)0x00000001u)

#define GPIO_GPIOIS_IS0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS0_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS0_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS1_MASK          ((uint32_t)0x00000002u)
#define GPIO_GPIOIS_R_IS1_BIT           (1u)
#define GPIO_GPIOIS_R_IS1_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS1_LEVEL         ((uint32_t)0x00000002u)

#define GPIO_GPIOIS_IS1_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS1_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS1_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS2_MASK          ((uint32_t)0x00000004u)
#define GPIO_GPIOIS_R_IS2_BIT           (2u)
#define GPIO_GPIOIS_R_IS2_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS2_LEVEL         ((uint32_t)0x00000004u)

#define GPIO_GPIOIS_IS2_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS2_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS2_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS3_MASK          ((uint32_t)0x00000008u)
#define GPIO_GPIOIS_R_IS3_BIT           (3u)
#define GPIO_GPIOIS_R_IS3_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS3_LEVEL         ((uint32_t)0x00000008u)

#define GPIO_GPIOIS_IS3_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS3_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS3_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS4_MASK          ((uint32_t)0x00000010u)
#define GPIO_GPIOIS_R_IS4_BIT           (4u)
#define GPIO_GPIOIS_R_IS4_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS4_LEVEL         ((uint32_t)0x00000010u)

#define GPIO_GPIOIS_IS4_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS4_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS4_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS5_MASK          ((uint32_t)0x00000020u)
#define GPIO_GPIOIS_R_IS5_BIT           (5u)
#define GPIO_GPIOIS_R_IS5_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS5_LEVEL         ((uint32_t)0x00000020u)

#define GPIO_GPIOIS_IS5_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS5_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS5_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS6_MASK          ((uint32_t)0x00000040u)
#define GPIO_GPIOIS_R_IS6_BIT           (6u)
#define GPIO_GPIOIS_R_IS6_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS6_LEVEL         ((uint32_t)0x00000040u)

#define GPIO_GPIOIS_IS6_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS6_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS6_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIS_R_IS7_MASK          ((uint32_t)0x00000080u)
#define GPIO_GPIOIS_R_IS7_BIT           (7u)
#define GPIO_GPIOIS_R_IS7_EDGE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_R_IS7_LEVEL         ((uint32_t)0x00000080u)

#define GPIO_GPIOIS_IS7_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIS_IS7_EDGE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIS_IS7_LEVEL           ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB IS BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOA APB IS BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOB AHB IS BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOB APB IS BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOC AHB IS BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOC APB IS BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOD AHB IS BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOD APB IS BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOE AHB IS BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOE APB IS BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOF AHB IS BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/* GPIOF APB IS BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIS_IS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIS_IS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIS_OFFSET)*32u)+(GPIO_GPIOIS_R_IS7_BIT*4u))))

/******************************************************************************************
************************************ 4 GPIOIBE *********************************************
******************************************************************************************/
/* GPIOA AHB IBE*/
#define GPIOA_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOA_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOA_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOA APB IBE*/
#define GPIOA_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOA_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOA_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOB AHB IBE*/
#define GPIOB_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOB_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOB_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOB APB IBE*/
#define GPIOB_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOB_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOB_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOC AHB IBE*/
#define GPIOC_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOC_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOC_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOC APB IBE*/
#define GPIOC_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOC_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOC_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOD AHB IBE*/
#define GPIOD_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOD_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOD_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOD APB IBE*/
#define GPIOD_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOD_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOD_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOE AHB IBE*/
#define GPIOE_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOE_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOE_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOE APB IBE*/
#define GPIOE_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOE_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOE_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOF AHB IBE*/
#define GPIOF_AHB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOF_AHB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOF_AHB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIBE_OFFSET)))

/* GPIOF APB IBE*/
#define GPIOF_APB_BITBANDING_GPIOIBE       (((BITBANDING_GPIOIBE_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u))))
#define GPIOF_APB_GPIOIBE                  (((GPIOIBE_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIBE_OFFSET)))
#define GPIOF_APB_GPIOIBE_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIBE_OFFSET)))



/*----------*/
#define GPIO_GPIOIBE_R_IBE_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOIBE_R_IBE_BIT              (0u)
#define GPIO_GPIOIBE_R_IBE_SINGLE           ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE_BOTH             ((uint32_t)0x000000FFu)

#define GPIO_GPIOIBE_IBE_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOIBE_IBE_SINGLE             ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE_BOTH               ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_R_IBE0_BIT             (0u)
#define GPIO_GPIOIBE_R_IBE0_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE0_BOTH            ((uint32_t)0x00000001u)

#define GPIO_GPIOIBE_IBE0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE0_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE0_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOIBE_R_IBE1_BIT             (1u)
#define GPIO_GPIOIBE_R_IBE1_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE1_BOTH            ((uint32_t)0x00000002u)

#define GPIO_GPIOIBE_IBE1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE1_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE1_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOIBE_R_IBE2_BIT             (2u)
#define GPIO_GPIOIBE_R_IBE2_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE2_BOTH            ((uint32_t)0x00000004u)

#define GPIO_GPIOIBE_IBE2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE2_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE2_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOIBE_R_IBE3_BIT             (3u)
#define GPIO_GPIOIBE_R_IBE3_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE3_BOTH            ((uint32_t)0x00000008u)

#define GPIO_GPIOIBE_IBE3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE3_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE3_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOIBE_R_IBE4_BIT             (4u)
#define GPIO_GPIOIBE_R_IBE4_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE4_BOTH            ((uint32_t)0x00000010u)

#define GPIO_GPIOIBE_IBE4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE4_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE4_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOIBE_R_IBE5_BIT             (5u)
#define GPIO_GPIOIBE_R_IBE5_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE5_BOTH            ((uint32_t)0x00000020u)

#define GPIO_GPIOIBE_IBE5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE5_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE5_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOIBE_R_IBE6_BIT             (6u)
#define GPIO_GPIOIBE_R_IBE6_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE6_BOTH            ((uint32_t)0x00000040u)

#define GPIO_GPIOIBE_IBE6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE6_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE6_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIBE_R_IBE7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOIBE_R_IBE7_BIT             (7u)
#define GPIO_GPIOIBE_R_IBE7_SINGLE          ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_R_IBE7_BOTH            ((uint32_t)0x00000080u)

#define GPIO_GPIOIBE_IBE7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIBE_IBE7_SINGLE            ((uint32_t)0x00000000u)
#define GPIO_GPIOIBE_IBE7_BOTH              ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB IBE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOA APB IBE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOB AHB IBE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOB APB IBE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOC AHB IBE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOC APB IBE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOD AHB IBE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOD APB IBE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOE AHB IBE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOE APB IBE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOF AHB IBE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))

/* GPIOF APB IBE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIBE_IBE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIBE_OFFSET)*32u)+(GPIO_GPIOIBE_R_IBE7_BIT*4u))))



/******************************************************************************************
************************************ 5 GPIOIEV *********************************************
******************************************************************************************/
/* GPIOA AHB IEV*/
#define GPIOA_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOA_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOA_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOA APB IEV*/
#define GPIOA_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOA_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOA_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOB AHB IEV*/
#define GPIOB_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOB_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOB_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOB APB IEV*/
#define GPIOB_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOB_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOB_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOC AHB IEV*/
#define GPIOC_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOC_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOC_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOC APB IEV*/
#define GPIOC_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOC_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOC_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOD AHB IEV*/
#define GPIOD_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOD_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOD_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOD APB IEV*/
#define GPIOD_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOD_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOD_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOE AHB IEV*/
#define GPIOE_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOE_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOE_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOE APB IEV*/
#define GPIOE_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOE_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOE_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOF AHB IEV*/
#define GPIOF_AHB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOF_AHB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOF_AHB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIEV_OFFSET)))

/* GPIOF APB IEV*/
#define GPIOF_APB_BITBANDING_GPIOIEV       (((BITBANDING_GPIOIEV_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u))))
#define GPIOF_APB_GPIOIEV                  (((GPIOIEV_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIEV_OFFSET)))
#define GPIOF_APB_GPIOIEV_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIEV_OFFSET)))



/*----------*/
#define GPIO_GPIOIEV_R_IEV_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOIEV_R_IEV_BIT              (0u)
#define GPIO_GPIOIEV_R_IEV_FALLING          ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV_RISING           ((uint32_t)0x000000FFu)

#define GPIO_GPIOIEV_IEV_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOIEV_IEV_FALLING            ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV_RISING             ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_R_IEV0_BIT             (0u)
#define GPIO_GPIOIEV_R_IEV0_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV0_RISING          ((uint32_t)0x00000001u)

#define GPIO_GPIOIEV_IEV0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV0_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV0_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOIEV_R_IEV1_BIT             (1u)
#define GPIO_GPIOIEV_R_IEV1_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV1_RISING          ((uint32_t)0x00000002u)

#define GPIO_GPIOIEV_IEV1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV1_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV1_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOIEV_R_IEV2_BIT             (2u)
#define GPIO_GPIOIEV_R_IEV2_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV2_RISING          ((uint32_t)0x00000004u)

#define GPIO_GPIOIEV_IEV2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV2_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV2_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOIEV_R_IEV3_BIT             (3u)
#define GPIO_GPIOIEV_R_IEV3_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV3_RISING          ((uint32_t)0x00000008u)

#define GPIO_GPIOIEV_IEV3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV3_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV3_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOIEV_R_IEV4_BIT             (4u)
#define GPIO_GPIOIEV_R_IEV4_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV4_RISING          ((uint32_t)0x00000010u)

#define GPIO_GPIOIEV_IEV4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV4_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV4_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOIEV_R_IEV5_BIT             (5u)
#define GPIO_GPIOIEV_R_IEV5_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV5_RISING          ((uint32_t)0x00000020u)

#define GPIO_GPIOIEV_IEV5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV5_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV5_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOIEV_R_IEV6_BIT             (6u)
#define GPIO_GPIOIEV_R_IEV6_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV6_RISING          ((uint32_t)0x00000040u)

#define GPIO_GPIOIEV_IEV6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV6_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV6_RISING            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIEV_R_IEV7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOIEV_R_IEV7_BIT             (7u)
#define GPIO_GPIOIEV_R_IEV7_FALLING         ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_R_IEV7_RISING          ((uint32_t)0x00000080u)

#define GPIO_GPIOIEV_IEV7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOIEV_IEV7_FALLING           ((uint32_t)0x00000000u)
#define GPIO_GPIOIEV_IEV7_RISING            ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB IEV BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOA APB IEV BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOB AHB IEV BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOB APB IEV BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOC AHB IEV BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOC APB IEV BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOD AHB IEV BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOD APB IEV BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOE AHB IEV BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOE APB IEV BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOF AHB IEV BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))

/* GPIOF APB IEV BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIEV_IEV7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIEV_OFFSET)*32u)+(GPIO_GPIOIEV_R_IEV7_BIT*4u))))


/******************************************************************************************
************************************ 6 GPIOIM *********************************************
******************************************************************************************/
/* GPIOA AHB IME*/
#define GPIOA_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOA_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOA_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOA APB IME*/
#define GPIOA_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOA_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOA_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOB AHB IME*/
#define GPIOB_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOB_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOB_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOB APB IME*/
#define GPIOB_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOB_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOB_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOC AHB IME*/
#define GPIOC_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOC_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOC_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOC APB IME*/
#define GPIOC_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOC_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOC_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOD AHB IME*/
#define GPIOD_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOD_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOD_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOD APB IME*/
#define GPIOD_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOD_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOD_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOE AHB IME*/
#define GPIOE_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOE_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOE_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOE APB IME*/
#define GPIOE_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOE_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOE_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOF AHB IME*/
#define GPIOF_AHB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOF_AHB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOF_AHB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOIM_OFFSET)))

/* GPIOF APB IME*/
#define GPIOF_APB_BITBANDING_GPIOIM       (((BITBANDING_GPIOIM_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u))))
#define GPIOF_APB_GPIOIM                  (((GPIOIM_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOIM_OFFSET)))
#define GPIOF_APB_GPIOIM_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOIM_OFFSET)))



/*----------*/
#define GPIO_GPIOIM_R_IME_MASK          ((uint32_t)0x000000FFu)
#define GPIO_GPIOIM_R_IME_BIT           (0u)
#define GPIO_GPIOIM_R_IME_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME_EN            ((uint32_t)0x000000FFu)

#define GPIO_GPIOIM_IME_MASK            ((uint32_t)0x000000FFu)
#define GPIO_GPIOIM_IME_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME_EN              ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME0_MASK         ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_R_IME0_BIT          (0u)
#define GPIO_GPIOIM_R_IME0_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME0_EN           ((uint32_t)0x00000001u)

#define GPIO_GPIOIM_IME0_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME0_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME0_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME1_MASK         ((uint32_t)0x00000002u)
#define GPIO_GPIOIM_R_IME1_BIT          (1u)
#define GPIO_GPIOIM_R_IME1_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME1_EN           ((uint32_t)0x00000002u)

#define GPIO_GPIOIM_IME1_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME1_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME1_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME2_MASK         ((uint32_t)0x00000004u)
#define GPIO_GPIOIM_R_IME2_BIT          (2u)
#define GPIO_GPIOIM_R_IME2_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME2_EN           ((uint32_t)0x00000004u)

#define GPIO_GPIOIM_IME2_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME2_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME2_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME3_MASK         ((uint32_t)0x00000008u)
#define GPIO_GPIOIM_R_IME3_BIT          (3u)
#define GPIO_GPIOIM_R_IME3_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME3_EN           ((uint32_t)0x00000008u)

#define GPIO_GPIOIM_IME3_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME3_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME3_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME4_MASK         ((uint32_t)0x00000010u)
#define GPIO_GPIOIM_R_IME4_BIT          (4u)
#define GPIO_GPIOIM_R_IME4_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME4_EN           ((uint32_t)0x00000010u)

#define GPIO_GPIOIM_IME4_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME4_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME4_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME5_MASK         ((uint32_t)0x00000020u)
#define GPIO_GPIOIM_R_IME5_BIT          (5u)
#define GPIO_GPIOIM_R_IME5_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME5_EN           ((uint32_t)0x00000020u)

#define GPIO_GPIOIM_IME5_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME5_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME5_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME6_MASK         ((uint32_t)0x00000040u)
#define GPIO_GPIOIM_R_IME6_BIT          (6u)
#define GPIO_GPIOIM_R_IME6_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME6_EN           ((uint32_t)0x00000040u)

#define GPIO_GPIOIM_IME6_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME6_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME6_EN             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOIM_R_IME7_MASK         ((uint32_t)0x00000080u)
#define GPIO_GPIOIM_R_IME7_BIT          (7u)
#define GPIO_GPIOIM_R_IME7_DIS          ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_R_IME7_EN           ((uint32_t)0x00000080u)

#define GPIO_GPIOIM_IME7_MASK           ((uint32_t)0x00000001u)
#define GPIO_GPIOIM_IME7_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIOIM_IME7_EN             ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB IME BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOA APB IME BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOB AHB IME BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOB APB IME BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOC AHB IME BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOC APB IME BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOD AHB IME BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOD APB IME BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOE AHB IME BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOE APB IME BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOF AHB IME BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))

/* GPIOF APB IME BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOIM_IME0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOIM_IME7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOIM_OFFSET)*32u)+(GPIO_GPIOIM_R_IME7_BIT*4u))))


/******************************************************************************************
************************************ 7 GPIORIS *********************************************
******************************************************************************************/
/* GPIOA AHB RIS*/
#define GPIOA_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOA_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOA_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOA APB RIS*/
#define GPIOA_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOA_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOA_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOB AHB RIS*/
#define GPIOB_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOB_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOB_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOB APB RIS*/
#define GPIOB_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOB_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOB_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOC AHB RIS*/
#define GPIOC_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOC_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOC_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOC APB RIS*/
#define GPIOC_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOC_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOC_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOD AHB RIS*/
#define GPIOD_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOD_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOD_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOD APB RIS*/
#define GPIOD_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOD_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOD_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOE AHB RIS*/
#define GPIOE_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOE_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOE_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOE APB RIS*/
#define GPIOE_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOE_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOE_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOF AHB RIS*/
#define GPIOF_AHB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOF_AHB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOF_AHB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIORIS_OFFSET)))

/* GPIOF APB RIS*/
#define GPIOF_APB_BITBANDING_GPIORIS       (((BITBANDING_GPIORIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u))))
#define GPIOF_APB_GPIORIS                  (((GPIORIS_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIORIS_OFFSET)))
#define GPIOF_APB_GPIORIS_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIORIS_OFFSET)))



/*----------*/
#define GPIO_GPIORIS_R_RIS_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIORIS_R_RIS_BIT              (0u)
#define GPIO_GPIORIS_R_RIS_NOACTIVE         ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS_ACTIVE           ((uint32_t)0x000000FFu)

#define GPIO_GPIORIS_RIS_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIORIS_RIS_NOACTIVE           ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS_ACTIVE             ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_R_RIS0_BIT             (0u)
#define GPIO_GPIORIS_R_RIS0_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS0_ACTIVE          ((uint32_t)0x00000001u)

#define GPIO_GPIORIS_RIS0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS0_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS0_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIORIS_R_RIS1_BIT             (1u)
#define GPIO_GPIORIS_R_RIS1_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS1_ACTIVE          ((uint32_t)0x00000002u)

#define GPIO_GPIORIS_RIS1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS1_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS1_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIORIS_R_RIS2_BIT             (2u)
#define GPIO_GPIORIS_R_RIS2_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS2_ACTIVE          ((uint32_t)0x00000004u)

#define GPIO_GPIORIS_RIS2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS2_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS2_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIORIS_R_RIS3_BIT             (3u)
#define GPIO_GPIORIS_R_RIS3_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS3_ACTIVE          ((uint32_t)0x00000008u)

#define GPIO_GPIORIS_RIS3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS3_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS3_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIORIS_R_RIS4_BIT             (4u)
#define GPIO_GPIORIS_R_RIS4_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS4_ACTIVE          ((uint32_t)0x00000010u)

#define GPIO_GPIORIS_RIS4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS4_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS4_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIORIS_R_RIS5_BIT             (5u)
#define GPIO_GPIORIS_R_RIS5_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS5_ACTIVE          ((uint32_t)0x00000020u)

#define GPIO_GPIORIS_RIS5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS5_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS5_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIORIS_R_RIS6_BIT             (6u)
#define GPIO_GPIORIS_R_RIS6_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS6_ACTIVE          ((uint32_t)0x00000040u)

#define GPIO_GPIORIS_RIS6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS6_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS6_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIORIS_R_RIS7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIORIS_R_RIS7_BIT             (7u)
#define GPIO_GPIORIS_R_RIS7_NOACTIVE        ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_R_RIS7_ACTIVE          ((uint32_t)0x00000080u)

#define GPIO_GPIORIS_RIS7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIORIS_RIS7_NOACTIVE          ((uint32_t)0x00000000u)
#define GPIO_GPIORIS_RIS7_ACTIVE            ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB RIS BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOA APB RIS BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOB AHB RIS BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOB APB RIS BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOC AHB RIS BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOC APB RIS BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOD AHB RIS BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOD APB RIS BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOE AHB RIS BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOE APB RIS BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOF AHB RIS BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))

/* GPIOF APB RIS BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIORIS_RIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIORIS_RIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIORIS_OFFSET)*32u)+(GPIO_GPIORIS_R_RIS7_BIT*4u))))


/******************************************************************************************
************************************ 8 GPIOMIS *********************************************
******************************************************************************************/
/* GPIOA AHB MIS*/
#define GPIOA_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOA_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOA_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOA APB MIS*/
#define GPIOA_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOA_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOA_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOB AHB MIS*/
#define GPIOB_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOB_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOB_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOB APB MIS*/
#define GPIOB_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOB_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOB_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOC AHB MIS*/
#define GPIOC_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOC_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOC_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOC APB MIS*/
#define GPIOC_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOC_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOC_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOD AHB MIS*/
#define GPIOD_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOD_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOD_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOD APB MIS*/
#define GPIOD_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOD_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOD_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOE AHB MIS*/
#define GPIOE_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOE_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOE_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOE APB MIS*/
#define GPIOE_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOE_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOE_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOF AHB MIS*/
#define GPIOF_AHB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOF_AHB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOF_AHB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOMIS_OFFSET)))

/* GPIOF APB MIS*/
#define GPIOF_APB_BITBANDING_GPIOMIS       (((BITBANDING_GPIOMIS_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u))))
#define GPIOF_APB_GPIOMIS                  (((GPIOMIS_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOMIS_OFFSET)))
#define GPIOF_APB_GPIOMIS_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOMIS_OFFSET)))



/*----------*/
#define GPIO_GPIOMIS_R_MIS_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOMIS_R_MIS_BIT              (0u)
#define GPIO_GPIOMIS_R_MIS_NOOCCUR          ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS_OCCUR            ((uint32_t)0x000000FFu)

#define GPIO_GPIOMIS_MIS_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOMIS_MIS_NOOCCUR            ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS_OCCUR              ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_R_MIS0_BIT             (0u)
#define GPIO_GPIOMIS_R_MIS0_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS0_OCCUR           ((uint32_t)0x00000001u)

#define GPIO_GPIOMIS_MIS0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS0_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS0_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOMIS_R_MIS1_BIT             (1u)
#define GPIO_GPIOMIS_R_MIS1_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS1_OCCUR           ((uint32_t)0x00000002u)

#define GPIO_GPIOMIS_MIS1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS1_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS1_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOMIS_R_MIS2_BIT             (2u)
#define GPIO_GPIOMIS_R_MIS2_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS2_OCCUR           ((uint32_t)0x00000004u)

#define GPIO_GPIOMIS_MIS2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS2_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS2_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOMIS_R_MIS3_BIT             (3u)
#define GPIO_GPIOMIS_R_MIS3_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS3_OCCUR           ((uint32_t)0x00000008u)

#define GPIO_GPIOMIS_MIS3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS3_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS3_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOMIS_R_MIS4_BIT             (4u)
#define GPIO_GPIOMIS_R_MIS4_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS4_OCCUR           ((uint32_t)0x00000010u)

#define GPIO_GPIOMIS_MIS4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS4_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS4_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOMIS_R_MIS5_BIT             (5u)
#define GPIO_GPIOMIS_R_MIS5_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS5_OCCUR           ((uint32_t)0x00000020u)

#define GPIO_GPIOMIS_MIS5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS5_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS5_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOMIS_R_MIS6_BIT             (6u)
#define GPIO_GPIOMIS_R_MIS6_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS6_OCCUR           ((uint32_t)0x00000040u)

#define GPIO_GPIOMIS_MIS6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS6_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS6_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOMIS_R_MIS7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOMIS_R_MIS7_BIT             (7u)
#define GPIO_GPIOMIS_R_MIS7_NOOCCUR         ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_R_MIS7_OCCUR           ((uint32_t)0x00000080u)

#define GPIO_GPIOMIS_MIS7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOMIS_MIS7_NOOCCUR           ((uint32_t)0x00000000u)
#define GPIO_GPIOMIS_MIS7_OCCUR             ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB MIS BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOA APB MIS BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOB AHB MIS BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOB APB MIS BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOC AHB MIS BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOC APB MIS BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOD AHB MIS BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOD APB MIS BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOE AHB MIS BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOE APB MIS BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOF AHB MIS BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))

/* GPIOF APB MIS BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOMIS_MIS7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOMIS_OFFSET)*32u)+(GPIO_GPIOMIS_R_MIS7_BIT*4u))))


/******************************************************************************************
************************************ 9 GPIOICR *********************************************
******************************************************************************************/
/* GPIOA AHB IC*/
#define GPIOA_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOA_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOA_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOA APB IC*/
#define GPIOA_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOA_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOA_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOB AHB IC*/
#define GPIOB_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOB_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOB_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOB APB IC*/
#define GPIOB_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOB_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOB_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOC AHB IC*/
#define GPIOC_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOC_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOC_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOC APB IC*/
#define GPIOC_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOC_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOC_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOD AHB IC*/
#define GPIOD_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOD_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOD_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOD APB IC*/
#define GPIOD_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOD_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOD_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOE AHB IC*/
#define GPIOE_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOE_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOE_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOE APB IC*/
#define GPIOE_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOE_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOE_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOF AHB IC*/
#define GPIOF_AHB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOF_AHB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOF_AHB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOICR_OFFSET)))

/* GPIOF APB IC*/
#define GPIOF_APB_BITBANDING_GPIOICR       (((BITBANDING_GPIOICR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u))))
#define GPIOF_APB_GPIOICR                  (((GPIOICR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOICR_OFFSET)))
#define GPIOF_APB_GPIOICR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOICR_OFFSET)))



/*----------*/
#define GPIO_GPIOICR_R_IC_MASK              ((uint32_t)0x000000FFu)
#define GPIO_GPIOICR_R_IC_BIT               (0u)
#define GPIO_GPIOICR_R_IC_NOEFFECT          ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC_CLEAR             ((uint32_t)0x000000FFu)

#define GPIO_GPIOICR_IC_MASK                ((uint32_t)0x000000FFu)
#define GPIO_GPIOICR_IC_NOEFFECT            ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC_CLEAR               ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC0_MASK             ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_R_IC0_BIT              (0u)
#define GPIO_GPIOICR_R_IC0_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC0_CLEAR            ((uint32_t)0x00000001u)

#define GPIO_GPIOICR_IC0_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC0_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC0_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC1_MASK             ((uint32_t)0x00000002u)
#define GPIO_GPIOICR_R_IC1_BIT              (1u)
#define GPIO_GPIOICR_R_IC1_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC1_CLEAR            ((uint32_t)0x00000002u)

#define GPIO_GPIOICR_IC1_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC1_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC1_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC2_MASK             ((uint32_t)0x00000004u)
#define GPIO_GPIOICR_R_IC2_BIT              (2u)
#define GPIO_GPIOICR_R_IC2_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC2_CLEAR            ((uint32_t)0x00000004u)

#define GPIO_GPIOICR_IC2_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC2_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC2_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC3_MASK             0x00000008u)
#define GPIO_GPIOICR_R_IC3_BIT              (3u)
#define GPIO_GPIOICR_R_IC3_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC3_CLEAR            ((uint32_t)0x00000008u)

#define GPIO_GPIOICR_IC3_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC3_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC3_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC4_MASK             ((uint32_t)0x00000010u)
#define GPIO_GPIOICR_R_IC4_BIT              (4u)
#define GPIO_GPIOICR_R_IC4_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC4_CLEAR            ((uint32_t)0x00000010u)

#define GPIO_GPIOICR_IC4_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC4_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC4_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC5_MASK             ((uint32_t)0x00000020u)
#define GPIO_GPIOICR_R_IC5_BIT              (5u)
#define GPIO_GPIOICR_R_IC5_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC5_CLEAR            ((uint32_t)0x00000020u)

#define GPIO_GPIOICR_IC5_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC5_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC5_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC6_MASK             ((uint32_t)0x00000040u)
#define GPIO_GPIOICR_R_IC6_BIT              (6u)
#define GPIO_GPIOICR_R_IC6_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC6_CLEAR            ((uint32_t)0x00000040u)

#define GPIO_GPIOICR_IC6_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC6_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC6_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOICR_R_IC7_MASK             ((uint32_t)0x00000080u)
#define GPIO_GPIOICR_R_IC7_BIT              (7u)
#define GPIO_GPIOICR_R_IC7_NOEFFECT         ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_R_IC7_CLEAR            ((uint32_t)0x00000080u)

#define GPIO_GPIOICR_IC7_MASK               ((uint32_t)0x00000001u)
#define GPIO_GPIOICR_IC7_NOEFFECT           ((uint32_t)0x00000000u)
#define GPIO_GPIOICR_IC7_CLEAR              ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB IC BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOA APB IC BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOB AHB IC BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOB APB IC BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOC AHB IC BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOC APB IC BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOD AHB IC BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOD APB IC BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOE AHB IC BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOE APB IC BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOF AHB IC BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))

/* GPIOF APB IC BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOICR_IC0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOICR_IC7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOICR_OFFSET)*32u)+(GPIO_GPIOICR_R_IC7_BIT*4u))))


/******************************************************************************************
************************************ 10 GPIOAFSEL *********************************************
******************************************************************************************/
/* GPIOA AHB AFSEL*/
#define GPIOA_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOA_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOA_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOA APB AFSEL*/
#define GPIOA_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOA_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOA_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOB AHB AFSEL*/
#define GPIOB_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOB_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOB_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOB APB AFSEL*/
#define GPIOB_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOB_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOB_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOC AHB AFSEL*/
#define GPIOC_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOC_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOC_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOC APB AFSEL*/
#define GPIOC_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOC_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOC_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOD AHB AFSEL*/
#define GPIOD_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOD_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOD_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOD APB AFSEL*/
#define GPIOD_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOD_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOD_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOE AHB AFSEL*/
#define GPIOE_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOE_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOE_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOE APB AFSEL*/
#define GPIOE_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOE_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOE_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOF AHB AFSEL*/
#define GPIOF_AHB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOF_AHB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOF_AHB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOAFSEL_OFFSET)))

/* GPIOF APB AFSEL*/
#define GPIOF_APB_BITBANDING_GPIOAFSEL       (((BITBANDING_GPIOAFSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u))))
#define GPIOF_APB_GPIOAFSEL                  (((GPIOAFSEL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))
#define GPIOF_APB_GPIOAFSEL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOAFSEL_OFFSET)))


/*----------*/
#define GPIOF_APB_GPIOAFSEL_R_AFSEL_MASK        ((uint32_t)0x000000FFu)
#define GPIOF_APB_GPIOAFSEL_R_AFSEL_BIT         (0u)
#define GPIOF_APB_GPIOAFSEL_R_AFSEL0_GPIO       ((uint32_t)0x00000000u)
#define GPIOF_APB_GPIOAFSEL_R_AFSEL0_ALT        ((uint32_t)0x000000FFu)


#define GPIO_GPIOAFSEL_AFSEL_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOAFSEL_AFSEL_GPIO               ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL_ALT                ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_R_AFSEL0_BIT             (0u)
#define GPIO_GPIOAFSEL_R_AFSEL0_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL0_ALT             ((uint32_t)0x00000001u)

#define GPIO_GPIOAFSEL_AFSEL0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL0_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL0_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOAFSEL_R_AFSEL1_BIT             (1u)
#define GPIO_GPIOAFSEL_R_AFSEL1_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL1_ALT             ((uint32_t)0x00000002u)

#define GPIO_GPIOAFSEL_AFSEL1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL1_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL1_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOAFSEL_R_AFSEL2_BIT             (2u)
#define GPIO_GPIOAFSEL_R_AFSEL2_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL2_ALT             ((uint32_t)0x00000004u)

#define GPIO_GPIOAFSEL_AFSEL2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL2_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL2_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOAFSEL_R_AFSEL3_BIT             (3u)
#define GPIO_GPIOAFSEL_R_AFSEL3_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL3_ALT             ((uint32_t)0x00000008u)

#define GPIO_GPIOAFSEL_AFSEL3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL3_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL3_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOAFSEL_R_AFSEL4_BIT             (4u)
#define GPIO_GPIOAFSEL_R_AFSEL4_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL4_ALT             ((uint32_t)0x00000010u)

#define GPIO_GPIOAFSEL_AFSEL4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL4_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL4_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOAFSEL_R_AFSEL5_BIT             (5u)
#define GPIO_GPIOAFSEL_R_AFSEL5_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL5_ALT             ((uint32_t)0x00000020u)

#define GPIO_GPIOAFSEL_AFSEL5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL5_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL5_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOAFSEL_R_AFSEL6_BIT             (6u)
#define GPIO_GPIOAFSEL_R_AFSEL6_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL6_ALT             ((uint32_t)0x00000040u)

#define GPIO_GPIOAFSEL_AFSEL6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL6_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL6_ALT               ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAFSEL_R_AFSEL7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOAFSEL_R_AFSEL7_BIT             (7u)
#define GPIO_GPIOAFSEL_R_AFSEL7_GPIO            ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_R_AFSEL7_ALT             ((uint32_t)0x00000080u)

#define GPIO_GPIOAFSEL_AFSEL7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAFSEL_AFSEL7_GPIO              ((uint32_t)0x00000000u)
#define GPIO_GPIOAFSEL_AFSEL7_ALT               ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB AFSEL BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOA APB AFSEL BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOB AHB AFSEL BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOB APB AFSEL BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOC AHB AFSEL BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOC APB AFSEL BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOD AHB AFSEL BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOD APB AFSEL BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOE AHB AFSEL BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOE APB AFSEL BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOF AHB AFSEL BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/* GPIOF APB AFSEL BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAFSEL_AFSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAFSEL_OFFSET)*32u)+(GPIO_GPIOAFSEL_R_AFSEL7_BIT*4u))))

/******************************************************************************************
************************************ 11 GPIODRR ARRAY *********************************************
******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOA_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOA APB DRV2*/
#define GPIOA_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOA_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB AHB DRV2*/
#define GPIOB_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOB_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB APB DRV2*/
#define GPIOB_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOB_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC AHB DRV2*/
#define GPIOC_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOC_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC APB DRV2*/
#define GPIOC_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOC_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD AHB DRV2*/
#define GPIOD_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOD_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD APB DRV2*/
#define GPIOD_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOD_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE AHB DRV2*/
#define GPIOE_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOE_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE APB DRV2*/
#define GPIOE_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOE_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF AHB DRV2*/
#define GPIOF_AHB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOF_AHB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF APB DRV2*/
#define GPIOF_APB_BITBANDING_GPIODRR       (((BITBANDING_GPIODRR_ARRAY_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOF_APB_GPIODRR                  (((GPIODRR_ARRAY_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR2R_OFFSET)))


/******************************************************************************************
************************************ 11 GPIODR2R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV2*/
#define GPIOA_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOA_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOA_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOA APB DRV2*/
#define GPIOA_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOA_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOA_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB AHB DRV2*/
#define GPIOB_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOB_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOB_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOB APB DRV2*/
#define GPIOB_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOB_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOB_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC AHB DRV2*/
#define GPIOC_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOC_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOC_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOC APB DRV2*/
#define GPIOC_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOC_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOC_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD AHB DRV2*/
#define GPIOD_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOD_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOD_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOD APB DRV2*/
#define GPIOD_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOD_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOD_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE AHB DRV2*/
#define GPIOE_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOE_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOE_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOE APB DRV2*/
#define GPIOE_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOE_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOE_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF AHB DRV2*/
#define GPIOF_AHB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOF_AHB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOF_AHB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR2R_OFFSET)))

/* GPIOF APB DRV2*/
#define GPIOF_APB_BITBANDING_GPIODR2R       (((BITBANDING_GPIODR2R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u))))
#define GPIOF_APB_GPIODR2R                  (((GPIODR2R_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR2R_OFFSET)))
#define GPIOF_APB_GPIODR2R_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODR2R_OFFSET)))



/*----------*/
#define GPIO_GPIODR2R_R_DRV2_MASK           ((uint32_t)0x000000FFu)
#define GPIO_GPIODR2R_R_DRV2_BIT            (0u)
#define GPIO_GPIODR2R_R_DRV2_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV2_EN             ((uint32_t)0x000000FFu)

#define GPIO_GPIODR2R_DRV2_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIODR2R_DRV2_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV2_EN               ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV20_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_R_DRV20_BIT           (0u)
#define GPIO_GPIODR2R_R_DRV20_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV20_EN            ((uint32_t)0x00000001u)

#define GPIO_GPIODR2R_DRV20_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV20_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV20_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV21_MASK          ((uint32_t)0x00000002u)
#define GPIO_GPIODR2R_R_DRV21_BIT           (1u)
#define GPIO_GPIODR2R_R_DRV21_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV21_EN            ((uint32_t)0x00000002u)

#define GPIO_GPIODR2R_DRV21_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV21_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV21_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV22_MASK          ((uint32_t)0x00000004u)
#define GPIO_GPIODR2R_R_DRV22_BIT           (2u)
#define GPIO_GPIODR2R_R_DRV22_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV22_EN            ((uint32_t)0x00000004u)

#define GPIO_GPIODR2R_DRV22_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV22_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV22_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV23_MASK          ((uint32_t)0x00000008u)
#define GPIO_GPIODR2R_R_DRV23_BIT           (3u)
#define GPIO_GPIODR2R_R_DRV23_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV23_EN            ((uint32_t)0x00000008u)

#define GPIO_GPIODR2R_DRV23_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV23_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV23_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV24_MASK          ((uint32_t)0x00000010u)
#define GPIO_GPIODR2R_R_DRV24_BIT           (4u)
#define GPIO_GPIODR2R_R_DRV24_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV24_EN            ((uint32_t)0x00000010u)

#define GPIO_GPIODR2R_DRV24_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV24_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV24_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV25_MASK          ((uint32_t)0x00000020u)
#define GPIO_GPIODR2R_R_DRV25_BIT           (5u)
#define GPIO_GPIODR2R_R_DRV25_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV25_EN            ((uint32_t)0x00000020u)

#define GPIO_GPIODR2R_DRV25_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV25_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV25_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV26_MASK          ((uint32_t)0x00000040u)
#define GPIO_GPIODR2R_R_DRV26_BIT           (6u)
#define GPIO_GPIODR2R_R_DRV26_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV26_EN            ((uint32_t)0x00000040u)

#define GPIO_GPIODR2R_DRV26_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV26_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV26_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR2R_R_DRV27_MASK          ((uint32_t)0x00000080u)
#define GPIO_GPIODR2R_R_DRV27_BIT           (7u)
#define GPIO_GPIODR2R_R_DRV27_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_R_DRV27_EN            ((uint32_t)0x00000080u)

#define GPIO_GPIODR2R_DRV27_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR2R_DRV27_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR2R_DRV27_EN              ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB DRV2 BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOA APB DRV2 BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOB AHB DRV2 BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOB APB DRV2 BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOC AHB DRV2 BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOC APB DRV2 BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOD AHB DRV2 BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOD APB DRV2 BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOE AHB DRV2 BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOE APB DRV2 BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOF AHB DRV2 BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))

/* GPIOF APB DRV2 BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV20         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV20_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV21         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV21_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV22         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV22_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV23         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV23_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV24         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV24_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV25         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV25_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV26         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV26_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR2R_DRV27         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR2R_OFFSET)*32u)+(GPIO_GPIODR2R_R_DRV27_BIT*4u))))



/******************************************************************************************
************************************ 12 GPIODR4R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV4*/
#define GPIOA_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOA_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOA_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOA APB DRV4*/
#define GPIOA_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOA_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOA_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOB AHB DRV4*/
#define GPIOB_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOB_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOB_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOB APB DRV4*/
#define GPIOB_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOB_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOB_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOC AHB DRV4*/
#define GPIOC_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOC_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOC_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOC APB DRV4*/
#define GPIOC_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOC_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOC_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOD AHB DRV4*/
#define GPIOD_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOD_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOD_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOD APB DRV4*/
#define GPIOD_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOD_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOD_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOE AHB DRV4*/
#define GPIOE_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOE_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOE_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOE APB DRV4*/
#define GPIOE_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOE_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOE_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOF AHB DRV4*/
#define GPIOF_AHB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOF_AHB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOF_AHB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR4R_OFFSET)))

/* GPIOF APB DRV4*/
#define GPIOF_APB_BITBANDING_GPIODR4R       (((BITBANDING_GPIODR4R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u))))
#define GPIOF_APB_GPIODR4R                  (((GPIODR4R_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR4R_OFFSET)))
#define GPIOF_APB_GPIODR4R_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODR4R_OFFSET)))



/*----------*/
#define GPIO_GPIODR4R_R_DRV4_MASK           ((uint32_t)0x000000FFu)
#define GPIO_GPIODR4R_R_DRV4_BIT            (0u)
#define GPIO_GPIODR4R_R_DRV4_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV4_EN             ((uint32_t)0x000000FFu)

#define GPIO_GPIODR4R_DRV4_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIODR4R_DRV4_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV4_EN               ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV40_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_R_DRV40_BIT           (0u)
#define GPIO_GPIODR4R_R_DRV40_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV40_EN            ((uint32_t)0x00000001u)

#define GPIO_GPIODR4R_DRV40_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV40_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV40_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV41_MASK          ((uint32_t)0x00000002u)
#define GPIO_GPIODR4R_R_DRV41_BIT           (1u)
#define GPIO_GPIODR4R_R_DRV41_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV41_EN            ((uint32_t)0x00000002u)

#define GPIO_GPIODR4R_DRV41_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV41_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV41_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV42_MASK          ((uint32_t)0x00000004u)
#define GPIO_GPIODR4R_R_DRV42_BIT           (2u)
#define GPIO_GPIODR4R_R_DRV42_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV42_EN            ((uint32_t)0x00000004u)

#define GPIO_GPIODR4R_DRV42_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV42_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV42_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV43_MASK          ((uint32_t)0x00000008u)
#define GPIO_GPIODR4R_R_DRV43_BIT           (3u)
#define GPIO_GPIODR4R_R_DRV43_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV43_EN            ((uint32_t)0x00000008u)

#define GPIO_GPIODR4R_DRV43_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV43_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV43_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV44_MASK          ((uint32_t)0x00000010u)
#define GPIO_GPIODR4R_R_DRV44_BIT           (4u)
#define GPIO_GPIODR4R_R_DRV44_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV44_EN            ((uint32_t)0x00000010u)

#define GPIO_GPIODR4R_DRV44_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV44_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV44_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV45_MASK          ((uint32_t)0x00000020u)
#define GPIO_GPIODR4R_R_DRV45_BIT           (5u)
#define GPIO_GPIODR4R_R_DRV45_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV45_EN            ((uint32_t)0x00000020u)

#define GPIO_GPIODR4R_DRV45_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV45_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV45_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV46_MASK          ((uint32_t)0x00000040u)
#define GPIO_GPIODR4R_R_DRV46_BIT           (6u)
#define GPIO_GPIODR4R_R_DRV46_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV46_EN            ((uint32_t)0x00000040u)

#define GPIO_GPIODR4R_DRV46_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV46_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV46_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR4R_R_DRV47_MASK          ((uint32_t)0x00000080u)
#define GPIO_GPIODR4R_R_DRV47_BIT           (7u)
#define GPIO_GPIODR4R_R_DRV47_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_R_DRV47_EN            ((uint32_t)0x00000080u)

#define GPIO_GPIODR4R_DRV47_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR4R_DRV47_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR4R_DRV47_EN              ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB DRV4 BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOA APB DRV4 BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOB AHB DRV4 BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOB APB DRV4 BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOC AHB DRV4 BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOC APB DRV4 BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOD AHB DRV4 BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOD APB DRV4 BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOE AHB DRV4 BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOE APB DRV4 BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOF AHB DRV4 BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))

/* GPIOF APB DRV4 BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV40         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV40_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV41         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV41_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV42         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV42_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV43         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV43_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV44         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV44_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV45         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV45_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV46         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV46_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR4R_DRV47         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR4R_OFFSET)*32u)+(GPIO_GPIODR4R_R_DRV47_BIT*4u))))



/******************************************************************************************
************************************ 13 GPIODR8R *********************************************
******************************************************************************************/
/* GPIOA AHB DRV8*/
#define GPIOA_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOA_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOA_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOA APB DRV8*/
#define GPIOA_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOA_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOA_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOB AHB DRV8*/
#define GPIOB_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOB_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOB_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOB APB DRV8*/
#define GPIOB_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOB_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOB_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOC AHB DRV8*/
#define GPIOC_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOC_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOC_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOC APB DRV8*/
#define GPIOC_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOC_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOC_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOD AHB DRV8*/
#define GPIOD_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOD_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOD_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOD APB DRV8*/
#define GPIOD_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOD_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOD_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOE AHB DRV8*/
#define GPIOE_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOE_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOE_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOE APB DRV8*/
#define GPIOE_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOE_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOE_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOF AHB DRV8*/
#define GPIOF_AHB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOF_AHB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOF_AHB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODR8R_OFFSET)))

/* GPIOF APB DRV8*/
#define GPIOF_APB_BITBANDING_GPIODR8R       (((BITBANDING_GPIODR8R_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u))))
#define GPIOF_APB_GPIODR8R                  (((GPIODR8R_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODR8R_OFFSET)))
#define GPIOF_APB_GPIODR8R_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODR8R_OFFSET)))


/*----------*/
#define GPIO_GPIODR8R_R_DRV8_MASK           ((uint32_t)0x000000FFu)
#define GPIO_GPIODR8R_R_DRV8_BIT            (0u)
#define GPIO_GPIODR8R_R_DRV8_DIS            ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV8_EN             ((uint32_t)0x000000FFu)

#define GPIO_GPIODR8R_DRV8_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIODR8R_DRV8_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV8_EN               ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV80_MASK          ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_R_DRV80_BIT           (0u)
#define GPIO_GPIODR8R_R_DRV80_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV80_EN            ((uint32_t)0x00000001u)

#define GPIO_GPIODR8R_DRV80_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV80_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV80_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV81_MASK          ((uint32_t)0x00000002u)
#define GPIO_GPIODR8R_R_DRV81_BIT           (1u)
#define GPIO_GPIODR8R_R_DRV81_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV81_EN            ((uint32_t)0x00000002u)

#define GPIO_GPIODR8R_DRV81_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV81_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV81_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV82_MASK          ((uint32_t)0x00000004u)
#define GPIO_GPIODR8R_R_DRV82_BIT           (2u)
#define GPIO_GPIODR8R_R_DRV82_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV82_EN            ((uint32_t)0x00000004u)

#define GPIO_GPIODR8R_DRV82_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV82_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV82_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV83_MASK          ((uint32_t)0x00000008u)
#define GPIO_GPIODR8R_R_DRV83_BIT           (3u)
#define GPIO_GPIODR8R_R_DRV83_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV83_EN            ((uint32_t)0x00000008u)

#define GPIO_GPIODR8R_DRV83_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV83_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV83_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV84_MASK          ((uint32_t)0x00000010u)
#define GPIO_GPIODR8R_R_DRV84_BIT           (4u)
#define GPIO_GPIODR8R_R_DRV84_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV84_EN            ((uint32_t)0x00000010u)

#define GPIO_GPIODR8R_DRV84_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV84_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV84_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV85_MASK          ((uint32_t)0x00000020u)
#define GPIO_GPIODR8R_R_DRV85_BIT           (5u)
#define GPIO_GPIODR8R_R_DRV85_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV85_EN            ((uint32_t)0x00000020u)

#define GPIO_GPIODR8R_DRV85_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV85_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV85_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV86_MASK          ((uint32_t)0x00000040u)
#define GPIO_GPIODR8R_R_DRV86_BIT           (6u)
#define GPIO_GPIODR8R_R_DRV86_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV86_EN            ((uint32_t)0x00000040u)

#define GPIO_GPIODR8R_DRV86_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV86_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV86_EN              ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODR8R_R_DRV87_MASK          ((uint32_t)0x00000080u)
#define GPIO_GPIODR8R_R_DRV87_BIT           (7u)
#define GPIO_GPIODR8R_R_DRV87_DIS           ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_R_DRV87_EN            ((uint32_t)0x00000080u)

#define GPIO_GPIODR8R_DRV87_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODR8R_DRV87_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODR8R_DRV87_EN              ((uint32_t)0x00000001u)
/*----------*/

/* GPIOA AHB DRV8 BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOA APB DRV8 BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOB AHB DRV8 BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOB APB DRV8 BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOC AHB DRV8 BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOC APB DRV8 BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOD AHB DRV8 BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOD APB DRV8 BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOE AHB DRV8 BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOE APB DRV8 BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOF AHB DRV8 BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))

/* GPIOF APB DRV8 BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV80         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV80_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV81         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV81_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV82         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV82_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV83         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV83_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV84         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV84_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV85         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV85_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV86         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV86_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODR8R_DRV87         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODR8R_OFFSET)*32u)+(GPIO_GPIODR8R_R_DRV87_BIT*4u))))


/******************************************************************************************
************************************ 14 GPIOODR *********************************************
******************************************************************************************/
/* GPIOA AHB ODE*/
#define GPIOA_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOA_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOA_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOA APB ODE*/
#define GPIOA_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOA_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOA_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOB AHB ODE*/
#define GPIOB_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOB_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOB_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOB APB ODE*/
#define GPIOB_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOB_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOB_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOC AHB ODE*/
#define GPIOC_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOC_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOC_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOC APB ODE*/
#define GPIOC_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOC_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOC_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOD AHB ODE*/
#define GPIOD_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOD_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOD_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOD APB ODE*/
#define GPIOD_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOD_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOD_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOE AHB ODE*/
#define GPIOE_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOE_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOE_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOE APB ODE*/
#define GPIOE_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOE_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOE_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOF AHB ODE*/
#define GPIOF_AHB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOF_AHB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOF_AHB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOODR_OFFSET)))

/* GPIOF APB ODE*/
#define GPIOF_APB_BITBANDING_GPIOODR       (((BITBANDING_GPIOODR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u))))
#define GPIOF_APB_GPIOODR                  (((GPIOODR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOODR_OFFSET)))
#define GPIOF_APB_GPIOODR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOODR_OFFSET)))


/*----------*/
#define GPIO_GPIOODR_R_ODE_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOODR_R_ODE_BIT              (0u)
#define GPIO_GPIOODR_R_ODE_PP               ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE_OD               ((uint32_t)0x000000FFu)

#define GPIO_GPIOODR_ODE_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOODR_ODE_PP                 ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE_OD                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_R_ODE0_BIT             (0u)
#define GPIO_GPIOODR_R_ODE0_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE0_OD              ((uint32_t)0x00000001u)

#define GPIO_GPIOODR_ODE0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE0_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE0_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOODR_R_ODE1_BIT             (1u)
#define GPIO_GPIOODR_R_ODE1_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE1_OD              ((uint32_t)0x00000002u)

#define GPIO_GPIOODR_ODE1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE1_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE1_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOODR_R_ODE2_BIT             (2u)
#define GPIO_GPIOODR_R_ODE2_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE2_OD              ((uint32_t)0x00000004u)

#define GPIO_GPIOODR_ODE2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE2_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE2_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOODR_R_ODE3_BIT             (3u)
#define GPIO_GPIOODR_R_ODE3_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE3_OD              ((uint32_t)0x00000008u)

#define GPIO_GPIOODR_ODE3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE3_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE3_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOODR_R_ODE4_BIT             (4u)
#define GPIO_GPIOODR_R_ODE4_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE4_OD              ((uint32_t)0x00000010u)

#define GPIO_GPIOODR_ODE4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE4_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE4_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOODR_R_ODE5_BIT             (5u)
#define GPIO_GPIOODR_R_ODE5_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE5_OD              ((uint32_t)0x00000020u)

#define GPIO_GPIOODR_ODE5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE5_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE5_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOODR_R_ODE6_BIT             (6u)
#define GPIO_GPIOODR_R_ODE6_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE6_OD              ((uint32_t)0x00000040u)

#define GPIO_GPIOODR_ODE6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE6_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE6_OD                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOODR_R_ODE7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOODR_R_ODE7_BIT             (7u)
#define GPIO_GPIOODR_R_ODE7_PP              ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_R_ODE7_OD              ((uint32_t)0x00000080u)

#define GPIO_GPIOODR_ODE7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOODR_ODE7_PP                ((uint32_t)0x00000000u)
#define GPIO_GPIOODR_ODE7_OD                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB ODE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOA APB ODE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOB AHB ODE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOB APB ODE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOC AHB ODE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOC APB ODE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOD AHB ODE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOD APB ODE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOE AHB ODE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOE APB ODE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOF AHB ODE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))

/* GPIOF APB ODE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOODR_ODE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOODR_ODE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOODR_OFFSET)*32u)+(GPIO_GPIOODR_R_ODE7_BIT*4u))))



/******************************************************************************************
************************************ 15 GPIOPUR *********************************************
******************************************************************************************/
/* GPIOA AHB PUE*/
#define GPIOA_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOA_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOA APB PUE*/
#define GPIOA_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOA_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOA_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOB AHB PUE*/
#define GPIOB_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOB_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOB APB PUE*/
#define GPIOB_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOB_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOB_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOC AHB PUE*/
#define GPIOC_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOC_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOC APB PUE*/
#define GPIOC_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOC_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOC_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOD AHB PUE*/
#define GPIOD_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOD_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOD APB PUE*/
#define GPIOD_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOD_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOD_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOE AHB PUE*/
#define GPIOE_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOE_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOE APB PUE*/
#define GPIOE_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOE_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOE_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOF AHB PUE*/
#define GPIOF_AHB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOF_AHB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPUR_OFFSET)))

/* GPIOF APB PUE*/
#define GPIOF_APB_BITBANDING_GPIOPUR       (((BITBANDING_GPIOPUR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u))))
#define GPIOF_APB_GPIOPUR                  (((GPIOPUR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPUR_OFFSET)))
#define GPIOF_APB_GPIOPUR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPUR_OFFSET)))


/*----------*/
#define GPIO_GPIOPUR_R_PUE_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOPUR_R_PUE_BIT              (0u)
#define GPIO_GPIOPUR_R_PUE_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIOPUR_PUE_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOPUR_PUE_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_R_PUE0_BIT             (0u)
#define GPIO_GPIOPUR_R_PUE0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIOPUR_PUE0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOPUR_R_PUE1_BIT             (1u)
#define GPIO_GPIOPUR_R_PUE1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIOPUR_PUE1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOPUR_R_PUE2_BIT             (2u)
#define GPIO_GPIOPUR_R_PUE2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIOPUR_PUE2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOPUR_R_PUE3_BIT             (3u)
#define GPIO_GPIOPUR_R_PUE3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIOPUR_PUE3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOPUR_R_PUE4_BIT             (4u)
#define GPIO_GPIOPUR_R_PUE4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIOPUR_PUE4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOPUR_R_PUE5_BIT             (5u)
#define GPIO_GPIOPUR_R_PUE5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIOPUR_PUE5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOPUR_R_PUE6_BIT             (6u)
#define GPIO_GPIOPUR_R_PUE6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIOPUR_PUE6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPUR_R_PUE7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOPUR_R_PUE7_BIT             (7u)
#define GPIO_GPIOPUR_R_PUE7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_R_PUE7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIOPUR_PUE7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPUR_PUE7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPUR_PUE7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB PUE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOA APB PUE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOB AHB PUE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOB APB PUE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOC AHB PUE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOC APB PUE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOD AHB PUE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOD APB PUE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOE AHB PUE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOE APB PUE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOF AHB PUE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))

/* GPIOF APB PUE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPUR_PUE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPUR_OFFSET)*32u)+(GPIO_GPIOPUR_R_PUE7_BIT*4u))))




/******************************************************************************************
************************************ 16 GPIOPDR *********************************************
******************************************************************************************/
/* GPIOA AHB PDE*/
#define GPIOA_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOA_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOA APB PDE*/
#define GPIOA_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOA_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOA_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOB AHB PDE*/
#define GPIOB_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOB_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOB APB PDE*/
#define GPIOB_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOB_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOB_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOC AHB PDE*/
#define GPIOC_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOC_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOC APB PDE*/
#define GPIOC_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOC_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOC_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOD AHB PDE*/
#define GPIOD_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOD_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOD APB PDE*/
#define GPIOD_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOD_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOD_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOE AHB PDE*/
#define GPIOE_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOE_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOE APB PDE*/
#define GPIOE_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOE_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOE_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOF AHB PDE*/
#define GPIOF_AHB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOF_AHB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPDR_OFFSET)))

/* GPIOF APB PDE*/
#define GPIOF_APB_BITBANDING_GPIOPDR       (((BITBANDING_GPIOPDR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u))))
#define GPIOF_APB_GPIOPDR                  (((GPIOPDR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPDR_OFFSET)))
#define GPIOF_APB_GPIOPDR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPDR_OFFSET)))


/*----------*/
#define GPIO_GPIOPDR_R_PDE_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOPDR_R_PDE_BIT              (0u)
#define GPIO_GPIOPDR_R_PDE_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIOPDR_PDE_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOPDR_PDE_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_R_PDE0_BIT             (0u)
#define GPIO_GPIOPDR_R_PDE0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIOPDR_PDE0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOPDR_R_PDE1_BIT             (1u)
#define GPIO_GPIOPDR_R_PDE1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIOPDR_PDE1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOPDR_R_PDE2_BIT             (2u)
#define GPIO_GPIOPDR_R_PDE2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIOPDR_PDE2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOPDR_R_PDE3_BIT             (3u)
#define GPIO_GPIOPDR_R_PDE3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIOPDR_PDE3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOPDR_R_PDE4_BIT             (4u)
#define GPIO_GPIOPDR_R_PDE4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIOPDR_PDE4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOPDR_R_PDE5_BIT             (5u)
#define GPIO_GPIOPDR_R_PDE5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIOPDR_PDE5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOPDR_R_PDE6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOPDR_R_PDE6_BIT             (6u)
#define GPIO_GPIOPDR_R_PDE6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIOPDR_PDE6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/

#define GPIO_GPIOPDR_R_PDE7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOPDR_R_PDE7_BIT             (7u)
#define GPIO_GPIOPDR_R_PDE7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_R_PDE7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIOPDR_PDE7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOPDR_PDE7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOPDR_PDE7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB PDE BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOA APB PDE BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOB AHB PDE BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOB APB PDE BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOC AHB PDE BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOC APB PDE BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOD AHB PDE BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOD APB PDE BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOE AHB PDE BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOE APB PDE BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOF AHB PDE BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))

/* GPIOF APB PDE BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOPDR_PDE7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPDR_OFFSET)*32u)+(GPIO_GPIOPDR_R_PDE7_BIT*4u))))


/******************************************************************************************
************************************ 17 GPIOSLR *********************************************
******************************************************************************************/
/* GPIOA AHB SLR*/
#define GPIOA_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOA_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOA_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOA APB SLR*/
#define GPIOA_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOA_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOA_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOB AHB SLR*/
#define GPIOB_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOB_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOB_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOB APB SLR*/
#define GPIOB_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOB_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOB_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOC AHB SLR*/
#define GPIOC_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOC_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOC_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOC APB SLR*/
#define GPIOC_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOC_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOC_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOD AHB SLR*/
#define GPIOD_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOD_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOD_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOD APB SLR*/
#define GPIOD_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOD_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOD_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOE AHB SLR*/
#define GPIOE_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOE_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOE_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOE APB SLR*/
#define GPIOE_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOE_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOE_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOF AHB SLR*/
#define GPIOF_AHB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOF_AHB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOF_AHB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOSLR_OFFSET)))

/* GPIOF APB SLR*/
#define GPIOF_APB_BITBANDING_GPIOSLR       (((BITBANDING_GPIOSLR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u))))
#define GPIOF_APB_GPIOSLR                  (((GPIOSLR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOSLR_OFFSET)))
#define GPIOF_APB_GPIOSLR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOSLR_OFFSET)))


/*----------*/
#define GPIO_GPIOSLR_R_SLR_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOSLR_R_SLR_BIT              (0u)
#define GPIO_GPIOSLR_R_SLR_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIOSLR_SLR_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOSLR_SLR_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_R_SLR0_BIT             (0u)
#define GPIO_GPIOSLR_R_SLR0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIOSLR_SLR0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOSLR_R_SLR1_BIT             (1u)
#define GPIO_GPIOSLR_R_SLR1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIOSLR_SLR1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOSLR_R_SLR2_BIT             (2u)
#define GPIO_GPIOSLR_R_SLR2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIOSLR_SLR2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOSLR_R_SLR3_BIT             (3u)
#define GPIO_GPIOSLR_R_SLR3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIOSLR_SLR3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOSLR_R_SLR4_BIT             (4u)
#define GPIO_GPIOSLR_R_SLR4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIOSLR_SLR4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOSLR_R_SLR5_BIT             (5u)
#define GPIO_GPIOSLR_R_SLR5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIOSLR_SLR5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOSLR_R_SLR6_BIT             (6u)
#define GPIO_GPIOSLR_R_SLR6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIOSLR_SLR6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOSLR_R_SLR7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOSLR_R_SLR7_BIT             (7u)
#define GPIO_GPIOSLR_R_SLR7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_R_SLR7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIOSLR_SLR7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOSLR_SLR7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOSLR_SLR7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB SLR BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOA APB SLR BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOB AHB SLR BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOB APB SLR BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOC AHB SLR BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOC APB SLR BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOD AHB SLR BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOD APB SLR BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOE AHB SLR BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOE APB SLR BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOF AHB SLR BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))

/* GPIOF APB SLR BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOSLR_SLR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOSLR_OFFSET)*32u)+(GPIO_GPIOSLR_R_SLR7_BIT*4u))))




/******************************************************************************************
************************************ 18 GPIODEN *********************************************
******************************************************************************************/
/* GPIOA AHB DEN*/
#define GPIOA_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOA_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOA_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOA APB DEN*/
#define GPIOA_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOA_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOA_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOB AHB DEN*/
#define GPIOB_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOB_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOB_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOB APB DEN*/
#define GPIOB_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOB_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOB_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOC AHB DEN*/
#define GPIOC_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOC_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOC_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOC APB DEN*/
#define GPIOC_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOC_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOC_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOD AHB DEN*/
#define GPIOD_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOD_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOD_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOD APB DEN*/
#define GPIOD_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOD_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOD_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOE AHB DEN*/
#define GPIOE_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOE_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOE_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOE APB DEN*/
#define GPIOE_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOE_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOE_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOF AHB DEN*/
#define GPIOF_AHB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOF_AHB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOF_AHB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODEN_OFFSET)))

/* GPIOF APB DEN*/
#define GPIOF_APB_BITBANDING_GPIODEN       (((BITBANDING_GPIODEN_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u))))
#define GPIOF_APB_GPIODEN                  (((GPIODEN_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODEN_OFFSET)))
#define GPIOF_APB_GPIODEN_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODEN_OFFSET)))


/*----------*/
#define GPIO_GPIODEN_R_DEN_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIODEN_R_DEN_BIT              (0u)
#define GPIO_GPIODEN_R_DEN_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIODEN_DEN_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIODEN_DEN_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_R_DEN0_BIT             (0u)
#define GPIO_GPIODEN_R_DEN0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIODEN_DEN0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIODEN_R_DEN1_BIT             (1u)
#define GPIO_GPIODEN_R_DEN1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIODEN_DEN1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIODEN_R_DEN2_BIT             (2u)
#define GPIO_GPIODEN_R_DEN2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIODEN_DEN2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIODEN_R_DEN3_BIT             (3u)
#define GPIO_GPIODEN_R_DEN3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIODEN_DEN3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIODEN_R_DEN4_BIT             (4u)
#define GPIO_GPIODEN_R_DEN4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIODEN_DEN4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIODEN_R_DEN5_BIT             (5u)
#define GPIO_GPIODEN_R_DEN5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIODEN_DEN5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIODEN_R_DEN6_BIT             (6u)
#define GPIO_GPIODEN_R_DEN6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIODEN_DEN6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODEN_R_DEN7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIODEN_R_DEN7_BIT             (7u)
#define GPIO_GPIODEN_R_DEN7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_R_DEN7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIODEN_DEN7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODEN_DEN7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODEN_DEN7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB DEN BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOA APB DEN BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOB AHB DEN BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOB APB DEN BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOC AHB DEN BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOC APB DEN BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOD AHB DEN BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOD APB DEN BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOE AHB DEN BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOE APB DEN BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOF AHB DEN BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))

/* GPIOF APB DEN BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODEN_DEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODEN_DEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODEN_OFFSET)*32u)+(GPIO_GPIODEN_R_DEN7_BIT*4u))))


/******************************************************************************************
************************************ 19 GPIOLOCK *********************************************
******************************************************************************************/
/* GPIOA AHB LOCK*/
#define GPIOA_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOA_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOA_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOA APB LOCK*/
#define GPIOA_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOA_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOA_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOB AHB LOCK*/
#define GPIOB_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOB_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOB_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOB APB LOCK*/
#define GPIOB_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOB_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOB_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOC AHB LOCK*/
#define GPIOC_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOC_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOC_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOC APB LOCK*/
#define GPIOC_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOC_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOC_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOD AHB LOCK*/
#define GPIOD_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOD_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOD_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOD APB LOCK*/
#define GPIOD_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOD_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOD_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOE AHB LOCK*/
#define GPIOE_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOE_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOE_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOE APB LOCK*/
#define GPIOE_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOE_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOE_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOF AHB LOCK*/
#define GPIOF_AHB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOF_AHB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOF_AHB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOLOCK_OFFSET)))

/* GPIOF APB LOCK*/
#define GPIOF_APB_BITBANDING_GPIOLOCK       (((BITBANDING_GPIOLOCK_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOLOCK_OFFSET)*32u))))
#define GPIOF_APB_GPIOLOCK                  (((GPIOLOCK_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOLOCK_OFFSET)))
#define GPIOF_APB_GPIOLOCK_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOLOCK_OFFSET)))


/*----------*/
#define GPIO_GPIOLOCK_R_LOCK_MASK     ((uint32_t)0xFFFFFFFFu)
#define GPIO_GPIOLOCK_R_LOCK_BIT      (0u)
#define GPIO_GPIOLOCK_R_LOCK_KEY      ((uint32_t)0x4C4F434Bu)
#define GPIO_GPIOLOCK_R_LOCK_UNLOCK   ((uint32_t)0x00000000u)
#define GPIO_GPIOLOCK_R_LOCK_LOCK     ((uint32_t)0x00000001u)

#define GPIO_GPIOLOCK_LOCK_MASK       ((uint32_t)0xFFFFFFFFu)
#define GPIO_GPIOLOCK_LOCK_KEY        ((uint32_t)0x4C4F434Bu)
#define GPIO_GPIOLOCK_LOCK_UNLOCK     ((uint32_t)0x00000000u)
#define GPIO_GPIOLOCK_LOCK_LOCK       ((uint32_t)0x00000001u)
/*----------*/


/******************************************************************************************
************************************ 20 GPIOCR *********************************************
******************************************************************************************/
/* GPIOA AHB CR*/
#define GPIOA_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOA_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOA_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOA APB CR*/
#define GPIOA_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOA_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOA_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOB AHB CR*/
#define GPIOB_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOB_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOB_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOB APB CR*/
#define GPIOB_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOB_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOB_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOC AHB CR*/
#define GPIOC_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOC_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOC_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOC APB CR*/
#define GPIOC_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOC_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOC_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOD AHB CR*/
#define GPIOD_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOD_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOD_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOD APB CR*/
#define GPIOD_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOD_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOD_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOE AHB CR*/
#define GPIOE_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOE_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOE_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOE APB CR*/
#define GPIOE_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOE_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOE_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOF AHB CR*/
#define GPIOF_AHB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOF_AHB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOF_AHB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCR_OFFSET)))

/* GPIOF APB CR*/
#define GPIOF_APB_BITBANDING_GPIOCR       (((BITBANDING_GPIOCR_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u))))
#define GPIOF_APB_GPIOCR                  (((GPIOCR_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCR_OFFSET)))
#define GPIOF_APB_GPIOCR_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCR_OFFSET)))


/*----------*/
#define GPIO_GPIOCR_R_CR_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOCR_R_CR_BIT              (0u)
#define GPIO_GPIOCR_R_CR_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIOCR_CR_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOCR_CR_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_R_CR0_BIT             (0u)
#define GPIO_GPIOCR_R_CR0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIOCR_CR0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOCR_R_CR1_BIT             (1u)
#define GPIO_GPIOCR_R_CR1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIOCR_CR1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOCR_R_CR2_BIT             (2u)
#define GPIO_GPIOCR_R_CR2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIOCR_CR2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOCR_R_CR3_BIT             (3u)
#define GPIO_GPIOCR_R_CR3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIOCR_CR3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOCR_R_CR4_BIT             (4u)
#define GPIO_GPIOCR_R_CR4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIOCR_CR4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOCR_R_CR5_BIT             (5u)
#define GPIO_GPIOCR_R_CR5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIOCR_CR5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOCR_R_CR6_BIT             (6u)
#define GPIO_GPIOCR_R_CR6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIOCR_CR6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOCR_R_CR7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOCR_R_CR7_BIT             (7u)
#define GPIO_GPIOCR_R_CR7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_R_CR7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIOCR_CR7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOCR_CR7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOCR_CR7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB CR BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOA APB CR BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOB AHB CR BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOB APB CR BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOC AHB CR BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOC APB CR BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOD AHB CR BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOD APB CR BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOE AHB CR BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOE APB CR BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOF AHB CR BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))

/* GPIOF APB CR BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOCR_CR0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOCR_CR7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCR_OFFSET)*32u)+(GPIO_GPIOCR_R_CR7_BIT*4u))))



/******************************************************************************************
************************************ 21 GPIOAMSEL *********************************************
******************************************************************************************/
/* GPIOA AHB AMSEL*/
#define GPIOA_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOA_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOA_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOA APB AMSEL*/
#define GPIOA_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOA_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOA_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOB AHB AMSEL*/
#define GPIOB_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOB_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOB_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOB APB AMSEL*/
#define GPIOB_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOB_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOB_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOC AHB AMSEL*/
#define GPIOC_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOC_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOC_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOC APB AMSEL*/
#define GPIOC_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOC_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOC_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOD AHB AMSEL*/
#define GPIOD_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOD_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOD_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOD APB AMSEL*/
#define GPIOD_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOD_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOD_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOE AHB AMSEL*/
#define GPIOE_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOE_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOE_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOE APB AMSEL*/
#define GPIOE_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOE_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOE_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOF AHB AMSEL*/
#define GPIOF_AHB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOF_AHB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOF_AHB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOAMSEL_OFFSET)))

/* GPIOF APB AMSEL*/
#define GPIOF_APB_BITBANDING_GPIOAMSEL       (((BITBANDING_GPIOAMSEL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u))))
#define GPIOF_APB_GPIOAMSEL                  (((GPIOAMSEL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))
#define GPIOF_APB_GPIOAMSEL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOAMSEL_OFFSET)))


/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOAMSEL_R_AMSEL_BIT              (0u)
#define GPIO_GPIOAMSEL_R_AMSEL_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIOAMSEL_AMSEL_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOAMSEL_AMSEL_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_R_AMSEL0_BIT             (0u)
#define GPIO_GPIOAMSEL_R_AMSEL0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIOAMSEL_AMSEL0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOAMSEL_R_AMSEL1_BIT             (1u)
#define GPIO_GPIOAMSEL_R_AMSEL1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIOAMSEL_AMSEL1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOAMSEL_R_AMSEL2_BIT             (2u)
#define GPIO_GPIOAMSEL_R_AMSEL2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIOAMSEL_AMSEL2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOAMSEL_R_AMSEL3_BIT             (3u)
#define GPIO_GPIOAMSEL_R_AMSEL3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIOAMSEL_AMSEL3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOAMSEL_R_AMSEL4_BIT             (4u)
#define GPIO_GPIOAMSEL_R_AMSEL4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIOAMSEL_AMSEL4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOAMSEL_R_AMSEL5_BIT             (5u)
#define GPIO_GPIOAMSEL_R_AMSEL5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIOAMSEL_AMSEL5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOAMSEL_R_AMSEL6_BIT             (6u)
#define GPIO_GPIOAMSEL_R_AMSEL6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIOAMSEL_AMSEL6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOAMSEL_R_AMSEL7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOAMSEL_R_AMSEL7_BIT             (7u)
#define GPIO_GPIOAMSEL_R_AMSEL7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_R_AMSEL7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIOAMSEL_AMSEL7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOAMSEL_AMSEL7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOAMSEL_AMSEL7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB AMSEL BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOA APB AMSEL BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOB AHB AMSEL BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOB APB AMSEL BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOC AHB AMSEL BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOC APB AMSEL BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOD AHB AMSEL BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOD APB AMSEL BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOE AHB AMSEL BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOE APB AMSEL BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOF AHB AMSEL BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))

/* GPIOF APB AMSEL BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOAMSEL_AMSEL7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOAMSEL_OFFSET)*32u)+(GPIO_GPIOAMSEL_R_AMSEL7_BIT*4u))))


/******************************************************************************************
************************************ 22 GPIOPCTL *********************************************
******************************************************************************************/
/* GPIOA AHB PCM*/
#define GPIOA_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOA_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOA APB PCM*/
#define GPIOA_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOA_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOA_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOB AHB PCM*/
#define GPIOB_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOB_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOB APB PCM*/
#define GPIOB_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOB_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOB_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOC AHB PCM*/
#define GPIOC_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOC_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOC APB PCM*/
#define GPIOC_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOC_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOC_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOD AHB PCM*/
#define GPIOD_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOD_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOD APB PCM*/
#define GPIOD_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOD_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOD_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOE AHB PCM*/
#define GPIOE_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOE_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOE APB PCM*/
#define GPIOE_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOE_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOE_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOF AHB PCM*/
#define GPIOF_AHB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOF_AHB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPCTL_OFFSET)))

/* GPIOF APB PCM*/
#define GPIOF_APB_BITBANDING_GPIOPCTL       (((BITBANDING_GPIOPCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPCTL_OFFSET)*32u))))
#define GPIOF_APB_GPIOPCTL                  (((GPIOPCTL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPCTL_OFFSET)))
#define GPIOF_APB_GPIOPCTL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPCTL_OFFSET)))

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_R_PCM0_BIT    (0u)
#define GPIOA_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM0_U0Rx   ((uint32_t)0x00000001u)
#define GPIOA_GPIOPCTL_R_PCM0_CAN1Rx ((uint32_t)0x00000008u)

#define GPIOA_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM0_U0Rx     ((uint32_t)0x00000001u)
#define GPIOA_GPIOPCTL_PCM0_CAN1Rx   ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0u)
#define GPIOA_GPIOPCTL_R_PCM1_BIT    (4u)
#define GPIOA_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM1_U0Tx   ((uint32_t)0x00000010u)
#define GPIOA_GPIOPCTL_R_PCM1_CAN1Tx ((uint32_t)0x00000080u)

#define GPIOA_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM1_U0Tx     ((uint32_t)0x00000001u)
#define GPIOA_GPIOPCTL_PCM1_CAN1Tx   ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00u)
#define GPIOA_GPIOPCTL_R_PCM2_BIT     (8u)
#define GPIOA_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM2_SSI0Clk ((uint32_t)0x00000200u)

#define GPIOA_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM2_SSI0Clk   ((uint32_t)0x00000002u)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000u)
#define GPIOA_GPIOPCTL_R_PCM3_BIT     (12u)
#define GPIOA_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM3_SSI0Fss ((uint32_t)0x00002000u)

#define GPIOA_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM3_SSI0Fss   ((uint32_t)0x00000002u)
/*----------*/


/*----------*/
#define GPIOA_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOA_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOA_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM4_SSI0Rx  ((uint32_t)0x00020000u)

#define GPIOA_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM4_SSI0Rx    ((uint32_t)0x00000002u)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOA_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOA_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM5_SSI0Tx  ((uint32_t)0x00200000u)

#define GPIOA_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM5_SSI0Tx    ((uint32_t)0x00000002u)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM6_MASK    ((uint32_t)0x0F000000u)
#define GPIOA_GPIOPCTL_R_PCM6_BIT     (24u)
#define GPIOA_GPIOPCTL_R_PCM6_GPIO    ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM6_I2C1SCL ((uint32_t)0x03000000u)
#define GPIOA_GPIOPCTL_R_PCM6_M1PWM2  ((uint32_t)0x05000000u)

#define GPIOA_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM6_I2C1SCL   ((uint32_t)0x00000003u)
#define GPIOA_GPIOPCTL_PCM6_M1PWM2    ((uint32_t)0x00000005u)
/*----------*/

/*----------*/
#define GPIOA_GPIOPCTL_R_PCM7_MASK    ((uint32_t)0xF0000000u)
#define GPIOA_GPIOPCTL_R_PCM7_BIT     (28u)
#define GPIOA_GPIOPCTL_R_PCM7_GPIO    ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_R_PCM7_I2C1SDA ((uint32_t)0x30000000u)
#define GPIOA_GPIOPCTL_R_PCM7_M1PWM3  ((uint32_t)0x50000000u)

#define GPIOA_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOA_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOA_GPIOPCTL_PCM7_I2C1SDA   ((uint32_t)0x00000003u)
#define GPIOA_GPIOPCTL_PCM7_M1PWM3    ((uint32_t)0x00000005u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_R_PCM0_BIT    (0u)
#define GPIOB_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM0_U1Rx   ((uint32_t)0x00000001u)
#define GPIOB_GPIOPCTL_R_PCM0_T2CCP0 ((uint32_t)0x00000007u)

#define GPIOB_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM0_U1Rx     ((uint32_t)0x00000001u)
#define GPIOB_GPIOPCTL_PCM0_T2CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0u)
#define GPIOB_GPIOPCTL_R_PCM1_BIT    (4u)
#define GPIOB_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM1_U1Tx   ((uint32_t)0x00000010u)
#define GPIOB_GPIOPCTL_R_PCM1_T2CCP1 ((uint32_t)0x00000070u)

#define GPIOB_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM1_U1Tx     ((uint32_t)0x00000001u)
#define GPIOB_GPIOPCTL_PCM1_T2CCP1   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00u)
#define GPIOB_GPIOPCTL_R_PCM2_BIT     (8u)
#define GPIOB_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM2_I2C0SCL ((uint32_t)0x00000300u)
#define GPIOB_GPIOPCTL_R_PCM2_T3CCP0  ((uint32_t)0x00000700u)

#define GPIOB_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM2_I2C0SCL   ((uint32_t)0x00000003u)
#define GPIOB_GPIOPCTL_PCM2_T3CCP0    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000u)
#define GPIOB_GPIOPCTL_R_PCM3_BIT     (12u)
#define GPIOB_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM3_I2C0SDA ((uint32_t)0x00003000u)
#define GPIOB_GPIOPCTL_R_PCM3_T3CCP1  ((uint32_t)0x00007000u)

#define GPIOB_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM3_I2C0SDA   ((uint32_t)0x00000003u)
#define GPIOB_GPIOPCTL_PCM3_T3CCP1    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOB_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOB_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM4_SSI2Clk ((uint32_t)0x00020000u)
#define GPIOB_GPIOPCTL_R_PCM4_M0PWM2  ((uint32_t)0x00040000u)
#define GPIOB_GPIOPCTL_R_PCM4_T1CCP0  ((uint32_t)0x00070000u)
#define GPIOB_GPIOPCTL_R_PCM4_CAN0Rx  ((uint32_t)0x00080000u)

#define GPIOB_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM4_SSSI2Clk  ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM4_M0PWM2    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM4_T1CCP0    ((uint32_t)0x00000007u)
#define GPIOB_GPIOPCTL_PCM4_CAN0Rx    ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOB_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOB_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM5_SSI2Fss ((uint32_t)0x00200000u)
#define GPIOB_GPIOPCTL_R_PCM5_M0PWM3  ((uint32_t)0x00400000u)
#define GPIOB_GPIOPCTL_R_PCM5_T1CCP1  ((uint32_t)0x00700000u)
#define GPIOB_GPIOPCTL_R_PCM5_CAN0Tx  ((uint32_t)0x00800000u)

#define GPIOB_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM5_SSI2Fss   ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM5_M0PWM3    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM5_T1CCP1    ((uint32_t)0x00000007u)
#define GPIOB_GPIOPCTL_PCM5_CAN0Tx    ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM6_MASK    ((uint32_t)0x0F000000u)
#define GPIOB_GPIOPCTL_R_PCM6_BIT     (24u)
#define GPIOB_GPIOPCTL_R_PCM6_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM6_SSI2Rx  ((uint32_t)0x02000000u)
#define GPIOB_GPIOPCTL_R_PCM6_M0PWM0  ((uint32_t)0x04000000u)
#define GPIOB_GPIOPCTL_R_PCM6_T0CCP0  ((uint32_t)0x07000000u)

#define GPIOB_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM6_SSI2Rx    ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM6_M0PWM0    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM6_T0CCP0    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOB_GPIOPCTL_R_PCM7_MASK    ((uint32_t)0xF0000000u)
#define GPIOB_GPIOPCTL_R_PCM7_BIT     (28u)
#define GPIOB_GPIOPCTL_R_PCM7_GPIO    ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_R_PCM7_SSI2Tx  ((uint32_t)0x20000000u)
#define GPIOB_GPIOPCTL_R_PCM7_M0PWM1  ((uint32_t)0x40000000u)
#define GPIOB_GPIOPCTL_R_PCM7_T0CCP1  ((uint32_t)0x70000000u)

#define GPIOB_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOB_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOB_GPIOPCTL_PCM7_SSI2Tx    ((uint32_t)0x00000002u)
#define GPIOB_GPIOPCTL_PCM7_M0PWM1    ((uint32_t)0x00000004u)
#define GPIOB_GPIOPCTL_PCM7_T0CCP1    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM0_MASK   ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_R_PCM0_BIT    (0u)
#define GPIOC_GPIOPCTL_R_PCM0_GPIO   ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM0_TCK    ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_R_PCM0_T4CCP0 ((uint32_t)0x00000007u)

#define GPIOC_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM0_TCK      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM0_T4CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM1_MASK   ((uint32_t)0x000000F0u)
#define GPIOC_GPIOPCTL_R_PCM1_BIT    (4u)
#define GPIOC_GPIOPCTL_R_PCM1_GPIO   ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM1_TMS    ((uint32_t)0x00000010u)
#define GPIOC_GPIOPCTL_R_PCM1_T4CCP1 ((uint32_t)0x00000070u)

#define GPIOC_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM1_TMS      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM1_T4CCP1   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM2_MASK    ((uint32_t)0x00000F00u)
#define GPIOC_GPIOPCTL_R_PCM2_BIT     (8u)
#define GPIOC_GPIOPCTL_R_PCM2_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM2_TDI     ((uint32_t)0x00000100u)
#define GPIOC_GPIOPCTL_R_PCM2_T5CCP0  ((uint32_t)0x00000700u)

#define GPIOC_GPIOPCTL_PCM2_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM2_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM2_TDI       ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM2_T5CCP0    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM3_MASK    ((uint32_t)0x0000F000u)
#define GPIOC_GPIOPCTL_R_PCM3_BIT     (12u)
#define GPIOC_GPIOPCTL_R_PCM3_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM3_TDO     ((uint32_t)0x00001000u)
#define GPIOC_GPIOPCTL_R_PCM3_T5CCP1  ((uint32_t)0x00007000u)

#define GPIOC_GPIOPCTL_PCM3_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM3_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM3_TDO       ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM3_T5CCP1    ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOC_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOC_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM4_U4Rx    ((uint32_t)0x00010000u)
#define GPIOC_GPIOPCTL_R_PCM4_U1Rx    ((uint32_t)0x00020000u)
#define GPIOC_GPIOPCTL_R_PCM4_M0PWM6  ((uint32_t)0x00040000u)
#define GPIOC_GPIOPCTL_R_PCM4_IDX1    ((uint32_t)0x00060000u)
#define GPIOC_GPIOPCTL_R_PCM4_WT0CCP0 ((uint32_t)0x00070000u)
#define GPIOC_GPIOPCTL_R_PCM4_U1RTS   ((uint32_t)0x00080000u)

#define GPIOC_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM4_U4Rx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM4_U1Rx      ((uint32_t)0x00000002u)
#define GPIOC_GPIOPCTL_PCM4_M0PWM6    ((uint32_t)0x00000004u)
#define GPIOC_GPIOPCTL_PCM4_IDX1      ((uint32_t)0x00000006u)
#define GPIOC_GPIOPCTL_PCM4_WT0CCP0   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM4_U1RTS     ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOC_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOC_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM5_U4Tx    ((uint32_t)0x00100000u)
#define GPIOC_GPIOPCTL_R_PCM5_U1Tx    ((uint32_t)0x00200000u)
#define GPIOC_GPIOPCTL_R_PCM5_M0PWM7  ((uint32_t)0x00400000u)
#define GPIOC_GPIOPCTL_R_PCM5_PhA1    ((uint32_t)0x00600000u)
#define GPIOC_GPIOPCTL_R_PCM5_WT0CCP1 ((uint32_t)0x00700000u)
#define GPIOC_GPIOPCTL_R_PCM5_U1CTS   ((uint32_t)0x00800000u)

#define GPIOC_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM5_U4Tx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM5_U1Tx      ((uint32_t)0x00000002u)
#define GPIOC_GPIOPCTL_PCM5_M0PWM7    ((uint32_t)0x00000004u)
#define GPIOC_GPIOPCTL_PCM5_PhA1      ((uint32_t)0x00000006u)
#define GPIOC_GPIOPCTL_PCM5_WT0CCP1   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM5_U1CTS     ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM6_MASK     ((uint32_t)0x0F000000u)
#define GPIOC_GPIOPCTL_R_PCM6_BIT      (24u)
#define GPIOC_GPIOPCTL_R_PCM6_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM6_U3Rx     ((uint32_t)0x01000000u)
#define GPIOC_GPIOPCTL_R_PCM6_PhB1     ((uint32_t)0x06000000u)
#define GPIOC_GPIOPCTL_R_PCM6_WT1CCP0  ((uint32_t)0x07000000u)
#define GPIOC_GPIOPCTL_R_PCM6_USB0EPEN ((uint32_t)0x08000000u)

#define GPIOC_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM6_U3Rx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM6_PhB1      ((uint32_t)0x00000006u)
#define GPIOC_GPIOPCTL_PCM6_WT1CCP0   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM6_USB0EPEN  ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOC_GPIOPCTL_R_PCM7_MASK     ((uint32_t)0xF000000u)
#define GPIOC_GPIOPCTL_R_PCM7_BIT      (28u)
#define GPIOC_GPIOPCTL_R_PCM7_GPIO     ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_R_PCM7_U3Tx     ((uint32_t)0x10000000u)
#define GPIOC_GPIOPCTL_R_PCM7_WT1CCP1  ((uint32_t)0x70000000u)
#define GPIOC_GPIOPCTL_R_PCM7_USB0PFLT ((uint32_t)0x80000000u)

#define GPIOC_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOC_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOC_GPIOPCTL_PCM7_U3Tx      ((uint32_t)0x00000001u)
#define GPIOC_GPIOPCTL_PCM7_WT1CCP1   ((uint32_t)0x00000007u)
#define GPIOC_GPIOPCTL_PCM7_USB0PFLT  ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_R_PCM0_BIT     (0u)
#define GPIOD_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM0_SSI3Clk ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_R_PCM0_SSI1Clk ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_R_PCM0_I2C3SCL ((uint32_t)0x00000003u)
#define GPIOD_GPIOPCTL_R_PCM0_M0PWM6  ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_R_PCM0_M1PWM0  ((uint32_t)0x00000005u)
#define GPIOD_GPIOPCTL_R_PCM0_WT2CCP0 ((uint32_t)0x00000007u)

#define GPIOD_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM0_SSI3Clk  ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM0_SSI1Clk  ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM0_I2C3SCL  ((uint32_t)0x00000003u)
#define GPIOD_GPIOPCTL_PCM0_M0PWM6   ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM0_M1PWM0   ((uint32_t)0x00000005u)
#define GPIOD_GPIOPCTL_PCM0_WT2CCP0  ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0u)
#define GPIOD_GPIOPCTL_R_PCM1_BIT     (4u)
#define GPIOD_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM1_SSI3Fss ((uint32_t)0x00000010u)
#define GPIOD_GPIOPCTL_R_PCM1_SSI1Fss ((uint32_t)0x00000020u)
#define GPIOD_GPIOPCTL_R_PCM1_I2C3SDA ((uint32_t)0x00000030u)
#define GPIOD_GPIOPCTL_R_PCM1_M0PWM7  ((uint32_t)0x00000040u)
#define GPIOD_GPIOPCTL_R_PCM1_M1PWM1  ((uint32_t)0x00000050u)
#define GPIOD_GPIOPCTL_R_PCM1_WT2CCP1 ((uint32_t)0x00000070u)

#define GPIOD_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM1_SSI3Fss  ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM1_SSI1Fss  ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM1_I2C3SDA  ((uint32_t)0x00000003u)
#define GPIOD_GPIOPCTL_PCM1_M0PWM7   ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM1_M1PWM1   ((uint32_t)0x00000005u)
#define GPIOD_GPIOPCTL_PCM1_WT2CCP1  ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00u)
#define GPIOD_GPIOPCTL_R_PCM2_BIT      (8u)
#define GPIOD_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM2_SSI3Rx   ((uint32_t)0x00000100u)
#define GPIOD_GPIOPCTL_R_PCM2_SSI1Rx   ((uint32_t)0x00000200u)
#define GPIOD_GPIOPCTL_R_PCM2_M0FAULT0 ((uint32_t)0x00000400u)
#define GPIOD_GPIOPCTL_R_PCM2_WT3CCP0  ((uint32_t)0x00000700u)
#define GPIOD_GPIOPCTL_R_PCM2_USB0EPEN ((uint32_t)0x00000800u)

#define GPIOD_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM2_SSI3Rx   ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM2_SSI1Rx   ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM2_M0FAULT0 ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM2_WT3CCP0  ((uint32_t)0x00000007u)
#define GPIOD_GPIOPCTL_PCM2_USB0EPEN ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000u)
#define GPIOD_GPIOPCTL_R_PCM3_BIT      (12u)
#define GPIOD_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM3_SSI3Tx   ((uint32_t)0x00001000u)
#define GPIOD_GPIOPCTL_R_PCM3_SSI1Tx   ((uint32_t)0x00002000u)
#define GPIOD_GPIOPCTL_R_PCM3_IDX0     ((uint32_t)0x00006000u)
#define GPIOD_GPIOPCTL_R_PCM3_WT3CCP1  ((uint32_t)0x00007000u)
#define GPIOD_GPIOPCTL_R_PCM3_USB0PFLT ((uint32_t)0x00008000u)

#define GPIOD_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM3_SSI3Tx   ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM3_SSI1Tx   ((uint32_t)0x00000002u)
#define GPIOD_GPIOPCTL_PCM3_IDX0     ((uint32_t)0x00000006u)
#define GPIOD_GPIOPCTL_PCM3_WT3CCP1  ((uint32_t)0x00000007u)
#define GPIOD_GPIOPCTL_PCM3_USB0PFLT ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOD_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOD_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM4_U6Rx    ((uint32_t)0x00010000u)
#define GPIOD_GPIOPCTL_R_PCM4_WT4CCP0 ((uint32_t)0x00070000u)

#define GPIOD_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM4_U6Rx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM4_WT4CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOD_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOD_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM5_U6Tx    ((uint32_t)0x00100000u)
#define GPIOD_GPIOPCTL_R_PCM5_WT4CCP1 ((uint32_t)0x00700000u)

#define GPIOD_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM5_U6Tx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM5_WT4CCP1   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM6_MASK     ((uint32_t)0x0F000000u)
#define GPIOD_GPIOPCTL_R_PCM6_BIT      (24u)
#define GPIOD_GPIOPCTL_R_PCM6_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM6_U2Rx     ((uint32_t)0x01000000u)
#define GPIOD_GPIOPCTL_R_PCM6_M0FAULT0 ((uint32_t)0x04000000u)
#define GPIOD_GPIOPCTL_R_PCM6_PhA0     ((uint32_t)0x06000000u)
#define GPIOD_GPIOPCTL_R_PCM6_WT5CCP0  ((uint32_t)0x07000000u)

#define GPIOD_GPIOPCTL_PCM6_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM6_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM6_U2Rx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM6_M0FAULT0  ((uint32_t)0x00000004u)
#define GPIOD_GPIOPCTL_PCM6_PhA0      ((uint32_t)0x00000006u)
#define GPIOD_GPIOPCTL_PCM6_WT5CCP0   ((uint32_t)0x00000007u)
/*----------*/

/*----------*/
#define GPIOD_GPIOPCTL_R_PCM7_MASK     ((uint32_t)0xF000000u)
#define GPIOD_GPIOPCTL_R_PCM7_BIT      (28u)
#define GPIOD_GPIOPCTL_R_PCM7_GPIO     ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_R_PCM7_U2Tx     ((uint32_t)0x10000000u)
#define GPIOD_GPIOPCTL_R_PCM7_PhB0     ((uint32_t)0x60000000u)
#define GPIOD_GPIOPCTL_R_PCM7_WT5CCP1  ((uint32_t)0x70000000u)
#define GPIOD_GPIOPCTL_R_PCM7_NMI      ((uint32_t)0x80000000u)

#define GPIOD_GPIOPCTL_PCM7_MASK      ((uint32_t)0x0000000Fu)
#define GPIOD_GPIOPCTL_PCM7_GPIO      ((uint32_t)0x00000000u)
#define GPIOD_GPIOPCTL_PCM7_U2Tx      ((uint32_t)0x00000001u)
#define GPIOD_GPIOPCTL_PCM7_PhB0      ((uint32_t)0x00000006u)
#define GPIOD_GPIOPCTL_PCM7_WT5CCP1   ((uint32_t)0x00000007u)
#define GPIOD_GPIOPCTL_PCM7_NMI       ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_R_PCM0_BIT     (0u)
#define GPIOE_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_R_PCM0_U7Rx    ((uint32_t)0x00000001u)

#define GPIOE_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_PCM0_U7Rx     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0u)
#define GPIOE_GPIOPCTL_R_PCM1_BIT     (4u)
#define GPIOE_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_R_PCM1_U7Tx    ((uint32_t)0x00000010u)

#define GPIOE_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_PCM1_U7Tx     ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00u)
#define GPIOE_GPIOPCTL_R_PCM2_BIT      (8u)
#define GPIOE_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000u)

#define GPIOE_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000u)
#define GPIOE_GPIOPCTL_R_PCM3_BIT      (12u)
#define GPIOE_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000u)

#define GPIOE_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000u)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM4_MASK    ((uint32_t)0x000F0000u)
#define GPIOE_GPIOPCTL_R_PCM4_BIT     (16u)
#define GPIOE_GPIOPCTL_R_PCM4_GPIO    ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_R_PCM4_U5Rx    ((uint32_t)0x00010000u)
#define GPIOE_GPIOPCTL_R_PCM4_I2C2SCL ((uint32_t)0x00030000u)
#define GPIOE_GPIOPCTL_R_PCM4_M0PWM4  ((uint32_t)0x00040000u)
#define GPIOE_GPIOPCTL_R_PCM4_M1PWM2  ((uint32_t)0x00050000u)
#define GPIOE_GPIOPCTL_R_PCM4_CAN0Rx  ((uint32_t)0x00080000u)

#define GPIOE_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_PCM4_U5Rx      ((uint32_t)0x00000001u)
#define GPIOE_GPIOPCTL_PCM4_I2C2SCL   ((uint32_t)0x00000003u)
#define GPIOE_GPIOPCTL_PCM4_M0PWM4    ((uint32_t)0x00000004u)
#define GPIOE_GPIOPCTL_PCM4_M1PWM2    ((uint32_t)0x00000005u)
#define GPIOE_GPIOPCTL_PCM4_CAN0Rx    ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOE_GPIOPCTL_R_PCM5_MASK    ((uint32_t)0x00F00000u)
#define GPIOE_GPIOPCTL_R_PCM5_BIT     (20u)
#define GPIOE_GPIOPCTL_R_PCM5_GPIO    ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_R_PCM5_U5Tx    ((uint32_t)0x00100000u)
#define GPIOE_GPIOPCTL_R_PCM5_I2C2SDA ((uint32_t)0x00300000u)
#define GPIOE_GPIOPCTL_R_PCM5_M0PWM5  ((uint32_t)0x00400000u)
#define GPIOE_GPIOPCTL_R_PCM5_M1PWM3  ((uint32_t)0x00500000u)
#define GPIOE_GPIOPCTL_R_PCM5_CAN0Tx  ((uint32_t)0x00800000u)

#define GPIOE_GPIOPCTL_PCM5_MASK      ((uint32_t)0x0000000Fu)
#define GPIOE_GPIOPCTL_PCM5_GPIO      ((uint32_t)0x00000000u)
#define GPIOE_GPIOPCTL_PCM5_U5Tx      ((uint32_t)0x00000001u)
#define GPIOE_GPIOPCTL_PCM5_I2C2SDA   ((uint32_t)0x00000003u)
#define GPIOE_GPIOPCTL_PCM5_M0PWM5    ((uint32_t)0x00000004u)
#define GPIOE_GPIOPCTL_PCM5_M1PWM3    ((uint32_t)0x00000005u)
#define GPIOE_GPIOPCTL_PCM5_CAN0Tx    ((uint32_t)0x00000008u)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM0_MASK    ((uint32_t)0x0000000Fu)
#define GPIOF_GPIOPCTL_R_PCM0_BIT     (0u)
#define GPIOF_GPIOPCTL_R_PCM0_GPIO    ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_R_PCM0_U1RTS   ((uint32_t)0x00000001u)
#define GPIOF_GPIOPCTL_R_PCM0_SSI1Rx  ((uint32_t)0x00000002u)
#define GPIOF_GPIOPCTL_R_PCM0_CAN0Rx  ((uint32_t)0x00000003u)
#define GPIOF_GPIOPCTL_R_PCM0_M1PWM4  ((uint32_t)0x00000005u)
#define GPIOF_GPIOPCTL_R_PCM0_PhA0    ((uint32_t)0x00000006u)
#define GPIOF_GPIOPCTL_R_PCM0_T0CCP0  ((uint32_t)0x00000007u)
#define GPIOF_GPIOPCTL_R_PCM0_NMI     ((uint32_t)0x00000008u)
#define GPIOF_GPIOPCTL_R_PCM0_C0o     ((uint32_t)0x00000009u)

#define GPIOF_GPIOPCTL_PCM0_MASK     ((uint32_t)0x0000000Fu)
#define GPIOF_GPIOPCTL_PCM0_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_PCM0_U1RTS    ((uint32_t)0x00000001u)
#define GPIOF_GPIOPCTL_PCM0_SSI1Rx   ((uint32_t)0x00000002u)
#define GPIOF_GPIOPCTL_PCM0_CAN0Rx   ((uint32_t)0x00000003u)
#define GPIOF_GPIOPCTL_PCM0_M1PWM4   ((uint32_t)0x00000005u)
#define GPIOF_GPIOPCTL_PCM0_PhA0     ((uint32_t)0x00000006u)
#define GPIOF_GPIOPCTL_PCM0_T0CCP0   ((uint32_t)0x00000007u)
#define GPIOF_GPIOPCTL_PCM0_NMI      ((uint32_t)0x00000008u)
#define GPIOF_GPIOPCTL_PCM0_C0o      ((uint32_t)0x00000009u)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM1_MASK    ((uint32_t)0x000000F0u)
#define GPIOF_GPIOPCTL_R_PCM1_BIT     (4u)
#define GPIOF_GPIOPCTL_R_PCM1_GPIO    ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_R_PCM1_U1CTS   ((uint32_t)0x00000010u)
#define GPIOF_GPIOPCTL_R_PCM1_SSI1Tx  ((uint32_t)0x00000020u)
#define GPIOF_GPIOPCTL_R_PCM1_M1PWM5  ((uint32_t)0x00000050u)
#define GPIOF_GPIOPCTL_R_PCM1_PhB0    ((uint32_t)0x00000060u)
#define GPIOF_GPIOPCTL_R_PCM1_T0CCP1  ((uint32_t)0x00000070u)
#define GPIOF_GPIOPCTL_R_PCM1_C1o     ((uint32_t)0x00000090u)
#define GPIOF_GPIOPCTL_R_PCM1_TRD1    ((uint32_t)0x000000E0u)

#define GPIOF_GPIOPCTL_PCM1_MASK     ((uint32_t)0x0000000Fu)
#define GPIOF_GPIOPCTL_PCM1_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_PCM1_U1CTS    ((uint32_t)0x00000001u)
#define GPIOF_GPIOPCTL_PCM1_SSI1Tx   ((uint32_t)0x00000002u)
#define GPIOF_GPIOPCTL_PCM1_M1PWM5   ((uint32_t)0x00000005u)
#define GPIOF_GPIOPCTL_PCM1_PhB0     ((uint32_t)0x00000006u)
#define GPIOF_GPIOPCTL_PCM1_T0CCP1   ((uint32_t)0x00000007u)
#define GPIOF_GPIOPCTL_PCM1_C1o      ((uint32_t)0x00000009u)
#define GPIOF_GPIOPCTL_PCM1_TRD1     ((uint32_t)0x0000000Eu)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM2_MASK     ((uint32_t)0x00000F00u)
#define GPIOF_GPIOPCTL_R_PCM2_BIT      (8u)
#define GPIOF_GPIOPCTL_R_PCM2_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_R_PCM2_SSI1Clk  ((uint32_t)0x00000200u)
#define GPIOF_GPIOPCTL_R_PCM2_M0FAULT0 ((uint32_t)0x00000400u)
#define GPIOF_GPIOPCTL_R_PCM2_M1PWM6   ((uint32_t)0x00000500u)
#define GPIOF_GPIOPCTL_R_PCM2_T1CCP0   ((uint32_t)0x00000700u)
#define GPIOF_GPIOPCTL_R_PCM2_TRD0     ((uint32_t)0x00000E00u)

#define GPIOF_GPIOPCTL_PCM2_MASK     ((uint32_t)0x0000000Fu)
#define GPIOF_GPIOPCTL_PCM2_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_PCM2_SSI1Clk  ((uint32_t)0x00000002u)
#define GPIOF_GPIOPCTL_PCM2_M0FAULT0 ((uint32_t)0x00000004u)
#define GPIOF_GPIOPCTL_PCM2_M1PWM6   ((uint32_t)0x00000005u)
#define GPIOF_GPIOPCTL_PCM2_T1CCP0   ((uint32_t)0x00000007u)
#define GPIOF_GPIOPCTL_PCM2_TRD0     ((uint32_t)0x0000000Eu)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM3_MASK     ((uint32_t)0x0000F000u)
#define GPIOF_GPIOPCTL_R_PCM3_BIT      (12u)
#define GPIOF_GPIOPCTL_R_PCM3_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_R_PCM3_SSI1Fss  ((uint32_t)0x00002000u)
#define GPIOF_GPIOPCTL_R_PCM3_CAN0Tx   ((uint32_t)0x00003000u)
#define GPIOF_GPIOPCTL_R_PCM3_M1PWM7   ((uint32_t)0x00005000u)
#define GPIOF_GPIOPCTL_R_PCM3_T1CCP1   ((uint32_t)0x00007000u)
#define GPIOF_GPIOPCTL_R_PCM3_TRCLK    ((uint32_t)0x0000E000u)

#define GPIOF_GPIOPCTL_PCM3_MASK     ((uint32_t)0x0000000Fu)
#define GPIOF_GPIOPCTL_PCM3_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_PCM3_SSI1Fss  ((uint32_t)0x00000002u)
#define GPIOF_GPIOPCTL_PCM3_CAN0Tx   ((uint32_t)0x00000003u)
#define GPIOF_GPIOPCTL_PCM3_M1PWM7   ((uint32_t)0x00000005u)
#define GPIOF_GPIOPCTL_PCM3_T1CCP1   ((uint32_t)0x00000007u)
#define GPIOF_GPIOPCTL_PCM3_TRCLK    ((uint32_t)0x0000000Eu)
/*----------*/

/*----------*/
#define GPIOF_GPIOPCTL_R_PCM4_MASK     ((uint32_t)0x000F0000u)
#define GPIOF_GPIOPCTL_R_PCM4_BIT      (16u)
#define GPIOF_GPIOPCTL_R_PCM4_GPIO     ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_R_PCM4_M1FAULT0 ((uint32_t)0x00050000u)
#define GPIOF_GPIOPCTL_R_PCM4_IDX0     ((uint32_t)0x00060000u)
#define GPIOF_GPIOPCTL_R_PCM4_T2CCP0   ((uint32_t)0x00070000u)
#define GPIOF_GPIOPCTL_R_PCM4_USB0EPEN ((uint32_t)0x00080000u)

#define GPIOF_GPIOPCTL_PCM4_MASK      ((uint32_t)0x0000000Fu)
#define GPIOF_GPIOPCTL_PCM4_GPIO      ((uint32_t)0x00000000u)
#define GPIOF_GPIOPCTL_PCM4_M1FAULT0  ((uint32_t)0x00000005u)
#define GPIOF_GPIOPCTL_PCM4_IDX0      ((uint32_t)0x00000006u)
#define GPIOF_GPIOPCTL_PCM4_T2CCP0    ((uint32_t)0x00000007u)
#define GPIOF_GPIOPCTL_PCM4_USB0EPEN  ((uint32_t)0x00000008u)
/*----------*/



/******************************************************************************************
************************************ 23 GPIOADCCTL *********************************************
******************************************************************************************/
/* GPIOA AHB ADCEN*/
#define GPIOA_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOA_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOA_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOA APB ADCEN*/
#define GPIOA_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOA_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOA_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOB AHB ADCEN*/
#define GPIOB_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOB_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOB_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOB APB ADCEN*/
#define GPIOB_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOB_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOB_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOC AHB ADCEN*/
#define GPIOC_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOC_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOC_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOC APB ADCEN*/
#define GPIOC_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOC_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOC_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOD AHB ADCEN*/
#define GPIOD_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOD_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOD_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOD APB ADCEN*/
#define GPIOD_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOD_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOD_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOE AHB ADCEN*/
#define GPIOE_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOE_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOE_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOE APB ADCEN*/
#define GPIOE_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOE_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOE_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOF AHB ADCEN*/
#define GPIOF_AHB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOF_AHB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOF_AHB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOADCCTL_OFFSET)))

/* GPIOF APB ADCEN*/
#define GPIOF_APB_BITBANDING_GPIOADCCTL       (((BITBANDING_GPIOADCCTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u))))
#define GPIOF_APB_GPIOADCCTL                  (((GPIOADCCTL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))
#define GPIOF_APB_GPIOADCCTL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOADCCTL_OFFSET)))


/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIOADCCTL_R_ADCEN_BIT              (0u)
#define GPIO_GPIOADCCTL_R_ADCEN_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIOADCCTL_ADCEN_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIOADCCTL_ADCEN_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_R_ADCEN0_BIT             (0u)
#define GPIO_GPIOADCCTL_R_ADCEN0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIOADCCTL_ADCEN0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIOADCCTL_R_ADCEN1_BIT             (1u)
#define GPIO_GPIOADCCTL_R_ADCEN1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIOADCCTL_ADCEN1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIOADCCTL_R_ADCEN2_BIT             (2u)
#define GPIO_GPIOADCCTL_R_ADCEN2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIOADCCTL_ADCEN2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIOADCCTL_R_ADCEN3_BIT             (3u)
#define GPIO_GPIOADCCTL_R_ADCEN3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIOADCCTL_ADCEN3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIOADCCTL_R_ADCEN4_BIT             (4u)
#define GPIO_GPIOADCCTL_R_ADCEN4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIOADCCTL_ADCEN4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIOADCCTL_R_ADCEN5_BIT             (5u)
#define GPIO_GPIOADCCTL_R_ADCEN5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIOADCCTL_ADCEN5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIOADCCTL_R_ADCEN6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIOADCCTL_R_ADCEN6_BIT             (6u)
#define GPIO_GPIOADCCTL_R_ADCEN6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIOADCCTL_ADCEN6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/

#define GPIO_GPIOADCCTL_R_ADCEN7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIOADCCTL_R_ADCEN7_BIT             (7u)
#define GPIO_GPIOADCCTL_R_ADCEN7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_R_ADCEN7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIOADCCTL_ADCEN7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIOADCCTL_ADCEN7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIOADCCTL_ADCEN7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB ADCEN BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOA APB ADCEN BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOB AHB ADCEN BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOB APB ADCEN BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOC AHB ADCEN BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOC APB ADCEN BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOD AHB ADCEN BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOD APB ADCEN BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOE AHB ADCEN BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOE APB ADCEN BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOF AHB ADCEN BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))

/* GPIOF APB ADCEN BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIOADCCTL_ADCEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOADCCTL_OFFSET)*32u)+(GPIO_GPIOADCCTL_R_ADCEN7_BIT*4u))))



/******************************************************************************************
************************************ 24 GPIODMACTL *********************************************
******************************************************************************************/
/* GPIOA AHB DMAEN*/
#define GPIOA_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOA_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOA_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOA APB DMAEN*/
#define GPIOA_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOA_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOA_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOB AHB DMAEN*/
#define GPIOB_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOB_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOB_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOB APB DMAEN*/
#define GPIOB_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOB_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOB_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOC AHB DMAEN*/
#define GPIOC_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOC_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOC_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOC APB DMAEN*/
#define GPIOC_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOC_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOC_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOD AHB DMAEN*/
#define GPIOD_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOD_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOD_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOD APB DMAEN*/
#define GPIOD_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOD_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOD_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOE AHB DMAEN*/
#define GPIOE_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOE_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOE_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOE APB DMAEN*/
#define GPIOE_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOE_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOE_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOF AHB DMAEN*/
#define GPIOF_AHB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOF_AHB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOF_AHB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIODMACTL_OFFSET)))

/* GPIOF APB DMAEN*/
#define GPIOF_APB_BITBANDING_GPIODMACTL       (((BITBANDING_GPIODMACTL_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u))))
#define GPIOF_APB_GPIODMACTL                  (((GPIODMACTL_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIODMACTL_OFFSET)))
#define GPIOF_APB_GPIODMACTL_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIODMACTL_OFFSET)))


/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN_MASK             ((uint32_t)0x000000FFu)
#define GPIO_GPIODMACTL_R_DMAEN_BIT              (0u)
#define GPIO_GPIODMACTL_R_DMAEN_DIS              ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN_EN               ((uint32_t)0x000000FFu)

#define GPIO_GPIODMACTL_DMAEN_MASK               ((uint32_t)0x000000FFu)
#define GPIO_GPIODMACTL_DMAEN_DIS                ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN_EN                 ((uint32_t)0x000000FFu)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN0_MASK            ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_R_DMAEN0_BIT             (0u)
#define GPIO_GPIODMACTL_R_DMAEN0_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN0_EN              ((uint32_t)0x00000001u)

#define GPIO_GPIODMACTL_DMAEN0_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN0_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN0_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN1_MASK            ((uint32_t)0x00000002u)
#define GPIO_GPIODMACTL_R_DMAEN1_BIT             (1u)
#define GPIO_GPIODMACTL_R_DMAEN1_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN1_EN              ((uint32_t)0x00000002u)

#define GPIO_GPIODMACTL_DMAEN1_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN1_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN1_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN2_MASK            ((uint32_t)0x00000004u)
#define GPIO_GPIODMACTL_R_DMAEN2_BIT             (2u)
#define GPIO_GPIODMACTL_R_DMAEN2_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN2_EN              ((uint32_t)0x00000004u)

#define GPIO_GPIODMACTL_DMAEN2_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN2_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN2_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN3_MASK            ((uint32_t)0x00000008u)
#define GPIO_GPIODMACTL_R_DMAEN3_BIT             (3u)
#define GPIO_GPIODMACTL_R_DMAEN3_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN3_EN              ((uint32_t)0x00000008u)

#define GPIO_GPIODMACTL_DMAEN3_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN3_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN3_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN4_MASK            ((uint32_t)0x00000010u)
#define GPIO_GPIODMACTL_R_DMAEN4_BIT             (4u)
#define GPIO_GPIODMACTL_R_DMAEN4_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN4_EN              ((uint32_t)0x00000010u)

#define GPIO_GPIODMACTL_DMAEN4_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN4_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN4_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN5_MASK            ((uint32_t)0x00000020u)
#define GPIO_GPIODMACTL_R_DMAEN5_BIT             (5u)
#define GPIO_GPIODMACTL_R_DMAEN5_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN5_EN              ((uint32_t)0x00000020u)

#define GPIO_GPIODMACTL_DMAEN5_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN5_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN5_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/
#define GPIO_GPIODMACTL_R_DMAEN6_MASK            ((uint32_t)0x00000040u)
#define GPIO_GPIODMACTL_R_DMAEN6_BIT             (6u)
#define GPIO_GPIODMACTL_R_DMAEN6_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN6_EN              ((uint32_t)0x00000040u)

#define GPIO_GPIODMACTL_DMAEN6_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN6_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN6_EN                ((uint32_t)0x00000001u)
/*----------*/

/*----------*/

#define GPIO_GPIODMACTL_R_DMAEN7_MASK            ((uint32_t)0x00000080u)
#define GPIO_GPIODMACTL_R_DMAEN7_BIT             (7u)
#define GPIO_GPIODMACTL_R_DMAEN7_DIS             ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_R_DMAEN7_EN              ((uint32_t)0x00000080u)

#define GPIO_GPIODMACTL_DMAEN7_MASK              ((uint32_t)0x00000001u)
#define GPIO_GPIODMACTL_DMAEN7_DIS               ((uint32_t)0x00000000u)
#define GPIO_GPIODMACTL_DMAEN7_EN                ((uint32_t)0x00000001u)
/*----------*/


/* GPIOA AHB DMAEN BITBANDING*/
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOA_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOA APB DMAEN BITBANDING*/
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOA_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOB AHB DMAEN BITBANDING*/
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOB_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOB APB DMAEN BITBANDING*/
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOB_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOC AHB DMAEN BITBANDING*/
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOC_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOC APB DMAEN BITBANDING*/
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOC_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOD AHB DMAEN BITBANDING*/
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOD_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOD APB DMAEN BITBANDING*/
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOD_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOE AHB DMAEN BITBANDING*/
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOE_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOE APB DMAEN BITBANDING*/
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOE_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOF AHB DMAEN BITBANDING*/
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOF_AHB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))

/* GPIOF APB DMAEN BITBANDING*/
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN0         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN0_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN1         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN1_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN2         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN2_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN3         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN3_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN4         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN4_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN5         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN5_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN6         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN6_BIT*4u))))
#define GPIOF_APB_BITBANDING_GPIODMACTL_DMAEN7         (*((volatile uint32_t *)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIODMACTL_OFFSET)*32u)+(GPIO_GPIODMACTL_R_DMAEN7_BIT*4u))))



/******************************************************************************************
************************************ 25 GPIOPeriphID4 *********************************************
******************************************************************************************/
/* GPIOA AHB PID4*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOA APB PID4*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOA_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOB AHB PID4*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOB APB PID4*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOB_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOC AHB PID4*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOC APB PID4*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOC_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOD AHB PID4*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOD APB PID4*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOD_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOE AHB PID4*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOE APB PID4*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOE_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOF AHB PID4*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID4_OFFSET)))

/* GPIOF APB PID4*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID4       (((BITBANDING_GPIOPeriphID4_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID4_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID4                  (((GPIOPeriphID4_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))
#define GPIOF_APB_GPIOPeriphID4_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID4_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID4_R_PID4_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID4_R_PID4_BIT      (0u)
#define GPIO_GPIOPeriphID4_R_PID4_DEFAULT  ((uint32_t)0x00000000u)

#define GPIO_GPIOPeriphID4_PID4_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID4_PID4_DEFAULT    ((uint32_t)0x00000000u)
/*----------*/



/******************************************************************************************
************************************ 26 GPIOPeriphID5 *********************************************
******************************************************************************************/
/* GPIOA AHB PID5*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOA APB PID5*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOA_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOB AHB PID5*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOB APB PID5*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOB_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOC AHB PID5*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOC APB PID5*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOC_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOD AHB PID5*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOD APB PID5*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOD_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOE AHB PID5*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOE APB PID5*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOE_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOF AHB PID5*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID5_OFFSET)))

/* GPIOF APB PID5*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID5       (((BITBANDING_GPIOPeriphID5_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID5_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID5                  (((GPIOPeriphID5_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))
#define GPIOF_APB_GPIOPeriphID5_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID5_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID5_R_PID5_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID5_R_PID5_BIT      (0u)
#define GPIO_GPIOPeriphID5_R_PID5_DEFAULT  ((uint32_t)0x00000000u)

#define GPIO_GPIOPeriphID5_PID5_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID5_PID5_DEFAULT    ((uint32_t)0x00000000u)
/*----------*/


/******************************************************************************************
************************************ 27 GPIOPeriphID6 *********************************************
******************************************************************************************/
/* GPIOA AHB PID6*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOA APB PID6*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOA_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOB AHB PID6*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOB APB PID6*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOB_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOC AHB PID6*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOC APB PID6*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOC_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOD AHB PID6*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOD APB PID6*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOD_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOE AHB PID6*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOE APB PID6*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOE_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOF AHB PID6*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID6_OFFSET)))

/* GPIOF APB PID6*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID6       (((BITBANDING_GPIOPeriphID6_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID6_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID6                  (((GPIOPeriphID6_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))
#define GPIOF_APB_GPIOPeriphID6_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID6_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID6_R_PID6_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID6_R_PID6_BIT      (0u)
#define GPIO_GPIOPeriphID6_R_PID6_DEFAULT  ((uint32_t)0x00000000u)

#define GPIO_GPIOPeriphID6_PID6_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID6_PID6_DEFAULT    ((uint32_t)0x00000000u)
/*----------*/



/******************************************************************************************
************************************ 28 GPIOPeriphID7 *********************************************
******************************************************************************************/
/* GPIOA AHB PID7*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOA APB PID7*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOA_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOB AHB PID7*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOB APB PID7*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOB_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOC AHB PID7*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOC APB PID7*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOC_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOD AHB PID7*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOD APB PID7*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOD_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOE AHB PID7*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOE APB PID7*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOE_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOF AHB PID7*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID7_OFFSET)))

/* GPIOF APB PID7*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID7       (((BITBANDING_GPIOPeriphID7_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID7_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID7                  (((GPIOPeriphID7_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))
#define GPIOF_APB_GPIOPeriphID7_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID7_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID7_R_PID7_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID7_R_PID7_BIT      (0u)
#define GPIO_GPIOPeriphID7_R_PID7_DEFAULT  ((uint32_t)0x00000000u)

#define GPIO_GPIOPeriphID7_PID7_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID7_PID7_DEFAULT    ((uint32_t)0x00000000u)
/*----------*/

/******************************************************************************************
************************************ 29 GPIOPeriphID0 *********************************************
******************************************************************************************/
/* GPIOA AHB PID0*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOA APB PID0*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOA_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOB AHB PID0*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOB APB PID0*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOB_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOC AHB PID0*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOC APB PID0*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOC_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOD AHB PID0*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOD APB PID0*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOD_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOE AHB PID0*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOE APB PID0*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOE_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOF AHB PID0*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID0_OFFSET)))

/* GPIOF APB PID0*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID0       (((BITBANDING_GPIOPeriphID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID0_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID0                  (((GPIOPeriphID0_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))
#define GPIOF_APB_GPIOPeriphID0_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID0_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID0_R_PID0_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID0_R_PID0_BIT      (0u)
#define GPIO_GPIOPeriphID0_R_PID0_DEFAULT  ((uint32_t)0x00000061u)

#define GPIO_GPIOPeriphID0_PID0_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID0_PID0_DEFAULT    ((uint32_t)0x00000061u)
/*----------*/


/******************************************************************************************
************************************ 30 GPIOPeriphID1 *********************************************
******************************************************************************************/
/* GPIOA AHB PID1*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOA APB PID1*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOA_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOB AHB PID1*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOB APB PID1*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOB_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOC AHB PID1*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOC APB PID1*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOC_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOD AHB PID1*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOD APB PID1*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOD_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOE AHB PID1*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOE APB PID1*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOE_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOF AHB PID1*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID1_OFFSET)))

/* GPIOF APB PID1*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID1       (((BITBANDING_GPIOPeriphID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID1_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID1                  (((GPIOPeriphID1_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))
#define GPIOF_APB_GPIOPeriphID1_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID1_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID1_R_PID1_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID1_R_PID1_BIT      (0u)
#define GPIO_GPIOPeriphID1_R_PID1_DEFAULT  ((uint32_t)0x00000000u)

#define GPIO_GPIOPeriphID1_PID1_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID1_PID1_DEFAULT    ((uint32_t)0x00000000u)
/*----------*/


/******************************************************************************************
************************************ 31 GPIOPeriphID2 *********************************************
******************************************************************************************/
/* GPIOA AHB PID2*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOA APB PID2*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOA_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOB AHB PID2*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOB APB PID2*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOB_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOC AHB PID2*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOC APB PID2*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOC_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOD AHB PID2*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOD APB PID2*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOD_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOE AHB PID2*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOE APB PID2*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOE_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOF AHB PID2*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID2_OFFSET)))

/* GPIOF APB PID2*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID2       (((BITBANDING_GPIOPeriphID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID2_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID2                  (((GPIOPeriphID2_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))
#define GPIOF_APB_GPIOPeriphID2_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID2_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID2_R_PID2_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID2_R_PID2_BIT      (0u)
#define GPIO_GPIOPeriphID2_R_PID2_DEFAULT  ((uint32_t)0x00000018u)

#define GPIO_GPIOPeriphID2_PID2_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID2_PID2_DEFAULT    ((uint32_t)0x00000018u)
/*----------*/



/******************************************************************************************
************************************ 32 GPIOPeriphID3 *********************************************
******************************************************************************************/
/* GPIOA AHB PID3*/
#define GPIOA_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOA_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOA_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOA APB PID3*/
#define GPIOA_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOA_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOA_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOB AHB PID3*/
#define GPIOB_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOB_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOB_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOB APB PID3*/
#define GPIOB_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOB_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOB_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOC AHB PID3*/
#define GPIOC_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOC_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOC_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOC APB PID3*/
#define GPIOC_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOC_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOC_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOD AHB PID3*/
#define GPIOD_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOD_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOD_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOD APB PID3*/
#define GPIOD_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOD_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOD_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOE AHB PID3*/
#define GPIOE_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOE_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOE_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOE APB PID3*/
#define GPIOE_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOE_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOE_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOF AHB PID3*/
#define GPIOF_AHB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOF_AHB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOF_AHB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOPeriphID3_OFFSET)))

/* GPIOF APB PID3*/
#define GPIOF_APB_BITBANDING_GPIOPeriphID3       (((BITBANDING_GPIOPeriphID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOPeriphID3_OFFSET)*32u))))
#define GPIOF_APB_GPIOPeriphID3                  (((GPIOPeriphID3_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))
#define GPIOF_APB_GPIOPeriphID3_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOPeriphID3_OFFSET)))


/*----------*/
#define GPIO_GPIOPeriphID3_R_PID3_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID3_R_PID3_BIT      (0u)
#define GPIO_GPIOPeriphID3_R_PID3_DEFAULT  ((uint32_t)0x00000001u)

#define GPIO_GPIOPeriphID3_PID3_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPeriphID3_PID3_DEFAULT    ((uint32_t)0x00000001u)
/*----------*/


/******************************************************************************************
************************************ 33 GPIOCellID0 *********************************************
******************************************************************************************/
/* GPIOA AHB CID0*/
#define GPIOA_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOA_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOA_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOA APB CID0*/
#define GPIOA_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOA_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOA_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOB AHB CID0*/
#define GPIOB_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOB_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOB_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOB APB CID0*/
#define GPIOB_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOB_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOB_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOC AHB CID0*/
#define GPIOC_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOC_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOC_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOC APB CID0*/
#define GPIOC_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOC_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOC_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOD AHB CID0*/
#define GPIOD_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOD_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOD_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOD APB CID0*/
#define GPIOD_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOD_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOD_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOE AHB CID0*/
#define GPIOE_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOE_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOE_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOE APB CID0*/
#define GPIOE_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOE_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOE_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOF AHB CID0*/
#define GPIOF_AHB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOF_AHB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOF_AHB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID0_OFFSET)))

/* GPIOF APB CID0*/
#define GPIOF_APB_BITBANDING_GPIOCellID0       (((BITBANDING_GPIOCellID0_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID0_OFFSET)*32u))))
#define GPIOF_APB_GPIOCellID0                  (((GPIOCellID0_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID0_OFFSET)))
#define GPIOF_APB_GPIOCellID0_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID0_OFFSET)))


/*----------*/
#define GPIO_GPIOPCellID0_R_CID0_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID0_R_CID0_BIT      (0u)
#define GPIO_GPIOPCellID0_R_CID0_DEFAULT  ((uint32_t)0x0000000Du)

#define GPIO_GPIOPCellID0_CID0_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID0_CID0_DEFAULT    ((uint32_t)0x0000000Du)
/*----------*/


/******************************************************************************************
************************************ 34 GPIOCellID1 *********************************************
******************************************************************************************/
/* GPIOA AHB CID1*/
#define GPIOA_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOA_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOA_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOA APB CID1*/
#define GPIOA_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOA_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOA_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOB AHB CID1*/
#define GPIOB_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOB_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOB_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOB APB CID1*/
#define GPIOB_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOB_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOB_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOC AHB CID1*/
#define GPIOC_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOC_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOC_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOC APB CID1*/
#define GPIOC_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOC_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOC_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOD AHB CID1*/
#define GPIOD_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOD_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOD_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOD APB CID1*/
#define GPIOD_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOD_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOD_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOE AHB CID1*/
#define GPIOE_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOE_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOE_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOE APB CID1*/
#define GPIOE_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOE_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOE_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOF AHB CID1*/
#define GPIOF_AHB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOF_AHB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOF_AHB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID1_OFFSET)))

/* GPIOF APB CID1*/
#define GPIOF_APB_BITBANDING_GPIOCellID1       (((BITBANDING_GPIOCellID1_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID1_OFFSET)*32u))))
#define GPIOF_APB_GPIOCellID1                  (((GPIOCellID1_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID1_OFFSET)))
#define GPIOF_APB_GPIOCellID1_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID1_OFFSET)))


/*----------*/
#define GPIO_GPIOPCellID1_R_CID1_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID1_R_CID1_BIT      (0u)
#define GPIO_GPIOPCellID1_R_CID1_DEFAULT  ((uint32_t)0x000000F0u)

#define GPIO_GPIOPCellID1_CID1_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID1_CID1_DEFAULT    ((uint32_t)0x000000F0u)
/*----------*/



/******************************************************************************************
************************************ 35 GPIOCellID2 *********************************************
******************************************************************************************/
/* GPIOA AHB CID2*/
#define GPIOA_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOA_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOA_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOA APB CID2*/
#define GPIOA_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOA_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOA_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOB AHB CID2*/
#define GPIOB_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOB_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOB_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOB APB CID2*/
#define GPIOB_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOB_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOB_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOC AHB CID2*/
#define GPIOC_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOC_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOC_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOC APB CID2*/
#define GPIOC_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOC_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOC_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOD AHB CID2*/
#define GPIOD_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOD_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOD_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOD APB CID2*/
#define GPIOD_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOD_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOD_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOE AHB CID2*/
#define GPIOE_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOE_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOE_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOE APB CID2*/
#define GPIOE_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOE_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOE_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOF AHB CID2*/
#define GPIOF_AHB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOF_AHB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOF_AHB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID2_OFFSET)))

/* GPIOF APB CID2*/
#define GPIOF_APB_BITBANDING_GPIOCellID2       (((BITBANDING_GPIOCellID2_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID2_OFFSET)*32u))))
#define GPIOF_APB_GPIOCellID2                  (((GPIOCellID2_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID2_OFFSET)))
#define GPIOF_APB_GPIOCellID2_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID2_OFFSET)))


/*----------*/
#define GPIO_GPIOPCellID2_R_CID2_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID2_R_CID2_BIT      (0u)
#define GPIO_GPIOPCellID2_R_CID2_DEFAULT  ((uint32_t)0x00000005u)

#define GPIO_GPIOPCellID2_CID2_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID2_CID2_DEFAULT    ((uint32_t)0x00000005u)
/*----------*/



/******************************************************************************************
************************************ 36 GPIOCellID3 *********************************************
******************************************************************************************/
/* GPIOA AHB CID3*/
#define GPIOA_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOA_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOA_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOA_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOA_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOA APB CID3*/
#define GPIOA_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOA_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOA_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOA_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOA_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOA_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOB AHB CID3*/
#define GPIOB_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOB_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOB_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOB_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOB_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOB APB CID3*/
#define GPIOB_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOB_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOB_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOB_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOB_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOB_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOC AHB CID3*/
#define GPIOC_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOC_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOC_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOC_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOC_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOC APB CID3*/
#define GPIOC_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOC_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOC_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOC_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOC_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOC_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOD AHB CID3*/
#define GPIOD_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOD_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOD_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOD_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOD_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOD APB CID3*/
#define GPIOD_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOD_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOD_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOD_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOD_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOD_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOE AHB CID3*/
#define GPIOE_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOE_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOE_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOE_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOE_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOE APB CID3*/
#define GPIOE_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOE_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOE_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOE_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOE_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOE_APB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOF AHB CID3*/
#define GPIOF_AHB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_AHB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOF_AHB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOF_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOF_AHB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOF_AHB_BASE+GPIO_GPIOCellID3_OFFSET)))

/* GPIOF APB CID3*/
#define GPIOF_APB_BITBANDING_GPIOCellID3       (((BITBANDING_GPIOCellID3_TypeDef*)(GPIO_BITBANDING_BASE+((GPIOF_APB_OFFSET+GPIO_GPIOCellID3_OFFSET)*32u))))
#define GPIOF_APB_GPIOCellID3                  (((GPIOCellID3_TypeDef*)     (GPIOF_APB_BASE+GPIO_GPIOCellID3_OFFSET)))
#define GPIOF_APB_GPIOCellID3_R                (*((volatile uint32_t *)  (GPIOF_APB_BASE+GPIO_GPIOCellID3_OFFSET)))


/*----------*/
#define GPIO_GPIOPCellID3_R_CID3_MASK     ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID3_R_CID3_BIT      (0u)
#define GPIO_GPIOPCellID3_R_CID3_DEFAULT  ((uint32_t)0x000000B1u)

#define GPIO_GPIOPCellID3_CID3_MASK       ((uint32_t)0x000000FFu)
#define GPIO_GPIOPCellID3_CID3_DEFAULT    ((uint32_t)0x000000B1u)
/*----------*/

typedef enum
{
    GPIO_enOK=0u,
    GPIO_enERROR=1u,
    GPIO_enSTATUS_UNDEF=0xFFu,
}GPIO_nSTATUS;

typedef enum
{
    GPIO_enINT_NOOCCUR=0u,
    GPIO_enINT_OCCUR=1u,
    GPIO_enINT_STATUS_UNDEF=0xFFu,
}GPIO_nINT_STATUS;

typedef enum
{
    GPIO_enNOREADY=0u,
    GPIO_enREADY=1u,
}GPIO_nREADY;

typedef enum
{
    GPIO_enAPB=0u,
    GPIO_enAHB=1u,
}GPIO_nBUS;
typedef enum
{
    GPIO_enPORTA=0u,
    GPIO_enPORTB=1u,
    GPIO_enPORTC=2u,
    GPIO_enPORTD=3u,
    GPIO_enPORTE=4u,
    GPIO_enPORTF=5u,
    GPIO_enMAX=5u,
}GPIO_nPORT;
typedef enum
{
    GPIO_enPIN0=0x1u,
    GPIO_enPIN1=0x2u,
    GPIO_enPIN2=0x4u,
    GPIO_enPIN3=0x8u,
    GPIO_enPIN4=0x10u,
    GPIO_enPIN5=0x20u,
    GPIO_enPIN6=0x40u,
    GPIO_enPIN7=0x80u,
    GPIO_enALL=0xFFu,
}GPIO_nPIN;

typedef enum
{
    GPIO_enDIR_INPUT=0u,
    GPIO_enDIR_OUTPUT=1u,
    GPIO_enDIR_UNDEF=0xFFu,
}GPIO_nDIR;

typedef enum
{
    GPIO_enSENSE_EDGE=0u,
    GPIO_enSENSE_LEVEL=1u,
    GPIO_enSENSE_UNDEF=0xFFu,
}GPIO_nSENSE;

typedef enum
{
    GPIO_enEDGE_FALLING=0u,
    GPIO_enEDGE_RISING=1u,
    GPIO_enEDGE_BOTH=2u,
    GPIO_enEDGE_UNDEF=0xFFu,
}GPIO_nEDGE;

typedef enum
{
    GPIO_enDRIVE_2mA=0u,
    GPIO_enDRIVE_4mA=1u,
    GPIO_enDRIVE_8mA=2u,
    GPIO_enDRIVE_8mA_SLR=(((uint32_t)1u<<8u)|2u),
    GPIO_enDRIVE_UNDEF=0xFFu,
}GPIO_nDRIVE;

typedef enum
{
    GPIO_enLEVEL_LOW=0u,
    GPIO_enLEVEL_HIGH=1u,
    GPIO_enLEVEL_UNDEF=0xFFu,
}GPIO_nLEVEL;

typedef enum
{
    GPIO_enOUTMODE_PP=0u,
    GPIO_enOUTMODE_OD=1u,
    GPIO_enOUTMODE_UNDEF=0xFFu,
}GPIO_nOUTMODE;
typedef enum
{
    GPIO_enRESMODE_INACTIVE=0u,
    GPIO_enRESMODE_PULLUP=1u,
    GPIO_enRESMODE_PULLDOWN=2u,
    GPIO_enRESMODE_UNDEF=0xFFu,
}GPIO_nRESMODE;


/*PORT PIN VALUE*/
typedef enum
{
    /*GPIOA*/
    GPIO_enGPIOA0   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU0Rx     =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enCAN1Rx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)0u*4u)<<8u)|(8u)),

    GPIO_enGPIOA1   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU0Tx     =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enCAN1Tx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)1u*4u)<<8u)|(8u)),

    GPIO_enGPIOA2   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enSSI0Clk  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)2u*4u)<<8u)|(2u)),

    GPIO_enGPIOA3   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enSSI0Fss  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)3u*4u)<<8u)|(2u)),

    GPIO_enGPIOA4   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enSSI0Rx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)4u*4u)<<8u)|(2u)),

    GPIO_enGPIOA5   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enSSI0Tx   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)5u*4u)<<8u)|(2u)),

    GPIO_enGPIOA6   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enI2C1SCL  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)6u*4u)<<8u)|(3u)),
    GPIO_enM1PWM2   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)6u*4u)<<8u)|(5u)),

    GPIO_enGPIOA7   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enI2C1SDA  =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)7u*4u)<<8u)|(3u)),
    GPIO_enM1PWM3   =(uint32_t)(((uint32_t)0u<<16u)|(((uint32_t)7u*4u)<<8u)|(5u)),

    /*GPIOB*/
    GPIO_enGPIOB0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU1Rx     =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enT2CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),

    GPIO_enGPIOB1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU1Tx     =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enT2CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),

    GPIO_enGPIOB2   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enI2C0SCL  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)2u*4u)<<8u)|(3u)),
    GPIO_enT3CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),

    GPIO_enGPIOB3   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enI2C0SDA  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)3u*4u)<<8u)|(3u)),
    GPIO_enT3CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),

    GPIO_enGPIOB4   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enSSI2Clk  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(2u)),
    GPIO_enM0PWM2   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(4u)),
    GPIO_enT1CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),
    GPIO_enCAN0Rx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOB5   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enSSI2Fss  =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(2u)),
    GPIO_enM0PWM3   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(4u)),
    GPIO_enT1CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(7u)),
    GPIO_enCAN0Tx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)5u*4u)<<8u)|(8u)),

    GPIO_enGPIOB6   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enSSI2Rx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(2u)),
    GPIO_enM0PWM0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(4u)),
    GPIO_enT0CCP0   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)6u*4u)<<8u)|(7u)),

    GPIO_enGPIOB7   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enSSI2Tx   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(2u)),
    GPIO_enM0PWM1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(4u)),
    GPIO_enT0CCP1   =(uint32_t)(((uint32_t)1u<<16u)|(((uint32_t)7u*4u)<<8u)|(7u)),

    /*GPIOC*/
    GPIO_enGPIOC0    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enTCK       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enT4CCP0    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),

    GPIO_enGPIOC1    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enTMS       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enT4CCP1    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),

    GPIO_enGPIOC2    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enTDI       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)2u*4u)<<8u)|(1u)),
    GPIO_enT5CCP0    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),

    GPIO_enGPIOC3    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enTDO       =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)3u*4u)<<8u)|(1u)),
    GPIO_enT5CCP1    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),

    GPIO_enGPIOC4    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enU4Rx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(1u)),
    GPIO_enU1Rx_C4   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(2u)),
    GPIO_enM0PWM6    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(4u)),
    GPIO_enIDX1      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(6u)),
    GPIO_enWT0CCP0   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),
    GPIO_enU1RTS     =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOC5    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enU4Tx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(1u)),
    GPIO_enU1Tx_C4   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(2u)),
    GPIO_enM0PWM7    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(4u)),
    GPIO_enPhA1      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(6u)),
    GPIO_enWT0CCP1   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(7u)),
    GPIO_enU1CTS     =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)5u*4u)<<8u)|(8u)),

    GPIO_enGPIOC6    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enU3Rx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(1u)),
    GPIO_enPhB1      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(6u)),
    GPIO_enWT1CCP0   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(7u)),
    GPIO_enUSB0EPEN  =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)6u*4u)<<8u)|(8u)),

    GPIO_enGPIOC7    =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enU3Tx      =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(1u)),
    GPIO_enWT1CCP1   =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(7u)),
    GPIO_enUSB0PFLT  =(uint32_t)(((uint32_t)2u<<16u)|(((uint32_t)7u*4u)<<8u)|(8u)),

    /*GPIOD*/
    GPIO_enGPIOD0    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enSSI3Clk   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enSSI1Clk   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(2u)),
    GPIO_enI2C3SCL   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(3u)),
    GPIO_enM0PWM6_D0 =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(4u)),
    GPIO_enM1PWM0    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(5u)),
    GPIO_enWT2CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),

    GPIO_enGPIOD1    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enSSI3Fss   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enSSI1Fss   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(2u)),
    GPIO_enI2C3SDA   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(3u)),
    GPIO_enM0PWM7_D1 =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(4u)),
    GPIO_enM1PWM1    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(5u)),
    GPIO_enWT2CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),

    GPIO_enGPIOD2    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enSSI3Rx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(1u)),
    GPIO_enSSI1Rx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(2u)),
    GPIO_enM0FAULT0  =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(4u)),
    GPIO_enWT3CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),
    GPIO_enUSB0EPEN_D2=(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)2u*4u)<<8u)|(8u)),

    GPIO_enGPIOD3    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enSSI3Tx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(1u)),
    GPIO_enSSI1Tx    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(2u)),
    GPIO_enIDX0      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(6u)),
    GPIO_enWT3CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),
    GPIO_enUSB0PFLT_D3=(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)3u*4u)<<8u)|(8u)),

    GPIO_enGPIOD4    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enU6Rx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)4u*4u)<<8u)|(1u)),
    GPIO_enWT4CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),

    GPIO_enGPIOD5    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enU6Tx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)5u*4u)<<8u)|(1u)),
    GPIO_enWT4CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)5u*4u)<<8u)|(7u)),

    GPIO_enGPIOD6    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enU2Rx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(1u)),
    GPIO_enM0FAULT0_D6=(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(4u)),
    GPIO_enPhA0      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(6u)),
    GPIO_enWT5CCP0   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)6u*4u)<<8u)|(7u)),

    GPIO_enGPIOD7    =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
    GPIO_enU2Tx      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(1u)),
    GPIO_enPhB0      =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(6u)),
    GPIO_enWT5CCP1   =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(7u)),
    GPIO_enNMI       =(uint32_t)(((uint32_t)3u<<16u)|(((uint32_t)7u*4u)<<8u)|(8u)),

    /*GPIOE*/
    GPIO_enGPIOE0    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU7Rx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),

    GPIO_enGPIOE1    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU7Tx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),

    GPIO_enGPIOE2    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enGPIOE3    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),

    GPIO_enGPIOE4    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enU5Rx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(1u)),
    GPIO_enI2C2SCL   =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(3u)),
    GPIO_enM0PWM4    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(4u)),
    GPIO_enM1PWM2_E4 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(5u)),
    GPIO_enCAN0Rx_E4 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOE5    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enU5Tx      =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(1u)),
    GPIO_enI2C2SDA   =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(3u)),
    GPIO_enM0PWM5    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(4u)),
    GPIO_enM1PWM3_E5 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(5u)),
    GPIO_enCAN0Tx_E5 =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)5u*4u)<<8u)|(8u)),

    GPIO_enGPIOE6    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enGPIOE7    =(uint32_t)(((uint32_t)4u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),

    /*GPIOF*/
    GPIO_enGPIOF0    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(0u)),
    GPIO_enU1RTS_F0  =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(1u)),
    GPIO_enSSI1Rx_F0 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(2u)),
    GPIO_enCAN0Rx_F0 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(3u)),
    GPIO_enM1PWM4    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(5u)),
    GPIO_enPhA0_F0   =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(6u)),
    GPIO_enT0CCP0_F0 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(7u)),
    GPIO_enNMI_F0    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(8u)),
    GPIO_enC0o       =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)0u*4u)<<8u)|(9u)),

    GPIO_enGPIOF1    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(0u)),
    GPIO_enU1CTS_F1  =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(1u)),
    GPIO_enSSI1Tx_F1 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(2u)),
    GPIO_enM1PWM5    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(5u)),
    GPIO_enPhB0_F1   =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(6u)),
    GPIO_enT0CCP1_F1 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(7u)),
    GPIO_enC1o       =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(9u)),
    GPIO_enTRD1      =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)1u*4u)<<8u)|(14u)),

    GPIO_enGPIOF2    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(0u)),
    GPIO_enSSI1Clk_F2=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(2u)),
    GPIO_enM0FAULT0_F2=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(4u)),
    GPIO_enM1PWM6    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(5u)),
    GPIO_enT1CCP0_F2 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(7u)),
    GPIO_enTRD0      =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)2u*4u)<<8u)|(14u)),

    GPIO_enGPIOF3    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(0u)),
    GPIO_enSSI1Fss_F3=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(2u)),
    GPIO_enCAN0Tx_F3 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(3u)),
    GPIO_enM1PWM7    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(5u)),
    GPIO_enT1CCP1_F3 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(7u)),
    GPIO_enTRCLK     =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)3u*4u)<<8u)|(14u)),

    GPIO_enGPIOF4    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(0u)),
    GPIO_enM1FAULT0  =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(5u)),
    GPIO_enIDX0_F4   =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(6u)),
    GPIO_enT2CCP0_F4 =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(7u)),
    GPIO_enUSB0EPEN_F4=(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)4u*4u)<<8u)|(8u)),

    GPIO_enGPIOF5    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)5u*4u)<<8u)|(0u)),
    GPIO_enGPIOF6    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)6u*4u)<<8u)|(0u)),
    GPIO_enGPIOF7    =(uint32_t)(((uint32_t)5u<<16u)|(((uint32_t)7u*4u)<<8u)|(0u)),
}GPIO_nDIGITAL_FUNCTION;

/*PORT PIN*/
typedef enum
{
    GPIO_enUSB0ID=(uint32_t)(((uint32_t)1u<<8u)|(0u)),
    GPIO_enUSB0VBUS=(uint32_t)(((uint32_t)1u<<8u)|(1u)),
    GPIO_enAIN10=(uint32_t)(((uint32_t)1u<<8u)|(4u)),
    GPIO_enAIN11=(uint32_t)(((uint32_t)1u<<8u)|(5u)),

    GPIO_enC1M=(uint32_t)(((uint32_t)2u<<8u)|(4u)),
    GPIO_enC1P=(uint32_t)(((uint32_t)2u<<8u)|(5u)),
    GPIO_enC0P=(uint32_t)(((uint32_t)2u<<8u)|(6u)),
    GPIO_enC0M=(uint32_t)(((uint32_t)2u<<8u)|(7u)),

    GPIO_enAIN7=(uint32_t)(((uint32_t)3u<<8u)|(0u)),
    GPIO_enAIN6=(uint32_t)(((uint32_t)3u<<8u)|(1u)),
    GPIO_enAIN5=(uint32_t)(((uint32_t)3u<<8u)|(2u)),
    GPIO_enAIN4=(uint32_t)(((uint32_t)3u<<8u)|(3u)),
    GPIO_enUSB0DM=(uint32_t)(((uint32_t)3u<<8u)|(4u)),
    GPIO_enUSB0DP=(uint32_t)(((uint32_t)3u<<8u)|(5u)),

    GPIO_enAIN3=(uint32_t)(((uint32_t)4u<<8u)|(0u)),
    GPIO_enAIN2=(uint32_t)(((uint32_t)4u<<8u)|(1u)),
    GPIO_enAIN1=(uint32_t)(((uint32_t)4u<<8u)|(2u)),
    GPIO_enAIN0=(uint32_t)(((uint32_t)4u<<8u)|(3u)),
    GPIO_enAIN9=(uint32_t)(((uint32_t)4u<<8u)|(4u)),
    GPIO_enAIN8=(uint32_t)(((uint32_t)4u<<8u)|(5u)),
}GPIO_nANALOG_FUNCTION;

typedef enum
{
    GPIO_enPRI0=0u,
    GPIO_enPRI1=1u,
    GPIO_enPRI2=2u,
    GPIO_enPRI3=3u,
    GPIO_enPRI4=4u,
    GPIO_enPRI5=5u,
    GPIO_enPRI6=6u,
    GPIO_enPRI7=7u,
    GPIO_enDEFAULT=0xFFu,
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
    GPIO_enCONFIG_UNDEF = 0xFFFFFFFFu,
}GPIO_nCONFIG;

typedef enum
{
    GPIO_enINT_CONFIG_EDGE_FALLING= ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_FALLING<<0),
    GPIO_enINT_CONFIG_EDGE_RISING=  ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_RISING<<0),
    GPIO_enINT_CONFIG_EDGE_BOTH=    ((uint32_t)GPIO_enSENSE_EDGE<<8)  |((uint32_t)GPIO_enEDGE_BOTH<<0),
    GPIO_enINT_CONFIG_LEVEL_LOW=    ((uint32_t)GPIO_enSENSE_LEVEL<<8)  |((uint32_t)GPIO_enLEVEL_LOW<<0),
    GPIO_enINT_CONFIG_LEVEL_HIGH=   ((uint32_t)GPIO_enSENSE_LEVEL<<8)  |((uint32_t)GPIO_enLEVEL_HIGH<<0),
    GPIO_enINT_CONFIG_UNDEF=0xFFFFu,
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
GPIO_nSTATUS GPIO__enSetConfigStruct(GPIO_nPORT enPort, GPIO_nPIN enPin,const GPIO_CONFIG_Typedef* psConfig);

GPIO_nCONFIG GPIO__enGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin, GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psGetConfig(GPIO_nPORT enPort, GPIO_nPIN enPin);


GPIO_nSTATUS GPIO__enSetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction,GPIO_nCONFIG enConfig);
GPIO_nSTATUS GPIO__enSetDigitalConfigStruct(GPIO_nDIGITAL_FUNCTION enFunction,const GPIO_CONFIG_Typedef* psConfig);

GPIO_nCONFIG GPIO__enGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);
void GPIO__vGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction, GPIO_CONFIG_Typedef* psConfig);
GPIO_CONFIG_Typedef* GPIO__psGetDigitalConfig(GPIO_nDIGITAL_FUNCTION enFunction);

void GPIO__vSetAnalogFunction(GPIO_nANALOG_FUNCTION enFunction);

void GPIO__vEnADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisADCTrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);

void GPIO__vEnDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);
void GPIO__vDisDMATrigger(GPIO_nPORT enPort, GPIO_nPIN enPin);



#endif /* GPIO_H_ */
