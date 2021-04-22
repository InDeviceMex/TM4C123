/**
 *
 * @file GPIO_StructPeripheral_Bitbanding.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructRegister_Bitbanding.h>

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
        union
        {
                volatile uint32_t DIR [32UL];
                BITBANDING_GPIODIR_TypeDef DIR_Bit;
        };
        union
        {
                volatile uint32_t IS [32UL];
                BITBANDING_GPIOIS_TypeDef IS_Bit;
        };
        union
        {
                volatile uint32_t IBE [32UL];
                BITBANDING_GPIOIBE_TypeDef IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV [32UL];
                BITBANDING_GPIOIEV_TypeDef IEV_Bit;
        };
        union
        {
                volatile uint32_t IM [32UL];
                BITBANDING_GPIOIM_TypeDef IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS [32UL];
                BITBANDING_GPIORIS_TypeDef RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS [32UL];
                BITBANDING_GPIOMIS_TypeDef MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR [32UL];
                BITBANDING_GPIOICR_TypeDef ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL [32UL];
                BITBANDING_GPIOAFSEL_TypeDef AFSEL_Bit;
        };
        const uint32_t reserved [55UL * 32UL];
        union
        {
                volatile uint32_t DR2R [32UL];
                BITBANDING_GPIODR2R_TypeDef DR2R_Bit;
        };
        union
        {
                volatile uint32_t DR4R [32UL];
                BITBANDING_GPIODR4R_TypeDef DR4R_Bit;
        };
        union
        {
                volatile uint32_t DR8R [32UL];
                BITBANDING_GPIODR8R_TypeDef DR8R_Bit;
        };
        union
        {
                volatile uint32_t ODR [32UL];
                BITBANDING_GPIOODR_TypeDef ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR [32UL];
                BITBANDING_GPIOPUR_TypeDef PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR [32UL];
                BITBANDING_GPIOPDR_TypeDef PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR [32UL];
                BITBANDING_GPIOSLR_TypeDef SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN [32UL];
                BITBANDING_GPIODEN_TypeDef DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK [32UL];
                BITBANDING_GPIOLOCK_TypeDef LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR [32UL];
                BITBANDING_GPIOCR_TypeDef CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL [32UL];
                BITBANDING_GPIOAMSEL_TypeDef AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL [32UL];
                BITBANDING_GPIOPCTL_TypeDef PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL [32UL];
                BITBANDING_GPIOADCCTL_TypeDef ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL [32UL];
                BITBANDING_GPIODMACTL_TypeDef DMACTL_Bit;
        };
        const uint32_t reserved1 [678UL * 32UL];
        union
        {
                volatile uint32_t PeriphID4 [32UL];
                BITBANDING_GPIOPeriphID4_TypeDef PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5 [32UL];
                BITBANDING_GPIOPeriphID5_TypeDef PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6 [32UL];
                BITBANDING_GPIOPeriphID6_TypeDef PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7 [32UL];
                BITBANDING_GPIOPeriphID7_TypeDef PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0 [32UL];
                BITBANDING_GPIOPeriphID0_TypeDef PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1 [32UL];
                BITBANDING_GPIOPeriphID1_TypeDef PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2 [32UL];
                BITBANDING_GPIOPeriphID2_TypeDef PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3 [32UL];
                BITBANDING_GPIOPeriphID3_TypeDef PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0 [32UL];
                BITBANDING_GPIOPCellID0_TypeDef PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1 [32UL];
                BITBANDING_GPIOPCellID1_TypeDef PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2 [32UL];
                BITBANDING_GPIOPCellID2_TypeDef PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3 [32UL];
                BITBANDING_GPIOPCellID3_TypeDef PCellID3_Bit;
        };
} GPIO_BITBANDING_TypeDef;

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
        union
        {
                volatile uint32_t DIR [32UL];
                BITBANDING_GPIODIR_TypeDef DIR_Bit;
        };
        union
        {
                volatile uint32_t IS [32UL];
                BITBANDING_GPIOIS_TypeDef IS_Bit;
        };
        union
        {
                volatile uint32_t IBE [32UL];
                BITBANDING_GPIOIBE_TypeDef IBE_Bit;
        };
        union
        {
                volatile uint32_t IEV [32UL];
                BITBANDING_GPIOIEV_TypeDef IEV_Bit;
        };
        union
        {
                volatile uint32_t IM [32UL];
                BITBANDING_GPIOIM_TypeDef IM_Bit;
        };
        union
        {
                volatile const uint32_t RIS [32UL];
                BITBANDING_GPIORIS_TypeDef RIS_Bit;
        };
        union
        {
                volatile const uint32_t MIS [32UL];
                BITBANDING_GPIOMIS_TypeDef MIS_Bit;
        };
        union
        {
                volatile uint32_t ICR [32UL];
                BITBANDING_GPIOICR_TypeDef ICR_Bit;
        };
        union
        {
                volatile uint32_t AFSEL [32UL];
                BITBANDING_GPIOAFSEL_TypeDef AFSEL_Bit;
        };
        const uint32_t reserved [55UL * 32UL];
        union
        {
                volatile uint32_t DRR [32UL][3UL];
                BITBANDING_GPIODRR_TypeDef DRR_Bit [3UL];
        };
        union
        {
                volatile uint32_t ODR [32UL];
                BITBANDING_GPIOODR_TypeDef ODR_Bit;
        };
        union
        {
                volatile uint32_t PUR [32UL];
                BITBANDING_GPIOPUR_TypeDef PUR_Bit;
        };
        union
        {
                volatile uint32_t PDR [32UL];
                BITBANDING_GPIOPDR_TypeDef PDR_Bit;
        };
        union
        {
                volatile uint32_t SLR [32UL];
                BITBANDING_GPIOSLR_TypeDef SLR_Bit;
        };
        union
        {
                volatile uint32_t DEN [32UL];
                BITBANDING_GPIODEN_TypeDef DEN_Bit;
        };
        union
        {
                volatile uint32_t LOCK [32UL];
                BITBANDING_GPIOLOCK_TypeDef LOCK_Bit;
        };
        union
        {
                volatile uint32_t CR [32UL];
                BITBANDING_GPIOCR_TypeDef CR_Bit;
        };
        union
        {
                volatile uint32_t AMSEL [32UL];
                BITBANDING_GPIOAMSEL_TypeDef AMSEL_Bit;
        };
        union
        {
                volatile uint32_t PCTL [32UL];
                BITBANDING_GPIOPCTL_TypeDef PCTL_Bit;
        };
        union
        {
                volatile uint32_t ADCCTL [32UL];
                BITBANDING_GPIOADCCTL_TypeDef ADCCTL_Bit;
        };
        union
        {
                volatile uint32_t DMACTL [32UL];
                BITBANDING_GPIODMACTL_TypeDef DMACTL_Bit;
        };
        const uint32_t reserved1 [678UL * 32UL];
        union
        {
                volatile uint32_t PeriphID4 [32UL];
                BITBANDING_GPIOPeriphID4_TypeDef PeriphID4_Bit;
        };
        union
        {
                volatile uint32_t PeriphID5 [32UL];
                BITBANDING_GPIOPeriphID5_TypeDef PeriphID5_Bit;
        };
        union
        {
                volatile uint32_t PeriphID6 [32UL];
                BITBANDING_GPIOPeriphID6_TypeDef PeriphID6_Bit;
        };
        union
        {
                volatile uint32_t PeriphID7 [32UL];
                BITBANDING_GPIOPeriphID7_TypeDef PeriphID7_Bit;
        };
        union
        {
                volatile uint32_t PeriphID0 [32UL];
                BITBANDING_GPIOPeriphID0_TypeDef PeriphID0_Bit;
        };
        union
        {
                volatile uint32_t PeriphID1 [32UL];
                BITBANDING_GPIOPeriphID1_TypeDef PeriphID1_Bit;
        };
        union
        {
                volatile uint32_t PeriphID2 [32UL];
                BITBANDING_GPIOPeriphID2_TypeDef PeriphID2_Bit;
        };
        union
        {
                volatile uint32_t PeriphID3 [32UL];
                BITBANDING_GPIOPeriphID3_TypeDef PeriphID3_Bit;
        };
        union
        {
                volatile uint32_t PCellID0 [32UL];
                BITBANDING_GPIOPCellID0_TypeDef PCellID0_Bit;
        };
        union
        {
                volatile uint32_t PCellID1 [32UL];
                BITBANDING_GPIOPCellID1_TypeDef PCellID1_Bit;
        };
        union
        {
                volatile uint32_t PCellID2 [32UL];
                BITBANDING_GPIOPCellID2_TypeDef PCellID2_Bit;
        };
        union
        {
                volatile uint32_t PCellID3 [32UL];
                BITBANDING_GPIOPCellID3_TypeDef PCellID3_Bit;
        };
} GPIO_AUX_BITBANDING_TypeDef;

typedef volatile struct
{
        GPIO_BITBANDING_TypeDef AHB [6UL];
} GPIO_AHB_BITBANDING_TypeDef;

typedef volatile struct
{
        GPIO_AUX_BITBANDING_TypeDef AHB [6UL];
} GPIO_AHB_AUX_BITBANDING_TypeDef;

typedef volatile struct
{
        GPIO_BITBANDING_TypeDef APB_A;
        GPIO_BITBANDING_TypeDef APB_B;
        GPIO_BITBANDING_TypeDef APB_C;
        GPIO_BITBANDING_TypeDef APB_D;
        const GPIO_BITBANDING_TypeDef reserved [28UL];
        GPIO_BITBANDING_TypeDef APB_E;
        GPIO_BITBANDING_TypeDef APB_F;
} GPIO_APB_BITBANDING_TypeDef;

typedef volatile struct
{
        GPIO_AUX_BITBANDING_TypeDef APB_A;
        GPIO_AUX_BITBANDING_TypeDef APB_B;
        GPIO_AUX_BITBANDING_TypeDef APB_C;
        GPIO_AUX_BITBANDING_TypeDef APB_D;
        const GPIO_AUX_BITBANDING_TypeDef reserved [28UL];
        GPIO_AUX_BITBANDING_TypeDef APB_E;
        GPIO_AUX_BITBANDING_TypeDef APB_F;
} GPIO_APB_AUX_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_ */
