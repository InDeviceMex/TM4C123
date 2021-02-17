/**
 *
 * @file Accelerometer_Sample.c
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
#include <xApplication/EDUMKII/Accelerometer/xHeader/Accelerometer_Sample.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/ADC/ADC.h>
#include <xDriver_MCU/DMA/DMA.h>

volatile uint32_t u32AccelerometerFifoArray[4] = {0UL};

void EDUMKII_Accelerometer_vSample(int32_t *s32X, int32_t *s32Y, int32_t *s32Z )
{
    *s32X = (int32_t) u32AccelerometerFifoArray[0] - 2048;
    *s32Y = (int32_t) u32AccelerometerFifoArray[1] - 2048;
    *s32Z = (int32_t) u32AccelerometerFifoArray[2] - 2048;
}

void EDUMKII_Accelerometer_vIRQSourceHandler(void)
{
    DMACHCTL_TypeDef enChControl = {
         DMA_enCH_MODE_PING_PONG, DMA_enCH_BURST_OFF, 4UL-1U, DMA_enCH_BURST_SIZE_4, 0,
         DMA_enCH_SRC_SIZE_WORD, DMA_enCH_SRC_INC_NO, DMA_enCH_DST_SIZE_WORD, DMA_enCH_DST_INC_WORD,
    };

    DMA_nCH_CTL enDMAcontrol = DMA_enCH_CTL_UNDEF;
    enDMAcontrol = DMA_CH__enGetControlStructure(DMA_enCH_MODULE_16);
    if(DMA_enCH_CTL_PRIMARY == enDMAcontrol)
    {
        DMA_CH__vSetAlternateControlWorld(DMA_enCH_MODULE_16, enChControl);
    }
    else
    {
        DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_16, enChControl);
    }
}

