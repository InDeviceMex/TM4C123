/**
 *
 * @file DMA_StructPeripheralChannel.h
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
 * @verbatim 28 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_

#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructRegisterChannel.h>

typedef volatile struct
{
    union
    {
        volatile const uint32_t DMASRCENDP;
        DMASRCENDP_TypeDef      DMASRCENDP_Bit;
    };
    union
    {
        volatile const uint32_t DMADSTENDP;
        DMADSTENDP_TypeDef      DMADSTENDP_Bit;
    };
    union
    {
        volatile const uint32_t DMACHCTL;
        DMACHCTL_TypeDef        DMACHCTL_Bit;
    };
    const uint32_t reserved;
}DMACHANNEL_TypeDef;


typedef volatile struct
{
    DMACHANNEL_TypeDef DMACH[32];
}DMACH_TypeDef;


#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_H_ */
