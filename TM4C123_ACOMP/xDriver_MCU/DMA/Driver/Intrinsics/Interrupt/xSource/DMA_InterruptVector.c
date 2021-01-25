/**
 *
 * @file DMA_InterruptVector.c
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
 * @verbatim 23 sep. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 sep. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Dependencies.h>
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/xHeader/DMA_InterruptVector.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

static NVIC_nSTIR NVIC_VECTOR_DMA[(uint32_t)DMA_enVECTOR_MAX+1u]=
    {
         NVIC_enSTIR_UDMASOFT,NVIC_enSTIR_UDMAERROR,
    };


void DMA__vEnInterruptVector(DMA_nVECTOR enVector,DMA_nPRIORITY enDmaPriority)
{
    uint32_t u32VectorNvic=(uint32_t)NVIC_enSTIR_UDMASOFT;
    if((uint32_t)DMA_enVECTOR_MAX<(uint32_t)enVector)
    {
        enVector=DMA_enVECTOR_MAX;
    }
    u32VectorNvic=(uint32_t)NVIC_VECTOR_DMA[(uint32_t)enVector];
    enDmaPriority&=0x7U;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)u32VectorNvic,(NVIC_nPRIORITY)enDmaPriority);
}

void DMA__vDisInterruptVector(DMA_nVECTOR enVector)
{
    uint32_t u32VectorNvic=(uint32_t)NVIC_enSTIR_UDMASOFT;
    if((uint32_t)DMA_enVECTOR_MAX<(uint32_t)enVector)
    {
        enVector=DMA_enVECTOR_MAX;
    }
    u32VectorNvic=(uint32_t)NVIC_VECTOR_DMA[(uint32_t)enVector];
    NVIC__enClearEnableIRQ((NVIC_nSTIR)u32VectorNvic);
}


