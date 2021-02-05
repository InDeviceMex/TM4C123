/**
 *
 * @file WDT_Lock.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nSTATUS WDT__enGetLock(WDT_nMODULE enModule, WDT_nLOCK* penFeatureArg)
{
    WDT_nSTATUS enStatusRead = WDT_enSTATUS_UNDEF;

    enStatusRead = WDT__enReadRegister(enModule,(uint32_t*)penFeatureArg, WDT_WDTLOCK_OFFSET, WDT_WDTLOCK_WDTLOCK_MASK, WDT_WDTLOCK_R_WDTLOCK_BIT);

    return enStatusRead;
}

void WDT__vUnlock(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_WDTLOCK_OFFSET, (uint32_t) WDT_enKEY_UNLOCK, WDT_WDTLOCK_WDTLOCK_MASK, WDT_WDTLOCK_R_WDTLOCK_BIT);
}

void WDT__vLock(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_WDTLOCK_OFFSET, (uint32_t) WDT_enKEY_LOCK, WDT_WDTLOCK_WDTLOCK_MASK, WDT_WDTLOCK_R_WDTLOCK_BIT);
}


