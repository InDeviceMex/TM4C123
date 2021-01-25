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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Load.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>


void WDT__vSetLoad(WDT_nMODULE enModule, uint32_t u32LoadValue)
{
    WDT__vWriteRegister(enModule, WDT_WDTLOAD_OFFSET, (uint32_t) u32LoadValue, WDT_WDTLOAD_WDTLOAD_MASK, WDT_WDTLOAD_R_WDTLOAD_BIT);
}

uint32_t WDT__u32GetLoad(WDT_nMODULE enModule)
{
    uint32_t u32Reg = 0U;

    u32Reg = WDT__u32ReadRegister(enModule,WDT_WDTLOAD_OFFSET, WDT_WDTLOAD_WDTLOAD_MASK, WDT_WDTLOAD_R_WDTLOAD_BIT);

    return u32Reg;
}


