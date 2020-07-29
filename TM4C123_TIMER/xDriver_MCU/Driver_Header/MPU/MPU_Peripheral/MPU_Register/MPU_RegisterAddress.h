/**
 *
 * @file MPU_RegisterAddress.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_MPU_PERIPHERAL_MPU_REGISTER_MPU_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_MPU_PERIPHERAL_MPU_REGISTER_MPU_REGISTERADDRESS_H_

#include <stdint.h>

#define MPU_BASE            ((uint32_t)0xE000E000u)
#define MPU_OFFSET          ((uint32_t)0x00000D90u)

#define MPU_REGION_NUMBER (8u)

#define MPU_TYPER_OFFSET     ((uint32_t)0x0D90u)
#define MPU_CTRL_OFFSET     ((uint32_t)0x0D94u)
#define MPU_RNR_OFFSET      ((uint32_t)0x0D98u)
#define MPU_RBAR_OFFSET     ((uint32_t)0x0D9Cu)
#define MPU_RASR_OFFSET     ((uint32_t)0x0DA0u)
#define MPU_RBAR1_OFFSET    ((uint32_t)0x0DA4u)
#define MPU_RASR1_OFFSET    ((uint32_t)0x0DA8u)
#define MPU_RBAR2_OFFSET    ((uint32_t)0x0DACu)
#define MPU_RASR2_OFFSET    ((uint32_t)0x0DB0u)
#define MPU_RBAR3_OFFSET    ((uint32_t)0x0DB4u)
#define MPU_RASR3_OFFSET    ((uint32_t)0x0DB8u)

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_MPU_PERIPHERAL_MPU_REGISTER_MPU_REGISTERADDRESS_H_ */
