/**
 *
 * @file I2C_Slave_InterruptSource.h
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
 * @verbatim Mar 24, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Mar 24, 2021        indevicemex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_SLAVE_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_SLAVE_INTERRUPTSOURCE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C_Slave__vEnInterruptSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt);
void I2C_Slave__vDisInterruptSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt);
void I2C_Slave__vClearInterruptSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt);
I2C_nINT_STATUS I2C_Slave__enStatusInterruptSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_SLAVE_INTERRUPTSOURCE_H_ */
