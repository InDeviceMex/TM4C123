/**
 *
 * @file WDT_StructPeripheral_Bitbanding.h
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
 * @verbatim 19 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date Author Version Description
 * 19 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t WDTLOAD [32UL];
        BITBANDING_WDTLOAD_TypeDef WDTLOAD_Bit;
    };
    union
    {
        volatile const uint32_t WDTVALUE [32UL];
        BITBANDING_WDTVALUE_TypeDef WDTVALUE_Bit;
    };
    union
    {
        volatile uint32_t WDTCTL [32UL];
        BITBANDING_WDTCTL_TypeDef WDTCTL_Bit;
    };
    union
    {
        volatile uint32_t WDTICR [32UL];
        BITBANDING_WDTICR_TypeDef WDTICR_Bit;
    };
    union
    {
        volatile const uint32_t WDTRIS [32UL];
        BITBANDING_WDTRIS_TypeDef WDTRIS_Bit;
    };
    union
    {
        volatile const uint32_t WDTMIS [32UL];
        BITBANDING_WDTMIS_TypeDef WDTMIS_Bit;
    };
    const uint32_t reserved [256UL * 32UL];
    union
    {
        volatile uint32_t WDTTEST [32UL];
        BITBANDING_WDTTEST_TypeDef WDTTEST_Bit;
    };

    const uint32_t reserved1 [505UL * 32UL];
    union
    {
        volatile uint32_t WDTLOCK [32UL];
        BITBANDING_WDTLOCK_TypeDef WDTLOCK_Bit;
    };
    const uint32_t reserved2 [243UL * 32UL];
    union
    {
        volatile uint32_t WDTPeriphID4 [32UL];
        BITBANDING_WDTPeriphID4_TypeDef WDTPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID5 [32UL];
        BITBANDING_WDTPeriphID5_TypeDef WDTPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID6 [32UL];
        BITBANDING_WDTPeriphID6_TypeDef WDTPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID7 [32UL];
        BITBANDING_WDTPeriphID7_TypeDef WDTPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID0 [32UL];
        BITBANDING_WDTPeriphID0_TypeDef WDTPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID1 [32UL];
        BITBANDING_WDTPeriphID1_TypeDef WDTPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID2 [32UL];
        BITBANDING_WDTPeriphID2_TypeDef WDTPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t WDTPeriphID3 [32UL];
        BITBANDING_WDTPeriphID3_TypeDef WDTPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t WDTPCellID0 [32UL];
        BITBANDING_WDTPCellID0_TypeDef WDTPCellID0_Bit;
    };
    union
    {
        volatile uint32_t WDTPCellID1 [32UL];
        BITBANDING_WDTPCellID1_TypeDef WDTPCellID1_Bit;
    };
    union
    {
        volatile uint32_t WDTPCellID2 [32UL];
        BITBANDING_WDTPCellID2_TypeDef WDTPCellID2_Bit;
    };
    union
    {
        volatile uint32_t WDTPCellID3 [32UL];
        BITBANDING_WDTPCellID3_TypeDef WDTPCellID3_Bit;
    };
}WDT_BITBANDING_TypeDef;

typedef volatile struct
{
     WDT_BITBANDING_TypeDef MODULE [2UL];
}WDTS_BITBANDING_TypeDef;




#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_BITBANDING_H_ */
