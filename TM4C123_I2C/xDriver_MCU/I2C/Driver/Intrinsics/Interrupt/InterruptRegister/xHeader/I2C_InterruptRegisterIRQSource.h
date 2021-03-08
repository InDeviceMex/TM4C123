/**
 *
 * @file I2C_InterruptRegisterIRQSource.h
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
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_I2C_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_I2C_INTERRUPTREGISTERIRQSOURCE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vRegisterIRQSourceMasterHandler(void (*pfIrqSourceHandler) (void), I2C_nMODULE enModule, I2C_nINTERRUPT_MASTER enInterruptSource);
void I2C__vRegisterIRQSourceSlaveHandler(void (*pfIrqSourceHandler) (void), I2C_nMODULE enModule, I2C_nINTERRUPT_SLAVE enInterruptSource);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_I2C_INTERRUPTREGISTERIRQSOURCE_H_ */
