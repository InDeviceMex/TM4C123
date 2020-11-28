/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOD.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOD.h>
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>

void GPIOD__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0;
    uint32_t u32RegBUS = SYSCTL_GPIOHBCTL_R & (uint32_t) ((uint32_t) 1u << 2u);
    if(SYSCTL_RCGCDMA_R_UDMA_EN
            == (SYSCTL_RCGCDMA_R & SYSCTL_RCGCDMA_R_UDMA_EN))
    {
        if(DMA_DMACHIS_R_CHIS7_OCCUR
                == (DMA_DMACHIS_R & DMA_DMACHIS_R_CHIS7_MASK))
        {
            if(DMA_DMAREQMASKSET_R_SET7_EN
                    == (DMA_DMAREQMASKSET_R & DMA_DMAREQMASKSET_R_SET7_MASK))
            {
                if(DMA_DMACHMAP0_R_CH7SEL_GPIOD
                        == (DMA_DMACHMAP0_R & DMA_DMACHMAP0_R_CH7SEL_MASK))
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_3][7u]();
                    DMA_DMACHIS_R = DMA_DMACHIS_R_CHIS7_CLEAR;
                }
            }
        }
    }

    if((uint32_t) GPIO_enBUS_APB == u32RegBUS)
    {
        u32Reg = GPIOD_APB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN_0)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_0;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER0]();
        }
        if(u32Reg & GPIO_enPIN_1)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_1;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER1]();
        }
        if(u32Reg & GPIO_enPIN_2)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_2;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER2]();
        }
        if(u32Reg & GPIO_enPIN_3)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_3;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER3]();
        }
        if(u32Reg & GPIO_enPIN_4)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_4;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER4]();
        }
        if(u32Reg & GPIO_enPIN_5)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_5;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER5]();
        }
        if(u32Reg & GPIO_enPIN_6)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_6;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER6]();
        }
        if(u32Reg & GPIO_enPIN_7)
        {
            GPIOD_APB_GPIOICR_R = GPIO_enPIN_7;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER7]();
        }
    }
    else
    {
        u32Reg = GPIOD_AHB_GPIOMIS_R;
        if(u32Reg & GPIO_enPIN_0)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_0;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER0]();
        }
        if(u32Reg & GPIO_enPIN_1)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_1;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER1]();
        }
        if(u32Reg & GPIO_enPIN_2)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_2;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER2]();
        }
        if(u32Reg & GPIO_enPIN_3)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_3;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER3]();
        }
        if(u32Reg & GPIO_enPIN_4)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_4;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER4]();
        }
        if(u32Reg & GPIO_enPIN_5)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_5;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER5]();
        }
        if(u32Reg & GPIO_enPIN_6)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_6;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER6]();
        }
        if(u32Reg & GPIO_enPIN_7)
        {
            GPIOD_AHB_GPIOICR_R = GPIO_enPIN_7;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_D][(uint32_t) GPIO_enPIN_NUMBER7]();
        }
    }
}

