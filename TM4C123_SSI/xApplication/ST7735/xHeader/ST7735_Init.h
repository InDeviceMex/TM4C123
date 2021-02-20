/**
 *
 * @file ST7735_Init.h
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
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_INIT_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_INIT_H_

#include <xUtils/Standard/Standard.h>
#include <xApplication/ST7735/xHeader/ST7735_Enum.h>

void ST7735__vInit(const uint8_t *pu8CommandList);
void ST7735__vInitRModel(ST7735_nINITFLAGS enOptionArg);
void ST7735__vFillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_INIT_H_ */
