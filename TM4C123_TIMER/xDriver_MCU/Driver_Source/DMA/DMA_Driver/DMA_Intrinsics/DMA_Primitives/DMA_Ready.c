/**
 *
 * @file DMA_Ready.c
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
 * @verbatim 1 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 1 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/Driver_Header/DMA/DMA_Driver/DMA_Intrinsics/DMA_Primitives/DMA_Ready.h>

#include <xDriver_MCU/SYSCTL/Header/SYSCTL.h>

void DMA__vSetReady(DMA_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule = DMA_enMODULE_MAX;
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
void DMA__vReset(DMA_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule=DMA_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
void DMA__vClearReady(DMA_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule=DMA_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}
DMA_nREADY DMA__enIsReady(DMA_nMODULE enModule)
{
    DMA_nREADY enReady=DMA_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule=DMA_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    enReady=(DMA_nREADY)SYSCTL__enIsPeripheralReady(enPeripheral);
    return enReady;
}





