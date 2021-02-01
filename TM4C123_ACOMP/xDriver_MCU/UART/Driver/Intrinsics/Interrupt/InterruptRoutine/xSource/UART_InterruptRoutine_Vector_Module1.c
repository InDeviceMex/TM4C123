/**
 *
 * @file UART_InterruptRoutine_Vector_Module1.c
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
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module1.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>

void UART1__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0U;
    u32Reg = (uint32_t) UART1_UARTMIS_R;

    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        /*RX*/
        if(DMA_DMACHIS_R_CHIS8_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS8_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET8_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET8_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH8SEL_UART1_RX == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH8SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][8U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS8_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS22_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS22_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET22_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET22_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH22SEL_UART1_RX == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH22SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][22U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS22_CLEAR;
                }
            }
        }
        /*TX*/
        if(DMA_DMACHIS_R_CHIS9_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS9_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET9_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET9_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH9SEL_UART1_TX == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH9SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_1][9U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS9_CLEAR;
                }
            }
        }
        if(DMA_DMACHIS_R_CHIS23_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS23_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET23_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET23_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH23SEL_UART1_TX == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH23SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_0][23U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS23_CLEAR;
                }
            }
        }
    }

    if((uint32_t) UART_enINT_CLEAR_TO_SEND & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_CLEAR_TO_SEND;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_CLEAR_TO_SEND]();
    }
    if((uint32_t) UART_enINT_RECEIVE & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_RECEIVE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_RECEIVE]();
    }
    if((uint32_t) UART_enINT_TRANSMIT & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_TRANSMIT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_TRANSMIT]();
    }
    if((uint32_t) UART_enINT_RECEIVE_TIMEOUT & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_RECEIVE_TIMEOUT;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_RECEIVE_TIMEOUT]();
    }
    if((uint32_t) UART_enINT_FRAME_ERROR & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_FRAME_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_FRAME_ERROR]();
    }
    if((uint32_t) UART_enINT_PARITY_ERROR & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_PARITY_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_PARITY_ERROR]();
    }
    if((uint32_t) UART_enINT_BREAK_ERROR & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_BREAK_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_BREAK_ERROR]();
    }
    if((uint32_t) UART_enINT_OVERRUN_ERROR & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_OVERRUN_ERROR;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_OVERRUN_ERROR]();
    }
    if((uint32_t) UART_enINT_BIT9_MODE & u32Reg)
    {
        UART1_UARTICR_R = (uint32_t) UART_enINT_BIT9_MODE;
        UART__vIRQSourceHandler[(uint32_t) UART_enMODULE_1][(uint32_t) UART_enINTERRUPT_BIT9_MODE]();
    }

}




