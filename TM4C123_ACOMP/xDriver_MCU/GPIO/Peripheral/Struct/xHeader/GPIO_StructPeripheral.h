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
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/GPIO/Peripheral/Struct/xHeader/GPIO_StructRegister.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

typedef volatile struct
{
        union
        {
                volatile uint32_t GPIODATA_MASK[255];
                GPIODATA_TypeDef GPIODATA_MASK_Bit[255];
        };
        union
        {
                volatile uint32_t GPIODATA;
                GPIODATA_TypeDef GPIODATA_Bit;
        };
        union
        {
                volatile uint32_t GPIODIR;
                GPIODIR_TypeDef GPIODIR_Bit;
        };
        union
        {
                volatile uint32_t GPIOIS;
                GPIOIS_TypeDef GPIOIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOIBE;
                GPIOIBE_TypeDef GPIOIBE_Bit;
        };
        union
        {
                volatile uint32_t GPIOIEV;
                GPIOIEV_TypeDef GPIOIEV_Bit;
        };
        union
        {
                volatile uint32_t GPIOIM;
                GPIOIM_TypeDef GPIOIM_Bit;
        };
        union
        {
                volatile const uint32_t GPIORIS;
                GPIORIS_TypeDef GPIORIS_Bit;
        };
        union
        {
                volatile const uint32_t GPIOMIS;
                GPIOMIS_TypeDef GPIOMIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOICR;
                GPIOICR_TypeDef GPIOICR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAFSEL;
                GPIOAFSEL_TypeDef GPIOAFSEL_Bit;
        };
        const uint32_t reserved[55];
        union
        {
                volatile uint32_t GPIODR2R;
                GPIODR2R_TypeDef GPIODR2R_Bit;
        };
        union
        {
                volatile uint32_t GPIODR4R;
                GPIODR4R_TypeDef GPIODR4R_Bit;
        };
        union
        {
                volatile uint32_t GPIODR8R;
                GPIODR8R_TypeDef GPIODR8R_Bit;
        };
        union
        {
                volatile uint32_t GPIOODR;
                GPIOODR_TypeDef GPIOODR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPUR;
                GPIOPUR_TypeDef GPIOPUR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPDR;
                GPIOPDR_TypeDef GPIOPDR_Bit;
        };
        union
        {
                volatile uint32_t GPIOSLR;
                GPIOSLR_TypeDef GPIOSLR_Bit;
        };
        union
        {
                volatile uint32_t GPIODEN;
                GPIODEN_TypeDef GPIODEN_Bit;
        };
        union
        {
                volatile uint32_t GPIOLOCK;
                GPIOLOCK_TypeDef GPIOLOCK_Bit;
        };
        union
        {
                volatile uint32_t GPIOCR;
                GPIOCR_TypeDef GPIOCR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAMSEL;
                GPIOAMSEL_TypeDef GPIOAMSEL_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCTL;
                GPIOPCTL_TypeDef GPIOPCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIOADCCTL;
                GPIOADCCTL_TypeDef GPIOADCCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIODMACTL;
                GPIODMACTL_TypeDef GPIODMACTL_Bit;
        };
        const uint32_t reserved1[678];
        union
        {
                volatile uint32_t GPIOPeriphID4;
                GPIOPeriphID4_TypeDef GPIOPeriphID4_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID5;
                GPIOPeriphID5_TypeDef GPIOPeriphID5_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID6;
                GPIOPeriphID6_TypeDef GPIOPeriphID6_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID7;
                GPIOPeriphID7_TypeDef GPIOPeriphID7_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID0;
                GPIOPeriphID0_TypeDef GPIOPeriphID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID1;
                GPIOPeriphID1_TypeDef GPIOPeriphID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID2;
                GPIOPeriphID2_TypeDef GPIOPeriphID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID3;
                GPIOPeriphID3_TypeDef GPIOPeriphID3_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID0;
                GPIOPCellID0_TypeDef GPIOPCellID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID1;
                GPIOPCellID1_TypeDef GPIOPCellID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID2;
                GPIOPCellID2_TypeDef GPIOPCellID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID3;
                GPIOPCellID3_TypeDef GPIOPCellID3_Bit;
        };
} GPIO_TypeDef;

typedef volatile struct
{
        union
        {
                volatile uint32_t GPIODATA_MASK[255];
                GPIODATA_TypeDef GPIODATA_MASK_Bit[255];
        };
        union
        {
                volatile uint32_t GPIODATA;
                GPIODATA_TypeDef GPIODATA_Bit;
        };
        union
        {
                volatile uint32_t GPIODIR;
                GPIODIR_TypeDef GPIODIR_Bit;
        };
        union
        {
                volatile uint32_t GPIOIS;
                GPIOIS_TypeDef GPIOIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOIBE;
                GPIOIBE_TypeDef GPIOIBE_Bit;
        };
        union
        {
                volatile uint32_t GPIOIEV;
                GPIOIEV_TypeDef GPIOIEV_Bit;
        };
        union
        {
                volatile uint32_t GPIOIM;
                GPIOIM_TypeDef GPIOIM_Bit;
        };
        union
        {
                volatile const uint32_t GPIORIS;
                GPIORIS_TypeDef GPIORIS_Bit;
        };
        union
        {
                volatile const uint32_t GPIOMIS;
                GPIOMIS_TypeDef GPIOMIS_Bit;
        };
        union
        {
                volatile uint32_t GPIOICR;
                GPIOICR_TypeDef GPIOICR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAFSEL;
                GPIOAFSEL_TypeDef GPIOAFSEL_Bit;
        };
        const uint32_t reserved[55];
        union
        {
                volatile uint32_t GPIODRR[3];
                GPIODRR_TypeDef GPIODRR_Bit[3];
        };

        union
        {
                volatile uint32_t GPIOODR;
                GPIOODR_TypeDef GPIOODR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPUR;
                GPIOPUR_TypeDef GPIOPUR_Bit;
        };
        union
        {
                volatile uint32_t GPIOPDR;
                GPIOPDR_TypeDef GPIOPDR_Bit;
        };
        union
        {
                volatile uint32_t GPIOSLR;
                GPIOSLR_TypeDef GPIOSLR_Bit;
        };
        union
        {
                volatile uint32_t GPIODEN;
                GPIODEN_TypeDef GPIODEN_Bit;
        };
        union
        {
                volatile uint32_t GPIOLOCK;
                GPIOLOCK_TypeDef GPIOLOCK_Bit;
        };
        union
        {
                volatile uint32_t GPIOCR;
                GPIOCR_TypeDef GPIOCR_Bit;
        };
        union
        {
                volatile uint32_t GPIOAMSEL;
                GPIOAMSEL_TypeDef GPIOAMSEL_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCTL;
                GPIOPCTL_TypeDef GPIOPCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIOADCCTL;
                GPIOADCCTL_TypeDef GPIOADCCTL_Bit;
        };
        union
        {
                volatile uint32_t GPIODMACTL;
                GPIODMACTL_TypeDef GPIODMACTL_Bit;
        };
        const uint32_t reserved1[678];
        union
        {
                volatile uint32_t GPIOPeriphID4;
                GPIOPeriphID4_TypeDef GPIOPeriphID4_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID5;
                GPIOPeriphID5_TypeDef GPIOPeriphID5_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID6;
                GPIOPeriphID6_TypeDef GPIOPeriphID6_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID7;
                GPIOPeriphID7_TypeDef GPIOPeriphID7_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID0;
                GPIOPeriphID0_TypeDef GPIOPeriphID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID1;
                GPIOPeriphID1_TypeDef GPIOPeriphID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID2;
                GPIOPeriphID2_TypeDef GPIOPeriphID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPeriphID3;
                GPIOPeriphID3_TypeDef GPIOPeriphID3_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID0;
                GPIOPCellID0_TypeDef GPIOPCellID0_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID1;
                GPIOPCellID1_TypeDef GPIOPCellID1_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID2;
                GPIOPCellID2_TypeDef GPIOPCellID2_Bit;
        };
        union
        {
                volatile uint32_t GPIOPCellID3;
                GPIOPCellID3_TypeDef GPIOPCellID3_Bit;
        };
} GPIO_AUX_TypeDef;

typedef volatile struct
{
        GPIO_TypeDef AHB[(uint32_t) GPIO_enPORT_MAX + 1U];
} GPIO_AHB_TypeDef;

typedef volatile struct
{
        GPIO_AUX_TypeDef AHB[(uint32_t) GPIO_enPORT_MAX + 1U];
} GPIO_AHB_AUX_TypeDef;

typedef volatile struct
{
        GPIO_TypeDef APB_A;
        GPIO_TypeDef APB_B;
        GPIO_TypeDef APB_C;
        GPIO_TypeDef APB_D;
        const GPIO_TypeDef reserved[28];
        GPIO_TypeDef APB_E;
        GPIO_TypeDef APB_F;
} GPIO_APB_TypeDef;

typedef volatile struct
{
        GPIO_AUX_TypeDef APB_A;
        GPIO_AUX_TypeDef APB_B;
        GPIO_AUX_TypeDef APB_C;
        GPIO_AUX_TypeDef APB_D;
        const GPIO_AUX_TypeDef reserved[28];
        GPIO_AUX_TypeDef APB_E;
        GPIO_AUX_TypeDef APB_F;
} GPIO_APB_AUX_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_H_ */
