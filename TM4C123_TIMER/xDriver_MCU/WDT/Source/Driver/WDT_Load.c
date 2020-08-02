/**
 *
 * @file WDT_Load.c
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
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Header/Driver/Intrinsics/WDT_Lock.h>
#include <xDriver_MCU/WDT/Header/Driver/WDT_Load.h>
#include <xDriver_MCU/WDT/Header/Peripheral/WDT_Peripheral.h>


void WDT__vSetLoad(WDT_nMODULE enModule, uint32_t u32LoadValue)
{

    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    WDT__vSetReady(enModule);
    WDT__vUnlock(enModule);
    WDT->W[enModule].WDTLOAD = u32LoadValue;
    WDT__vWaitWrite(enModule);
    WDT__vLock(enModule);

}

uint32_t WDT__u32GetLoad(WDT_nMODULE enModule)
{
    WDT_nREADY enReady= WDT_enNOREADY;
    uint32_t u32Reg=0u;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enReady = WDT__enIsReady(enModule);
    if((WDT_enREADY == enReady) )
    {
        u32Reg = WDT->W[enModule].WDTLOAD;
    }
    return u32Reg;
}


