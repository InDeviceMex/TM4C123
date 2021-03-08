/**
 *
 * @file I2C_InterruptSource.c
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
#include <xDriver_MCU/I2C/Driver/Intrinsics/Interrupt/xHeader/I2C_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>

void I2C__vEnInterruptMasterSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_MASTER enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_MASTER_ALL;
    I2C__vWriteRegister(enModule , I2C_I2CMIMR_OFFSET, u32SourceInt, u32SourceInt, 0UL);
}

void I2C__vDisInterruptMasterSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_MASTER enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_MASTER_ALL;
    I2C__vWriteRegister(enModule , I2C_I2CMIMR_OFFSET, 0UL, u32SourceInt, 0UL);
}

void I2C__vClearInterruptMasterSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_MASTER enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_MASTER_ALL;
    I2C__vWriteRegister(enModule , I2C_I2CMICR_OFFSET, u32SourceInt, 0xFFFFFFFFUL, 0UL);
}

I2C_nINT_STATUS I2C__enStatusInterruptMasterSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_MASTER enSourceInt)
{
    I2C_nINT_STATUS enInterruptReg = I2C_enINT_STATUS_UNDEF;
    I2C_nSTATUS enStatus = I2C_enSTATUS_UNDEF;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32Register= 0xFFFFFFFFUL;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_MASTER_ALL;
    enStatus = I2C__enReadRegister(enModule , I2C_I2CMRIS_OFFSET, (uint32_t*) &u32Register, (uint32_t) u32SourceInt, 0UL);
    if(I2C_enSTATUS_OK == enStatus)
    {
        if(0UL != u32Register)
        {
            enInterruptReg = I2C_enINT_OCCUR;
        }
        else
        {
            enInterruptReg = I2C_enINT_NOOCCUR;
        }
    }
    return enInterruptReg;
}

void I2C__vEnInterruptSlaveSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_SLAVE_ALL;
    I2C__vWriteRegister(enModule , I2C_I2CSIMR_OFFSET, u32SourceInt, u32SourceInt, 0UL);
}

void I2C__vDisInterruptSlaveSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_SLAVE_ALL;
    I2C__vWriteRegister(enModule , I2C_I2CSIMR_OFFSET, 0UL, u32SourceInt, 0UL);
}

void I2C__vClearInterruptSlaveSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_SLAVE_ALL;
    I2C__vWriteRegister(enModule , I2C_I2CSICR_OFFSET, u32SourceInt, 0xFFFFFFFFUL, 0UL);
}

I2C_nINT_STATUS I2C__enStatusInterruptSlaveSource(I2C_nMODULE enModule, I2C_nINT_SOURCE_SLAVE enSourceInt)
{
    I2C_nINT_STATUS enInterruptReg = I2C_enINT_STATUS_UNDEF;
    I2C_nSTATUS enStatus = I2C_enSTATUS_UNDEF;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32Register= 0xFFFFFFFFUL;
    u32SourceInt &= (uint32_t) I2C_enINT_SOURCE_SLAVE_ALL;
    enStatus = I2C__enReadRegister(enModule , I2C_I2CSRIS_OFFSET, (uint32_t*) &u32Register, (uint32_t) u32SourceInt, 0UL);
    if(I2C_enSTATUS_OK == enStatus)
    {
        if(0UL != u32Register)
        {
            enInterruptReg = I2C_enINT_OCCUR;
        }
        else
        {
            enInterruptReg = I2C_enINT_NOOCCUR;
        }
    }
    return enInterruptReg;
}
