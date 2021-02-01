/**
 *
 * @file UART_InterruptRoutine_Vector_Module2.c
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
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module2.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>


void UART2__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0U;
    u32Reg = (uint32_t) UART2_UARTMIS_R;

    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        /*RX*/
        if(DMA_DMACHIS_R_CHIS0_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS0_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET0_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET0_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH0SEL_UART2_RX == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH0SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][0U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS0_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS12_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS12_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET12_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET12_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH12SEL_UART2_RX == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH12SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][12U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS12_CLEAR;
                }
            }
        }
        /*TX*/
        if(DMA_DMACHIS_R_CHIS1_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS1_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET1_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET1_MASK ))
            {
                if(DMA_DMACHMAP0_R_CH1SEL_UART2_TX == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH1SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][1U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS1_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS13_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS13_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET13_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET13_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH13SEL_UART2_TX == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH13SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][13U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS13_CLEAR;
                }
            }
        }
    }

    if((uint32_t) UART_enINT_CLEAR_TO_SEND & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_CLEAR_TO_SEND;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_CLEAR_TO_SEND]();
    }
    if((uint32_t) UART_enINT_RECEIVE & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_RECEIVE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_RECEIVE]();
    }
    if((uint32_t) UART_enINT_TRANSMIT & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_TRANSMIT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_TRANSMIT]();
    }
    if((uint32_t) UART_enINT_RECEIVE_TIMEOUT & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_RECEIVE_TIMEOUT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_RECEIVE_TIMEOUT]();
    }
    if((uint32_t) UART_enINT_FRAME_ERROR & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_FRAME_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_FRAME_ERROR]();
    }
    if((uint32_t) UART_enINT_PARITY_ERROR & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_PARITY_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_PARITY_ERROR]();
    }
    if((uint32_t) UART_enINT_BREAK_ERROR & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_BREAK_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_BREAK_ERROR]();
    }
    if((uint32_t) UART_enINT_OVERRUN_ERROR & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_OVERRUN_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_OVERRUN_ERROR]();
    }
    if((uint32_t) UART_enINT_BIT9_MODE & u32Reg)
    {
        UART2_UARTICR_R = (uint32_t) UART_enINT_BIT9_MODE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_2][(uint32_t) UART_enINTERRUPT_BIT9_MODE]();
    }

}



