/**
 *
 * @file FPU_RegisterAddress.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define FPU_BASE            ((uint32_t)0xE000E000U)
#define FPU_OFFSET          ((uint32_t)0x00000D88U)

#define FPU_CPACR_OFFSET     ((uint32_t)0x0D88U)
#define FPU_FPCCR_OFFSET     ((uint32_t)0x0F34U)
#define FPU_FPCAR_OFFSET     ((uint32_t)0x0F38U)
#define FPU_FPDSCR_OFFSET    ((uint32_t)0x0F3CU)
#define FPU_MVFR0_OFFSET     ((uint32_t)0x0F40U)
#define FPU_MVFR1_OFFSET     ((uint32_t)0x0F44U)
#define FPU_MVFR2_OFFSET     ((uint32_t)0x0F48U)

#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_PERIPHERAL_FPU_REGISTER_FPU_REGISTERADDRESS_H_ */
