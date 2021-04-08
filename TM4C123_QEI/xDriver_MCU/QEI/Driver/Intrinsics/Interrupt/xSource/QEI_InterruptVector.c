/**
 *
 * @file QEI_InterruptVector.c
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
#include <xDriver_MCU/QEI/Driver/Intrinsics/Interrupt/xHeader/QEI_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/QEI/Peripheral/xHeader/QEI_Dependencies.h>
#include <xDriver_MCU/QEI/Peripheral/QEI_Peripheral.h>

static NVIC_nSTIR QEI__enGetInterruptVector(QEI_nMODULE enModule);

static NVIC_nSTIR QEI__enGetInterruptVector(QEI_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_QEI0;
    uint32_t u32Module = 0UL;
    NVIC_nSTIR NVIC_VECTOR_QEI[(uint32_t) QEI_enMODULE_MAX] =
    {
        NVIC_enSTIR_QEI0, NVIC_enSTIR_QEI1
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) QEI_enMODULE_MAX);
    enVector = NVIC_VECTOR_QEI[u32Module];
    return enVector;
}

void QEI__vEnInterruptVector(QEI_nMODULE enModule, QEI_nPRIORITY enQEIPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_QEI0;
    enVector = QEI__enGetInterruptVector(enModule);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enQEIPriority);
}

void QEI__vDisInterruptVector(QEI_nMODULE enModule)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_QEI0;
    enVector = QEI__enGetInterruptVector(enModule);
    NVIC__vClearEnableIRQ(enVector);
}



