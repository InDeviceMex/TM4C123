/**
 *
 * @file DMA_StructRegisterChannel_Bitbanding.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_BITBANDING_H_
#define XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_BITBANDING_H_

#include <xUtils/Standard/Standard.h>

typedef volatile struct
{
    volatile uint32_t ADDR [32];
}BITBANDING_DMASRCENDP_TypeDef;

typedef volatile struct
{
    volatile uint32_t ADDR [32];
}BITBANDING_DMADSTENDP_TypeDef;

typedef volatile struct
{
    volatile uint32_t XFERMODE    [3];
    volatile uint32_t NXTUSEBURST ;
    volatile uint32_t XFERSIZE    [10];
    volatile uint32_t ARBSIZE     [4];
    const    uint32_t reserved    [6];
    volatile uint32_t SRCSIZE     [2];
    volatile uint32_t SRCINC      [2];
    volatile uint32_t DSTSIZE     [2];
    volatile uint32_t DSTINC      [2];
}BITBANDING_DMACHCTL_TypeDef;




#endif /* XDRIVER_MCU_DRIVER_HEADER_DMA_DMA_PERIPHERAL_DMA_STRUCT_DMA_STRUCTREGISTERCHANNEL_BITBANDING_H_ */
