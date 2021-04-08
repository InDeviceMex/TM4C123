/**
 *
 * @file QEI_Direction.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_Direction.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

QEI_nDIRECTION QEI__enGetDirection(QEI_nMODULE enModule)
{
    QEI_nDIRECTION enDirectionReg = QEI_enDIRECTION_UNDEF;
    QEI__enReadRegister(enModule, QEI_QEISTAT_OFFSET, (uint32_t*) &enDirectionReg, QEI_QEISTAT_DIRECTION_MASK, QEI_QEISTAT_R_DIRECTION_BIT);
    return enDirectionReg;
}
