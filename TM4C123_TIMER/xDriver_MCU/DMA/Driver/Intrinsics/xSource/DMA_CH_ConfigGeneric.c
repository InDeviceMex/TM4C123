/**
 *
 * @file DMA_CH_ConfigGeneric.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/xHeader/DMA_CH_ConfigGeneric.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h>

void DMA_CH__vSetConfigGeneric(DMA_nCH_MODULE enChannel, volatile uint32_t *pvu32Register)
{
    uint32_t u32Reg=0u;
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    DMA__vSetReady(DMA_enMODULE_0);

    u32Reg=*pvu32Register;
    u32Reg|=((uint32_t)0x1u<<u32Channel);
    *pvu32Register = u32Reg;
}


uint32_t DMA_CH__u32GetConfigGeneric(DMA_nCH_MODULE enChannel, const volatile uint32_t * const pvu32Register)
{
    uint32_t u32Reg=0u;
    uint32_t u32Result = 0xFFFFFFFF;
    DMA_nREADY enReady= DMA_enNOREADY;
    uint32_t u32Channel=(uint32_t)enChannel;
    if((uint32_t)DMA_enCH_MODULE_MAX<u32Channel)
    {
        u32Channel = DMA_enCH_MODULE_MAX;
    }
    enReady=DMA__enIsReady(DMA_enMODULE_0);

    if(DMA_enREADY == enReady)
    {
        u32Reg=*pvu32Register;
        u32Reg>>=u32Channel;
        u32Reg&=0x1u;
        u32Result=u32Reg;
    }
    return u32Result;
}
