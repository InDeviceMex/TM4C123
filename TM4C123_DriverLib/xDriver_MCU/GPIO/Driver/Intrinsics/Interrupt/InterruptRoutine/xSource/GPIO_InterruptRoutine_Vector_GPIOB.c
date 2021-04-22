/**
 *
 * @file GPIO_InterruptRoutine_Vector_GPIOB.c
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
#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Vector_GPIOB.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/GPIO_InterruptRoutine_Source.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>
#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Dependencies.h>

#define DMA_SOURCE_BIT    (5UL)
#define DMA_SOURCE_MASK    ((uint32_t) ((uint32_t) 1UL << (uint32_t) DMA_SOURCE_BIT))

#define DMA_SOURCE_BIT1    (18UL)
#define DMA_SOURCE_MASK1    ((uint32_t) ((uint32_t) 18UL << (uint32_t) DMA_SOURCE_BIT1))

void GPIOB__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg = 0UL;
    volatile uint32_t u32RegDMAEn = 0UL;
    volatile uint32_t u32RegDMAOccur = 0UL;
    volatile uint32_t u32RegDMAPeriph = 0UL;
    volatile uint32_t u32RegDMASource = 0UL;
    uint32_t u32RegBUS = 0UL;

    u32RegDMAEn = SYSCTL_RCGCDMA_R;
    u32RegDMAEn &= SYSCTL_RCGCDMA_R_UDMA_EN;
    if(0UL != u32RegDMAEn)
    {
        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP0_R;
                u32RegDMASource &= DMA_DMACHMAP0_R_CH5SEL_MASK;
                if(DMA_DMACHMAP0_R_CH5SEL_GPIOB == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_3][DMA_SOURCE_BIT]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK;
                }
            }
        }

        u32RegDMAOccur = DMA_DMACHIS_R;
        u32RegDMAOccur &= DMA_SOURCE_MASK1;
        if(0UL != u32RegDMAOccur)
        {
            u32RegDMAPeriph = DMA_DMAREQMASKSET_R;
            u32RegDMAPeriph &= DMA_SOURCE_MASK1;
            if(0UL == u32RegDMAPeriph)
            {
                u32RegDMASource = DMA_DMACHMAP2_R;
                u32RegDMASource &= DMA_DMACHMAP2_R_CH18SEL_MASK;
                if(DMA_DMACHMAP2_R_CH18SEL_GPIOB == u32RegDMASource)
                {
                    DMA_CH__vIRQSourceHandler[(uint32_t) DMA_enCH_ENCODER_3][DMA_SOURCE_BIT1]();
                    DMA_DMACHIS_R = DMA_SOURCE_MASK1;
                }
            }
        }
    }

    u32RegBUS = SYSCTL_GPIOHBCTL_R;
    u32RegBUS &= SYSCTL_GPIOHBCTL_R_PORTB_MASK;

    if((uint32_t) GPIO_enBUS_APB == u32RegBUS)
    {
        u32Reg = GPIOB_APB_MIS_R;
        if((uint32_t) GPIO_enPIN_0 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_0;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER0]();
        }
        if((uint32_t) GPIO_enPIN_1 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_1;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER1]();
        }
        if((uint32_t) GPIO_enPIN_2 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_2;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER2]();
        }
        if((uint32_t) GPIO_enPIN_3 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_3;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER3]();
        }
        if((uint32_t) GPIO_enPIN_4 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_4;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER4]();
        }
        if((uint32_t) GPIO_enPIN_5 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_5;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER5]();
        }
        if((uint32_t) GPIO_enPIN_6 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_6;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER6]();
        }
        if((uint32_t) GPIO_enPIN_7 & u32Reg)
        {
            GPIOB_APB_ICR_R = (uint32_t) GPIO_enPIN_7;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER7]();
        }
    }
    else
    {
        u32Reg = GPIOB_AHB_MIS_R;
        if((uint32_t) GPIO_enPIN_0 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_0;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER0]();
        }
        if((uint32_t) GPIO_enPIN_1 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_1;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER1]();
        }
        if((uint32_t) GPIO_enPIN_2 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_2;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER2]();
        }
        if((uint32_t) GPIO_enPIN_3 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_3;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER3]();
        }
        if((uint32_t) GPIO_enPIN_4 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_4;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER4]();
        }
        if((uint32_t) GPIO_enPIN_5 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_5;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER5]();
        }
        if((uint32_t) GPIO_enPIN_6 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_6;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER6]();
        }
        if((uint32_t) GPIO_enPIN_7 & u32Reg)
        {
            GPIOB_AHB_ICR_R = (uint32_t) GPIO_enPIN_7;
            GPIO__vIRQSourceHandler[(uint32_t) GPIO_enPORT_B][(uint32_t) GPIO_enPIN_NUMBER7]();
        }
    }
}

