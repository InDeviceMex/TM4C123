/**
 *
 * @file DMA_CH_InterruptStatus.c
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
 * @verbatim 20 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_InterruptStatus.h>

#include <xDriver_MCU/DMA/Driver/CH_Config/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

void DMA_CH__vClearInterruptStatus(DMA_nCH_MODULE enChannel)
{
    DMA_CH__vSetConfigGeneric_Direct(enChannel, DMA_DMACHIS_OFFSET);
}

DMA_nCH_INT_STATUS DMA_CH__enGetInterruptStatus(DMA_nCH_MODULE enChannel)
{
    DMA_nCH_INT_STATUS enInterruptStatus = DMA_enCH_INT_STATUS_UNDEF;
    enInterruptStatus = (DMA_nCH_INT_STATUS) DMA_CH__u32GetConfigGeneric(enChannel, DMA_DMACHIS_OFFSET);
    return enInterruptStatus;
}
