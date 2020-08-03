/**
 *
 * @file WDT_Value.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Value.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


uint32_t WDT__u32GetValue(WDT_nMODULE enModule)
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
        u32Reg=WDT->W[enModule].WDTVALUE;
    }
    return u32Reg;
}


