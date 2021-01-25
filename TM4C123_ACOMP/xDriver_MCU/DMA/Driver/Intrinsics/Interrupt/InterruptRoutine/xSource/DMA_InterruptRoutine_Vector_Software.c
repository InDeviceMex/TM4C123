/**
 *
 * @file DMA_InterruptRoutine_Vector_Software.c
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector_Software.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Dependencies.h>

volatile uint32_t* DMA_ChannelAssig[(uint32_t)DMA_enCH_MODULE_MAX+1U] =
{
 (volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP0_OFFSET),
 (volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP1_OFFSET),
 (volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP2_OFFSET),
 (volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),(volatile uint32_t*) (DMA_BASE+DMA_DMACHMAP3_OFFSET),
};
uint32_t DMA_ChannelAssigBit[(uint32_t)DMA_enCH_MODULE_MAX+1U] = {0U, 4U, 8U, 12U, 16U, 20U, 24U, 28U, 0U, 4U, 8U, 12U, 16U, 20U, 24U, 28U, 0U, 4U, 8U, 12U, 16U, 20U, 24U, 28U, 0U, 4U, 8U, 12U, 16U, 20U, 24U, 28u};

void DMA_SW__vIRQVectorHandler(void)
{
    uint32_t u32Channel =0U;
    uint32_t u32Priority = DMA_DMAPRIOSET_R;
    uint32_t u32IntStatus = DMA_DMACHIS_R;
    uint32_t u32Pos =1U;

    for( u32Channel=0U; u32Channel<=(uint32_t)DMA_enCH_MODULE_MAX; u32Channel++)
    {
        if(u32Pos == (u32IntStatus & u32Pos))
        {
            if(u32Pos == (u32Priority & u32Pos))
            {
                DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_4][u32Channel]();
                DMA_DMACHIS_R=u32Pos;
            }
        }
        u32Pos<<=1U;
    }

    u32Pos =1U;
    for( u32Channel=0U; u32Channel<=(uint32_t)DMA_enCH_MODULE_MAX; u32Channel++)
    {

        if(u32Pos == (u32IntStatus & u32Pos))
        {
            DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_4][u32Channel]();
            DMA_DMACHIS_R=u32Pos;
        }
        u32Pos<<=1U;
    }
}

