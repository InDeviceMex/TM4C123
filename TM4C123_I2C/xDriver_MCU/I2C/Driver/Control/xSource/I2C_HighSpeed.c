/**
 *
 * @file I2C_HighSpeed.c
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
#include <xDriver_MCU/I2C/Driver/Control/xHeader/I2C_HighSpeed.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C_CTL__vSetHighSpeedCapable(I2C_nMODULE enModule, I2C_nCTL_HIGHSPEED enClock)
{
    I2C__vWriteRegister(enModule, I2C_I2CPC_OFFSET, (uint32_t) enClock, I2C_I2CPC_HS_MASK, I2C_I2CPC_R_HS_BIT);
}

I2C_nCTL_HIGHSPEED I2C_CTL__enGetHighSpeedCapable(I2C_nMODULE enModule)
{
    I2C_nCTL_HIGHSPEED enClockReg = I2C_enCTL_HIGHSPEED_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CPC_OFFSET, (uint32_t*) &enClockReg, I2C_I2CPC_HS_MASK, I2C_I2CPC_R_HS_BIT);
    return enClockReg;
}

