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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptType.h>

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

void WDT__vSetInterruptSourceType(WDT_nMODULE enModule, WDT_nINT_TYPE enType)
{
    WDT__vWriteRegister(enModule, WDT_WDTCTL_OFFSET, (uint32_t)enType, WDT_WDTCTL_INTTYPE_MASK, WDT_WDTCTL_R_INTTYPE_BIT);
}

WDT_nINT_TYPE WDT__enGetInterruptSourceType(WDT_nMODULE enModule)
{
    WDT_nINT_TYPE enStatus = WDT_enINT_TYPE_UNDEF;
    uint32_t u32Reg = 0U;

    u32Reg = WDT__u32ReadRegister(enModule, WDT_WDTCTL_OFFSET, WDT_WDTCTL_INTTYPE_MASK, WDT_WDTCTL_R_INTTYPE_BIT);
    enStatus = (WDT_nINT_TYPE)u32Reg;

    return enStatus;
}


