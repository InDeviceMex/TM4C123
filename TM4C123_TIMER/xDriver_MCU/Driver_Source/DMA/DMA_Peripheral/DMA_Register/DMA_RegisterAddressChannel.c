/**
 *
 * @file DMA_RegisterAddressChannel.c
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

#include <xDriver_MCU/Driver_Header/DMA/DMA_Peripheral/DMA_Register/DMA_RegisterAddressChannel.h>
#include <stdint.h>

#if defined ( __TI_ARM__ )

#pragma DATA_SECTION(DMA__u32Channel, ".dma")
#pragma DATA_SECTION(DMA__u32ChannelAlt, ".dmaalt")

volatile uint32_t DMA__u32Channel[DMACH_MAX*DMACH_REG_NUM];
volatile uint32_t DMA__u32ChannelAlt[DMACH_MAX*DMACH_REG_NUM];

#elif defined ( __GNUC__ )
__attribute__((section(".dma"))) volatile uint32_t DMA__u32Channel[DMACH_MAX*DMACH_REG_NUM];
__attribute__((section(".dmaalt"))) volatile uint32_t DMA__u32ChannelAlt[DMACH_MAX*DMACH_REG_NUM];
#endif


