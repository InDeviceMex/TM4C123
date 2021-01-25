/**
 *
 * @file NVIC_RegisterAddress.h
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
 * @verbatim 21 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define NVIC_BASE            ((uint32_t)0xE000E000UL)
#define NVIC_OFFSET          ((uint32_t)0x00000100UL)

#define NVIC_IRQ_MAX        (138U)
#define NVIC_MAX            (3U)
#define NVIC_PRI_MAX        (7U)
#define NVIC_PRI_MASK        (7U)
#define NVIC_IPR_MAX        (34U)

#define NVIC_ISER0_OFFSET       ((uint32_t)0x0100U)
#define NVIC_ICER0_OFFSET       ((uint32_t)0x0180U)
#define NVIC_ISPR0_OFFSET       ((uint32_t)0x0200U)
#define NVIC_ICPR0_OFFSET       ((uint32_t)0x0280U)
#define NVIC_IABR0_OFFSET       ((uint32_t)0x0300U)
#define NVIC_ISER1_OFFSET       ((uint32_t)0x0104U)
#define NVIC_ICER1_OFFSET       ((uint32_t)0x0184U)
#define NVIC_ISPR1_OFFSET       ((uint32_t)0x0204U)
#define NVIC_ICPR1_OFFSET       ((uint32_t)0x0284U)
#define NVIC_IABR1_OFFSET       ((uint32_t)0x0304U)
#define NVIC_ISER2_OFFSET       ((uint32_t)0x0108U)
#define NVIC_ICER2_OFFSET       ((uint32_t)0x0188U)
#define NVIC_ISPR2_OFFSET       ((uint32_t)0x0208U)
#define NVIC_ICPR2_OFFSET       ((uint32_t)0x0288U)
#define NVIC_IABR2_OFFSET       ((uint32_t)0x0308U)
#define NVIC_ISER3_OFFSET       ((uint32_t)0x010CU)
#define NVIC_ICER3_OFFSET       ((uint32_t)0x018CU)
#define NVIC_ISPR3_OFFSET       ((uint32_t)0x020CU)
#define NVIC_ICPR3_OFFSET       ((uint32_t)0x028CU)
#define NVIC_IABR3_OFFSET       ((uint32_t)0x030CU)
#define NVIC_ISER4_OFFSET       ((uint32_t)0x0110U)
#define NVIC_ICER4_OFFSET       ((uint32_t)0x0190U)
#define NVIC_ISPR4_OFFSET       ((uint32_t)0x0210U)
#define NVIC_ICPR4_OFFSET       ((uint32_t)0x0290U)
#define NVIC_IABR4_OFFSET       ((uint32_t)0x0310U)
#define NVIC_IPR0_OFFSET        ((uint32_t)0x0400U)
#define NVIC_IPR1_OFFSET        ((uint32_t)0x0404U)
#define NVIC_IPR2_OFFSET        ((uint32_t)0x0408U)
#define NVIC_IPR3_OFFSET        ((uint32_t)0x040CU)
#define NVIC_IPR4_OFFSET        ((uint32_t)0x0410U)
#define NVIC_IPR5_OFFSET        ((uint32_t)0x0414U)
#define NVIC_IPR6_OFFSET        ((uint32_t)0x0418U)
#define NVIC_IPR7_OFFSET        ((uint32_t)0x041CU)
#define NVIC_IPR8_OFFSET        ((uint32_t)0x0420U)
#define NVIC_IPR9_OFFSET        ((uint32_t)0x0424U)
#define NVIC_IPR10_OFFSET       ((uint32_t)0x0428U)
#define NVIC_IPR11_OFFSET       ((uint32_t)0x042CU)
#define NVIC_IPR12_OFFSET       ((uint32_t)0x0430U)
#define NVIC_IPR13_OFFSET       ((uint32_t)0x0434U)
#define NVIC_IPR14_OFFSET       ((uint32_t)0x0438U)
#define NVIC_IPR15_OFFSET       ((uint32_t)0x043CU)
#define NVIC_IPR16_OFFSET       ((uint32_t)0x0440U)
#define NVIC_IPR17_OFFSET       ((uint32_t)0x0444U)
#define NVIC_IPR18_OFFSET       ((uint32_t)0x0448U)
#define NVIC_IPR19_OFFSET       ((uint32_t)0x044CU)
#define NVIC_IPR20_OFFSET       ((uint32_t)0x0450U)
#define NVIC_IPR21_OFFSET       ((uint32_t)0x0454U)
#define NVIC_IPR22_OFFSET       ((uint32_t)0x0458U)
#define NVIC_IPR23_OFFSET       ((uint32_t)0x045CU)
#define NVIC_IPR24_OFFSET       ((uint32_t)0x0460U)
#define NVIC_IPR25_OFFSET       ((uint32_t)0x0464U)
#define NVIC_IPR26_OFFSET       ((uint32_t)0x0468U)
#define NVIC_IPR27_OFFSET       ((uint32_t)0x046CU)
#define NVIC_IPR28_OFFSET       ((uint32_t)0x0470U)
#define NVIC_IPR29_OFFSET       ((uint32_t)0x0474U)
#define NVIC_IPR30_OFFSET       ((uint32_t)0x0478U)
#define NVIC_IPR31_OFFSET       ((uint32_t)0x047CU)
#define NVIC_IPR32_OFFSET       ((uint32_t)0x0480U)
#define NVIC_IPR33_OFFSET       ((uint32_t)0x0484U)
#define NVIC_IPR34_OFFSET       ((uint32_t)0x0488U)
#define NVIC_STIR_OFFSET        ((uint32_t)0x0F00U)

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_ */
