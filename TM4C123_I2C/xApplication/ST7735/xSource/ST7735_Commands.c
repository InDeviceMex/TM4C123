/**
 *
 * @file ST7735_Commands.c
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
#include <xApplication/ST7735/xHeader/ST7735_Commands.h>
#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Delay.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

const uint8_t ST7735_pcCommandSet1[59UL] =
{
    15UL,
    (uint32_t) ST7735_enCOMMAND_SWRESET, (uint32_t) ST7735_enCOMMAND_DELAY, 150UL,
    (uint32_t) ST7735_enCOMMAND_SLPOUT   , (uint32_t) ST7735_enCOMMAND_DELAY, 255UL,
    (uint32_t) ST7735_enCOMMAND_FRMCTR1, 3UL                                       , 0x01UL, 0x2CUL, 0x2DUL,
    (uint32_t) ST7735_enCOMMAND_FRMCTR2, 3UL                                       , 0x01UL, 0x2CUL, 0x2DUL,
    (uint32_t) ST7735_enCOMMAND_FRMCTR3, 6UL                                       , 0x01UL, 0x2CUL, 0x2DUL, 0x01UL, 0x2CUL, 0x2DUL,
    (uint32_t) ST7735_enCOMMAND_INVCTR   , 1UL                                       , 0x07,
    (uint32_t) ST7735_enCOMMAND_PWCTR1 , 3UL                                        , 0xA2UL, 0x02UL, 0x84UL,
    (uint32_t) ST7735_enCOMMAND_PWCTR2 , 1UL                                        , 0xC5UL,
    (uint32_t) ST7735_enCOMMAND_PWCTR3 , 2UL                                        , 0x0AUL, 0x00UL,
    (uint32_t) ST7735_enCOMMAND_PWCTR4 , 2UL                                        , 0x8AUL, 0x2AUL,
    (uint32_t) ST7735_enCOMMAND_PWCTR5 , 2UL                                        , 0x8AUL, 0xEEUL,
    (uint32_t) ST7735_enCOMMAND_VMCTR1 , 1UL                                        ,  0x0EUL,
    (uint32_t) ST7735_enCOMMAND_INVOFF  , 0UL                                        ,
    (uint32_t) ST7735_enCOMMAND_MADCTL , 1UL                                        , 0xC8UL,
    (uint32_t) ST7735_enCOMMAND_COLMOD, 1UL                                        , 0x05UL
};

const uint8_t ST7735_pcCommandSet2_Green[13UL] =
{
    2UL,
    (uint32_t) ST7735_enCOMMAND_CASET  , 4UL      , 0x00UL, 0x02UL, 0x00UL, 0x7FUL + 0x02UL,
    (uint32_t) ST7735_enCOMMAND_RASET  , 4UL      , 0x00UL, 0x01UL, 0x00UL, 0x7FUL + 0x01UL
};

const uint8_t ST7735_pcCommandSet2_Red[13UL] =
{
    2UL,
    (uint32_t) ST7735_enCOMMAND_CASET  , 4UL      , 0x00UL, 0x00UL, 0x00UL, 0x7FUL,
    (uint32_t) ST7735_enCOMMAND_RASET  , 4UL      , 0x00UL, 0x00UL, 0x00UL, 0x7FUL
};

const uint8_t ST7735_pcCommandSet3[43UL] =
{
    4UL,
    (uint32_t) ST7735_enCOMMAND_GMCTRP1, 16UL      , 0x02UL, 0x1CUL, 0x07UL, 0x12UL, 0x37UL, 0x32UL, 0x29UL, 0x2DUL, 0x29UL, 0x25UL, 0x2BUL, 0x39UL, 0x00UL, 0x01UL, 0x03UL, 0x10UL,
      (uint32_t) ST7735_enCOMMAND_GMCTRN1, 16UL      , 0x03UL, 0x1DUL, 0x07UL, 0x06UL, 0x2EUL, 0x2CUL, 0x29UL, 0x2DUL, 0x2EUL, 0x2EUL, 0x37UL, 0x3FUL, 0x00UL, 0x00UL, 0x02UL, 0x10UL,
      (uint32_t) ST7735_enCOMMAND_NORON  ,   (uint32_t)  ST7735_enCOMMAND_DELAY, 10UL,
      (uint32_t) ST7735_enCOMMAND_DISPON ,    (uint32_t) ST7735_enCOMMAND_DELAY, 100UL
};

void ST7735__vCommandList(const uint8_t * pu8AddressArg)
{
    uint8_t u8NumCommands = 0U;
    uint8_t u8NumCommandsPos = 0U;
    uint8_t u8NumArguments = 0U;
    uint8_t u8NumArgumentsPos = 0U;
    uint8_t u8AddressValue = 0U;
    uint16_t u16Delay = 0U;
    uint8_t u8Reg = 0U;

    u8NumCommands = *(pu8AddressArg);
    pu8AddressArg += 1UL;

    for(u8NumCommandsPos = u8NumCommands; 0U != u8NumCommandsPos; u8NumCommandsPos--)
    {
        u8AddressValue = *(pu8AddressArg);
        ST7735__u32WriteCommand((uint16_t) u8AddressValue);
        pu8AddressArg += 1UL;
        u8NumArguments  = *(pu8AddressArg);
        pu8AddressArg += 1UL;
        u16Delay = (uint16_t) u8NumArguments;
        u16Delay &= (uint16_t) ST7735_enCOMMAND_DELAY;          /*   If hibit set, delay follows args*/
        u8Reg = ~ (uint8_t)  ST7735_enCOMMAND_DELAY;
        u8NumArguments &= u8Reg;                   /*   Mask out delay bit*/

        for(u8NumArgumentsPos = u8NumArguments; 0U != u8NumArgumentsPos; u8NumArgumentsPos--)
        {
            u8AddressValue = *(pu8AddressArg);
            ST7735__u32WriteData((uint32_t) u8AddressValue);
            pu8AddressArg += 1UL;
        }

        if(0U != u16Delay)
        {
            u8Reg = (*pu8AddressArg);
            u16Delay = (uint16_t) u8Reg;             /* Read post-command delay time (u16Delay)*/
            pu8AddressArg += 1UL;
            if(255U == u16Delay)
            {
                u16Delay = 500U;     /* If 255, delay for 500 u16Delay*/
            }
            ST7735__vDelay1ms((uint32_t) u16Delay);
        }
    }
}
