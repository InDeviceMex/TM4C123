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
#include <xApplication/CONVERSION/Generic_Header/CONV.h>
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Adaptive.h>
/*Definciones de Comando*/

typedef enum
{
    LCD1602_enOK=0u,
    LCD1602_enBUSY=1u,
}LCD1602_nBUSY;

typedef enum
{
    LCD1602_enCONITNUE=0u,
    LCD1602_enFINISH=1u,
}LCD1602_nFINISH;

typedef enum
{
    LCD1602_enSTATUS_OK=0u,
    LCD1602_enSTATUS_ERROR=1u,
}LCD1602_nSTATUS;

typedef enum
{
    LCD1602_enCLEAR     =0x01u, /*Clear Screen*/
    LCD1602_enHOME      =0x02u, /*Cursor to Home 0,0*/
    /*Next commands could be combined*/
    LCD1602_ebDecAdd    =0x04u, /*Decrement Direction in each write*/
    LCD1602_enNSDisp    =0x04u, /*Cursor does not move*/
    LCD1602_enSDisp     =0x05u, /*move cursor 1 position*/
    LCD1602_enIncAdd    =0x06u, /*Increment Direction in each write*/
    /*Next commands could be combined*/
    LCD1602_enOFFDisp   =0x08u, /*Screen OFF*/
    LCD1602_enOFFCursor =0x08u, /*Cursor OFF*/
    LCD1602_enOFFBlink  =0x08u, /*Blinking OFF*/
    LCD1602_enONBlink   =0x09u, /*Blinking ON*/
    LCD1602_enONCursor  =0x0Au, /*Cursor ON*/
    LCD1602_enONDisp    =0x0Cu, /*Screen ON*/
    /*Next commands could be combined*/
    LCD1602_enCLDisp    =0x10u, /*Move the cursor to Left, Direction increase 1*/
    LCD1602_enCRDisp    =0x14u, /*Move the cursor to Right, Direction decrease 1*/
    LCD1602_enSLDisp    =0x18u, /*Move all Screen to the Left, Direction not change*/
    LCD1602_enSRDisp    =0x1Cu, /*Move all Screen to the Right, Direction not change*/
    /*Next commands could be combined*/
    LCD1602_enM1LINE    =0x20u, /*1 Line Mode*/
    LCD1602_enM4BIT     =0x20u, /*4 bit Mode*/
    LCD1602_enM5_8_Font =0x20u, /*5x8 Font*/
    LCD1602_enM5_11_Font=0x24u, /*5x11 Font*/
    LCD1602_enM2LINE    =0x28u, /*2 Line Mode*/
    LCD1602_enM8BIT     =0x30u, /*8 bit Mode*/


    LCD1602_enGCRAM     =0x40u, /*Write to GC Ram*/


}LCD1602_nCommands;

typedef struct {
    uint32_t area;
    uint16_t Xmin;
    uint16_t Ymin;
    uint16_t Xmax;
    uint16_t Ymax;
}LC1602_AREA_TypeDef;

typedef struct
{
    uint32_t X          ;
    uint32_t Y          ;
}LC1602_COORDS_TypeDef;


/*Indexes start on 0*/
#define LCD1602_COLUMN_MIN (1)
#define LCD1602_COLUMN_MAX (16)
#define LCD1602_ROW_MIN (1)
#define LCD1602_ROW_MAX (2)
#define LCD1602_TAB_SIZE (0x2u)

#define LCD1602_MAX_COUNT (32)

LCD1602_nSTATUS LCD1602__enInit(void);
LCD1602_nSTATUS LCD1602__enWriteGCRam(const char* pcChar, uint8_t u8Address);





LCD1602_nSTATUS LCD1602__enClearBufferSection(uint8_t* pu8Buffer,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearBufferSectionDirect(uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearBuffer(uint8_t* pu8Buffer);
LCD1602_nSTATUS LCD1602__enClearBufferDirect(void);

LCD1602_nSTATUS LCD1602_enAdreesBufferLimitSection(uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602_enAdreesBufferLimit(uint8_t* pu8Column, uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enWriteBuffer(uint8_t u8Data, uint8_t* pu8Buffer, uint8_t* pu8Column,uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enWriteBufferDirect(uint8_t u8Data, uint8_t* pu8Column,uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enReadBuffer(uint8_t* pu8Data, uint8_t* pu8Buffer, uint8_t* pu8Column,uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enReadBufferDirect(uint8_t* pu8Data, uint8_t* pu8Column,uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enWriteStringBufferSection_Secure(char* pcBuffer, char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringBufferSectionDirect_Secure(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringBufferSection(char* pcBuffer, char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringBufferSectionDirect(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringBuffer(char* pcBuffer, char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);
LCD1602_nSTATUS LCD1602__enWriteStringBufferDirect(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);






LCD1602_nSTATUS LCD1602__enReloadScreenSection(uint8_t* pu8Buffer,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enReloadScreenSectionDirect(uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enReloadScreen(uint8_t* pu8Buffer);
LCD1602_nSTATUS LCD1602__enReloadScreenDirect(void);

LCD1602_nSTATUS LCD1602__enClearScreenSection(uint8_t* pu8Buffer,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearScreenSectionDirect(uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearScreen(uint8_t* pu8Buffer);
LCD1602_nSTATUS LCD1602__enClearScreenDirect(void);

LCD1602_nSTATUS LCD1602__enWriteScreen(uint8_t u8Data,uint8_t* pu8Buffer, uint8_t* pu8Column,uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enWriteScreenDirect(uint8_t u8Data,uint8_t* pu8Column,uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enReadScreen(uint8_t* pu8Data, uint8_t* pu8Buffer, uint8_t* pu8Column,uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enReadScreenDirect(uint8_t* pu8Data, uint8_t* pu8Column,uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enWriteStringScreenSection_Secure(char* pcBuffer, char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringScreenSectionDirect_Secure(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringScreenSection(char* pcBuffer, char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringScreenSectionDirect(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringScreen(char* pcBuffer, char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);
LCD1602_nSTATUS LCD1602__enWriteStringScreenDirect(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);


LCD1602_nSTATUS LCD1602__enReadString(char* pcString, uint8_t u8Column,uint8_t u8Row,uint8_t u8Count);



LCD1602_nSTATUS LCD1602__enPrint(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, LCD1602_nFINISH *penFinish);
LCD1602_nSTATUS LCD1602__enPrint_Secure(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8MaxCount, LCD1602_nFINISH *penFinish);
LCD1602_nSTATUS LCD1602__enPrintSection(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax, LCD1602_nFINISH *penFinish);
LCD1602_nSTATUS LCD1602__enPrintSection_Secure(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax, uint8_t u8MaxCount, LCD1602_nFINISH *penFinish);

LCD1602_nSTATUS LCD1602__enPrintfSection(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,...);
LCD1602_nSTATUS LCD1602__enPrintf(char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,...);



#endif /* HEADER_APP_LCD1602_H_ */
