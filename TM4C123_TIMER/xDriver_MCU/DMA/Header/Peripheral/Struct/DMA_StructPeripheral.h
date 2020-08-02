/**
 *
 * @file DMA_StructPeripheral.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/DMA/Header/Peripheral/Struct/DMA_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t DMASTAT;
        DMASTAT_TypeDef         DMASTAT_Bit;
    };
    union
    {
        volatile uint32_t       DMACFG;
        DMACFG_TypeDef          DMACFG_Bit;
    };
    union
    {
        volatile uint32_t       DMACTLBASE;
        DMACTLBASE_TypeDef      DMACTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t DMAALTBASE;
        DMAALTBASE_TypeDef      DMAALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t DMAWAITSTAT;
        DMAWAITSTAT_TypeDef     DMAWAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t       DMASWREQ;
        DMASWREQ_TypeDef        DMASWREQ_Bit;
    };
    union
    {
        volatile uint32_t       DMAUSEBURSTSET;
        DMASET_TypeDef          DMAUSEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t       DMAUSEBURSTCLR;
        DMACLR_TypeDef          DMAUSEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t       DMAREQMASKSET;
        DMASET_TypeDef          DMAREQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t       DMAREQMASKCLR;
        DMACLR_TypeDef          DMAREQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t       DMAENASET;
        DMASET_TypeDef          DMAENASET_Bit;
    };
    union
    {
        volatile uint32_t       DMAENACLR;
        DMACLR_TypeDef          DMAENACLR_Bit;
    };
    union
    {
        volatile uint32_t       DMAALTSET;
        DMASET_TypeDef          DMAALTSET_Bit;
    };
    union
    {
        volatile uint32_t       DMAALTCLR;
        DMACLR_TypeDef          DMAALTCLR_Bit;
    };
    union
    {
        volatile uint32_t       DMAPRIOSET;
        DMASET_TypeDef          DMAPRIOSET_Bit;
    };
    union
    {
        volatile uint32_t       DMAPRIOCLR;
        DMACLR_TypeDef          DMAPRIOCLR_Bit;
    };
    const uint32_t reserved[3];
    union
    {
        volatile uint32_t       DMAERRCLR;
        DMAERRCLR_TypeDef       DMAERRCLR_Bit;
    };
    const uint32_t reserved1[300];
    union
    {
        volatile uint32_t       DMACHASGN;
        DMACHASGN_TypeDef       DMACHASGN_Bit;
    };
    union
    {
        volatile uint32_t       DMACHIS;
        DMACHIS_TypeDef         DMACHIS_Bit;
    };
    const uint32_t reserved2[2];
    union
    {
        volatile uint32_t       DMACHMAP0;
        DMACHMAP0_TypeDef       DMACHMAP0_Bit;
    };
    union
    {
        volatile uint32_t       DMACHMAP1;
        DMACHMAP1_TypeDef       DMACHMAP1_Bit;
    };
    union
    {
        volatile uint32_t       DMACHMAP2;
        DMACHMAP2_TypeDef       DMACHMAP2_Bit;
    };
    union
    {
        volatile uint32_t       DMACHMAP3;
        DMACHMAP3_TypeDef       DMACHMAP3_Bit;
    };
    const uint32_t reserved3[688];
    union
    {
        volatile const uint32_t DMAPeriphID0;
        DMAPeriphID0_TypeDef    DMAPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID1;
        DMAPeriphID1_TypeDef    DMAPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID2;
        DMAPeriphID2_TypeDef    DMAPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID3;
        DMAPeriphID3_TypeDef    DMAPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID4;
        DMAPeriphID4_TypeDef    DMAPeriphID4_Bit;
    };
    const uint32_t reserved4[7];
    union
    {
        volatile const uint32_t DMAPCellID0;
        DMAPCellID0_TypeDef     DMAPCellID0_Bit;
    };
    union
    {
        volatile const uint32_t DMAPCellID1;
        DMAPCellID1_TypeDef     DMAPCellID1_Bit;
    };
    union
    {
        volatile const uint32_t DMAPCellID2;
        DMAPCellID2_TypeDef     DMAPCellID2_Bit;
    };
    union
    {
        volatile const uint32_t DMAPCellID3;
        DMAPCellID3_TypeDef     DMAPCellID3_Bit;
    };

}DMA_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_H_ */
