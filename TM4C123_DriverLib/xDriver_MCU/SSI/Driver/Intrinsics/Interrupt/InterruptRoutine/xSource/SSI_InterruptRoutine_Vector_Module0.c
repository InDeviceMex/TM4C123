/**
 *
 * @file SSI_InterruptRoutine_Vector_Module0.c
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module0.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Source.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Dependencies.h>

#define DMA_SOURCE_BIT_RX    (10UL)
#define DMA_SOURCE_MASK_RX    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_RX))

#define DMA_SOURCE_BIT_TX    (11UL)
#define DMA_SOURCE_MASK_TX    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_TX))

void SSI0__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0U;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_ENA;
    if(0UL != u32RegDMAEn)
    {
        /*RX*/
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_RX;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_RX;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP1_R;
                u32RegDMASource &= DMA_CHMAP1_R_CH10SEL_MASK;
                if(DMA_CHMAP1_R_CH10SEL_SSI0_RX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][DMA_SOURCE_BIT_RX]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_RX;
                }
            }
        }
        /*TX*/
        u32RegDMAOccur = DMA_CHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_TX;
        if(0UL != u32RegDMAOccur)
        {
            u32RegPeriph = DMA_REQMASKSET_R;
            u32RegPeriph &= DMA_SOURCE_MASK_TX;
            if(0UL == u32RegPeriph)
            {
                u32RegDMASource = DMA_CHMAP1_R;
                u32RegDMASource &= DMA_CHMAP1_R_CH11SEL_MASK;
                if(DMA_CHMAP1_R_CH11SEL_SSI0_TX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][DMA_SOURCE_BIT_TX]();
                    DMA_CHIS_R = DMA_SOURCE_MASK_TX;
                }
            }
        }
    }

    u32Reg = (uint32_t) SSI0_MIS_R;

    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN & u32Reg)
    {
        SSI0_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN;
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_0][(uint32_t) SSI_enINTERRUPT_RECEIVE_OVERRUN]();
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
    {
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_0][(uint32_t) SSI_enINTERRUPT_RECEIVE_TIMEOUT]();
        SSI0_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT;
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE & u32Reg)
    {
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_0][(uint32_t) SSI_enINTERRUPT_RECEIVE]();
    }
    if((uint32_t) SSI_enINT_SOURCE_TRANSMIT & u32Reg)
    {
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_0][(uint32_t) SSI_enINTERRUPT_TRANSMIT]();
    }
}


