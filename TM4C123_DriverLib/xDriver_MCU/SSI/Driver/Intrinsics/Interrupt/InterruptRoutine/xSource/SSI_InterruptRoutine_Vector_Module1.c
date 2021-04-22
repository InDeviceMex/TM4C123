/**
 *
 * @file SSI_InterruptRoutine_Vector_Module1.c
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
#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Vector_Module1.h>

#include <xDriver_MCU/SSI/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SSI_InterruptRoutine_Source.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>
#include <xDriver_MCU/SSI/Peripheral/xHeader/SSI_Dependencies.h>

#define DMA_SOURCE_BIT_RX_1    (10UL)
#define DMA_SOURCE_MASK_RX_1    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_RX_1))
#define DMA_SOURCE_BIT_RX_2    (24UL)
#define DMA_SOURCE_MASK_RX_2    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_RX_2))

#define DMA_SOURCE_BIT_TX_1    (11UL)
#define DMA_SOURCE_MASK_TX_1    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_TX_1))
#define DMA_SOURCE_BIT_TX_2    (25UL)
#define DMA_SOURCE_MASK_TX_2    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_TX_2))

void SSI1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0U;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegDMAPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_EN;
    if(0UL != u32RegDMAEn)
    {
        /*RX*/
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_RX_1;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK_RX_1;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP1_R;
                u32RegDMASource &= DMA_DMACHMAP1_R_CH10SEL_MASK;
                if(DMA_DMACHMAP1_R_CH10SEL_SSI1_RX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT_RX_1]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK_RX_1;
                }
            }
        }
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_RX_2;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK_RX_2;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP3_R;
                u32RegDMASource &= DMA_DMACHMAP3_R_CH24SEL_MASK;
                if(DMA_DMACHMAP3_R_CH24SEL_SSI1_RX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][DMA_SOURCE_BIT_RX_2]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK_RX_2;
                }
            }
        }
        /*TX*/
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_TX_1;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK_TX_1;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP1_R;
                u32RegDMASource &= DMA_DMACHMAP1_R_CH11SEL_MASK;
                if(DMA_DMACHMAP1_R_CH11SEL_SSI1_TX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][DMA_SOURCE_BIT_TX_1]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK_TX_1;
                }
            }
        }
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_TX_2;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK_TX_2;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP3_R;
                u32RegDMASource &= DMA_DMACHMAP3_R_CH25SEL_MASK;
                if(DMA_DMACHMAP3_R_CH25SEL_SSI1_TX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][DMA_SOURCE_BIT_TX_2]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK_TX_2;
                }
            }
        }
    }

    u32Reg = (uint32_t) SSI1_MIS_R;

    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN & u32Reg)
    {
        SSI1_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_OVERRUN;
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_1][(uint32_t) SSI_enINTERRUPT_RECEIVE_OVERRUN]();
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
    {
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_1][(uint32_t) SSI_enINTERRUPT_RECEIVE_TIMEOUT]();
        SSI1_ICR_R = (uint32_t) SSI_enINT_SOURCE_RECEIVE_TIMEOUT;
    }
    if((uint32_t) SSI_enINT_SOURCE_RECEIVE & u32Reg)
    {
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_1][(uint32_t) SSI_enINTERRUPT_RECEIVE]();
    }
    if((uint32_t) SSI_enINT_SOURCE_TRANSMIT & u32Reg)
    {
        SSI__vIRQSourceHandler[(uint32_t) SSI_enMODULE_1][(uint32_t) SSI_enINTERRUPT_TRANSMIT]();
    }
}
