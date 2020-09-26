/**
 *
 * @file SCB_RegisterAddress.h
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
 * @verbatim 22 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define SCB_BASE            ((uint32_t)0xE000E000u)

#define SCB_ICTLR_OFFSET    ((uint32_t)0x0004u)
#define SCB_ACTLR_OFFSET    ((uint32_t)0x0008u)
#define SCB_CPUID_OFFSET    ((uint32_t)0x0D00u)
#define SCB_ICSR_OFFSET     ((uint32_t)0x0D04u)
#define SCB_VTOR_OFFSET     ((uint32_t)0x0D08u)
#define SCB_AIRCR_OFFSET    ((uint32_t)0x0D0Cu)
#define SCB_SCR_OFFSET      ((uint32_t)0x0D10u)
#define SCB_CCR_OFFSET      ((uint32_t)0x0D14u)
#define SCB_SHPR1_OFFSET    ((uint32_t)0x0D18u)
#define SCB_SHPR2_OFFSET    ((uint32_t)0x0D1Cu)
#define SCB_SHPR3_OFFSET    ((uint32_t)0x0D20u)
#define SCB_SHCSR_OFFSET    ((uint32_t)0x0D24u)
#define SCB_CFSR_OFFSET     ((uint32_t)0x0D28u)
#define SCB_MCFSR_OFFSET     ((uint32_t)0x0D28u)
#define SCB_BCFSR_OFFSET    ((uint32_t)0x0D29u)
#define SCB_UCFSR_OFFSET    ((uint32_t)0x0D2Au)
#define SCB_HFSR_OFFSET     ((uint32_t)0x0D2Cu)
#define SCB_DFSR_OFFSET     ((uint32_t)0x0D30u)
#define SCB_MMFAR_OFFSET    ((uint32_t)0x0D34u)
#define SCB_BFAR_OFFSET     ((uint32_t)0x0D38u)
#define SCB_AFSR_OFFSET     ((uint32_t)0x0D3Cu)
#define SCB_PFR0_OFFSET     ((uint32_t)0x0D40u)
#define SCB_PFR1_OFFSET     ((uint32_t)0x0D44u)
#define SCB_DFR0_OFFSET     ((uint32_t)0x0D48u)
#define SCB_AFR0_OFFSET     ((uint32_t)0x0D4Cu)
#define SCB_MMFR0_OFFSET     ((uint32_t)0x0D50u)
#define SCB_MMFR1_OFFSET     ((uint32_t)0x0D54u)
#define SCB_MMFR2_OFFSET     ((uint32_t)0x0D58u)
#define SCB_MMFR3_OFFSET     ((uint32_t)0x0D5Cu)
#define SCB_ISAR0_OFFSET     ((uint32_t)0x0D60u)
#define SCB_ISAR1_OFFSET     ((uint32_t)0x0D64u)
#define SCB_ISAR2_OFFSET     ((uint32_t)0x0D68u)
#define SCB_ISAR3_OFFSET     ((uint32_t)0x0D6Cu)
#define SCB_ISAR4_OFFSET     ((uint32_t)0x0D70u)


#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_ */
