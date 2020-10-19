/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOF.c
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
 * @verbatim 30 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOF.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>

void GPIOF__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    uint32_t u32RegBUS=SYSCTL_GPIOHBCTL_R&(uint32_t)((uint32_t)1u<<2u);
    if(SYSCTL_RCGCDMA_R_UDMA_EN == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS15_OCCUR == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS15_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET15_EN == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET15_MASK ))
            {
                if(DMA_DMACHMAP1_R_CH15SEL_GPIOF == (DMA_DMACHMAP1_R & DMA_DMACHMAP1_R_CH15SEL_MASK ))
                {
                     DMA_CH__vIRQSourceHandler[(uint32_t)DMA_enCH_ENCODER_3][15u]();
                     DMA_DMACHIS_R=DMA_DMACHIS_R_CHIS15_CLEAR;
                }
            }
        }
    }
    if(GPIO_enBUS_APB ==u32RegBUS)
    {
         u32Reg=GPIOF_APB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN_0)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_0;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER0]();
         }
         if(u32Reg & GPIO_enPIN_1)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_1;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER1]();
         }
         if(u32Reg & GPIO_enPIN_2)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_2;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER2]();
         }
         if(u32Reg & GPIO_enPIN_3)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_3;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER3]();
         }
         if(u32Reg & GPIO_enPIN_4)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_4;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER4]();
         }
         if(u32Reg & GPIO_enPIN_5)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_5;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER5]();
         }
         if(u32Reg & GPIO_enPIN_6)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_6;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER6]();
         }
         if(u32Reg & GPIO_enPIN_7)
         {
             GPIOF_APB_GPIOICR_R=GPIO_enPIN_7;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER7]();
         }
    }
    else
    {
         u32Reg=GPIOF_AHB_GPIOMIS_R;
         if(u32Reg & GPIO_enPIN_0)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_0;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER0]();
         }
         if(u32Reg & GPIO_enPIN_1)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_1;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER1]();
         }
         if(u32Reg & GPIO_enPIN_2)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_2;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER2]();
         }
         if(u32Reg & GPIO_enPIN_3)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_3;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER3]();
         }
         if(u32Reg & GPIO_enPIN_4)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_4;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER4]();
         }
         if(u32Reg & GPIO_enPIN_5)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_5;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER5]();
         }
         if(u32Reg & GPIO_enPIN_6)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_6;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER6]();
         }
         if(u32Reg & GPIO_enPIN_7)
         {
             GPIOF_AHB_GPIOICR_R=GPIO_enPIN_7;
             GPIO__vIRQSourceHandler[(uint32_t)GPIO_enPORT_F][(uint32_t)GPIO_enPIN_NUMBER7]();
         }
    }
}



