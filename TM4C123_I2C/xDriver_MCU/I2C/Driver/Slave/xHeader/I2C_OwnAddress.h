/**
 *
 * @file I2C_OwnAddress.h
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
#ifndef XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_OWNADDRESS_H_
#define XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_OWNADDRESS_H_

#include <xDriver_MCU/I2C/Peripheral/xHeader/I2C_Enum.h>

void I2C__vSetMainOwnAddress(I2C_nMODULE enModule, uint32_t u32OwnAddressArg);
uint32_t I2C__u32GetMainOwnAddress(I2C_nMODULE enModule);

void I2C__vSetEnableAltOwnAddress(I2C_nMODULE enModule, I2C_nALT_ADDRESS enAlternateAddressArg);
I2C_nALT_ADDRESS I2C__enGetEnableAltOwnAddress(I2C_nMODULE enModule);
void I2C__vSetAltOwnAddress(I2C_nMODULE enModule, uint32_t u32OwnAddressArg);
uint32_t I2C__u32GetAltOwnAddress(I2C_nMODULE enModule);

#endif /* XDRIVER_MCU_I2C_DRIVER_SLAVE_XHEADER_I2C_OWNADDRESS_H_ */
