/**
 *
 * @file WDT_StructPeripheral.h
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
 * Date           Author     Version     Description
 * 19 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/WDT/Peripheral/Struct/xHeader/WDT_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t       WDTLOAD;
        WDTLOAD_TypeDef         WDTLOAD_Bit;
    };
    union
    {
        volatile const uint32_t WDTVALUE;
        WDTVALUE_TypeDef        WDTVALUE_Bit;
    };
    union
    {
        volatile uint32_t       WDTCTL;
        WDTCTL_TypeDef          WDTCTL_Bit;
    };
    union
    {
        volatile uint32_t       WDTICR;
        WDTICR_TypeDef          WDTICR_Bit;
    };
    union
    {
    volatile const uint32_t     WDTRIS;
    WDTRIS_TypeDef              WDTRIS_Bit;
    };
    union
    {
    volatile const uint32_t     WDTMIS;
    WDTMIS_TypeDef              WDTMIS_Bit;
    };

    const uint32_t              reserved[256];
    union
    {
    volatile uint32_t           WDTTEST;
    WDTTEST_TypeDef             WDTTEST_Bit;
    };

    const uint32_t              reserved1[505];
    union
    {
        volatile uint32_t       WDTLOCK;
        WDTLOCK_TypeDef         WDTLOCK_Bit;
    };
    const uint32_t              reserved2[243];
    union
    {
        volatile uint32_t       WDTPeriphID4;
        WDTPeriphID4_TypeDef    WDTPeriphID4_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID5;
        WDTPeriphID5_TypeDef    WDTPeriphID5_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID6;
        WDTPeriphID6_TypeDef    WDTPeriphID6_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID7;
        WDTPeriphID7_TypeDef    WDTPeriphID7_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID0;
        WDTPeriphID0_TypeDef    WDTPeriphID0_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID1;
        WDTPeriphID1_TypeDef    WDTPeriphID1_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID2;
        WDTPeriphID2_TypeDef    WDTPeriphID2_Bit;
    };
    union
    {
        volatile uint32_t       WDTPeriphID3;
        WDTPeriphID3_TypeDef    WDTPeriphID3_Bit;
    };
    union
    {
        volatile uint32_t       WDTPCellID0;
        WDTPCellID0_TypeDef     WDTPCellID0_Bit;
    };
    union
    {
        volatile uint32_t       WDTPCellID1;
        WDTPCellID1_TypeDef     WDTPCellID1_Bit;
    };
    union
    {
        volatile uint32_t       WDTPCellID2;
        WDTPCellID2_TypeDef     WDTPCellID2_Bit;
    };
    union
    {
        volatile uint32_t       WDTPCellID3;
        WDTPCellID3_TypeDef     WDTPCellID3_Bit;
    };
}WDT_TypeDef;

typedef volatile struct
{
     WDT_TypeDef W[(uint32_t)WDT_enMODULE_MAX +1u];
}WDTS_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_PERIPHERAL_WDT_STRUCT_WDT_STRUCTPERIPHERAL_H_ */
