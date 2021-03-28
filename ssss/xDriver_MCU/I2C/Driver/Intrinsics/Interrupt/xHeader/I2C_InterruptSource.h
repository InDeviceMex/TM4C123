/**
 *
 * @file I2C_InterruptSource.h
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
 * @verbatim 7 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_INTERRUPTSOURCE_H_
#define XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_INTERRUPTSOURCE_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vEnInterruptMasterSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt);
void I2C__vDisInterruptMasterSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt);
void I2C__vClearInterruptMasterSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt);
I2C_nINT_STATUS I2C__enStatusInterruptMasterSource(I2C_nMODULE enModule, I2C_nMASTER_INT_SOURCE enSourceInt);

void I2C__vEnInterruptSlaveSource(I2C_nMODULE enModule, I2C_nSLAVE_INT_SOURCE enSourceInt);
void I2C__vDisInterruptSlaveSource(I2C_nMODULE enModule, I2C_nSLAVE_INT_SOURCE enSourceInt);
void I2C__vClearInterruptSlaveSource(I2C_nMODULE enModule, I2C_nSLAVE_INT_SOURCE enSourceInt);
I2C_nINT_STATUS I2C__enStatusInterruptSlaveSource(I2C_nMODULE enModule, I2C_nSLAVE_INT_SOURCE enSourceInt);

#endif /* XDRIVER_MCU_I2C_DRIVER_INTRINSICS_INTERRUPT_XHEADER_I2C_INTERRUPTSOURCE_H_ */
