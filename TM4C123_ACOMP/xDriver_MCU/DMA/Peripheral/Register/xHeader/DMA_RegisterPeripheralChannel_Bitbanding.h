/**
 *
 * @file DMA_RegisterPeripheralChannel_Bitbanding.h
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
 * @verbatim 29 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERPERIPHERALCHANNEL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERPERIPHERALCHANNEL_BITBANDING_H_

#include <xDriver_MCU/DMA/Peripheral/Register/xHeader/DMA_RegisterAddressChannel.h>
#include <xDriver_MCU/DMA/Peripheral/Register/RegisterDefines/DMA_RegisterDefines.h>
#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructPeripheralChannel_Bitbanding.h>

#define DMACH_BITBANDING        (((DMACH_BITBANDING_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+(DMACH_OFFSET*(uint32_t)32U))))
#define DMAALTCH_BITBANDING        (((DMACH_BITBANDING_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+(DMAALTCH_OFFSET*(uint32_t)32U))))

/********************************************************************************************
************************************** 1 DMASRCENDP **********************************************
********************************************************************************************/
#define DMACH_BITBANDING_DMASRCENDP0            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH0_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP1            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH1_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP2            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH2_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP3            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH3_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP4            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH4_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP5            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH5_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP6            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH6_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP7            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH7_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP8            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH8_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP9            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH9_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP10           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH10_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP11           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH11_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP12           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH12_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP13           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH13_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP14           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH14_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP15           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH15_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP16           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH16_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP17           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH17_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP18           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH18_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP19           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH19_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP20           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH20_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP21           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH21_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP22           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH22_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP23           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH23_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP24           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH24_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP25           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH25_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP26           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH26_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP27           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH27_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP28           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH28_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP29           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH29_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP30           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH30_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMASRCENDP31           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH31_OFFSET+DMACH_DMASRCENDP_OFFSET)*(uint32_t)32U)))

/********************************************************************************************
************************************** ALT 1 DMASRCENDP **********************************************
********************************************************************************************/
#define DMAALTCH_BITBANDING_DMASRCENDP0            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH0_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP1            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH1_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP2            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH2_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP3            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH3_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP4            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH4_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP5            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH5_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP6            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH6_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP7            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH7_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP8            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH8_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP9            ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH9_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP10           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH10_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP11           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH11_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP12           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH12_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP13           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH13_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP14           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH14_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP15           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH15_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP16           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH16_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP17           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH17_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP18           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH18_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP19           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH19_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP20           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH20_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP21           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH21_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP22           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH22_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP23           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH23_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP24           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH24_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP25           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH25_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP26           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH26_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP27           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH27_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP28           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH28_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP29           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH29_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP30           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH30_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMASRCENDP31           ((BITBANDING_DMASRCENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH31_OFFSET+DMAALTCH_DMASRCENDP_OFFSET)*(uint32_t)32U)))

/********************************************************************************************
************************************** 2 DMADSTENDP **********************************************
********************************************************************************************/
#define DMACH_BITBANDING_DMADSTENDP0            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH0_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP1            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH1_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP2            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH2_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP3            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH3_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP4            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH4_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP5            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH5_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP6            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH6_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP7            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH7_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP8            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH8_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP9            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH9_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP10           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH10_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP11           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH11_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP12           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH12_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP13           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH13_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP14           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH14_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP15           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH15_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP16           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH16_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP17           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH17_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP18           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH18_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP19           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH19_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP20           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH20_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP21           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH21_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP22           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH22_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP23           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH23_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP24           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH24_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP25           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH25_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP26           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH26_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP27           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH27_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP28           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH28_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP29           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH29_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP30           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH30_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMADSTENDP31           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH31_OFFSET+DMACH_DMADSTENDP_OFFSET)*(uint32_t)32U)))

/********************************************************************************************
************************************** ALT 2 DMADSTENDP **********************************************
********************************************************************************************/
#define DMAALTCH_BITBANDING_DMADSTENDP0            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH0_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP1            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH1_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP2            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH2_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP3            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH3_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP4            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH4_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP5            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH5_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP6            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH6_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP7            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH7_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP8            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH8_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP9            ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH9_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP10           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH10_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP11           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH11_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP12           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH12_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP13           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH13_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP14           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH14_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP15           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH15_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP16           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH16_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP17           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH17_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP18           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH18_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP19           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH19_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP20           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH20_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP21           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH21_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP22           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH22_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP23           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH23_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP24           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH24_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP25           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH25_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP26           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH26_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP27           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH27_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP28           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH28_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP29           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH29_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP30           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH30_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMADSTENDP31           ((BITBANDING_DMADSTENDP_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH31_OFFSET+DMAALTCH_DMADSTENDP_OFFSET)*(uint32_t)32U)))

/********************************************************************************************
************************************** 3 DMACHCTL **********************************************
********************************************************************************************/
#define DMACH_BITBANDING_DMACHCTL0            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH0_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL1            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH1_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL2            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH2_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL3            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH3_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL4            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH4_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL5            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH5_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL6            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH6_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL7            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH7_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL8            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH8_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL9            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH9_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL10           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH10_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL11           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH11_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL12           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH12_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL13           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH13_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL14           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH14_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL15           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH15_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL16           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH16_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL17           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH17_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL18           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH18_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL19           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH19_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL20           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH20_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL21           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH21_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL22           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH22_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL23           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH23_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL24           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH24_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL25           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH25_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL26           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH26_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL27           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH27_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL28           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH28_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL29           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH29_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL30           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH30_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMACH_BITBANDING_DMACHCTL31           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMACH_BITBANDING_BASE+((DMACH31_OFFSET+DMACH_DMACHCTL_OFFSET)*(uint32_t)32U)))

/********************************************************************************************
************************************** ALT 3 DMACHCTL **********************************************
********************************************************************************************/
#define DMAALTCH_BITBANDING_DMACHCTL0            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH0_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL1            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH1_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL2            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH2_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL3            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH3_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL4            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH4_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL5            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH5_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL6            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH6_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL7            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH7_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL8            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH8_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL9            ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH9_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL10           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH10_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL11           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH11_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL12           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH12_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL13           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH13_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL14           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH14_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL15           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH15_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL16           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH16_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL17           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH17_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL18           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH18_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL19           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH19_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL20           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH20_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL21           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH21_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL22           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH22_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL23           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH23_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL24           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH24_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL25           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH25_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL26           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH26_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL27           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH27_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL28           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH28_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL29           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH29_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL30           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH30_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))
#define DMAALTCH_BITBANDING_DMACHCTL31           ((BITBANDING_DMACHCTL_TypeDef*)((uint32_t)DMAALTCH_BITBANDING_BASE+((DMAALTCH31_OFFSET+DMAALTCH_DMACHCTL_OFFSET)*(uint32_t)32U)))


#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_REGISTER_DMA_REGISTERPERIPHERALCHANNEL_BITBANDING_H_ */
