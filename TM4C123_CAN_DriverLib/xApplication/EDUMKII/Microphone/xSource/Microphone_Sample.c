/**
 *
 * @file Microphone_Sample.c
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
 * @verbatim 18 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Microphone/xHeader/Microphone_Sample.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/DMA/DMA.h>

volatile uint32_t u32MicrophoneFifoArray[1] = {0UL};
volatile uint32_t u32MicrophoneFlag = 0UL;

void EDUMKII_Microphone_vSample(uint32_t *u32Input)
{
    u32MicrophoneFlag = 0UL;
    ADC__vSetSequencerInitConv(ADC_enMODULE_0, ADC_enSEQMASK_0);
    while(0UL == u32MicrophoneFlag){}
    *u32Input = u32MicrophoneFifoArray[0];
}

void EDUMKII_Microphone_vIRQSourceHandler(void)
{
    DMACHCTL_TypeDef enChControl = {
         DMA_enCH_MODE_BASIC,
         DMA_enCH_BURST_OFF,
         1UL-1U,
         DMA_enCH_BURST_SIZE_1,
         0,
         DMA_enCH_SRC_SIZE_WORD,
         DMA_enCH_SRC_INC_NO,
         DMA_enCH_DST_SIZE_WORD,
         DMA_enCH_DST_INC_WORD,
    };

    DMACH->DMACh[14UL].DMACHCTL = *((volatile uint32_t*) &enChControl);
    DMA->DMAENASET = (uint32_t)  DMA_enCH_ENA_ENA << 14UL;
    u32MicrophoneFlag = 1UL;
}




