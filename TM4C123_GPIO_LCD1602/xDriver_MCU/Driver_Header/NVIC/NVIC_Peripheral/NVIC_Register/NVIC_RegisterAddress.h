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

#include <stdint.h>

#define NVIC_BASE            ((uint32_t)0xE000E000UL)
#define NVIC_OFFSET          ((uint32_t)0x00000100UL)

#define NVIC_IRQ_MAX        (138u)
#define NVIC_MAX            (3u)
#define NVIC_PRI_MAX        (7u)
#define NVIC_PRI_MASK        (7u)
#define NVIC_IPR_MAX        (34u)

#define NVIC_ISER0_OFFSET       ((uint32_t)0x0100u)
#define NVIC_ICER0_OFFSET       ((uint32_t)0x0180u)
#define NVIC_ISPR0_OFFSET       ((uint32_t)0x0200u)
#define NVIC_ICPR0_OFFSET       ((uint32_t)0x0280u)
#define NVIC_IABR0_OFFSET       ((uint32_t)0x0300u)
#define NVIC_ISER1_OFFSET       ((uint32_t)0x0104u)
#define NVIC_ICER1_OFFSET       ((uint32_t)0x0184u)
#define NVIC_ISPR1_OFFSET       ((uint32_t)0x0204u)
#define NVIC_ICPR1_OFFSET       ((uint32_t)0x0284u)
#define NVIC_IABR1_OFFSET       ((uint32_t)0x0304u)
#define NVIC_ISER2_OFFSET       ((uint32_t)0x0108u)
#define NVIC_ICER2_OFFSET       ((uint32_t)0x0188u)
#define NVIC_ISPR2_OFFSET       ((uint32_t)0x0208u)
#define NVIC_ICPR2_OFFSET       ((uint32_t)0x0288u)
#define NVIC_IABR2_OFFSET       ((uint32_t)0x0308u)
#define NVIC_ISER3_OFFSET       ((uint32_t)0x010Cu)
#define NVIC_ICER3_OFFSET       ((uint32_t)0x018Cu)
#define NVIC_ISPR3_OFFSET       ((uint32_t)0x020Cu)
#define NVIC_ICPR3_OFFSET       ((uint32_t)0x028Cu)
#define NVIC_IABR3_OFFSET       ((uint32_t)0x030Cu)
#define NVIC_ISER4_OFFSET       ((uint32_t)0x0110u)
#define NVIC_ICER4_OFFSET       ((uint32_t)0x0190u)
#define NVIC_ISPR4_OFFSET       ((uint32_t)0x0210u)
#define NVIC_ICPR4_OFFSET       ((uint32_t)0x0290u)
#define NVIC_IABR4_OFFSET       ((uint32_t)0x0310u)
#define NVIC_IPR0_OFFSET        ((uint32_t)0x0400u)
#define NVIC_IPR1_OFFSET        ((uint32_t)0x0404u)
#define NVIC_IPR2_OFFSET        ((uint32_t)0x0408u)
#define NVIC_IPR3_OFFSET        ((uint32_t)0x040Cu)
#define NVIC_IPR4_OFFSET        ((uint32_t)0x0410u)
#define NVIC_IPR5_OFFSET        ((uint32_t)0x0414u)
#define NVIC_IPR6_OFFSET        ((uint32_t)0x0418u)
#define NVIC_IPR7_OFFSET        ((uint32_t)0x041Cu)
#define NVIC_IPR8_OFFSET        ((uint32_t)0x0420u)
#define NVIC_IPR9_OFFSET        ((uint32_t)0x0424u)
#define NVIC_IPR10_OFFSET       ((uint32_t)0x0428u)
#define NVIC_IPR11_OFFSET       ((uint32_t)0x042Cu)
#define NVIC_IPR12_OFFSET       ((uint32_t)0x0430u)
#define NVIC_IPR13_OFFSET       ((uint32_t)0x0434u)
#define NVIC_IPR14_OFFSET       ((uint32_t)0x0438u)
#define NVIC_IPR15_OFFSET       ((uint32_t)0x043Cu)
#define NVIC_IPR16_OFFSET       ((uint32_t)0x0440u)
#define NVIC_IPR17_OFFSET       ((uint32_t)0x0444u)
#define NVIC_IPR18_OFFSET       ((uint32_t)0x0448u)
#define NVIC_IPR19_OFFSET       ((uint32_t)0x044Cu)
#define NVIC_IPR20_OFFSET       ((uint32_t)0x0450u)
#define NVIC_IPR21_OFFSET       ((uint32_t)0x0454u)
#define NVIC_IPR22_OFFSET       ((uint32_t)0x0458u)
#define NVIC_IPR23_OFFSET       ((uint32_t)0x045Cu)
#define NVIC_IPR24_OFFSET       ((uint32_t)0x0460u)
#define NVIC_IPR25_OFFSET       ((uint32_t)0x0464u)
#define NVIC_IPR26_OFFSET       ((uint32_t)0x0468u)
#define NVIC_IPR27_OFFSET       ((uint32_t)0x046Cu)
#define NVIC_IPR28_OFFSET       ((uint32_t)0x0470u)
#define NVIC_IPR29_OFFSET       ((uint32_t)0x0474u)
#define NVIC_IPR30_OFFSET       ((uint32_t)0x0478u)
#define NVIC_IPR31_OFFSET       ((uint32_t)0x047Cu)
#define NVIC_IPR32_OFFSET       ((uint32_t)0x0480u)
#define NVIC_IPR33_OFFSET       ((uint32_t)0x0484u)
#define NVIC_IPR34_OFFSET       ((uint32_t)0x0488u)
#define NVIC_STIR_OFFSET        ((uint32_t)0x0F00u)

#endif /* XDRIVER_MCU_DRIVER_HEADER_NVIC_NVIC_PERIPHERAL_NVIC_REGISTER_NVIC_REGISTERADDRESS_H_ */
