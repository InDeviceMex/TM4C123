/**
 *
 * @file I2C_Request.c
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
#include <xDriver_MCU/I2C/Driver/Slave/xHeader/I2C_Request.h>

#include <xDriver_MCU/I2C/Driver/Intrinsics/Primitives/I2C_Primitives.h>
#include <xDriver_MCU/I2C/Peripheral/I2C_Peripheral.h>


I2C_nSLAVE_REQUEST I2C_Slave__enGetRequest(I2C_nMODULE enModule)
{
    I2C_nSLAVE_REQUEST enRequestReg = I2C_enSLAVE_REQUEST_UNDEF;
    I2C__enReadRegister(enModule, I2C_I2CSCSR_OFFSET, (uint32_t*) &enRequestReg,
                        I2C_I2CSCSR_OAR2SEL_MASK | I2C_I2CSCSR_FBR_MASK | I2C_I2CSCSR_TREQ_MASK | I2C_I2CSCSR_RREQ_MASK,
                        0UL);
    return enRequestReg;

}
