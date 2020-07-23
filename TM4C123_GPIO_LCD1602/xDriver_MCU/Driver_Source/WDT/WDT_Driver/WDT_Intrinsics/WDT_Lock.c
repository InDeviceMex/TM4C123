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
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Lock.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Peripheral/WDT_Peripheral.h>
#include <xDriver_MCU/Driver_Header/WDT/WDT_Driver/WDT_Intrinsics/WDT_Primitives/WDT_Primitives.h>

WDT_nLOCK WDT__enGetLock(WDT_nMODULE enModule)
{
    WDT_nLOCK enLock= WDT_enLOCK_UNDEF;
    WDT_nREADY enReady= WDT_enNOREADY;
    uint32_t u32Reg=0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if((WDT_enREADY == enReady) )
    {
        u32Reg=WDT->W[enModule].WDTLOCK;
        u32Reg>>=WDT_WDTLOCK_R_WDTLOCK_BIT;
        u32Reg&=WDT_WDTLOCK_WDTLOCK_LOCK;
        enLock= (WDT_nLOCK)u32Reg;
    }
    return enLock;
}

void WDT__vUnlock(WDT_nMODULE enModule)
{
    WDT_nLOCK enLock= WDT_enLOCK_UNDEF;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    enLock=WDT__enGetLock(enModule);
    if((uint32_t)WDT_enLOCK_LOCKED == enLock)
    {
        WDT->W[enModule].WDTLOCK = (uint32_t)WDT_enKEY_UNLOCK;
        WDT__vWaitWrite(enModule);
    }
}

void WDT__vLock(WDT_nMODULE enModule)
{
    WDT_nLOCK enLock= WDT_enLOCK_UNDEF;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    enLock=WDT__enGetLock(enModule);
    if((uint32_t)WDT_enLOCK_UNLOCKED == enLock)
    {
        WDT->W[enModule].WDTLOCK=(uint32_t)WDT_enKEY_LOCK;
        WDT__vWaitWrite(enModule);
    }
}


