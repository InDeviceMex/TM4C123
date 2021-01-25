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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Wait.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Ready.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

#define WDT_TIMEOUT ( 10000UL )

void WDT__vWaitWrite(WDT_nMODULE enModule)
{
    uint32_t u32Timeout = WDT_TIMEOUT;
    uint32_t u32RegWrite1 = 0UL;
    if(WDT_enMODULE_1 == enModule)
    {
        WDT__vSetReady(enModule);
        do
        {
            u32RegWrite1 = MCU__u32ReadRegister(WDT1_BASE, WDT_WDTCTL_OFFSET, WDT_WDTCTL_WRC_MASK, WDT_WDTCTL_R_WRC_BIT);
            u32Timeout--;
        }while((WDT_WDTCTL_WRC_PROGRESS == u32RegWrite1) && (0U != u32Timeout));
    }
}
