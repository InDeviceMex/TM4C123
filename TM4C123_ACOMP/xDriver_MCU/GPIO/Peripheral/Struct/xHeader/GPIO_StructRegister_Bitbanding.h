/**
 *
 * @file GPIO_StructRegister_Bitbanding.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 24 jun. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
        volatile uint32_t DATA0;
        volatile uint32_t DATA1;
        volatile uint32_t DATA2;
        volatile uint32_t DATA3;
        volatile uint32_t DATA4;
        volatile uint32_t DATA5;
        volatile uint32_t DATA6;
        volatile uint32_t DATA7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODATA_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL][32UL];
                BITBANDING_GPIODATA_TypeDef DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA [32UL];
                BITBANDING_GPIODATA_TypeDef DATA_Bit;
        };
} BITBANDING_GPIODATA_MASK_TypeDef;

typedef volatile struct
{
        volatile uint32_t DIR0;
        volatile uint32_t DIR1;
        volatile uint32_t DIR2;
        volatile uint32_t DIR3;
        volatile uint32_t DIR4;
        volatile uint32_t DIR5;
        volatile uint32_t DIR6;
        volatile uint32_t DIR7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODIR_TypeDef;

typedef volatile struct
{
        volatile uint32_t IS0;
        volatile uint32_t IS1;
        volatile uint32_t IS2;
        volatile uint32_t IS3;
        volatile uint32_t IS4;
        volatile uint32_t IS5;
        volatile uint32_t IS6;
        volatile uint32_t IS7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIS_TypeDef;

typedef volatile struct
{
        volatile uint32_t IBE0;
        volatile uint32_t IBE1;
        volatile uint32_t IBE2;
        volatile uint32_t IBE3;
        volatile uint32_t IBE4;
        volatile uint32_t IBE5;
        volatile uint32_t IBE6;
        volatile uint32_t IBE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIBE_TypeDef;

typedef volatile struct
{
        volatile uint32_t IEV0;
        volatile uint32_t IEV1;
        volatile uint32_t IEV2;
        volatile uint32_t IEV3;
        volatile uint32_t IEV4;
        volatile uint32_t IEV5;
        volatile uint32_t IEV6;
        volatile uint32_t IEV7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIEV_TypeDef;

typedef volatile struct
{
        volatile uint32_t IME0;
        volatile uint32_t IME1;
        volatile uint32_t IME2;
        volatile uint32_t IME3;
        volatile uint32_t IME4;
        volatile uint32_t IME5;
        volatile uint32_t IME6;
        volatile uint32_t IME7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOIM_TypeDef;

typedef volatile struct
{
        volatile const uint32_t RIS0;
        volatile const uint32_t RIS1;
        volatile const uint32_t RIS2;
        volatile const uint32_t RIS3;
        volatile const uint32_t RIS4;
        volatile const uint32_t RIS5;
        volatile const uint32_t RIS6;
        volatile const uint32_t RIS7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIORIS_TypeDef;

typedef volatile struct
{
        volatile const uint32_t MIS0;
        volatile const uint32_t MIS1;
        volatile const uint32_t MIS2;
        volatile const uint32_t MIS3;
        volatile const uint32_t MIS4;
        volatile const uint32_t MIS5;
        volatile const uint32_t MIS6;
        volatile const uint32_t MIS7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOMIS_TypeDef;

typedef volatile struct
{
        volatile uint32_t IC0;
        volatile uint32_t IC1;
        volatile uint32_t IC2;
        volatile uint32_t IC3;
        volatile uint32_t IC4;
        volatile uint32_t IC5;
        volatile uint32_t IC6;
        volatile uint32_t IC7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOICR_TypeDef;

typedef volatile struct
{
        volatile uint32_t AFSEL0;
        volatile uint32_t AFSEL1;
        volatile uint32_t AFSEL2;
        volatile uint32_t AFSEL3;
        volatile uint32_t AFSEL4;
        volatile uint32_t AFSEL5;
        volatile uint32_t AFSEL6;
        volatile uint32_t AFSEL7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOAFSEL_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV0;
        volatile uint32_t DRV1;
        volatile uint32_t DRV2;
        volatile uint32_t DRV3;
        volatile uint32_t DRV4;
        volatile uint32_t DRV5;
        volatile uint32_t DRV6;
        volatile uint32_t DRV7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODRR_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t DRV [3UL][32UL];
                BITBANDING_GPIODRR_TypeDef DRV_bit [3UL];
        };
} BITBANDING_GPIODRR_ARRAY_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV20;
        volatile uint32_t DRV21;
        volatile uint32_t DRV22;
        volatile uint32_t DRV23;
        volatile uint32_t DRV24;
        volatile uint32_t DRV25;
        volatile uint32_t DRV26;
        volatile uint32_t DRV27;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR2R_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV40;
        volatile uint32_t DRV41;
        volatile uint32_t DRV42;
        volatile uint32_t DRV43;
        volatile uint32_t DRV44;
        volatile uint32_t DRV45;
        volatile uint32_t DRV46;
        volatile uint32_t DRV47;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR4R_TypeDef;

typedef volatile struct
{
        volatile uint32_t DRV80;
        volatile uint32_t DRV81;
        volatile uint32_t DRV82;
        volatile uint32_t DRV83;
        volatile uint32_t DRV84;
        volatile uint32_t DRV85;
        volatile uint32_t DRV86;
        volatile uint32_t DRV87;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODR8R_TypeDef;

typedef volatile struct
{
        volatile uint32_t ODE0;
        volatile uint32_t ODE1;
        volatile uint32_t ODE2;
        volatile uint32_t ODE3;
        volatile uint32_t ODE4;
        volatile uint32_t ODE5;
        volatile uint32_t ODE6;
        volatile uint32_t ODE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOODR_TypeDef;

typedef volatile struct
{
        volatile uint32_t PUE0;
        volatile uint32_t PUE1;
        volatile uint32_t PUE2;
        volatile uint32_t PUE3;
        volatile uint32_t PUE4;
        volatile uint32_t PUE5;
        volatile uint32_t PUE6;
        volatile uint32_t PUE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPUR_TypeDef;

typedef volatile struct
{
        volatile uint32_t PDE0;
        volatile uint32_t PDE1;
        volatile uint32_t PDE2;
        volatile uint32_t PDE3;
        volatile uint32_t PDE4;
        volatile uint32_t PDE5;
        volatile uint32_t PDE6;
        volatile uint32_t PDE7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPDR_TypeDef;

typedef volatile struct
{
        volatile uint32_t SRL0;
        volatile uint32_t SRL1;
        volatile uint32_t SRL2;
        volatile uint32_t SRL3;
        volatile uint32_t SRL4;
        volatile uint32_t SRL5;
        volatile uint32_t SRL6;
        volatile uint32_t SRL7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOSLR_TypeDef;

typedef volatile struct
{
        volatile uint32_t DEN0;
        volatile uint32_t DEN1;
        volatile uint32_t DEN2;
        volatile uint32_t DEN3;
        volatile uint32_t DEN4;
        volatile uint32_t DEN5;
        volatile uint32_t DEN6;
        volatile uint32_t DEN7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODEN_TypeDef;

typedef volatile struct
{
        volatile uint32_t LOCK [32UL];
} BITBANDING_GPIOLOCK_TypeDef;

typedef volatile struct
{
        volatile uint32_t CR0;
        volatile uint32_t CR1;
        volatile uint32_t CR2;
        volatile uint32_t CR3;
        volatile uint32_t CR4;
        volatile uint32_t CR5;
        volatile uint32_t CR6;
        volatile uint32_t CR7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOCR_TypeDef;

typedef volatile struct
{
        volatile uint32_t AMSEL0;
        volatile uint32_t AMSEL1;
        volatile uint32_t AMSEL2;
        volatile uint32_t AMSEL3;
        volatile uint32_t AMSEL4;
        volatile uint32_t AMSEL5;
        volatile uint32_t AMSEL6;
        volatile uint32_t AMSEL7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOAMSEL_TypeDef;

typedef volatile struct
{
        volatile uint32_t PMC0 [4UL];
        volatile uint32_t PMC1 [4UL];
        volatile uint32_t PMC2 [4UL];
        volatile uint32_t PMC3 [4UL];
        volatile uint32_t PMC4 [4UL];
        volatile uint32_t PMC5 [4UL];
        volatile uint32_t PMC6 [4UL];
        volatile uint32_t PMC7 [4UL];
} BITBANDING_GPIOPCTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t ADCEN0;
        volatile uint32_t ADCEN1;
        volatile uint32_t ADCEN2;
        volatile uint32_t ADCEN3;
        volatile uint32_t ADCEN4;
        volatile uint32_t ADCEN5;
        volatile uint32_t ADCEN6;
        volatile uint32_t ADCEN7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIOADCCTL_TypeDef;

typedef volatile struct
{
        volatile uint32_t DMAEN0;
        volatile uint32_t DMAEN1;
        volatile uint32_t DMAEN2;
        volatile uint32_t DMAEN3;
        volatile uint32_t DMAEN4;
        volatile uint32_t DMAEN5;
        volatile uint32_t DMAEN6;
        volatile uint32_t DMAEN7;
        const uint32_t reserved [24UL];
} BITBANDING_GPIODMACTL_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID4 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID4_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID5 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID5_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID6 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID6_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID7 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID7_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID0 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID0_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID1 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID1_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID2 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID2_TypeDef;

typedef volatile struct
{
        volatile const uint32_t PID3 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPeriphID3_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID0 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID0_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID1 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID1_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID2 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID2_TypeDef;

typedef volatile struct
{
        volatile const uint32_t CID3 [8UL];
        const uint32_t reserved [24UL];
} BITBANDING_GPIOPCellID3_TypeDef;

typedef volatile struct
{
        volatile uint32_t P0;
        volatile uint32_t P1;
        volatile uint32_t P2;
        volatile uint32_t P3;
        volatile uint32_t P4;
        volatile uint32_t P5;
        volatile uint32_t P6;
        volatile uint32_t P7;
        const uint32_t reserved [24UL];
} BITBANDING_PINES8_TypeDef;

typedef volatile struct
{
        volatile uint32_t P0;
        volatile uint32_t P1;
        volatile uint32_t P2;
        volatile uint32_t P3;
        volatile uint32_t P4;
        volatile uint32_t P5;
        volatile uint32_t P6;
        volatile uint32_t P7;
        volatile uint32_t P8;
        volatile uint32_t P9;
        volatile uint32_t P10;
        volatile uint32_t P11;
        volatile uint32_t P12;
        volatile uint32_t P13;
        volatile uint32_t P14;
        volatile uint32_t P15;
        const uint32_t reserved [16UL];
} BITBANDING_PINES16_TypeDef;

typedef volatile struct
{
        volatile uint32_t P0;
        volatile uint32_t P1;
        volatile uint32_t P2;
        volatile uint32_t P3;
        volatile uint32_t P4;
        volatile uint32_t P5;
        volatile uint32_t P6;
        volatile uint32_t P7;
        volatile uint32_t P8;
        volatile uint32_t P9;
        volatile uint32_t P10;
        volatile uint32_t P11;
        volatile uint32_t P12;
        volatile uint32_t P13;
        volatile uint32_t P14;
        volatile uint32_t P15;
        volatile uint32_t P16;
        volatile uint32_t P17;
        volatile uint32_t P18;
        volatile uint32_t P19;
        volatile uint32_t P20;
        volatile uint32_t P21;
        volatile uint32_t P22;
        volatile uint32_t P23;
        volatile uint32_t P24;
        volatile uint32_t P25;
        volatile uint32_t P26;
        volatile uint32_t P27;
        volatile uint32_t P28;
        volatile uint32_t P29;
        volatile uint32_t P30;
        volatile uint32_t P31;
} BITBANDING_PINES32_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTREGISTER_BITBANDING_H_ */
