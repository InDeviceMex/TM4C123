/**
 *
 * @file DMA_CH_Control.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <stdlib.h>
#include <xDriver_MCU/DMA/Driver/CH_Control/DMA_CH_Control.h>
#include <xDriver_MCU/DMA/App/CH_Control/DMA_CH_Control.h>
#include <xDriver_MCU/DMA/App/CH_Control/xHeader/DMA_CH_ControlStruct.h>
#include <xDriver_MCU/DMA/Driver/DMA_Driver.h>

void DMA_CH__vSetPrimaryControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef psControl)
{
    DMA_CH__vSetControlStruct(enDMAChannel, DMA_enCH_CTL_PRIMARY, psControl);
}

void DMA_CH__vSetAlternateControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef psControl)
{
        DMA_CH__vSetControlStruct(enDMAChannel, DMA_enCH_CTL_ALTERTATE, psControl);
}

void DMA_CH__vSetControlStruct(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure, DMA_CONTROL_Typedef psControl)
{
        DMA_CH__vSetTransferMode(enDMAChannel, enChannelStructure, psControl.enTransferMode);
        DMA_CH__vSetBurst(enDMAChannel, enChannelStructure, psControl.enUseBurst);
        DMA_CH__vSetTransferSize(enDMAChannel, enChannelStructure, psControl.u32TransferSize);
        DMA_CH__vSetBurstSize(enDMAChannel, enChannelStructure, psControl.enBurstSize);
        DMA_CH__vSetSourceSize(enDMAChannel, enChannelStructure, psControl.enSourceSize);
        DMA_CH__vSetSourceIncrement(enDMAChannel, enChannelStructure, psControl.enSourceInc);
        DMA_CH__vSetDestinationSize(enDMAChannel, enChannelStructure, psControl.enDestSize);
        DMA_CH__vSetDestinationIncrement(enDMAChannel, enChannelStructure, psControl.enDestInc);
}

DMA_nSTATUS DMA_CH__enGetPrimaryControl(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef* psControl)
{
    DMA_nSTATUS enDMAStatus = DMA_enSTATUS_ERROR;
    enDMAStatus = DMA_CH__enGetControl(enDMAChannel, DMA_enCH_CTL_PRIMARY, psControl);
    return enDMAStatus;
}

DMA_nSTATUS DMA_CH__enGetAlternateControl(DMA_nCH_MODULE enDMAChannel, DMA_CONTROL_Typedef* psControl)
{
    DMA_nSTATUS enDMAStatus = DMA_enSTATUS_ERROR;
    enDMAStatus = DMA_CH__enGetControl(enDMAChannel, DMA_enCH_CTL_ALTERTATE, psControl);
    return enDMAStatus;
}

DMA_nSTATUS DMA_CH__enGetControl(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure, DMA_CONTROL_Typedef* psControl)
{
    DMA_nSTATUS enDMAStatus = DMA_enSTATUS_ERROR;

      if(0UL != (uint32_t) psControl)
      {
          psControl->enTransferMode = DMA_CH__enGetTransferMode(enDMAChannel, enChannelStructure);
          psControl->enUseBurst = DMA_CH__enGetBurst(enDMAChannel, enChannelStructure);
          psControl->u32TransferSize = DMA_CH__u32GetTransferSize(enDMAChannel, enChannelStructure);
          psControl->enBurstSize = DMA_CH__enGetBurstSize(enDMAChannel, enChannelStructure);
          psControl->enSourceSize = DMA_CH__enGetSourceSize(enDMAChannel, enChannelStructure);
          psControl->enSourceInc = DMA_CH__enGetSourceIncrement(enDMAChannel, enChannelStructure);
          psControl->enDestSize = DMA_CH__enGetDestinationSize(enDMAChannel, enChannelStructure);
          psControl->enDestInc = DMA_CH__enGetDestinationIncrement(enDMAChannel, enChannelStructure);
      }
      return enDMAStatus;
}

DMA_CONTROL_Typedef* DMA_CH__psGetPrimaryControl(DMA_nCH_MODULE enDMAChannel)
{
    return DMA_CH__psGetControl(enDMAChannel, DMA_enCH_CTL_PRIMARY);
}

DMA_CONTROL_Typedef* DMA_CH__psGetAlternateControl(DMA_nCH_MODULE enDMAChannel)
{
    return DMA_CH__psGetControl(enDMAChannel, DMA_enCH_CTL_ALTERTATE);
}

DMA_CONTROL_Typedef* DMA_CH__psGetControl(DMA_nCH_MODULE enDMAChannel, DMA_nCH_CTL enChannelStructure)
{
    DMA_CONTROL_Typedef* psControl = 0UL;
    #if defined (__TI_ARM__ )
    psControl = (DMA_CONTROL_Typedef*) memalign( (size_t) 4, (size_t) sizeof(DMA_CONTROL_Typedef));
    #elif defined (__GNUC__ )
    psControl = (DMA_CONTROL_Typedef*) malloc(sizeof(DMA_CONTROL_Typedef));
    #endif
    DMA_CH__enGetControl(enDMAChannel, enChannelStructure, psControl);
    return psControl;
}

void DMA_CH__vDeleteControlStruct(DMA_CONTROL_Typedef* psControl)
{
    free(psControl);
    psControl = (DMA_CONTROL_Typedef*) 0UL;
}
