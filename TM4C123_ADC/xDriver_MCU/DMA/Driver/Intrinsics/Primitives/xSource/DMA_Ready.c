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
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_Ready.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Dependencies.h>

void DMA__vSetReady(DMA_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule = DMA_enMODULE_MAX;
    }
    enPeripheral|= enModule;
    SYSCTL__vSetReady(enPeripheral);
}
void DMA__vReset(DMA_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule=DMA_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    SYSCTL__vReset(enPeripheral);
}
void DMA__vClearReady(DMA_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enUDMA;
    if(enModule>DMA_enMODULE_MAX)
    {
        enModule=DMA_enMODULE_MAX;
    }
    enPeripheral|=enModule;
    SYSCTL__vClearReady(enPeripheral);
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
    enReady=(DMA_nREADY) SYSCTL__enIsReady(enPeripheral);
    return enReady;
}





