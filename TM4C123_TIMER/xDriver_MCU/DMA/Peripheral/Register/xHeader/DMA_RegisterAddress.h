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

#define DMA_BASE                    ((uint32_t)0x400FF000u)
#define DMA_OFFSET                  ((uint32_t)0x000FF000u)

#define DMA_BITBANDING_BASE        ((uint32_t)0x42000000u)

#define DMA_DMASTAT_OFFSET           ((uint32_t)0x00000000u)
#define DMA_DMACFG_OFFSET            ((uint32_t)0x00000004u)
#define DMA_DMACTLBASE_OFFSET        ((uint32_t)0x00000008u)
#define DMA_DMAALTBASE_OFFSET        ((uint32_t)0x0000000Cu)
#define DMA_DMAWAITSTAT_OFFSET       ((uint32_t)0x00000010u)
#define DMA_DMASWREQ_OFFSET          ((uint32_t)0x00000014u)
#define DMA_DMAUSEBURSTSET_OFFSET    ((uint32_t)0x00000018u)
#define DMA_DMAUSEBURSTCLR_OFFSET    ((uint32_t)0x0000001Cu)
#define DMA_DMAREQMASKSET_OFFSET     ((uint32_t)0x00000020u)
#define DMA_DMAREQMASKCLR_OFFSET     ((uint32_t)0x00000024u)
#define DMA_DMAENASET_OFFSET         ((uint32_t)0x00000028u)
#define DMA_DMAENACLR_OFFSET         ((uint32_t)0x0000002Cu)
#define DMA_DMAALTSET_OFFSET         ((uint32_t)0x00000030u)
#define DMA_DMAALTCLR_OFFSET         ((uint32_t)0x00000034u)
#define DMA_DMAPRIOSET_OFFSET        ((uint32_t)0x00000038u)
#define DMA_DMAPRIOCLR_OFFSET        ((uint32_t)0x0000003Cu)
#define DMA_DMAERRCLR_OFFSET         ((uint32_t)0x0000004Cu)
#define DMA_DMACHASGN_OFFSET         ((uint32_t)0x00000500u)
#define DMA_DMACHIS_OFFSET           ((uint32_t)0x00000504u)
#define DMA_DMACHMAP0_OFFSET         ((uint32_t)0x00000510u)
#define DMA_DMACHMAP1_OFFSET         ((uint32_t)0x00000514u)
#define DMA_DMACHMAP2_OFFSET         ((uint32_t)0x00000518u)
#define DMA_DMACHMAP3_OFFSET         ((uint32_t)0x0000051Cu)
#define DMA_DMAPeriphID0_OFFSET      ((uint32_t)0x00000FE0u)
#define DMA_DMAPeriphID1_OFFSET      ((uint32_t)0x00000FE4u)
#define DMA_DMAPeriphID2_OFFSET      ((uint32_t)0x00000FE8u)
#define DMA_DMAPeriphID3_OFFSET      ((uint32_t)0x00000FECu)
#define DMA_DMAPeriphID4_OFFSET      ((uint32_t)0x00000FD0u)
#define DMA_DMAPCellID0_OFFSET       ((uint32_t)0x00000FF0u)
#define DMA_DMAPCellID1_OFFSET       ((uint32_t)0x00000FF4u)
#define DMA_DMAPCellID2_OFFSET       ((uint32_t)0x00000FF8u)
#define DMA_DMAPCellID3_OFFSET       ((uint32_t)0x00000FFCu)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESS_H_ */
