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

WDT_nSTATUS WDT__enGetInterruptSourceType(WDT_nMODULE enModule, WDT_nINT_TYPE* penFeatureArg)
{
    WDT_nSTATUS enStatusRead = WDT_enSTATUS_UNDEF;

    enStatusRead = WDT__enReadRegister(enModule, (uint32_t*) penFeatureArg, WDT_WDTCTL_OFFSET, WDT_WDTCTL_INTTYPE_MASK, WDT_WDTCTL_R_INTTYPE_BIT);

    return enStatusRead;
}


