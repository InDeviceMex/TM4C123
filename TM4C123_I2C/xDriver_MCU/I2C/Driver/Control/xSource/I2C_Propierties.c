/**
 *
 * @file I2C_Propierties.c
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
#include <xDriver_MCU/I2C/Driver/Control/xHeader/I2C_Propierties.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

I2C_nSTATUS I2C_CTL__enIsHighSpeedCapable(I2C_nMODULE enModule)
{
    I2C_nSTATUS enSupported = I2C_enSTATUS_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CPP_OFFSET, (uint32_t*) enSupported, I2C_I2CPP_HS_MASK, I2C_I2CPP_R_HS_BIT);
    return enSupported;
}

