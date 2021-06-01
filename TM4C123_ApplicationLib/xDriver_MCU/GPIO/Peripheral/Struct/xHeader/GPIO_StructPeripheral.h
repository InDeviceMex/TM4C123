/**
 *
 * @file GPIO_StructPeripheral.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructRegister.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL];
                GPIODATA_TypeDef DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIODATA_TypeDef DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR;
                GPIODIR_TypeDef DIR_Bit;
        };
        union
        {
                volatile uint32_t IS;
                GPIOIS_TypeDef IS_Bit;
        };
        union
        {
                volatile uint32_t IBE;
                GPIOIBE_TypeDef IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV;
                GPIOIEV_TypeDef IEV_Bit;
        };
        union
        {
                volatile uint32_t IM;
                GPIOIM_TypeDef IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS;
                GPIORIS_TypeDef RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS;
                GPIOMIS_TypeDef MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR;
                GPIOICR_TypeDef ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL;
                GPIOAFSEL_TypeDef AFSEL_Bit;
        };
        const uint32_t reserved [55UL];
        union
        {
                volatile uint32_t DR2R;
                GPIODR2R_TypeDef DR2R_Bit;
        };
        union
        {
                volatile uint32_t DR4R;
                GPIODR4R_TypeDef DR4R_Bit;
        };
        union
        {
                volatile uint32_t DR8R;
                GPIODR8R_TypeDef DR8R_Bit;
        };
        union
        {
                volatile uint32_t ODR;
                GPIOODR_TypeDef ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR;
                GPIOPUR_TypeDef PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR;
                GPIOPDR_TypeDef PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR;
                GPIOSLR_TypeDef SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN;
                GPIODEN_TypeDef DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK;
                GPIOLOCK_TypeDef LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR;
                GPIOCR_TypeDef CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL;
                GPIOAMSEL_TypeDef AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL;
                GPIOPCTL_TypeDef PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL;
                GPIOADCCTL_TypeDef ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL;
                GPIODMACTL_TypeDef DMACTL_Bit;
        };
        const uint32_t reserved1 [678UL];
        union
        {
                volatile uint32_t PeriphID4;
                GPIOPeriphID4_TypeDef PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5;
                GPIOPeriphID5_TypeDef PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6;
                GPIOPeriphID6_TypeDef PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7;
                GPIOPeriphID7_TypeDef PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0;
                GPIOPeriphID0_TypeDef PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1;
                GPIOPeriphID1_TypeDef PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2;
                GPIOPeriphID2_TypeDef PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3;
                GPIOPeriphID3_TypeDef PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0;
                GPIOPCellID0_TypeDef PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1;
                GPIOPCellID1_TypeDef PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2;
                GPIOPCellID2_TypeDef PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3;
                GPIOPCellID3_TypeDef PCellID3_Bit;
        };
} GPIO_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t DATA_MASK [255UL];
                GPIODATA_TypeDef DATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t DATA;
                GPIODATA_TypeDef DATA_Bit;
        };
        union
        {
                volatile uint32_t DIR;
                GPIODIR_TypeDef DIR_Bit;
        };
        union
        {
                volatile uint32_t IS;
                GPIOIS_TypeDef IS_Bit;
        };
        union
        {
                volatile uint32_t IBE;
                GPIOIBE_TypeDef IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV;
                GPIOIEV_TypeDef IEV_Bit;
        };
        union
        {
                volatile uint32_t IM;
                GPIOIM_TypeDef IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS;
                GPIORIS_TypeDef RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS;
                GPIOMIS_TypeDef MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR;
                GPIOICR_TypeDef ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL;
                GPIOAFSEL_TypeDef AFSEL_Bit;
        };
        const uint32_t reserved [55UL];
        union
        {
                volatile uint32_t DRR [3UL];
                GPIODRR_TypeDef DRR_Bit [3UL];
        };

        union
        {
                volatile uint32_t ODR;
                GPIOODR_TypeDef ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR;
                GPIOPUR_TypeDef PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR;
                GPIOPDR_TypeDef PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR;
                GPIOSLR_TypeDef SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN;
                GPIODEN_TypeDef DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK;
                GPIOLOCK_TypeDef LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR;
                GPIOCR_TypeDef CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL;
                GPIOAMSEL_TypeDef AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL;
                GPIOPCTL_TypeDef PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL;
                GPIOADCCTL_TypeDef ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL;
                GPIODMACTL_TypeDef DMACTL_Bit;
        };
        const uint32_t reserved1 [678UL];
        union
        {
                volatile uint32_t PeriphID4;
                GPIOPeriphID4_TypeDef PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5;
                GPIOPeriphID5_TypeDef PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6;
                GPIOPeriphID6_TypeDef PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7;
                GPIOPeriphID7_TypeDef PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0;
                GPIOPeriphID0_TypeDef PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1;
                GPIOPeriphID1_TypeDef PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2;
                GPIOPeriphID2_TypeDef PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3;
                GPIOPeriphID3_TypeDef PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0;
                GPIOPCellID0_TypeDef PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1;
                GPIOPCellID1_TypeDef PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2;
                GPIOPCellID2_TypeDef PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3;
                GPIOPCellID3_TypeDef PCellID3_Bit;
        };
} GPIO_AUX_TypeDef;

typedef volatile struct
{
        GPIO_TypeDef AHB [(uint32_t) GPIO_enPORT_MAX];
} GPIO_AHB_TypeDef;

typedef volatile struct
{
        GPIO_AUX_TypeDef AHB [(uint32_t) GPIO_enPORT_MAX];
} GPIO_AHB_AUX_TypeDef;

typedef volatile struct
{
        GPIO_TypeDef APB_A;
        GPIO_TypeDef APB_B;
        GPIO_TypeDef APB_C;
        GPIO_TypeDef APB_D;
        const GPIO_TypeDef reserved [28UL];
        GPIO_TypeDef APB_E;
        GPIO_TypeDef APB_F;
} GPIO_APB_TypeDef;

typedef volatile struct
{
        GPIO_AUX_TypeDef APB_A;
        GPIO_AUX_TypeDef APB_B;
        GPIO_AUX_TypeDef APB_C;
        GPIO_AUX_TypeDef APB_D;
        const GPIO_AUX_TypeDef reserved [28UL];
        GPIO_AUX_TypeDef APB_E;
        GPIO_AUX_TypeDef APB_F;
} GPIO_APB_AUX_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_ */
