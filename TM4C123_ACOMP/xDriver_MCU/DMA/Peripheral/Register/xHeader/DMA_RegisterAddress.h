/**
 *
 * @file DMA_RegisterAddress.h
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define DMA_BASE    ((uint32_t) 0x400FF000UL)
#define DMA_OFFSET    ((uint32_t) 0x000FF000UL)

#define DMA_BITBANDING_BASE    ((uint32_t) 0x42000000UL)

#define DMA_DMASTAT_OFFSET    ((uint32_t) 0x00000000UL)
#define DMA_DMACFG_OFFSET    ((uint32_t) 0x00000004UL)
#define DMA_DMACTLBASE_OFFSET    ((uint32_t) 0x00000008UL)
#define DMA_DMAALTBASE_OFFSET    ((uint32_t) 0x0000000CUL)
#define DMA_DMAWAITSTAT_OFFSET    ((uint32_t) 0x00000010UL)
#define DMA_DMASWREQ_OFFSET    ((uint32_t) 0x00000014UL)
#define DMA_DMAUSEBURSTSET_OFFSET    ((uint32_t) 0x00000018UL)
#define DMA_DMAUSEBURSTCLR_OFFSET    ((uint32_t) 0x0000001CUL)
#define DMA_DMAREQMASKSET_OFFSET    ((uint32_t) 0x00000020UL)
#define DMA_DMAREQMASKCLR_OFFSET    ((uint32_t) 0x00000024UL)
#define DMA_DMAENASET_OFFSET    ((uint32_t) 0x00000028UL)
#define DMA_DMAENACLR_OFFSET    ((uint32_t) 0x0000002CUL)
#define DMA_DMAALTSET_OFFSET    ((uint32_t) 0x00000030UL)
#define DMA_DMAALTCLR_OFFSET    ((uint32_t) 0x00000034UL)
#define DMA_DMAPRIOSET_OFFSET    ((uint32_t) 0x00000038UL)
#define DMA_DMAPRIOCLR_OFFSET    ((uint32_t) 0x0000003CUL)
#define DMA_DMAERRCLR_OFFSET    ((uint32_t) 0x0000004CUL)
#define DMA_DMACHASGN_OFFSET    ((uint32_t) 0x00000500UL)
#define DMA_DMACHIS_OFFSET    ((uint32_t) 0x00000504UL)
#define DMA_DMACHMAP_OFFSET    ((uint32_t) 0x00000510UL)
#define DMA_DMACHMAP0_OFFSET    ((uint32_t) 0x00000510UL)
#define DMA_DMACHMAP1_OFFSET    ((uint32_t) 0x00000514UL)
#define DMA_DMACHMAP2_OFFSET    ((uint32_t) 0x00000518UL)
#define DMA_DMACHMAP3_OFFSET    ((uint32_t) 0x0000051CUL)
#define DMA_DMAPeriphID0_OFFSET    ((uint32_t) 0x00000FE0UL)
#define DMA_DMAPeriphID1_OFFSET    ((uint32_t) 0x00000FE4UL)
#define DMA_DMAPeriphID2_OFFSET    ((uint32_t) 0x00000FE8UL)
#define DMA_DMAPeriphID3_OFFSET    ((uint32_t) 0x00000FECUL)
#define DMA_DMAPeriphID4_OFFSET    ((uint32_t) 0x00000FD0UL)
#define DMA_DMAPCellID0_OFFSET    ((uint32_t) 0x00000FF0UL)
#define DMA_DMAPCellID1_OFFSET    ((uint32_t) 0x00000FF4UL)
#define DMA_DMAPCellID2_OFFSET    ((uint32_t) 0x00000FF8UL)
#define DMA_DMAPCellID3_OFFSET    ((uint32_t) 0x00000FFCUL)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_ */
