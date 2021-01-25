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

#define DMA_BASE                    ((uint32_t)0x400FF000U)
#define DMA_OFFSET                  ((uint32_t)0x000FF000U)

#define DMA_BITBANDING_BASE        ((uint32_t)0x42000000U)

#define DMA_DMASTAT_OFFSET           ((uint32_t)0x00000000U)
#define DMA_DMACFG_OFFSET            ((uint32_t)0x00000004U)
#define DMA_DMACTLBASE_OFFSET        ((uint32_t)0x00000008U)
#define DMA_DMAALTBASE_OFFSET        ((uint32_t)0x0000000CU)
#define DMA_DMAWAITSTAT_OFFSET       ((uint32_t)0x00000010U)
#define DMA_DMASWREQ_OFFSET          ((uint32_t)0x00000014U)
#define DMA_DMAUSEBURSTSET_OFFSET    ((uint32_t)0x00000018U)
#define DMA_DMAUSEBURSTCLR_OFFSET    ((uint32_t)0x0000001CU)
#define DMA_DMAREQMASKSET_OFFSET     ((uint32_t)0x00000020U)
#define DMA_DMAREQMASKCLR_OFFSET     ((uint32_t)0x00000024U)
#define DMA_DMAENASET_OFFSET         ((uint32_t)0x00000028U)
#define DMA_DMAENACLR_OFFSET         ((uint32_t)0x0000002CU)
#define DMA_DMAALTSET_OFFSET         ((uint32_t)0x00000030U)
#define DMA_DMAALTCLR_OFFSET         ((uint32_t)0x00000034U)
#define DMA_DMAPRIOSET_OFFSET        ((uint32_t)0x00000038U)
#define DMA_DMAPRIOCLR_OFFSET        ((uint32_t)0x0000003CU)
#define DMA_DMAERRCLR_OFFSET         ((uint32_t)0x0000004CU)
#define DMA_DMACHASGN_OFFSET         ((uint32_t)0x00000500U)
#define DMA_DMACHIS_OFFSET           ((uint32_t)0x00000504U)
#define DMA_DMACHMAP0_OFFSET         ((uint32_t)0x00000510U)
#define DMA_DMACHMAP1_OFFSET         ((uint32_t)0x00000514U)
#define DMA_DMACHMAP2_OFFSET         ((uint32_t)0x00000518U)
#define DMA_DMACHMAP3_OFFSET         ((uint32_t)0x0000051CU)
#define DMA_DMAPeriphID0_OFFSET      ((uint32_t)0x00000FE0U)
#define DMA_DMAPeriphID1_OFFSET      ((uint32_t)0x00000FE4U)
#define DMA_DMAPeriphID2_OFFSET      ((uint32_t)0x00000FE8U)
#define DMA_DMAPeriphID3_OFFSET      ((uint32_t)0x00000FECU)
#define DMA_DMAPeriphID4_OFFSET      ((uint32_t)0x00000FD0U)
#define DMA_DMAPCellID0_OFFSET       ((uint32_t)0x00000FF0U)
#define DMA_DMAPCellID1_OFFSET       ((uint32_t)0x00000FF4U)
#define DMA_DMAPCellID2_OFFSET       ((uint32_t)0x00000FF8U)
#define DMA_DMAPCellID3_OFFSET       ((uint32_t)0x00000FFCU)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_ */
