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

#define SCB_BASE            ((uint32_t)0xE000E000U)

#define SCB_ICTLR_OFFSET    ((uint32_t)0x0004U)
#define SCB_ACTLR_OFFSET    ((uint32_t)0x0008U)
#define SCB_CPUID_OFFSET    ((uint32_t)0x0D00U)
#define SCB_ICSR_OFFSET     ((uint32_t)0x0D04U)
#define SCB_VTOR_OFFSET     ((uint32_t)0x0D08U)
#define SCB_AIRCR_OFFSET    ((uint32_t)0x0D0CU)
#define SCB_SCR_OFFSET      ((uint32_t)0x0D10U)
#define SCB_CCR_OFFSET      ((uint32_t)0x0D14U)
#define SCB_SHPR1_OFFSET    ((uint32_t)0x0D18U)
#define SCB_SHPR2_OFFSET    ((uint32_t)0x0D1CU)
#define SCB_SHPR3_OFFSET    ((uint32_t)0x0D20U)
#define SCB_SHCSR_OFFSET    ((uint32_t)0x0D24U)
#define SCB_CFSR_OFFSET     ((uint32_t)0x0D28U)
#define SCB_MCFSR_OFFSET     ((uint32_t)0x0D28U)
#define SCB_BCFSR_OFFSET    ((uint32_t)0x0D29U)
#define SCB_UCFSR_OFFSET    ((uint32_t)0x0D2AU)
#define SCB_HFSR_OFFSET     ((uint32_t)0x0D2CU)
#define SCB_DFSR_OFFSET     ((uint32_t)0x0D30U)
#define SCB_MMFAR_OFFSET    ((uint32_t)0x0D34U)
#define SCB_BFAR_OFFSET     ((uint32_t)0x0D38U)
#define SCB_AFSR_OFFSET     ((uint32_t)0x0D3CU)
#define SCB_PFR0_OFFSET     ((uint32_t)0x0D40U)
#define SCB_PFR1_OFFSET     ((uint32_t)0x0D44U)
#define SCB_DFR0_OFFSET     ((uint32_t)0x0D48U)
#define SCB_AFR0_OFFSET     ((uint32_t)0x0D4CU)
#define SCB_MMFR0_OFFSET     ((uint32_t)0x0D50U)
#define SCB_MMFR1_OFFSET     ((uint32_t)0x0D54U)
#define SCB_MMFR2_OFFSET     ((uint32_t)0x0D58U)
#define SCB_MMFR3_OFFSET     ((uint32_t)0x0D5CU)
#define SCB_ISAR0_OFFSET     ((uint32_t)0x0D60U)
#define SCB_ISAR1_OFFSET     ((uint32_t)0x0D64U)
#define SCB_ISAR2_OFFSET     ((uint32_t)0x0D68U)
#define SCB_ISAR3_OFFSET     ((uint32_t)0x0D6CU)
#define SCB_ISAR4_OFFSET     ((uint32_t)0x0D70U)


#endif /* XDRIVER_MCU_DRIVER_HEADER_SCB_SCB_PERIPHERAL_SCB_REGISTER_SCB_REGISTERADDRESS_H_ */
