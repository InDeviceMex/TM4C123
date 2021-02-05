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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Value.h>

#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>

WDT_nSTATUS WDT__enGetValue(WDT_nMODULE enModule, uint32_t* pu32ValueArg)
{
    WDT_nSTATUS enStatusRead = WDT_enSTATUS_UNDEF;

    enStatusRead = WDT__enReadRegister(enModule, pu32ValueArg, WDT_WDTVALUE_OFFSET, WDT_WDTVALUE_WDTVALUE_MASK, WDT_WDTVALUE_R_WDTVALUE_BIT);

    return enStatusRead;
}
