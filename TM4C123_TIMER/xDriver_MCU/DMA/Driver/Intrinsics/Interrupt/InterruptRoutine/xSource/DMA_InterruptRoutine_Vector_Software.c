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
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>


void DMA_SW__vIRQVectorHandler(void)
{
    uint32_t u32Channel =0u;
    uint32_t u32Priority = DMA_DMAPRIOSET_R;
    uint32_t u32IntStatus = DMA_DMACHIS_R;
    uint32_t u32Pos =1u;

    for( u32Channel=0u; u32Channel<(uint32_t)DMA_enCH_MODULE_MAX; u32Channel++)
    {
        if(u32Pos == (u32IntStatus & u32Pos))
        {
            if(u32Pos == (u32Priority & u32Pos))
            {
                DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_INTERRUPT_SOURCE_SOFTWARE][u32Channel]();
                DMA_DMACHIS_R=u32Pos;
            }
        }
        u32Pos<<=1u;
    }

    u32Pos =1u;
    for( u32Channel=0u; u32Channel<(uint32_t)DMA_enCH_MODULE_MAX; u32Channel++)
    {

        if(u32Pos == (u32IntStatus & u32Pos))
        {
            if(0u == (u32Priority & u32Pos))
            {
                DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_INTERRUPT_SOURCE_SOFTWARE][u32Channel]();
                DMA_DMACHIS_R=u32Pos;
            }
        }
        u32Pos<<=1u;
    }
}

