/**
 *
 * @file QEI_VelocityCount.c
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
 * @verbatim Apr 8, 2021 @endverbatim
 *
 * @author
 * @verbatim indevicemex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * Apr 8, 2021        indevicemex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_VelocityCount.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nSTATUS QEI__enGetVelocityCount(QEI_nMODULE enModule, uint32_t* pu32VelocityCountArg)
{
    QEI_nSTATUS enStatus = QEI_enSTATUS_UNDEF;
    if(0UL != (uint32_t) pu32VelocityCountArg)
    {
        enStatus = QEI__enReadRegister(enModule, QEI_COUNT_OFFSET, (uint32_t*) &pu32VelocityCountArg, QEI_COUNT_COUNT_MASK, QEI_COUNT_R_COUNT_BIT);
    }
    return enStatus;
}






