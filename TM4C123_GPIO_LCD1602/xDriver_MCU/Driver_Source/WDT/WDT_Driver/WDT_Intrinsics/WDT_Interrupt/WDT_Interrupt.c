/**
 *
 * @file WDT_Interrupt.c
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

#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Interrupt/WDT_Interrupt.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Peripheral/WDT_Peripheral.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Primitives/WDT_Primitives.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Lock.h>


void WDT__vEnInterrupt(WDT_nMODULE enModule)
{
    uint32_t u32Reg=0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    u32Reg=WDT->W[enModule].WDTCTL;
    u32Reg|=WDT_enINTERRUPT_ENABLE;
    WDT->W[enModule].WDTCTL=u32Reg;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

void WDT__vDisInterrupt(WDT_nMODULE enModule)
{
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vReset(enModule);
}


void WDT__vClearInterrupt(WDT_nMODULE enModule)
{
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    WDT->W[enModule].WDTICR=0u;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);
}

WDT_nINT_STATUS WDT__enStatusInterrupt(WDT_nMODULE enModule)
{
    WDT_nINT_STATUS enStatus= WDT_enINT_STATUS_UNDEF;
    WDT_nREADY enReady= WDT_enNOREADY;
    uint32_t u32Reg=0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if((WDT_enREADY == enReady) )
    {
        u32Reg=WDT->W[enModule].WDTRIS;
        u32Reg&=WDT_enINT_STATUS_OCCUR;
        enStatus= (WDT_nINT_STATUS)u32Reg;
    }
    return enStatus;
}

