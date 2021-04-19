/**
 *
 * @file QEI_Ready.c
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
#include <xDriver_MCU/QEI/Driver/Intrinsics/Primitives/xHeader/QEI_Ready.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Dependencies.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_QEI[(uint32_t) QEI_enMODULE_MAX] = {SYSCTL_enQEI0, SYSCTL_enQEI1};

void QEI__vSetReady(QEI_nMODULE enModule)
{
    QEI_nREADY enReady = QEI_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enQEI0;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_QEI[u32Module];
    enReady = QEI__enIsReady((QEI_nMODULE) u32Module);
    if(QEI_enNOREADY == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
}

void QEI__vClearReady(QEI_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enQEI0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_QEI[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

QEI_nREADY QEI__enIsReady(QEI_nMODULE enModule)
{
    QEI_nREADY enReady = QEI_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enQEI0;
    uint32_t u32Module =0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_QEI[u32Module];
    enReady = (QEI_nREADY) SYSCTL__enIsReady(enPeripheral);
    return enReady;
}



