/**
 *
 * @file SSI_Mode.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Control/xHeader/SSI_Mode.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Primitives/SSI_Primitives.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>

void SSI__vSetMode(SSI_nMODULE enModule, SSI_nMODE enModeArg)
{
    SSI__vWriteRegister(enModule, SSI_SSICR1_OFFSET, (uint32_t) enModeArg, SSI_SSICR1_MS_MASK, SSI_SSICR1_R_MS_BIT);
}

SSI_nMODE SSI__enGetMode(SSI_nMODULE enModule)
{
    SSI_nMODE enModeReg = SSI_enMODE_UNDEF;
    SSI__enReadRegister(enModule, SSI_SSICR1_OFFSET, (uint32_t*) &enModeReg, SSI_SSICR1_MS_MASK, SSI_SSICR1_R_MS_BIT);
    return enModeReg;
}
