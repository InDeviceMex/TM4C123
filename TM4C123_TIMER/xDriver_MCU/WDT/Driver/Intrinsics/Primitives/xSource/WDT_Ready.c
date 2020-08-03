/**
 *
 * @file WDT_Ready.c
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
 * @verbatim 22 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Primitives/xHeader/WDT_Ready.h>

void WDT__vSetReady(WDT_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enWDT0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule = WDT_enMODULE_MAX;
    }
    enPeripheral|= enModule;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enNOREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
void WDT__vReset(WDT_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enWDT0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
void WDT__vClearReady(WDT_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enWDT0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
WDT_nREADY WDT__enIsReady(WDT_nMODULE enModule)
{
    WDT_nREADY enReady=WDT_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enWDT0;
    if(enModule>WDT_enMODULE_MAX)
    {
        enModule=WDT_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    enReady=(WDT_nREADY)SYSCTL__enIsPeripheralReady(enPeripheral);
    return enReady;
}




