/**
 *
 * @file I2C_OwnAddress.c
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
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_OwnAddress.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vSetMainOwnAddress(I2C_nMODULE enModule, uint32_t u32OwnAddressArg)
{
    I2C__vWriteRegister(enModule, I2C_I2CSOAR_OFFSET, u32OwnAddressArg, I2C_I2CSOAR_OAR_MASK, I2C_I2CSOAR_R_OAR_BIT);
}

uint32_t I2C__u32GetMainOwnAddress(I2C_nMODULE enModule)
{
    uint32_t u32MainAddressReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_I2CSOAR_OFFSET, &u32MainAddressReg, I2C_I2CSOAR_OAR_MASK, I2C_I2CSOAR_R_OAR_BIT);
    return u32MainAddressReg;
}

void I2C__vSetEnableAltOwnAddress(I2C_nMODULE enModule, I2C_nALT_ADDRESS enAlternateAddressArg)
{
    I2C__vWriteRegister(enModule, I2C_I2CSOAR2_OFFSET, (uint32_t) enAlternateAddressArg, I2C_I2CSOAR2_OAR2EN_MASK, I2C_I2CSOAR2_R_OAR2EN_BIT);
}

I2C_nALT_ADDRESS I2C__enGetEnableAltOwnAddress(I2C_nMODULE enModule)
{
    I2C_nALT_ADDRESS enEnableAltAddressReg = I2C_enALT_ADDRESS_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CSOAR2_OFFSET, (uint32_t*) &enEnableAltAddressReg, I2C_I2CSOAR2_OAR2EN_MASK, I2C_I2CSOAR2_R_OAR2EN_BIT);
    return enEnableAltAddressReg;
}

void I2C__vSetAltOwnAddress(I2C_nMODULE enModule, uint32_t u32OwnAddressArg)
{
    I2C__vWriteRegister(enModule, I2C_I2CSOAR2_OFFSET, u32OwnAddressArg, I2C_I2CSOAR2_OAR2_MASK, I2C_I2CSOAR2_R_OAR2_BIT);
}

uint32_t I2C__u32GetAltOwnAddress(I2C_nMODULE enModule)
{
    uint32_t u32AltAddressReg = 0xFFFFFFFFUL;
    I2C__enReadRegister(enModule, I2C_I2CSOAR2_OFFSET, &u32AltAddressReg, I2C_I2CSOAR2_OAR2_MASK, I2C_I2CSOAR2_R_OAR2_BIT);
    return u32AltAddressReg;
}

I2C_nSTATUS I2C__enIsAltOwnAddressReceived(I2C_nMODULE enModule)
{
    I2C_nSTATUS enAltAddressReg = I2C_enSTATUS_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CSCSR_OFFSET, (uint32_t*) &enAltAddressReg, I2C_I2CSCSR_OAR2SEL_MASK, I2C_I2CSCSR_R_OAR2SEL_BIT);
    return enAltAddressReg;
}

