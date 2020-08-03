/**
 *
 * @file WDT_InterruptType.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptType.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vSetInterruptType(WDT_nMODULE enModule, WDT_nINT_TYPE enType)
{
    uint32_t u32RegType=0u;
    uint32_t u32Reg=0u;
    uint32_t u32RegAux=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule = WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    u32RegType = WDT->W[enModule].WDTCTL;
    u32RegAux  = u32RegType;
    u32RegAux &= WDT_WDTCTL_R_INTTYPE_MASK;

    u32Reg  = (uint32_t)enType;
    u32Reg &= WDT_WDTCTL_INTTYPE_MASK;
    u32Reg<<= WDT_WDTCTL_R_INTTYPE_BIT;
    if((uint32_t)u32Reg != u32RegAux)
    {
        u32RegType &= ~WDT_WDTCTL_R_INTTYPE_MASK;
        u32RegType |= u32Reg;
        WDT__vUnlock(enModule);
        WDT->W[enModule].WDTCTL = u32RegType;
        WDT__vWaitWrite(enModule);
        WDT__vLock(enModule);
    }
}

WDT_nINT_TYPE WDT__enGetInterruptType(WDT_nMODULE enModule)
{
    WDT_nINT_TYPE enStatus= WDT_enINT_TYPE_UNDEF;
    WDT_nREADY enReady= WDT_enNOREADY;
    uint32_t u32Reg=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule = WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if((WDT_enREADY == enReady) )
    {
        u32Reg = WDT->W[enModule].WDTCTL;
        u32Reg>>=WDT_WDTCTL_R_INTTYPE_BIT;
        u32Reg &=WDT_WDTCTL_INTTYPE_MASK;
        enStatus= (WDT_nINT_TYPE)u32Reg;
    }
    return enStatus;
}


