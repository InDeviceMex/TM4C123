/**
 *
 * @file DMA_StructPeripheral_Bitbanding.h
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
 * Date Author Version Description
 * 28 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_

#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructRegister_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t DMASTAT [32UL];
        BITBANDING_DMASTAT_TypeDef DMASTAT_Bit;
    };
    union
    {
        volatile uint32_t DMACFG [32UL];
        BITBANDING_DMACFG_TypeDef DMACFG_Bit;
    };
    union
    {
        volatile uint32_t DMACTLBASE [32UL];
        BITBANDING_DMACTLBASE_TypeDef DMACTLBASE_Bit;
    };
    union
    {
        volatile const uint32_t DMAALTBASE [32UL];
        BITBANDING_DMAALTBASE_TypeDef DMAALTBASE_Bit;
    };
    union
    {
        volatile const uint32_t DMAWAITSTAT [32UL];
        BITBANDING_DMAWAITSTAT_TypeDef DMAWAITSTAT_Bit;
    };
    union
    {
        volatile uint32_t DMASWREQ [32UL];
        BITBANDING_DMASWREQ_TypeDef DMASWREQ_Bit;
    };
    union
    {
        volatile uint32_t DMAUSEBURSTSET [32UL];
        BITBANDING_DMASET_TypeDef DMAUSEBURSTSET_Bit;
    };
    union
    {
        volatile uint32_t DMAUSEBURSTCLR [32UL];
        BITBANDING_DMACLR_TypeDef DMAUSEBURSTCLR_Bit;
    };
    union
    {
        volatile uint32_t DMAREQMASKSET [32UL];
        BITBANDING_DMASET_TypeDef DMAREQMASKSET_Bit;
    };
    union
    {
        volatile uint32_t DMAREQMASKCLR [32UL];
        BITBANDING_DMACLR_TypeDef DMAREQMASKCLR_Bit;
    };
    union
    {
        volatile uint32_t DMAENASET [32UL];
        BITBANDING_DMASET_TypeDef DMAENASET_Bit;
    };
    union
    {
        volatile uint32_t DMAENACLR [32UL];
        BITBANDING_DMACLR_TypeDef DMAENACLR_Bit;
    };
    union
    {
        volatile uint32_t DMAALTSET [32UL];
        BITBANDING_DMASET_TypeDef DMAALTSET_Bit;
    };
    union
    {
        volatile uint32_t DMAALTCLR [32UL];
        BITBANDING_DMACLR_TypeDef DMAALTCLR_Bit;
    };
    union
    {
        volatile uint32_t DMAPRIOSET [32UL];
        BITBANDING_DMASET_TypeDef DMAPRIOSET_Bit;
    };
    union
    {
        volatile uint32_t DMAPRIOCLR [32UL];
        BITBANDING_DMACLR_TypeDef DMAPRIOCLR_Bit;
    };
    const uint32_t reserved [3UL * 32UL];
    union
    {
        volatile uint32_t DMAERRCLR [32UL];
        BITBANDING_DMAERRCLR_TypeDef DMAERRCLR_Bit;
    };
    const uint32_t reserved1 [300UL * 32UL];
    union
    {
        volatile uint32_t DMACHASGN [32UL];
        BITBANDING_DMACHASGN_TypeDef DMACHASGN_Bit;
    };
    union
    {
        volatile uint32_t DMACHIS [32UL];
        BITBANDING_DMACHIS_TypeDef DMACHIS_Bit;
    };
    const uint32_t reserved2 [2UL * 32UL];
#if 0
    union
    {
        volatile uint32_t DMACHMAP0 [32UL];
        BITBANDING_DMACHMAP0_TypeDef DMACHMAP0_Bit;
    };
    union
    {
        volatile uint32_t DMACHMAP1 [32UL];
        BITBANDING_DMACHMAP1_TypeDef DMACHMAP1_Bit;
    };
    union
    {
        volatile uint32_t DMACHMAP2 [32UL];
        BITBANDING_DMACHMAP2_TypeDef DMACHMAP2_Bit;
    };
    union
    {
        volatile uint32_t DMACHMAP3 [32UL];
        BITBANDING_DMACHMAP3_TypeDef DMACHMAP3_Bit;
    };
#endif
    union
    {
        volatile uint32_t DMACHMAP0 [4UL][32UL];
        BITBANDING_DMACHMAP0_TypeDef DMACHMAP0_Bit [4UL];
    };
    const uint32_t reserved3 [688UL * 32UL];
    union
    {
        volatile const uint32_t DMAPeriphID0 [32UL];
        BITBANDING_DMAPeriphID0_TypeDef DMAPeriphID0_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID1 [32UL];
        BITBANDING_DMAPeriphID1_TypeDef DMAPeriphID1_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID2 [32UL];
        BITBANDING_DMAPeriphID2_TypeDef DMAPeriphID2_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID3 [32UL];
        BITBANDING_DMAPeriphID3_TypeDef DMAPeriphID3_Bit;
    };
    union
    {
        volatile const uint32_t DMAPeriphID4 [32UL];
        BITBANDING_DMAPeriphID4_TypeDef DMAPeriphID4_Bit;
    };
    const uint32_t reserved4 [7UL * 32UL];
    union
    {
        volatile const uint32_t DMAPCellID0 [32UL];
        BITBANDING_DMAPCellID0_TypeDef DMAPCellID0_Bit;
    };
    union
    {
        volatile const uint32_t DMAPCellID1 [32UL];
        BITBANDING_DMAPCellID1_TypeDef DMAPCellID1_Bit;
    };
    union
    {
        volatile const uint32_t DMAPCellID2 [32UL];
        BITBANDING_DMAPCellID2_TypeDef DMAPCellID2_Bit;
    };
    union
    {
        volatile const uint32_t DMAPCellID3 [32UL];
        BITBANDING_DMAPCellID3_TypeDef DMAPCellID3_Bit;
    };
}DMA_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERAL_BITBANDING_H_ */
