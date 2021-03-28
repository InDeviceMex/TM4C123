/**
 *
 * @file WDT_ModeLoad.c
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/App/ModeLoad/WDT_ModeLoad.h>

#include <xDriver_MCU/WDT/App/Mode/WDT_Mode.h>
#include <xDriver_MCU/WDT/App/ModeLoad/xHeader/WDT_ModeLoadStruct.h>
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Load.h>
#include <xDriver_MCU/WDT/App/ModeLoad/xHeader/WDT_ModeLoadStruct.h>

WDT_nSTATUS WDT__enSetMode_Load(WDT_nMODULE enModule, WDT_nMODE enMode, uint32_t u32Load)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT__vSetLoad(enModule, u32Load);
    enReturn = WDT__enSetMode(enModule, enMode);
    return enReturn;
}

WDT_nSTATUS WDT__enSetModeStruct_Load(WDT_nMODULE enModule, const WDT_MODE_Typedef* psMode, uint32_t u32Load)
{
    WDT_nSTATUS enReturn = WDT_enSTATUS_ERROR;
    WDT__vSetLoad(enModule, u32Load);
    enReturn = WDT__enSetModeStruct(enModule, psMode);
    return enReturn;
}
