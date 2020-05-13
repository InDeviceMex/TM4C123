/*
 * LCD1602.h
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_APP_LCD1602_H_
#define HEADER_APP_LCD1602_H_


#include <stdarg.h>
#include <stdint.h>
#include "GPIO.h"
#include "SYSTICK.h"
/*Definciones de Comando*/

typedef enum
{
    LCD1602_enOK=0,
    LCD1602_enBUSY=1,
}LCD1602_nBUSY;

typedef enum
{
    LCD1602_enSTATUS_OK=0,
    LCD1602_enSTATUS_ERROR=1,
}LCD1602_nSTATUS;
typedef enum
{
    LCD1602_enWRITE=0,
    LCD1602_enREAD=1,
}LCD1602_nRW;

typedef enum
{
    LCD1602_enCOMMAND=0,
    LCD1602_enDATA=1,
}LCD1602_nRS;

typedef enum
{
    LCD1602_enCLEAR     =0x01, //Clear Screen
    LCD1602_enHOME      =0x02, //Cursor to Home 0,0
    /*Next commands could be combined*/
    LCD1602_ebDecAdd    =0x04, //Decrement Direction in each write
    LCD1602_enNSDisp    =0x04, //Cursor does not move
    LCD1602_enSDisp     =0x05, //move cursor 1 position
    LCD1602_enIncAdd    =0x06, //Increment Direction in each write
    /*Next commands could be combined*/
    LCD1602_enOFFDisp   =0x08, //Screen OFF
    LCD1602_enOFFCursor =0x08, //Cursor OFF
    LCD1602_enOFFBlink  =0x08, //Blinking OFF
    LCD1602_enONBlink   =0x09, //Blinking ON
    LCD1602_enONCursor  =0x0A, //Cursor ON
    LCD1602_enONDisp    =0x0C, //Screen ON
    /*Next commands could be combined*/
    LCD1602_enCLDisp    =0x10, //Move the cursor to Left, Direction increase 1
    LCD1602_enCRDisp    =0x14, //Move the cursor to Right, Direction decrease 1
    LCD1602_enSLDisp    =0x18, //Move all Screen to the Left, Direction not change
    LCD1602_enSRDisp    =0x1C, //Move all Screen to the Right, Direction not change
    /*Next commands could be combined*/
    LCD1602_enM1LINE    =0x20, //1 Line Mode
    LCD1602_enM4BIT     =0x20, //4 bit Mode
    LCD1602_enM5_8_Font =0x20, //5x8 Font
    LCD1602_enM5_11_Font=0x24, //5x11 Font
    LCD1602_enM2LINE    =0x28, //2 Line Mode
    LCD1602_enM8BIT     =0x30, //8 bit Mode


    LCD1602_enGCRAM     =0x40, //Write to GC Ram


}LCD1602_nCommands;


#define LCD1602_PORT_E  (GPIO_enPORTB)
#define LCD1602_PORT_RS (GPIO_enPORTB)
#define LCD1602_PORT_RW (GPIO_enPORTB)
#define LCD1602_PORT_D4 (GPIO_enPORTB)
#define LCD1602_PORT_D5 (GPIO_enPORTB)
#define LCD1602_PORT_D6 (GPIO_enPORTB)
#define LCD1602_PORT_D7 (GPIO_enPORTB)

#define LCD1602_D4 (GPIO_enPIN0)
#define LCD1602_D5 (GPIO_enPIN1)
#define LCD1602_D6 (GPIO_enPIN2)
#define LCD1602_D7 (GPIO_enPIN3)
#define LCD1602_E  (GPIO_enPIN4)
#define LCD1602_RS (GPIO_enPIN5)
#define LCD1602_RW (GPIO_enPIN6)

#define LCD1602_D4_POS (0)
#define LCD1602_D5_POS (1)
#define LCD1602_D6_POS (2)
#define LCD1602_D7_POS (3)
#define LCD1602_E_POS  (4)
#define LCD1602_RS_POS (5)
#define LCD1602_RW_POS (6)



LCD1602_nSTATUS LCD1602__enInit(void);

LCD1602_nSTATUS LCD1602__enWriteData(uint8_t u8Data);
LCD1602_nSTATUS LCD1602__enWriteChar(char cData);
LCD1602_nSTATUS LCD1602__enWriteCommand(LCD1602_nCommands enCommand);

LCD1602_nSTATUS LCD1602__enReadData(uint8_t* pu8Data);
LCD1602_nSTATUS LCD1602__enReadChar(char* pcData,uint8_t u8Column, uint8_t u8Row);
LCD1602_nSTATUS LCD1602__enGetAddress(uint8_t* pu8Column,uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enSetAddress(uint8_t u8Column, uint8_t u8Row);


LCD1602_nSTATUS LCD1602__enReadString(char* pcString, uint8_t u8Column,uint8_t u8Row,uint8_t u8Count);
LCD1602_nSTATUS LCD1602__enWriteString(char* pcString, uint8_t* pu8Column,uint8_t* pu8Row,uint8_t* pu8Count);

LCD1602_nSTATUS LCD1602__enWriteGCRam(const char* pcChar, uint8_t u8Address);

uint32_t        LCD1602__u32Print(char* pcPrint,uint8_t* pu8Column, uint8_t* pu8Row);
uint32_t        LCD1602__u32Printf(char* pcPrint,uint8_t* pu8Column, uint8_t* pu8Row,...);



#endif /* HEADER_APP_LCD1602_H_ */
