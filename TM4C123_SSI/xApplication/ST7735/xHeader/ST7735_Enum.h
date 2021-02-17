/**
 *
 * @file ST7735_Enum.h
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
 * @verbatim 17 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XAPPLICATION_ST7735_XHEADER_ST7735_ENUM_H_
#define XAPPLICATION_ST7735_XHEADER_ST7735_ENUM_H_

typedef enum {
    ST7735_enINITFLAGS_NONE,
    ST7735_enINITFLAGS_GREEN,
    ST7735_enINITFLAGS_RED,
    ST7735_enINITFLAGS_BLACK,
}ST7735_nINITFLAGS;

typedef enum{
    ST7735_enCOMMAND_NOP = 0x00,
    ST7735_enCOMMAND_SWRESET = 0x01,
    ST7735_enCOMMAND_RDDID = 0x04,
    ST7735_enCOMMAND_RDDST = 0x09,

    ST7735_enCOMMAND_SLPIN = 0x10,
    ST7735_enCOMMAND_SLPOUT = 0x11,
    ST7735_enCOMMAND_PTLON = 0x12,
    ST7735_enCOMMAND_NORON = 0x13,

    ST7735_enCOMMAND_INVOFF = 0x20,
    ST7735_enCOMMAND_INVON = 0x21,
    ST7735_enCOMMAND_DISPOFF = 0x28,
    ST7735_enCOMMAND_DISPON = 0x29,
    ST7735_enCOMMAND_CASET = 0x2A,
    ST7735_enCOMMAND_RASET = 0x2B,
    ST7735_enCOMMAND_RAMWR = 0x2C,
    ST7735_enCOMMAND_RAMRD = 0x2E,

    ST7735_enCOMMAND_PTLAR = 0x30,
    ST7735_enCOMMAND_COLMOD = 0x3A,
    ST7735_enCOMMAND_MADCTL = 0x36,

    ST7735_enCOMMAND_FRMCTR1 = 0xB1,
    ST7735_enCOMMAND_FRMCTR2 = 0xB2,
    ST7735_enCOMMAND_FRMCTR3 = 0xB3,
    ST7735_enCOMMAND_INVCTR = 0xB4,
    ST7735_enCOMMAND_DISSET5 = 0xB6,

    ST7735_enCOMMAND_PWCTR1 = 0xC0,
    ST7735_enCOMMAND_PWCTR2 = 0xC1,
    ST7735_enCOMMAND_PWCTR3 = 0xC2,
    ST7735_enCOMMAND_PWCTR4 = 0xC3,
    ST7735_enCOMMAND_PWCTR5 = 0xC4,
    ST7735_enCOMMAND_VMCTR1 = 0xC5,

    ST7735_enCOMMAND_RDID1 = 0xDA,
    ST7735_enCOMMAND_RDID2 = 0xDB,
    ST7735_enCOMMAND_RDID3 = 0xDC,
    ST7735_enCOMMAND_RDID4 = 0xDD,

    ST7735_enCOMMAND_PWCTR6 = 0xFC,

    ST7735_enCOMMAND_GMCTRP1 = 0xE0,
    ST7735_enCOMMAND_GMCTRN1 = 0xE1,

}ST7735_nCOMMAND;

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_ENUM_H_ */
