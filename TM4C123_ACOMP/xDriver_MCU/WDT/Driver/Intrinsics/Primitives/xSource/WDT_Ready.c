/**
 *
 * @file WDT_Ready.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Ready.h>

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Dependencies.h>
#include <xDriver_MCU/Common/MCU_Common.h>

void WDT__vSetReady(WDT_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enWDT0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckPatams((uint32_t)enModule, (uint32_t)WDT_enMODULE_MAX);
    enPeripheral |= u32Module;
    SYSCTL__vSetReady(enPeripheral);
}

void WDT__vReset(WDT_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enWDT0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckPatams((uint32_t)enModule, (uint32_t)WDT_enMODULE_MAX);
    enPeripheral |= u32Module;
    SYSCTL__vReset(enPeripheral);
}

void WDT__vClearReady(WDT_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enWDT0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckPatams((uint32_t)enModule, (uint32_t)WDT_enMODULE_MAX);
    enPeripheral |= u32Module;
    SYSCTL__vClearReady(enPeripheral);
}

WDT_nREADY WDT__enIsReady(WDT_nMODULE enModule)
{
    WDT_nREADY enReady = WDT_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral = SYSCTL_enWDT0;
    uint32_t u32Module = 0UL;
    u32Module = MCU__u32CheckPatams((uint32_t)enModule, (uint32_t)WDT_enMODULE_MAX);
    enPeripheral |= u32Module;
    enReady = (WDT_nREADY) SYSCTL__enIsReady(enPeripheral);
    return enReady;
}




