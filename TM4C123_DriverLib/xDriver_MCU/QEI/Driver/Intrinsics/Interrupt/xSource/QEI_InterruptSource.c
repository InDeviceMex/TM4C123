/**
 *
 * @file QEI_InterruptSource.c
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
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/xHeader/QEI_InterruptSource.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vEnInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) QEI_enINT_SOURCE_ALL;
    QEI__vWriteRegister(enModule , QEI_INTEN_OFFSET, u32SourceInt, u32SourceInt, 0UL);
}

void QEI__vDisInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) QEI_enINT_SOURCE_ALL;
    QEI__vWriteRegister(enModule , QEI_INTEN_OFFSET, 0UL, u32SourceInt, 0UL);
}

void QEI__vClearInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    uint32_t u32SourceInt = 0UL;
    u32SourceInt = (uint32_t) enSourceInt;
    u32SourceInt &= (uint32_t) QEI_enINT_SOURCE_ALL;
    QEI__vWriteRegister(enModule , QEI_ISC_OFFSET, u32SourceInt, 0xFFFFFFFFUL, 0UL);
}

QEI_nINT_STATUS QEI__enStatusInterruptSource(QEI_nMODULE enModule, QEI_nINT_SOURCE enSourceInt)
{
    QEI_nINT_STATUS enInterruptReg = QEI_enINT_STATUS_UNDEF;
    QEI_nSTATUS enStatus = QEI_enSTATUS_UNDEF;
    uint32_t u32SourceInt = 0UL;
    uint32_t u32Register= 0xFFFFFFFFUL;
    u32SourceInt &= (uint32_t) QEI_enINT_SOURCE_ALL;
    enStatus = QEI__enReadRegister(enModule , QEI_RIS_OFFSET, (uint32_t*) &u32Register, (uint32_t) u32SourceInt, 0UL);
    if(QEI_enSTATUS_OK == enStatus)
    {
        if(0UL != u32Register)
        {
            enInterruptReg = QEI_enINT_OCCUR;
        }
        else
        {
            enInterruptReg = QEI_enINT_NOOCCUR;
        }
    }
    return enInterruptReg;
}





