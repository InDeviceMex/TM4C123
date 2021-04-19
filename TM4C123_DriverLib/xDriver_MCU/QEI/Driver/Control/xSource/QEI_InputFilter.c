/**
 *
 * @file QEI_InputFilter.c
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
#include <xDriver_MCU/QEI/Driver/Control/xHeader/QEI_InputFilter.h>

#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/QEI_Primitives.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

void QEI__vSetInputFilter(QEI_nMODULE enModule, QEI_nINPUT_FILTER enInputFilterArg)
{
    QEI__vWriteRegister(enModule, QEI_QEICTL_OFFSET, (uint32_t) enInputFilterArg, QEI_QEICTL_FILTEN_MASK, QEI_QEICTL_R_FILTEN_BIT);
}

QEI_nINPUT_FILTER QEI__enGetInputFilter(QEI_nMODULE enModule)
{
    QEI_nINPUT_FILTER enInputFilterReg = QEI_enINPUT_FILTER_UNDEF;
    QEI__enReadRegister(enModule, QEI_QEICTL_OFFSET, (uint32_t*) &enInputFilterReg, QEI_QEICTL_FILTEN_MASK, QEI_QEICTL_R_FILTEN_BIT);
    return enInputFilterReg;
}

void QEI__vSetInputFilterCount(QEI_nMODULE enModule, QEI_nINPUT_FILTER_COUNT enInputFilterCountArg)
{
    QEI__vWriteRegister(enModule, QEI_QEICTL_OFFSET, (uint32_t) enInputFilterCountArg, QEI_QEICTL_FILTCNT_MASK, QEI_QEICTL_R_FILTCNT_BIT);
}

QEI_nINPUT_FILTER_COUNT QEI__enGetInputFilterCount(QEI_nMODULE enModule)
{
    QEI_nINPUT_FILTER_COUNT enInputFilterCountReg = QEI_enINPUT_FILTER_COUNT_UNDEF;
    QEI__enReadRegister(enModule, QEI_QEICTL_OFFSET, (uint32_t*) &enInputFilterCountReg, QEI_QEICTL_FILTCNT_MASK, QEI_QEICTL_R_FILTCNT_BIT);
    return enInputFilterCountReg;
}



