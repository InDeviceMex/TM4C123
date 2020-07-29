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

#include <stdint.h>

#if defined ( __TI_ARM__ )
    #pragma CHECK_MISRA("-10.3")
#endif

#define DMACH_MAX (32u)
#define DMACH_REG_NUM (4u)

extern volatile uint32_t DMA__u32Channel[DMACH_MAX*DMACH_REG_NUM];
extern volatile uint32_t DMA__u32ChannelAlt[DMACH_MAX*DMACH_REG_NUM];


#define DMACH_BASE            ((uint32_t)DMA__u32Channel)
#define DMACH_OFFSET          ((uint32_t)DMA__u32Channel & (uint32_t)0x00FFFFFFu)

#define DMAALTCH_BASE         ((uint32_t)DMA__u32ChannelAlt)
#define DMAALTCH_OFFSET       ((uint32_t)DMA__u32ChannelAlt & (uint32_t)0x00FFFFFFu)

#define DMACH_BITBANDING_BASE           ((uint32_t)0x22000000u)
#define DMAALTCH_BITBANDING_BASE        ((uint32_t)0x22000000u)

#define DMACH0_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000000u)
#define DMACH1_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000010u)
#define DMACH2_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000020u)
#define DMACH3_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000030u)
#define DMACH4_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000040u)
#define DMACH5_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000050u)
#define DMACH6_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000060u)
#define DMACH7_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000070u)
#define DMACH8_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000080u)
#define DMACH9_BASE                ((uint32_t)DMACH_BASE+(uint32_t)0x00000090u)
#define DMACH10_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000A0u)
#define DMACH11_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000B0u)
#define DMACH12_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000C0u)
#define DMACH13_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000D0u)
#define DMACH14_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000E0u)
#define DMACH15_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000000F0u)
#define DMACH16_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000100u)
#define DMACH17_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000110u)
#define DMACH18_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000120u)
#define DMACH19_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000130u)
#define DMACH20_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000140u)
#define DMACH21_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000150u)
#define DMACH22_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000160u)
#define DMACH23_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000170u)
#define DMACH24_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000180u)
#define DMACH25_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x00000190u)
#define DMACH26_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001A0u)
#define DMACH27_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001B0u)
#define DMACH28_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001C0u)
#define DMACH29_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001D0u)
#define DMACH30_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001E0u)
#define DMACH31_BASE               ((uint32_t)DMACH_BASE+(uint32_t)0x000001F0u)

#define DMACH0_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000000u)
#define DMACH1_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000010u)
#define DMACH2_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000020u)
#define DMACH3_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000030u)
#define DMACH4_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000040u)
#define DMACH5_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000050u)
#define DMACH6_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000060u)
#define DMACH7_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000070u)
#define DMACH8_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000080u)
#define DMACH9_OFFSET                ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000090u)
#define DMACH10_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000A0u)
#define DMACH11_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000B0u)
#define DMACH12_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000C0u)
#define DMACH13_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000D0u)
#define DMACH14_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000E0u)
#define DMACH15_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000000F0u)
#define DMACH16_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000100u)
#define DMACH17_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000110u)
#define DMACH18_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000120u)
#define DMACH19_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000130u)
#define DMACH20_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000140u)
#define DMACH21_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000150u)
#define DMACH22_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000160u)
#define DMACH23_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000170u)
#define DMACH24_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000180u)
#define DMACH25_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x00000190u)
#define DMACH26_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001A0u)
#define DMACH27_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001B0u)
#define DMACH28_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001C0u)
#define DMACH29_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001D0u)
#define DMACH30_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001E0u)
#define DMACH31_OFFSET               ((uint32_t)DMACH_OFFSET+(uint32_t)0x000001F0u)

#define DMAALTCH0_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000000u)
#define DMAALTCH1_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000010u)
#define DMAALTCH2_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000020u)
#define DMAALTCH3_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000030u)
#define DMAALTCH4_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000040u)
#define DMAALTCH5_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000050u)
#define DMAALTCH6_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000060u)
#define DMAALTCH7_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000070u)
#define DMAALTCH8_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000080u)
#define DMAALTCH9_BASE                ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000090u)
#define DMAALTCH10_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000A0u)
#define DMAALTCH11_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000B0u)
#define DMAALTCH12_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000C0u)
#define DMAALTCH13_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000D0u)
#define DMAALTCH14_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000E0u)
#define DMAALTCH15_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000000F0u)
#define DMAALTCH16_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000100u)
#define DMAALTCH17_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000110u)
#define DMAALTCH18_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000120u)
#define DMAALTCH19_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000130u)
#define DMAALTCH20_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000140u)
#define DMAALTCH21_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000150u)
#define DMAALTCH22_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000160u)
#define DMAALTCH23_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000170u)
#define DMAALTCH24_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000180u)
#define DMAALTCH25_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x00000190u)
#define DMAALTCH26_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001A0u)
#define DMAALTCH27_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001B0u)
#define DMAALTCH28_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001C0u)
#define DMAALTCH29_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001D0u)
#define DMAALTCH30_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001E0u)
#define DMAALTCH31_BASE               ((uint32_t)DMAALTCH_BASE+(uint32_t)0x000001F0u)

#define DMAALTCH0_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000000u)
#define DMAALTCH1_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000010u)
#define DMAALTCH2_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000020u)
#define DMAALTCH3_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000030u)
#define DMAALTCH4_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000040u)
#define DMAALTCH5_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000050u)
#define DMAALTCH6_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000060u)
#define DMAALTCH7_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000070u)
#define DMAALTCH8_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000080u)
#define DMAALTCH9_OFFSET                ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000090u)
#define DMAALTCH10_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000A0u)
#define DMAALTCH11_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000B0u)
#define DMAALTCH12_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000C0u)
#define DMAALTCH13_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000D0u)
#define DMAALTCH14_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000E0u)
#define DMAALTCH15_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000000F0u)
#define DMAALTCH16_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000100u)
#define DMAALTCH17_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000110u)
#define DMAALTCH18_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000120u)
#define DMAALTCH19_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000130u)
#define DMAALTCH20_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000140u)
#define DMAALTCH21_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000150u)
#define DMAALTCH22_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000160u)
#define DMAALTCH23_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000170u)
#define DMAALTCH24_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000180u)
#define DMAALTCH25_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x00000190u)
#define DMAALTCH26_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001A0u)
#define DMAALTCH27_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001B0u)
#define DMAALTCH28_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001C0u)
#define DMAALTCH29_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001D0u)
#define DMAALTCH30_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001E0u)
#define DMAALTCH31_OFFSET               ((uint32_t)DMAALTCH_OFFSET+(uint32_t)0x000001F0u)


#define DMACH_DMASRCENDP_OFFSET     ((uint32_t)0x00000000u)
#define DMACH_DMADSTENDP_OFFSET     ((uint32_t)0x00000004u)
#define DMACH_DMACHCTL_OFFSET       ((uint32_t)0x00000008u)
#define DMACH_RESERVED_OFFSET       ((uint32_t)0x0000000Cu)

#define DMAALTCH_DMASRCENDP_OFFSET     ((uint32_t)0x00000000u)
#define DMAALTCH_DMADSTENDP_OFFSET     ((uint32_t)0x00000004u)
#define DMAALTCH_DMACHCTL_OFFSET       ((uint32_t)0x00000008u)
#define DMAALTCH_RESERVED_OFFSET       ((uint32_t)0x0000000Cu)

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERADDRESSCHANNEL_H_ */
