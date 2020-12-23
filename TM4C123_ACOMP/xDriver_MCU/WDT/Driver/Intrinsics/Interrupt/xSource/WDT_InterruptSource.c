/**
 *
 * @file WDT_InterruptSource.c
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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nINTERRUPT WDT__enGetInterruptSource(WDT_nMODULE enModule)
{
    WDT_nINTERRUPT enStatus = WDT_enINTERRUPT_UNDEF;
    WDT_nREADY enReady = WDT_enNOREADY;
    uint32_t u32Reg = 0U;
    if( WDT_enMODULE_MAX < enModule )
    {
        enModule = WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if( WDT_enREADY == enReady )
    {
        u32Reg =  WDT->W[ enModule ].WDTCTL;
        u32Reg &= WDT_WDTCTL_R_INTEN_MASK;
        u32Reg >>= WDT_WDTCTL_R_INTEN_BIT;
        enStatus = (WDT_nINTERRUPT) u32Reg;
    }
    return enStatus;
}


void WDT__vEnInterruptSource(WDT_nMODULE enModule)
{
    uint32_t u32Reg = 0U;
    if( WDT_enMODULE_MAX < enModule )
    {
        enModule = WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);

    u32Reg  = WDT->W[ enModule ].WDTCTL;
    u32Reg |= WDT_enINTERRUPT_ENABLE;
    WDT->W[enModule].WDTCTL = u32Reg;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

void WDT__vDisInterruptSource(WDT_nMODULE enModule)
{
    if( WDT_enMODULE_MAX < enModule )
    {
        enModule = WDT_enMODULE_MAX;
    }
    WDT__vReset(enModule);
}


void WDT__vClearInterruptSource(WDT_nMODULE enModule)
{
    if( WDT_enMODULE_MAX < enModule )
    {
        enModule = WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    WDT->W[enModule].WDTICR = 0U;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

WDT_nINT_STATUS WDT__enStatusInterruptSource(WDT_nMODULE enModule)
{
    WDT_nINT_STATUS enStatus = WDT_enINT_STATUS_UNDEF;
    WDT_nREADY enReady = WDT_enNOREADY;
    uint32_t u32Reg = 0U;
    if( WDT_enMODULE_MAX < enModule )
    {
        enModule = WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if( WDT_enREADY == enReady )
    {
        u32Reg =  WDT->W[ enModule ].WDTRIS;
        u32Reg &= WDT_enINT_STATUS_OCCUR;
        enStatus = (WDT_nINT_STATUS) u32Reg;
    }
    return enStatus;
}

