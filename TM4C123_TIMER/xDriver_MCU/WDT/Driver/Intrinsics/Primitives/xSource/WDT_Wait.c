/**
 *
 * @file WDT_Wait.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Ready.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

#define WDT_TIMEOUT (10000u)

void WDT__vWaitWrite(WDT_nMODULE enModule)
{
    uint32_t u32Timeout=WDT_TIMEOUT;
    uint32_t u32RegWrite1=WDT_WDTCTL_R_WRC_DONE;
    if(WDT_enMODULE_1 == enModule)
    {
        WDT__vSetReady(enModule);
        do
        {
            u32RegWrite1 = WDT->W[enModule].WDTCTL;
            u32RegWrite1&= WDT_WDTCTL_R_WRC_MASK;
            u32Timeout--;
        }while((WDT_WDTCTL_R_WRC_PROGRESS == u32RegWrite1) && (0u != u32Timeout));
    }
}
