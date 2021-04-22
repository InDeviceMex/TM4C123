/**
 *
 * @file QEI_LoadTime.c
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
#include <xDriver_MCU/QEI/Driver/xHeader/QEI_LoadTime.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetLoadTimer(QEI_nMODULE enModule, uint32_t u32LoadTimerArg)
{
    QEI__vWriteRegister(enModule, QEI_LOAD_OFFSET, u32LoadTimerArg, QEI_LOAD_LOAD_MASK, QEI_LOAD_R_LOAD_BIT);
}

QEI_nSTATUS QEI__enGetLoadTimer(QEI_nMODULE enModule, uint32_t* pu32LoadTimerArg)
{
    QEI_nSTATUS enStatus = QEI_enSTATUS_UNDEF;
    if(0UL != (uint32_t) pu32LoadTimerArg)
    {
        enStatus = QEI__enReadRegister(enModule, QEI_LOAD_OFFSET, (uint32_t*) &pu32LoadTimerArg, QEI_LOAD_LOAD_MASK, QEI_LOAD_R_LOAD_BIT);
    }
    return enStatus;
}



