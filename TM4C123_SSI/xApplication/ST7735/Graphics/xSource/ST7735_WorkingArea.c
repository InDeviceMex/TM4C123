/**
 *
 * @file ST7735_WorkingArea.c
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
 * @verbatim 19 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/Graphics/xHeader/ST7735_WorkingArea.h>

#include <xUtils/Graphics/xHeader/Graphics_ClearSection.h>

#include <xApplication/ST7735/xHeader/ST7735_Write.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>
#include <xApplication/ST7735/xHeader/ST7735_Defines.h>

#include <xDriver_MCU/SSI/SSI.h>

uint8_t ST7735_u8ColStart = 2U;
uint8_t ST7735_u8RowStart = 3U;

void ST7735__vSetWorkingAreaWrapper(ST7735_Layer_Typedef* restrict enLayerArg, ST7735_DIMENSIONS_Typedef sDimesionsArg, uint32_t u32Color)
{
    uint32_t u32PosY = sDimesionsArg.u32CoordY;
    uint32_t u32PosX = sDimesionsArg.u32CoordX;
    uint32_t u32PosYTotal = sDimesionsArg.u32CoordY + sDimesionsArg.u32Height;
    uint32_t u32PosXTotal = sDimesionsArg.u32CoordX + sDimesionsArg.u32Width;
    (void) u32Color;
    ST7735__u32WriteCommand(ST7735_enCOMMAND_CASET);
  ST7735__u32WriteData(0x00UL);
  ST7735__u32WriteData(u32PosX + ST7735_u8ColStart);
  ST7735__u32WriteData(0x00UL);
  ST7735__u32WriteData(u32PosXTotal + ST7735_u8ColStart - 1UL);

  ST7735__u32WriteCommand(ST7735_enCOMMAND_RASET);
  ST7735__u32WriteData(0x00UL);
  ST7735__u32WriteData(u32PosY+ST7735_u8RowStart);
  ST7735__u32WriteData(0x00UL);
  ST7735__u32WriteData(u32PosYTotal + ST7735_u8RowStart - 1UL);

  ST7735__u32WriteCommand(ST7735_enCOMMAND_RAMWR);
}

void ST7735__vSetWorkingArea(ST7735_Layer_Typedef* restrict enLayerArg, ST7735_DIMENSIONS_Typedef sDimesionsArg)
{
    Graphics__vClearSection(&ST7735__vSetWorkingAreaWrapper,enLayerArg, sDimesionsArg, 0UL);

}

