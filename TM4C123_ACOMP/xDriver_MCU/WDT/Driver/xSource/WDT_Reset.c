/**
 *
 * @file WDT_Reset.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Reset.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


void WDT__vEnResetOutput(WDT_nMODULE enModule)
{
    uint32_t u32RegReset=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32RegReset=WDT->W[enModule].WDTCTL;
    u32RegReset|= WDT_WDTCTL_R_RESEN_MASK;
    WDT->W[enModule].WDTCTL=u32RegReset;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

void WDT__vDisResetOutput(WDT_nMODULE enModule)
{
    uint32_t u32RegReset=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32RegReset=WDT->W[enModule].WDTCTL;
    u32RegReset&= ~WDT_WDTCTL_R_RESEN_MASK;
    WDT->W[enModule].WDTCTL=u32RegReset;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}


void WDT__vSetResetOutput(WDT_nMODULE enModule, WDT_nRESET enResetOutputValue)
{
    uint32_t u32Reg=0;
    uint32_t u32ResetOutput=((uint32_t)enResetOutputValue)&1u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32Reg = WDT->W[enModule].WDTCTL;
    u32ResetOutput<<=WDT_WDTCTL_R_RESEN_BIT;
    u32Reg&=~ WDT_WDTCTL_R_RESEN_MASK;
    u32Reg|=u32ResetOutput;
    WDT->W[enModule].WDTCTL = u32Reg;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}


WDT_nRESET WDT__enGetResetOutput(WDT_nMODULE enModule)
{
    WDT_nRESET enReset= WDT_enRESET_UNDEF;
    WDT_nREADY enReady= WDT_enNOREADY;
    uint32_t u32Reg=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if((WDT_enREADY == enReady) )
    {
        u32Reg=WDT->W[enModule].WDTCTL;
        u32Reg>>=WDT_WDTCTL_R_RESEN_BIT;
        u32Reg&=WDT_WDTCTL_RESEN_MASK;
        enReset= (WDT_nRESET)u32Reg;
    }
    return enReset;
}


