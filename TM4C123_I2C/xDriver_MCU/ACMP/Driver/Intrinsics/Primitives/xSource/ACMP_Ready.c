/**
 *
 * @file ACMP_Ready.c
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
 * @verbatim 29 nov. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 nov. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/ACMP/Driver/Intrinsics/Primitives/xHeader/ACMP_Ready.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/ACMP/Peripheral/xHeader/ACMP_Dependencies.h>
#include <xDriver_MCU/ACMP/Peripheral/ACMP_Peripheral.h>

static SYSCTL_nPERIPHERAL SYSCTL_VECTOR_ACMP[(uint32_t) ACMP_enMODULE_MAX] = {SYSCTL_enACMP};

void ACMP__vSetReady(ACMP_nMODULE enModule)
{
    ACMP_nREADY enReady = ACMP_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    uint32_t u32Module = 0UL;

    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);

    enPeripheral = SYSCTL_VECTOR_ACMP[u32Module];
    enReady = ACMP__enIsReady((ACMP_nMODULE) u32Module);
    if(ACMP_enNOREADY == enReady)
    {
        SYSCTL__vSetReady(enPeripheral);
        SYSCTL__vReset(enPeripheral);
        SYSCTL__vSetReady(enPeripheral);
    }
}

void ACMP__vClearReady(ACMP_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ACMP[u32Module];
    SYSCTL__vClearReady(enPeripheral);
}

ACMP_nREADY ACMP__enIsReady(ACMP_nMODULE enModule)
{
    ACMP_nREADY enReady = ACMP_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enACMP;
    uint32_t u32Module =0UL;
    u32Module = MCU__u32CheckParams((uint32_t) enModule, (uint32_t) ACMP_enMODULE_MAX);
    enPeripheral = SYSCTL_VECTOR_ACMP[u32Module];
    enReady = (ACMP_nREADY) SYSCTL__enIsReady(enPeripheral);
    return enReady;
}
