/**
 *
 * @file I2C_InterruptRoutine_Source.h
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
 * @verbatim 8 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_I2C_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_I2C_INTERRUPTROUTINE_SOURCE_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

extern void (*I2C__vIRQSourceMasterHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enINTERRUPT_MASTER_MAX]) (void);
extern void (*I2C__vIRQSourceSlaveHandler[(uint32_t) I2C_enMODULE_MAX][(uint32_t) I2C_enINTERRUPT_SLAVE_MAX]) (void);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_I2C_INTERRUPTROUTINE_SOURCE_H_ */
