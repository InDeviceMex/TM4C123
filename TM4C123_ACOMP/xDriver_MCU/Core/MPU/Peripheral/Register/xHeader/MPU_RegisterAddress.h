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
#ifndef XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERADDRESS_H_
#define XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERADDRESS_H_

#include <xUtils/Standard/Standard.h>

#define MPU_BASE            ((uint32_t)0xE000E000U)
#define MPU_OFFSET          ((uint32_t)0x00000D90U)

#define MPU_REGION_NUMBER (8U)

#define MPU_TYPER_OFFSET     ((uint32_t)0x0D90U)
#define MPU_CTRL_OFFSET     ((uint32_t)0x0D94U)
#define MPU_RNR_OFFSET      ((uint32_t)0x0D98U)
#define MPU_RBAR_OFFSET     ((uint32_t)0x0D9CU)
#define MPU_RASR_OFFSET     ((uint32_t)0x0DA0U)
#define MPU_RBAR1_OFFSET    ((uint32_t)0x0DA4U)
#define MPU_RASR1_OFFSET    ((uint32_t)0x0DA8U)
#define MPU_RBAR2_OFFSET    ((uint32_t)0x0DACU)
#define MPU_RASR2_OFFSET    ((uint32_t)0x0DB0U)
#define MPU_RBAR3_OFFSET    ((uint32_t)0x0DB4U)
#define MPU_RASR3_OFFSET    ((uint32_t)0x0DB8U)

#endif /* XDRIVER_MCU_DRIVER_HEADER_MPU_PERIPHERAL_REGISTER_MPU_REGISTERADDRESS_H_ */
