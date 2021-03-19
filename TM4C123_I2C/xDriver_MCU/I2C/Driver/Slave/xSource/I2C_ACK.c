/**
 *
 * @file I2C_ACK.c
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
 * @verbatim 17 mar. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 mar. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_ACK.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vSetSlaveACKEnable(I2C_nMODULE enModule, I2C_nSLAVE_ACK_ENABLE enACKEnableArg)
{
    I2C__vWriteRegister(enModule, I2C_I2CSACKCTL_OFFSET, (uint32_t) enACKEnableArg, I2C_I2CSACKCTL_ACKOEN_MASK, I2C_I2CSACKCTL_R_ACKOEN_BIT);
}

I2C_nSLAVE_ACK_ENABLE I2C__enGetSlaveACKEnable(I2C_nMODULE enModule)
{
    I2C_nSLAVE_ACK_ENABLE enACKEnableReg = I2C_enSLAVE_ACK_ENABLE_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CSACKCTL_OFFSET, (uint32_t*) &enACKEnableReg, I2C_I2CSACKCTL_ACKOEN_MASK, I2C_I2CSACKCTL_R_ACKOEN_BIT);
    return enACKEnableReg;
}

void I2C__vSetSlaveACKValue(I2C_nMODULE enModule, I2C_nSLAVE_ACK_VALUE enACKArg)
{
    I2C__vWriteRegister(enModule, I2C_I2CSACKCTL_OFFSET, (uint32_t) enACKArg, I2C_I2CSACKCTL_ACKOVAL_MASK, I2C_I2CSACKCTL_R_ACKOVAL_BIT);
}

I2C_nSLAVE_ACK_VALUE I2C__enGetSlaveACKValue(I2C_nMODULE enModule)
{
    I2C_nSLAVE_ACK_VALUE enACKValueReg = I2C_enSLAVE_ACK_VALUE_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CSACKCTL_OFFSET, (uint32_t*) &enACKValueReg, I2C_I2CSACKCTL_ACKOVAL_MASK, I2C_I2CSACKCTL_R_ACKOVAL_BIT);
    return enACKValueReg;
}


