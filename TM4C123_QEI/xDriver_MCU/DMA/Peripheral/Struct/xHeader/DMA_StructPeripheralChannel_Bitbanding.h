/**
 *
 * @file DMA_StructPeripheralChannel_Bitbanding.h
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
 * Date Author Version Description
 * 28 jul. 2020 vyldram 1.0 initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_BITBANDING_H_

#include <xDriver_MCU/DMA/Peripheral/Struct/xHeader/DMA_StructRegisterChannel_Bitbanding.h>

typedef volatile struct
{
    union
    {
        volatile uint32_t DMASRCENDP [32UL];
        BITBANDING_DMASRCENDP_TypeDef DMASRCENDP_Bit;
    };
    union
    {
        volatile uint32_t DMADSTENDP [32UL];
        BITBANDING_DMADSTENDP_TypeDef DMADSTENDP_Bit;
    };
    union
    {
        volatile uint32_t DMACHCTL [32UL];
        BITBANDING_DMACHCTL_TypeDef DMACHCTL_Bit;
    };
    const uint32_t reserved [32UL];
}DMACHANNEL_BITBANDING_TypeDef;

typedef volatile struct
{
    DMACHANNEL_BITBANDING_TypeDef CH [32UL];
}DMACH_BITBANDING_TypeDef;

#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTPERIPHERALCHANNEL_BITBANDING_H_ */
