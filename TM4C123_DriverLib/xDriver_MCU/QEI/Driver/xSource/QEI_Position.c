/**
 *
 * @file QEI_Position.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_Position.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetPosition(QEI_nMODULE enModule, uint32_t u32PositionArg)
{
    QEI__vWriteRegister(enModule, QEI_POS_OFFSET, u32PositionArg, QEI_POS_POSITION_MASK, QEI_POS_R_POSITION_BIT);
}

QEI_nSTATUS QEI__enGetPosition(QEI_nMODULE enModule, uint32_t* pu32PositionArg)
{
    QEI_nSTATUS enStatus = QEI_enSTATUS_UNDEF;
    if(0UL != (uint32_t) pu32PositionArg)
    {
        enStatus = QEI__enReadRegister(enModule, QEI_POS_OFFSET, (uint32_t*) &pu32PositionArg, QEI_POS_POSITION_MASK, QEI_POS_R_POSITION_BIT);
    }
    return enStatus;
}
