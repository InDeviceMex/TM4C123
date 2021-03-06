/**
 *
 * @file ST7735_Write.c
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
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Init.h>

#include <xApplication/ST7735/xHeader/ST7735_ChipSelect.h>
#include <xApplication/ST7735/xHeader/ST7735_DataCommand.h>
#include <xApplication/ST7735/xHeader/ST7735_Reset.h>

#include <xApplication/ST7735/xHeader/ST7735_Enum.h>
#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xUtils/Colors/Colors.h>
#include <xUtils/Font/Font.h>

#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/SSI/SSI.h>
#include <xDriver_MCU/SSI/Peripheral/SSI_Peripheral.h>
#include <xDriver_MCU/DMA/DMA.h>

void ST7735__vDMATxInterupt(void);
static void ST7735__vSetTransferSizeLeft(uint32_t u32SizeArg);
uint32_t ST7735__u32GetTransferSizeLeft(void);

volatile uint32_t ST7735_vDMATxInteruptStatus = 0UL;
volatile uint32_t ST7735_u32DMATransferSizeLeft = 0UL;

DMACHCTL_TypeDef enDMAChControlPrim = {
    DMA_enCH_MODE_BASIC,
    DMA_enCH_BURST_OFF,
    0UL,
    DMA_enCH_BURST_SIZE_8,
    0,
    DMA_enCH_SRC_SIZE_HALF_WORD,
    DMA_enCH_SRC_INC_NO,
    DMA_enCH_DST_SIZE_HALF_WORD,
    DMA_enCH_DST_INC_NO,
};

void ST7735__vInitWriteDMAConfig(void)
{
    DMA_CONFIG_Typedef enDMAChConfig= {
        DMA_enCH_REQTYPE_BOTH,
        DMA_enCH_PERIPHERAL_ENA,
        DMA_enCH_CTL_PRIMARY ,
        DMA_enCH_PRIO_DEFAULT ,
        DMA_enCH_ENCODER_2
    };

    DMA__vRegisterIRQSourceHandler( &ST7735__vDMATxInterupt, DMA_enCH_MODULE_13, DMA_enCH_ENCODER_2 );
    DMA_CH__vSetPrimaryDestEndAddress(DMA_enCH_MODULE_13, (uint32_t) (SSI2_BASE + SSI_SSIDR_OFFSET));
    DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_13, (uint32_t) 0UL);

    SSI__vSetDMATx(ST7735_SSI, SSI_enDMA_EN);
    DMA_CH__vSetConfigStruct(DMA_enCH_MODULE_13, enDMAChConfig);

}

void ST7735__vSetTransferSizeLeft(uint32_t u32SizeArg)
{
    ST7735_u32DMATransferSizeLeft = u32SizeArg;
}

uint32_t ST7735__u32GetTransferSizeLeft(void)
{
    uint32_t u32SizeArg = 0UL;
    u32SizeArg = ST7735_u32DMATransferSizeLeft;
    return u32SizeArg;
}

uint32_t ST7735__u32GetDMATxInterupt(void)
{
    return ST7735_vDMATxInteruptStatus;
}

void ST7735__vSetDMATxInterupt(uint32_t u32StateArg)
{
    ST7735_vDMATxInteruptStatus = u32StateArg;
}

uint32_t ST7735__u32WriteCommand(uint16_t u16DataArg)
{
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetCommand();

    u32ReceiveReg = SSI__u32SetData(ST7735_SSI, (uint32_t) u16DataArg);

    ST7735__vDisableChipSelect();
    return u32ReceiveReg;
}

uint32_t ST7735__u32WriteData(uint32_t u32DataArg)
{
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetData();

    u32ReceiveReg = SSI__u32SetData(ST7735_SSI, u32DataArg);

    ST7735__vDisableChipSelect();
    return u32ReceiveReg;
}



uint32_t ST7735__u32WriteFifo(uint16_t u16DataArg, uint32_t u32BufferCant)
{
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;
    ST7735__vEnableChipSelect();
    ST7735__vSetData();

    u32ReceiveReg = SSI__u32SetFifoDataConst(ST7735_SSI,  (uint32_t)  u16DataArg, u32BufferCant);

    ST7735__vDisableChipSelect();
    return u32ReceiveReg;
}


uint32_t ST7735__u32WriteDMA(uint32_t u32DataArg, uint32_t u32BufferCant)
{
    uint32_t u32StatusReg = 0UL;
    uint32_t u32ReceiveReg = 0xFFFFFFFFUL;

    if(0UL != u32BufferCant)
    {
        ST7735__vEnableChipSelect();
        ST7735__vSetData();
        ST7735__vSetDMATxInterupt(1UL);
        enDMAChControlPrim.XFERMODE = DMA_enCH_MODE_BASIC;
        if(u32BufferCant > 1024UL)
        {
            enDMAChControlPrim.XFERSIZE = 1024UL - 1UL;
            u32BufferCant -= 1024UL;
        }
        else
        {
            enDMAChControlPrim.XFERSIZE = u32BufferCant - 1UL;
            u32BufferCant = 0UL;
        }
        ST7735__vSetTransferSizeLeft(u32BufferCant);

        DMA_CH__vSetPrimarySourceEndAddress(DMA_enCH_MODULE_13, (uint32_t) &u32DataArg);
        DMA_CH__vSetPrimaryControlWorld(DMA_enCH_MODULE_13, enDMAChControlPrim);

        DMA_CH__vSetEnable(DMA_enCH_MODULE_13, DMA_enCH_ENA_ENA);

        do
        {
            u32StatusReg = ST7735__u32GetDMATxInterupt();
        }while(0UL != u32StatusReg);

        ST7735__vDisableChipSelect();
    }
    return u32ReceiveReg;
}

void ST7735__vDMATxInterupt(void)
{
    DMACHCTL_TypeDef enDMAChControl = {
        DMA_enCH_MODE_BASIC,
        DMA_enCH_BURST_OFF,
        0UL,
        DMA_enCH_BURST_SIZE_8,
        0,
        DMA_enCH_SRC_SIZE_HALF_WORD,
        DMA_enCH_SRC_INC_NO,
        DMA_enCH_DST_SIZE_HALF_WORD,
        DMA_enCH_DST_INC_NO,
    };

    if(0UL != ST7735_u32DMATransferSizeLeft)
    {
        if(ST7735_u32DMATransferSizeLeft > 1024UL)
        {
            enDMAChControl.XFERSIZE = 1024UL - 1UL;
            ST7735_u32DMATransferSizeLeft -= 1024UL;
        }
        else
        {
            enDMAChControl.XFERSIZE = ST7735_u32DMATransferSizeLeft - 1UL;
            ST7735_u32DMATransferSizeLeft = 0UL;
        }
        DMACH->DMACh[13UL].DMACHCTL = *((volatile uint32_t*) &enDMAChControl);
        DMA->DMAENASET = (uint32_t)  DMA_enCH_ENA_ENA << 13UL;
    }
    else
    {
        ST7735_vDMATxInteruptStatus = 0UL;
        DMA->DMAENACLR = (uint32_t)  DMA_enCH_ENA_ENA << 13UL;
    }
}
