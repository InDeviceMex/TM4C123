/**
 *
 * @file Joystick_Sample.c
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Joystick/xHeader/Joystick_Sample.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/DMA/DMA.h>

static volatile EDUMKII_nJOYSTICK enSelectStatus = EDUMKII_enJOYSTICK_NOPRESS;
volatile uint32_t u32JostickFifoArray[2]= {0};

void EDUMKII_Joystick_vSample(int32_t *s32X, int32_t *s32Y, EDUMKII_nJOYSTICK *enSelect)
{
    *s32X = (int32_t)u32JostickFifoArray[0] - 2048;
    *s32Y = (int32_t)u32JostickFifoArray[1] - 2048;

    *enSelect = (EDUMKII_nJOYSTICK)enSelectStatus;

}

void EDUMKII_Joystick_vIRQSourceHandler(void)
{
    DMACHCTL_TypeDef enChControl =
    {
         DMA_enCH_MODE_PING_PONG,
         DMA_enCH_BURST_OFF,
         2u-1U,
         DMA_enCH_BURST_SIZE_2,
         0,
         DMA_enCH_SRC_SIZE_WORD,
         DMA_enCH_SRC_INC_NO,
         DMA_enCH_DST_SIZE_WORD,
         DMA_enCH_DST_INC_WORD,
    };

    DMA_nCH_CTL enDMAcontrol = DMA_enCH_CTL_UNDEF;
    enDMAcontrol = DMA_CH__enGetControlStructure(DMA_enCH_MODULE_15);
    if(DMA_enCH_CTL_PRIMARY == enDMAcontrol)
    {
        DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_15, enChControl);
    }
    else
    {
        DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_15, enChControl);
    }
}


void EDUMKII_Select_vIRQSourceHandler(void)
{
    uint32_t u32ValueButton1 = 0UL;
    u32ValueButton1 =GPIO__u32GetData(EDUMKII_SELECT_PORT,EDUMKII_SELECT_PIN);
    if( 0UL == u32ValueButton1 )
    {
        enSelectStatus = EDUMKII_enJOYSTICK_PRESS;
    }
    else
    {
        enSelectStatus = EDUMKII_enJOYSTICK_NOPRESS;
    }
}


