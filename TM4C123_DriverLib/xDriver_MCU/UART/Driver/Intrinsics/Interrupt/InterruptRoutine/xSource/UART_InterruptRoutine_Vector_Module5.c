/**
 *
 * @file UART_InterruptRoutine_Vector_Module5.c
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
 * @verbatim 23 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module5.h>

#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>

#define DMA_SOURCE_BIT_RX    (6UL)
#define DMA_SOURCE_MASK_RX    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_RX))

#define DMA_SOURCE_BIT_TX    (7UL)
#define DMA_SOURCE_MASK_TX    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT_TX))

void UART5__vIRQVectorHandler(void)
{
    uint32_t u32ErrorFlag = 0UL;
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
        u32RegDMAOccur &= DMA_SOURCE_MASK_RX;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK_RX;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP0_R;
                u32RegDMASource &= DMA_DMACHMAP0_R_CH6SEL_MASK;
                if(DMA_DMACHMAP0_R_CH6SEL_UART5_RX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_2][DMA_SOURCE_BIT_RX]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK_RX;
                }
            }
        }
        /*TX*/
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK_TX;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK_TX;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP0_R;
                u32RegDMASource &= DMA_DMACHMAP0_R_CH7SEL_MASK;
                if(DMA_DMACHMAP0_R_CH7SEL_UART5_TX == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_2][DMA_SOURCE_BIT_TX]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK_TX;
                }
            }
        }
    }

    u32Reg = (uint32_t) UART5_UARTMIS_R;

    if((uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND & u32Reg)
    {
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_CLEAR_TO_SEND;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_CLEAR_TO_SEND]();
    }
    if((uint32_t) UART_enINT_SOURCE_RECEIVE & u32Reg)
    {
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_RECEIVE]();
    }
    if((uint32_t) UART_enINT_SOURCE_TRANSMIT & u32Reg)
    {
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_TRANSMIT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_TRANSMIT]();
    }
    if((uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT & u32Reg)
    {
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_RECEIVE_TIMEOUT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_RECEIVE_TIMEOUT]();
    }
    if((uint32_t) UART_enINT_SOURCE_FRAME_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_FRAME_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_FRAME_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_PARITY_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_PARITY_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_PARITY_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_BREAK_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_BREAK_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_BREAK_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR & u32Reg)
    {
        u32ErrorFlag = 1UL;
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_OVERRUN_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_OVERRUN_ERROR]();
    }
    if((uint32_t) UART_enINT_SOURCE_BIT9_MODE & u32Reg)
    {
        UART5_UARTICR_R = (uint32_t) UART_enINT_SOURCE_BIT9_MODE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_5][(uint32_t) UART_enINTERRUPT_BIT9_MODE]();
    }

    if(1UL == u32ErrorFlag)
    {
        UART5_UARTECR_R = 0xFFUL;
    }
}
