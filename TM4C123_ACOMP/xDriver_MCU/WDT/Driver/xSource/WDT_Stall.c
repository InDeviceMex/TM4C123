/**
 *
 * @file WDT_Stall.c
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Stall.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


void WDT__vEnStall(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_WDTTEST_OFFSET, WDT_WDTTEST_STALL_FREEZE, WDT_WDTTEST_STALL_MASK, WDT_WDTTEST_R_STALL_BIT);
}

void WDT__vDisStall(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_WDTTEST_OFFSET, WDT_WDTTEST_STALL_CONTINUE, WDT_WDTTEST_STALL_MASK, WDT_WDTTEST_R_STALL_BIT);
}

void WDT__vSetStall(WDT_nMODULE enModule, WDT_nSTALL enStallValue)
{
    WDT__vWriteRegister(enModule, WDT_WDTTEST_OFFSET, (uint32_t) enStallValue, WDT_WDTTEST_STALL_MASK, WDT_WDTTEST_R_STALL_BIT);
}

WDT_nSTATUS WDT__enGetStall(WDT_nMODULE enModule, WDT_nSTALL* penFeatureArg)
{
    WDT_nSTATUS enStatusRead = WDT_enSTATUS_UNDEF;

    enStatusRead = WDT__enReadRegister(enModule,(uint32_t*)penFeatureArg, WDT_WDTTEST_OFFSET, WDT_WDTTEST_STALL_MASK, WDT_WDTTEST_R_STALL_BIT);

    return enStatusRead;
}

