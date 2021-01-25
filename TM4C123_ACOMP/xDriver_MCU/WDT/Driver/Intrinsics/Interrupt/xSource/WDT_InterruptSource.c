/**
 *
 * @file WDT_InterruptSource.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/xHeader/WDT_Lock.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nINTERRUPT WDT__enGetInterruptSource(WDT_nMODULE enModule)
{
    WDT_nINTERRUPT enStatus = WDT_enINTERRUPT_UNDEF;
    uint32_t u32Reg = 0U;

    u32Reg = WDT__u32ReadRegister(enModule, WDT_WDTCTL_OFFSET, WDT_WDTCTL_INTEN_MASK, WDT_WDTCTL_R_INTEN_BIT);
    enStatus = (WDT_nINTERRUPT)u32Reg;

    return enStatus;
}

void WDT__vEnInterruptSource(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_WDTCTL_OFFSET, (uint32_t)WDT_enINTERRUPT_ENABLE, WDT_WDTCTL_INTEN_MASK, WDT_WDTCTL_R_INTEN_BIT);
}

void WDT__vDisInterruptSource(WDT_nMODULE enModule)
{
    enModule = (WDT_nMODULE)MCU__u32CheckPatams((uint32_t)enModule, (uint32_t)WDT_enMODULE_MAX);
    WDT__vReset(enModule);
}

void WDT__vClearInterruptSource(WDT_nMODULE enModule)
{
    WDT__vWriteRegister(enModule, WDT_WDTICR_OFFSET, (uint32_t)0UL, WDT_WDTICR_WDTINTCLR_MASK, WDT_WDTICR_R_WDTINTCLR_BIT);
}

WDT_nINT_STATUS WDT__enStatusInterruptSource(WDT_nMODULE enModule)
{
    WDT_nINT_STATUS enStatus = WDT_enINT_STATUS_UNDEF;
    uint32_t u32Reg = 0U;

    u32Reg = WDT__u32ReadRegister(enModule, WDT_WDTRIS_OFFSET, WDT_WDTRIS_WDTRIS_MASK, WDT_WDTRIS_R_WDTRIS_BIT);
    enStatus = (WDT_nINT_STATUS)u32Reg;

    return enStatus;
}

