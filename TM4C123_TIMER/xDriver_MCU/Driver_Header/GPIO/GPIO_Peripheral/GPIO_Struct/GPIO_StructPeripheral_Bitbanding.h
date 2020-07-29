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
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/Driver_Header/GPIO/GPIO_Peripheral/GPIO_Struct/GPIO_StructRegister_Bitbanding.h>


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
}GPIO_AUX_BITBANDING_TypeDef;



typedef volatile struct
{
    GPIO_BITBANDING_TypeDef AHB[6];
}GPIO_AHB_BITBANDING_TypeDef;

typedef volatile struct
{
    GPIO_AUX_BITBANDING_TypeDef AHB[6];
}GPIO_AHB_AUX_BITBANDING_TypeDef;


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
    GPIO_AUX_BITBANDING_TypeDef          APB_A;
    GPIO_AUX_BITBANDING_TypeDef          APB_B;
    GPIO_AUX_BITBANDING_TypeDef          APB_C;
    GPIO_AUX_BITBANDING_TypeDef          APB_D;
    const    GPIO_AUX_BITBANDING_TypeDef reserved[28];
    GPIO_AUX_BITBANDING_TypeDef          APB_E;
    GPIO_AUX_BITBANDING_TypeDef          APB_F;
}GPIO_APB_AUX_BITBANDING_TypeDef;



#endif /* XDRIVER_MCU_DRIVER_HEADER_GPIO_GPIO_PERIPHERAL_GPIO_STRUCT_GPIO_STRUCTPERIPHERAL_BITBANDING_H_ */
