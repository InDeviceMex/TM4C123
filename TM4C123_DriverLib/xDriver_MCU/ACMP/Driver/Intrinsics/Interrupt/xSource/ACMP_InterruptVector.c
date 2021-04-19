/**
 *
 * @file ACMP_InterruptVector.c
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
 * @verbatim 4 dic. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 dic. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Interrupt/xHeader/ACMP_InterruptVector.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

static NVIC_nSTIR ACMP__enGetInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg);

static NVIC_nSTIR ACMP__enGetInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{

    NVIC_nSTIR enVector = NVIC_enSTIR_ACMP0;
    uint32_t u32Module = 0UL;
    uint32_t u32Comparator = 0UL;
    NVIC_nSTIR NVIC_VECTOR_ACMP[(uint32_t) ACMP_enMODULE_MAX][(uint32_t) ACMP_enCOMP_MAX] =
    {
        {NVIC_enSTIR_ACMP0, NVIC_enSTIR_ACMP1}
    };

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);
    u32Comparator = MCU__u32CheckParams((uint32_t) enComparatorArg, (uint32_t) ACMP_enCOMP_MAX);
    enVector = NVIC_VECTOR_ACMP[u32Module][u32Comparator];
    return enVector;
}

void ACMP__vEnInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg, ACMP_nPRIORITY enACMPPriority)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_ACMP0;
    enVector = ACMP__enGetInterruptVector(enModule, enComparatorArg);
    NVIC__vSetEnableIRQ(enVector, (NVIC_nPRIORITY) enACMPPriority);
}

void ACMP__vDisInterruptVector(ACMP_nMODULE enModule, ACMP_nCOMP enComparatorArg)
{
    NVIC_nSTIR enVector = NVIC_enSTIR_ACMP0;
    enVector = ACMP__enGetInterruptVector(enModule, enComparatorArg);
    NVIC__vClearEnableIRQ(enVector);
}
