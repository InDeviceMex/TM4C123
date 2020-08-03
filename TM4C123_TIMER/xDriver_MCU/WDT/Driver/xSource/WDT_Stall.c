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
#include <stdint.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Stall.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


void WDT__vEnStall(WDT_nMODULE enModule)
{
    uint32_t u32RegStall=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32RegStall=WDT->W[enModule].WDTTEST;
    u32RegStall|= WDT_WDTTEST_R_STALL_MASK;
    WDT->W[enModule].WDTTEST=u32RegStall;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

void WDT__vDisStall(WDT_nMODULE enModule)
{
    uint32_t u32RegStall=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32RegStall=WDT->W[enModule].WDTTEST;
    u32RegStall&= ~WDT_WDTTEST_R_STALL_MASK;
    WDT->W[enModule].WDTTEST=u32RegStall;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

void WDT__vSetStall(WDT_nMODULE enModule, WDT_nSTALL enStallValue)
{
    uint32_t u32Reg=0;
    uint32_t u32Stall=((uint32_t)enStallValue)&1u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32Reg = WDT->W[enModule].WDTTEST;
    u32Stall<<=WDT_WDTTEST_R_STALL_BIT;
    u32Reg&=~ WDT_WDTTEST_R_STALL_MASK;
    u32Reg|=u32Stall;
    WDT->W[enModule].WDTTEST = u32Reg;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

WDT_nSTALL WDT__enGetStall(WDT_nMODULE enModule)
{
    WDT_nSTALL enStall= WDT_enSTALL_UNDEF;
    WDT_nREADY enReady= WDT_enNOREADY;
    uint32_t u32Reg=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if((WDT_enREADY == enReady) )
    {
        u32Reg=WDT->W[enModule].WDTTEST;
        u32Reg>>=WDT_WDTTEST_R_STALL_BIT;
        u32Reg&=WDT_WDTTEST_STALL_MASK;
        enStall= (WDT_nSTALL)u32Reg;
    }
    return enStall;
}

