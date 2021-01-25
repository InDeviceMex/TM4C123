/**
 *
 * @file DMA_RegisterAddressChannel.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructPeripheralChannel.h>

#define DMACH_MAX (32U)
#define DMACH_REG_NUM (4U)

extern volatile DMACHANNEL_TypeDef DMA__sChannel[DMACH_MAX];
extern volatile DMACHANNEL_TypeDef DMA__sChannelAlt[DMACH_MAX];

#define DMACH_BASE            ((uint32_t)DMA__sChannel)
#define DMACH_OFFSET          ((uint32_t)DMA__sChannel & (uint32_t)0x00FFFFFFU)

#define DMAALTCH_BASE         ((uint32_t)DMA__sChannelAlt)
#define DMAALTCH_OFFSET       ((uint32_t)DMA__sChannelAlt & (uint32_t)0x00FFFFFFU)

#define DMACH_BITBANDING_BASE           ((uint32_t)0x22000000U)
#define DMAALTCH_BITBANDING_BASE        ((uint32_t)0x22000000U)

#define DMACH0_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000000U)
#define DMACH1_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000010U)
#define DMACH2_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000020U)
#define DMACH3_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000030U)
#define DMACH4_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000040U)
#define DMACH5_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000050U)
#define DMACH6_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000060U)
#define DMACH7_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000070U)
#define DMACH8_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000080U)
#define DMACH9_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000090U)
#define DMACH10_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000A0U)
#define DMACH11_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000B0U)
#define DMACH12_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000C0U)
#define DMACH13_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000D0U)
#define DMACH14_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000E0U)
#define DMACH15_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000F0U)
#define DMACH16_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000100U)
#define DMACH17_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000110U)
#define DMACH18_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000120U)
#define DMACH19_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000130U)
#define DMACH20_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000140U)
#define DMACH21_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000150U)
#define DMACH22_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000160U)
#define DMACH23_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000170U)
#define DMACH24_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000180U)
#define DMACH25_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000190U)
#define DMACH26_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001A0U)
#define DMACH27_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001B0U)
#define DMACH28_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001C0U)
#define DMACH29_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001D0U)
#define DMACH30_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001E0U)
#define DMACH31_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001F0U)

#define DMACH0_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000000U)
#define DMACH1_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000010U)
#define DMACH2_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000020U)
#define DMACH3_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000030U)
#define DMACH4_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000040U)
#define DMACH5_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000050U)
#define DMACH6_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000060U)
#define DMACH7_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000070U)
#define DMACH8_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000080U)
#define DMACH9_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000090U)
#define DMACH10_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000A0U)
#define DMACH11_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000B0U)
#define DMACH12_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000C0U)
#define DMACH13_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000D0U)
#define DMACH14_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000E0U)
#define DMACH15_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000F0U)
#define DMACH16_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000100U)
#define DMACH17_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000110U)
#define DMACH18_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000120U)
#define DMACH19_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000130U)
#define DMACH20_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000140U)
#define DMACH21_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000150U)
#define DMACH22_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000160U)
#define DMACH23_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000170U)
#define DMACH24_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000180U)
#define DMACH25_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000190U)
#define DMACH26_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001A0U)
#define DMACH27_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001B0U)
#define DMACH28_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001C0U)
#define DMACH29_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001D0U)
#define DMACH30_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001E0U)
#define DMACH31_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001F0U)

#define DMAALTCH0_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000000U)
#define DMAALTCH1_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000010U)
#define DMAALTCH2_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000020U)
#define DMAALTCH3_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000030U)
#define DMAALTCH4_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000040U)
#define DMAALTCH5_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000050U)
#define DMAALTCH6_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000060U)
#define DMAALTCH7_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000070U)
#define DMAALTCH8_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000080U)
#define DMAALTCH9_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000090U)
#define DMAALTCH10_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000A0U)
#define DMAALTCH11_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000B0U)
#define DMAALTCH12_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000C0U)
#define DMAALTCH13_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000D0U)
#define DMAALTCH14_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000E0U)
#define DMAALTCH15_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000F0U)
#define DMAALTCH16_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000100U)
#define DMAALTCH17_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000110U)
#define DMAALTCH18_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000120U)
#define DMAALTCH19_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000130U)
#define DMAALTCH20_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000140U)
#define DMAALTCH21_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000150U)
#define DMAALTCH22_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000160U)
#define DMAALTCH23_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000170U)
#define DMAALTCH24_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000180U)
#define DMAALTCH25_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000190U)
#define DMAALTCH26_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001A0U)
#define DMAALTCH27_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001B0U)
#define DMAALTCH28_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001C0U)
#define DMAALTCH29_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001D0U)
#define DMAALTCH30_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001E0U)
#define DMAALTCH31_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001F0U)

#define DMAALTCH0_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000000U)
#define DMAALTCH1_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000010U)
#define DMAALTCH2_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000020U)
#define DMAALTCH3_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000030U)
#define DMAALTCH4_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000040U)
#define DMAALTCH5_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000050U)
#define DMAALTCH6_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000060U)
#define DMAALTCH7_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000070U)
#define DMAALTCH8_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000080U)
#define DMAALTCH9_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000090U)
#define DMAALTCH10_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000A0U)
#define DMAALTCH11_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000B0U)
#define DMAALTCH12_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000C0U)
#define DMAALTCH13_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000D0U)
#define DMAALTCH14_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000E0U)
#define DMAALTCH15_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000F0U)
#define DMAALTCH16_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000100U)
#define DMAALTCH17_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000110U)
#define DMAALTCH18_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000120U)
#define DMAALTCH19_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000130U)
#define DMAALTCH20_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000140U)
#define DMAALTCH21_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000150U)
#define DMAALTCH22_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000160U)
#define DMAALTCH23_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000170U)
#define DMAALTCH24_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000180U)
#define DMAALTCH25_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000190U)
#define DMAALTCH26_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001A0U)
#define DMAALTCH27_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001B0U)
#define DMAALTCH28_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001C0U)
#define DMAALTCH29_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001D0U)
#define DMAALTCH30_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001E0U)
#define DMAALTCH31_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001F0U)


#define DMACH_DMASRCENDP_OFFSET     ((uint32_t)0x00000000U)
#define DMACH_DMADSTENDP_OFFSET     ((uint32_t)0x00000004U)
#define DMACH_DMACHCTL_OFFSET       ((uint32_t)0x00000008U)
#define DMACH_RESERVED_OFFSET       ((uint32_t)0x0000000CU)

#define DMAALTCH_DMASRCENDP_OFFSET     ((uint32_t)0x00000000U)
#define DMAALTCH_DMADSTENDP_OFFSET     ((uint32_t)0x00000004U)
#define DMAALTCH_DMACHCTL_OFFSET       ((uint32_t)0x00000008U)
#define DMAALTCH_RESERVED_OFFSET       ((uint32_t)0x0000000CU)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_ */
