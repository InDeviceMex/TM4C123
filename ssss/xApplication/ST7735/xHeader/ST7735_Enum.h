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
    ST7735_enCOMMAND_NOP = 0x00UL,
    ST7735_enCOMMAND_SWRESET = 0x01UL,
    ST7735_enCOMMAND_RDDID = 0x04UL,
    ST7735_enCOMMAND_RDDST = 0x09UL,

    ST7735_enCOMMAND_SLPIN = 0x10UL,
    ST7735_enCOMMAND_SLPOUT = 0x11UL,
    ST7735_enCOMMAND_PTLON = 0x12UL,
    ST7735_enCOMMAND_NORON = 0x13UL,

    ST7735_enCOMMAND_INVOFF = 0x20UL,
    ST7735_enCOMMAND_INVON = 0x21UL,
    ST7735_enCOMMAND_DISPOFF = 0x28UL,
    ST7735_enCOMMAND_DISPON = 0x29UL,
    ST7735_enCOMMAND_CASET = 0x2AUL,
    ST7735_enCOMMAND_RASET = 0x2BUL,
    ST7735_enCOMMAND_RAMWR = 0x2CUL,
    ST7735_enCOMMAND_RAMRD = 0x2EUL,

    ST7735_enCOMMAND_PTLAR = 0x30UL,
    ST7735_enCOMMAND_COLMOD = 0x3AUL,
    ST7735_enCOMMAND_MADCTL = 0x36UL,

    ST7735_enCOMMAND_DELAY = 0x80UL,

    ST7735_enCOMMAND_FRMCTR1 = 0xB1UL,
    ST7735_enCOMMAND_FRMCTR2 = 0xB2UL,
    ST7735_enCOMMAND_FRMCTR3 = 0xB3UL,
    ST7735_enCOMMAND_INVCTR = 0xB4UL,
    ST7735_enCOMMAND_DISSET5 = 0xB6UL,

    ST7735_enCOMMAND_PWCTR1 = 0xC0UL,
    ST7735_enCOMMAND_PWCTR2 = 0xC1UL,
    ST7735_enCOMMAND_PWCTR3 = 0xC2UL,
    ST7735_enCOMMAND_PWCTR4 = 0xC3UL,
    ST7735_enCOMMAND_PWCTR5 = 0xC4UL,
    ST7735_enCOMMAND_VMCTR1 = 0xC5UL,

    ST7735_enCOMMAND_RDID1 = 0xDAUL,
    ST7735_enCOMMAND_RDID2 = 0xDBUL,
    ST7735_enCOMMAND_RDID3 = 0xDCUL,
    ST7735_enCOMMAND_RDID4 = 0xDDUL,

    ST7735_enCOMMAND_PWCTR6 = 0xFCUL,

    ST7735_enCOMMAND_GMCTRP1 = 0xE0UL,
    ST7735_enCOMMAND_GMCTRN1 = 0xE1UL,

}ST7735_nCOMMAND;

#endif /* XAPPLICATION_ST7735_XHEADER_ST7735_ENUM_H_ */