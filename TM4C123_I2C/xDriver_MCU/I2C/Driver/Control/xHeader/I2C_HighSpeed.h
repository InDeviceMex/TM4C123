/**
 *
 * @file I2C_HighSpeed.h
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

#ifndef XDRIVER_MCU_I2C_DRIVER_CONTROL_XHEADER_I2C_HIGHSPEED_H_
#define XDRIVER_MCU_I2C_DRIVER_CONTROL_XHEADER_I2C_HIGHSPEED_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C_CTL__vSetHighSpeedCapable(I2C_nMODULE enModule, I2C_nCTL_HIGHSPEED enHighSpeedCapableArg);
I2C_nCTL_HIGHSPEED I2C_CTL__enGetHighSpeedCapable(I2C_nMODULE enModule);


#endif /* XDRIVER_MCU_I2C_DRIVER_CONTROL_XHEADER_I2C_HIGHSPEED_H_ */
