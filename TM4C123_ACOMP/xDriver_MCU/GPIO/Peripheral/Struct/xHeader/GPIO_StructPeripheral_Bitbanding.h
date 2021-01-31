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
                volatile uint32_t GPIODATA_MASK [255UL][32UL];
                BITBANDING_GPIODATA_TypeDef GPIODATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t GPIODATA [32UL];
                BITBANDING_GPIODATA_TypeDef GPIODATA_Bit;
        };
        union
        {
                volatile uint32_t GPIODIR [32UL];
                BITBANDING_GPIODIR_TypeDef GPIODIR_Bit;
        };
        union
        {
                volatile uint32_t GPIOIS [32UL];
                BITBANDING_GPIOIS_TypeDef GPIOIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOIBE [32UL];
                BITBANDING_GPIOIBE_TypeDef GPIOIBE_Bit;
        };
        union
        {
                volatile uint32_t GPIOIEV [32UL];
                BITBANDING_GPIOIEV_TypeDef GPIOIEV_Bit;
        };
        union
        {
                volatile uint32_t GPIOIM [32UL];
                BITBANDING_GPIOIM_TypeDef GPIOIM_Bit;
        };
        union
        {
                volatile const uint32_t GPIORIS [32UL];
                BITBANDING_GPIORIS_TypeDef GPIORIS_Bit;
        };
        union
        {
                volatile const uint32_t GPIOMIS [32UL];
                BITBANDING_GPIOMIS_TypeDef GPIOMIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOICR [32UL];
                BITBANDING_GPIOICR_TypeDef GPIOICR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAFSEL [32UL];
                BITBANDING_GPIOAFSEL_TypeDef GPIOAFSEL_Bit;
        };
        const uint32_t reserved [55UL * 32UL];
        union
        {
                volatile uint32_t GPIODR2R [32UL];
                BITBANDING_GPIODR2R_TypeDef GPIODR2R_Bit;
        };
        union
        {
                volatile uint32_t GPIODR4R [32UL];
                BITBANDING_GPIODR4R_TypeDef GPIODR4R_Bit;
        };
        union
        {
                volatile uint32_t GPIODR8R [32UL];
                BITBANDING_GPIODR8R_TypeDef GPIODR8R_Bit;
        };
        union
        {
                volatile uint32_t GPIOODR [32UL];
                BITBANDING_GPIOODR_TypeDef GPIOODR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPUR [32UL];
                BITBANDING_GPIOPUR_TypeDef GPIOPUR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPDR [32UL];
                BITBANDING_GPIOPDR_TypeDef GPIOPDR_Bit;
        };
        union
        {
                volatile uint32_t GPIOSLR [32UL];
                BITBANDING_GPIOSLR_TypeDef GPIOSLR_Bit;
        };
        union
        {
                volatile uint32_t GPIODEN [32UL];
                BITBANDING_GPIODEN_TypeDef GPIODEN_Bit;
        };
        union
        {
                volatile uint32_t GPIOLOCK [32UL];
                BITBANDING_GPIOLOCK_TypeDef GPIOLOCK_Bit;
        };
        union
        {
                volatile uint32_t GPIOCR [32UL];
                BITBANDING_GPIOCR_TypeDef GPIOCR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAMSEL [32UL];
                BITBANDING_GPIOAMSEL_TypeDef GPIOAMSEL_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCTL [32UL];
                BITBANDING_GPIOPCTL_TypeDef GPIOPCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIOADCCTL [32UL];
                BITBANDING_GPIOADCCTL_TypeDef GPIOADCCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIODMACTL [32UL];
                BITBANDING_GPIODMACTL_TypeDef GPIODMACTL_Bit;
        };
        const uint32_t reserved1 [678UL * 32UL];
        union
        {
                volatile uint32_t GPIOPeriphID4 [32UL];
                BITBANDING_GPIOPeriphID4_TypeDef GPIOPeriphID4_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID5 [32UL];
                BITBANDING_GPIOPeriphID5_TypeDef GPIOPeriphID5_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID6 [32UL];
                BITBANDING_GPIOPeriphID6_TypeDef GPIOPeriphID6_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID7 [32UL];
                BITBANDING_GPIOPeriphID7_TypeDef GPIOPeriphID7_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID0 [32UL];
                BITBANDING_GPIOPeriphID0_TypeDef GPIOPeriphID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID1 [32UL];
                BITBANDING_GPIOPeriphID1_TypeDef GPIOPeriphID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID2 [32UL];
                BITBANDING_GPIOPeriphID2_TypeDef GPIOPeriphID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID3 [32UL];
                BITBANDING_GPIOPeriphID3_TypeDef GPIOPeriphID3_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID0 [32UL];
                BITBANDING_GPIOPCellID0_TypeDef GPIOPCellID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID1 [32UL];
                BITBANDING_GPIOPCellID1_TypeDef GPIOPCellID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID2 [32UL];
                BITBANDING_GPIOPCellID2_TypeDef GPIOPCellID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID3 [32UL];
                BITBANDING_GPIOPCellID3_TypeDef GPIOPCellID3_Bit;
        };
} GPIO_BITBANDING_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t GPIODATA_MASK [255UL][32UL];
                BITBANDING_GPIODATA_TypeDef GPIODATA_MASK_Bit [255UL];
        };
        union
        {
                volatile uint32_t GPIODATA [32UL];
                BITBANDING_GPIODATA_TypeDef GPIODATA_Bit;
        };
        union
        {
                volatile uint32_t GPIODIR [32UL];
                BITBANDING_GPIODIR_TypeDef GPIODIR_Bit;
        };
        union
        {
                volatile uint32_t GPIOIS [32UL];
                BITBANDING_GPIOIS_TypeDef GPIOIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOIBE [32UL];
                BITBANDING_GPIOIBE_TypeDef GPIOIBE_Bit;
        };
        union
        {
                volatile uint32_t GPIOIEV [32UL];
                BITBANDING_GPIOIEV_TypeDef GPIOIEV_Bit;
        };
        union
        {
                volatile uint32_t GPIOIM [32UL];
                BITBANDING_GPIOIM_TypeDef GPIOIM_Bit;
        };
        union
        {
                volatile const uint32_t GPIORIS [32UL];
                BITBANDING_GPIORIS_TypeDef GPIORIS_Bit;
        };
        union
        {
                volatile const uint32_t GPIOMIS [32UL];
                BITBANDING_GPIOMIS_TypeDef GPIOMIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOICR [32UL];
                BITBANDING_GPIOICR_TypeDef GPIOICR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAFSEL [32UL];
                BITBANDING_GPIOAFSEL_TypeDef GPIOAFSEL_Bit;
        };
        const uint32_t reserved [55UL * 32UL];
        union
        {
                volatile uint32_t GPIODRR [32UL][3UL];
                BITBANDING_GPIODRR_TypeDef GPIODRR_Bit [3UL];
        };
        union
        {
                volatile uint32_t GPIOODR [32UL];
                BITBANDING_GPIOODR_TypeDef GPIOODR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPUR [32UL];
                BITBANDING_GPIOPUR_TypeDef GPIOPUR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPDR [32UL];
                BITBANDING_GPIOPDR_TypeDef GPIOPDR_Bit;
        };
        union
        {
                volatile uint32_t GPIOSLR [32UL];
                BITBANDING_GPIOSLR_TypeDef GPIOSLR_Bit;
        };
        union
        {
                volatile uint32_t GPIODEN [32UL];
                BITBANDING_GPIODEN_TypeDef GPIODEN_Bit;
        };
        union
        {
                volatile uint32_t GPIOLOCK [32UL];
                BITBANDING_GPIOLOCK_TypeDef GPIOLOCK_Bit;
        };
        union
        {
                volatile uint32_t GPIOCR [32UL];
                BITBANDING_GPIOCR_TypeDef GPIOCR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAMSEL [32UL];
                BITBANDING_GPIOAMSEL_TypeDef GPIOAMSEL_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCTL [32UL];
                BITBANDING_GPIOPCTL_TypeDef GPIOPCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIOADCCTL [32UL];
                BITBANDING_GPIOADCCTL_TypeDef GPIOADCCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIODMACTL [32UL];
                BITBANDING_GPIODMACTL_TypeDef GPIODMACTL_Bit;
        };
        const uint32_t reserved1 [678UL * 32UL];
        union
        {
                volatile uint32_t GPIOPeriphID4 [32UL];
                BITBANDING_GPIOPeriphID4_TypeDef GPIOPeriphID4_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID5 [32UL];
                BITBANDING_GPIOPeriphID5_TypeDef GPIOPeriphID5_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID6 [32UL];
                BITBANDING_GPIOPeriphID6_TypeDef GPIOPeriphID6_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID7 [32UL];
                BITBANDING_GPIOPeriphID7_TypeDef GPIOPeriphID7_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID0 [32UL];
                BITBANDING_GPIOPeriphID0_TypeDef GPIOPeriphID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID1 [32UL];
                BITBANDING_GPIOPeriphID1_TypeDef GPIOPeriphID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID2 [32UL];
                BITBANDING_GPIOPeriphID2_TypeDef GPIOPeriphID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID3 [32UL];
                BITBANDING_GPIOPeriphID3_TypeDef GPIOPeriphID3_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID0 [32UL];
                BITBANDING_GPIOPCellID0_TypeDef GPIOPCellID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID1 [32UL];
                BITBANDING_GPIOPCellID1_TypeDef GPIOPCellID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID2 [32UL];
                BITBANDING_GPIOPCellID2_TypeDef GPIOPCellID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID3 [32UL];
                BITBANDING_GPIOPCellID3_TypeDef GPIOPCellID3_Bit;
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
