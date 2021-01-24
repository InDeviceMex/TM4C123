/**
 *
 * @file UART_InterruptRoutine_Vector_Module7.c
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
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Vector_Module7.h>
#include <xDriver_MCU/UART/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/UART_InterruptRoutine_Source.h>
#include <xDriver_MCU/UART/Peripheral/UART_Peripheral.h>
#include <xDriver_MCU/UART/Peripheral/xHeader/UART_Dependencies.h>


void UART7__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0U;
    u32Reg=(uint32_t)UART7_UARTMIS_R;

    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        /*RX*/
        if(DMA_DMACHIS_R_CHIS20_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS20_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET20_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET20_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH20SEL_UART7_RX == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH20SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_2][20U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS20_CLEAR;
                }
            }
        }
        /*TX*/
        if(DMA_DMACHIS_R_CHIS21_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS21_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET21_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET21_MASK ))
            {
                if(DMA_DMACHMAP2_R_CH21SEL_UART7_TX == (DMA_DMACHMAP2_R & DMA_DMACHMAP2_R_CH21SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_2][21U]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS21_CLEAR;
                }
            }
        }
    }

    if(u32Reg & (uint32_t)UART_enINT_CLEAR_TO_SEND)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_CLEAR_TO_SEND;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_CLEAR_TO_SEND]();
    }
    if(u32Reg & (uint32_t)UART_enINT_RECEIVE)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_RECEIVE;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_RECEIVE]();
    }
    if(u32Reg & (uint32_t)UART_enINT_TRANSMIT)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_TRANSMIT;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_TRANSMIT]();
    }
    if(u32Reg & (uint32_t)UART_enINT_RECEIVE_TIMEOUT)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_RECEIVE_TIMEOUT;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_RECEIVE_TIMEOUT]();
    }
    if(u32Reg & (uint32_t)UART_enINT_FRAME_ERROR)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_FRAME_ERROR;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_FRAME_ERROR]();
    }
    if(u32Reg & (uint32_t)UART_enINT_PARITY_ERROR)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_PARITY_ERROR;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_PARITY_ERROR]();
    }
    if(u32Reg & (uint32_t)UART_enINT_BREAK_ERROR)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_BREAK_ERROR;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_BREAK_ERROR]();
    }
    if(u32Reg & (uint32_t)UART_enINT_OVERRUN_ERROR)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_OVERRUN_ERROR;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_OVERRUN_ERROR]();
    }
    if(u32Reg & (uint32_t)UART_enINT_BIT9_MODE)
    {
        UART7_UARTICR_R=(uint32_t)UART_enINT_BIT9_MODE;
        UART__vIRQSourceHandler[(uint32_t)UART_enMODULE_7][(uint32_t)UART_enINTERRUPT_BIT9_MODE]();
    }

}



