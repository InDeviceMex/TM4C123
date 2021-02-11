/*
 * LCD1602.h
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_APP_LCD1602_H_
#define HEADER_APP_LCD1602_H_


#include <stdarg.h>
#include <xUtils/Standard/Standard.h>
#include <xApplication/CONVERSION/Generic/xHeader/CONV.h>
#include <xApplication/LCD1602/Adaptive/LCD1602_Adaptive.h>
/*Definciones de Comando*/

typedef enum
{
    LCD1602_enOK = 0U,
    LCD1602_enBUSY = 1U,
}LCD1602_nBUSY;

typedef enum
{
    LCD1602_enCONITNUE = 0U,
    LCD1602_enFINISH = 1U,
}LCD1602_nFINISH;

typedef enum
{
    LCD1602_enSTATUS_OK = 0U,
    LCD1602_enSTATUS_ERROR = 1U,
}LCD1602_nSTATUS;

typedef enum
{
    LCD1602_enCLEAR = 0x01U, /*Clear Screen*/
    LCD1602_enHOME = 0x02U, /*Cursor to Home 0, 0*/
    /*Next commands could be combined*/
    LCD1602_ebDecAdd = 0x04U, /*Decrement Direction in each write*/
    LCD1602_enNSDisp = 0x04U, /*Cursor does not move*/
    LCD1602_enSDisp = 0x05U, /*move cursor 1 position*/
    LCD1602_enIncAdd = 0x06U, /*Increment Direction in each write*/
    /*Next commands could be combined*/
    LCD1602_enOFFDisp = 0x08U, /*Screen OFF*/
    LCD1602_enOFFCursor = 0x08U, /*Cursor OFF*/
    LCD1602_enOFFBlink = 0x08U, /*Blinking OFF*/
    LCD1602_enONBlink = 0x09U, /*Blinking ON*/
    LCD1602_enONCursor = 0x0AU, /*Cursor ON*/
    LCD1602_enONDisp = 0x0CU, /*Screen ON*/
    /*Next commands could be combined*/
    LCD1602_enCLDisp = 0x10U, /*Move the cursor to Left, Direction increase 1*/
    LCD1602_enCRDisp = 0x14U, /*Move the cursor to Right, Direction decrease 1*/
    LCD1602_enSLDisp = 0x18U, /*Move all Screen to the Left, Direction not change*/
    LCD1602_enSRDisp = 0x1CU, /*Move all Screen to the Right, Direction not change*/
    /*Next commands could be combined*/
    LCD1602_enM1LINE = 0x20U, /*1 Line Mode*/
    LCD1602_enM4BIT = 0x20U, /*4 bit Mode*/
    LCD1602_enM5_8_Font = 0x20U, /*5x8 Font*/
    LCD1602_enM5_11_Font = 0x24U, /*5x11 Font*/
    LCD1602_enM2LINE = 0x28U, /*2 Line Mode*/
    LCD1602_enM8BIT = 0x30U, /*8 bit Mode*/


    LCD1602_enGCRAM = 0x40U, /*Write to GC Ram*/


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
#define LCD1602_COLUMN_MIN (1U)
#define LCD1602_COLUMN_MAX (16U)
#define LCD1602_ROW_MIN (1U)
#define LCD1602_ROW_MAX (2U)
#define LCD1602_TAB_SIZE (0x2U)

#define LCD1602_MAX_COUNT (32U)

LCD1602_nSTATUS LCD1602__enInit(void);
LCD1602_nSTATUS LCD1602__enWriteGCRam(const char* pcChar, uint8_t u8Address);





LCD1602_nSTATUS LCD1602__enClearBufferSection(char* pcBuffer, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearBufferSectionDirect(uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearBuffer(char* pcBuffer);
LCD1602_nSTATUS LCD1602__enClearBufferDirect(void);

LCD1602_nSTATUS LCD1602_enAdreesBufferLimitSection(uint8_t* pu8Column, uint8_t* pu8Row, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602_enAdreesBufferLimit(uint8_t* pu8Column, uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enWriteBuffer(char cData, char* pcBuffer, const uint8_t* pu8Column, const uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enWriteBufferDirect(char cData, const uint8_t* pu8Column, const uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enReadBuffer(char* pcData, const char* pcBuffer, const uint8_t* pu8Column, const uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enReadBufferDirect(char* pcData, const uint8_t* pu8Column, const uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enWriteStringBufferSection_Secure(char* pcBuffer, const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax, uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringBufferSectionDirect_Secure(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax, uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringBufferSection(char* pcBuffer, const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringBufferSectionDirect(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringBuffer(char* pcBuffer, const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);
LCD1602_nSTATUS LCD1602__enWriteStringBufferDirect(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);






LCD1602_nSTATUS LCD1602__enReloadScreenSection(char* pcBuffer, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enReloadScreenSectionDirect(uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enReloadScreen(char* pcBuffer);
LCD1602_nSTATUS LCD1602__enReloadScreenDirect(void);

LCD1602_nSTATUS LCD1602__enClearScreenSection(char* pcBuffer, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearScreenSectionDirect(uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enClearScreen(const char* pcBuffer);
LCD1602_nSTATUS LCD1602__enClearScreenDirect(void);

LCD1602_nSTATUS LCD1602__enWriteScreen(char cData, const char* pcBuffer, const  uint8_t* pu8Column, const uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enWriteScreenDirect(char cData, const uint8_t* pu8Column, const uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enReadScreen(char* pcData, const char* pcBuffer, const  uint8_t* pu8Column, const uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602__enReadScreenDirect(char* pcData, const  uint8_t* pu8Column, const uint8_t* pu8Row);

LCD1602_nSTATUS LCD1602__enWriteStringScreenSection_Secure(const char* pcBuffer, const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax, uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringScreenSectionDirect_Secure(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax, uint8_t u8MaxCount);
LCD1602_nSTATUS LCD1602__enWriteStringScreenSection(const char* pcBuffer, const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringScreenSectionDirect(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax);
LCD1602_nSTATUS LCD1602__enWriteStringScreen(const char* pcBuffer, const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);
LCD1602_nSTATUS LCD1602__enWriteStringScreenDirect(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count);


LCD1602_nSTATUS LCD1602__enReadString(char* pcString, uint8_t u8Column, uint8_t u8Row, uint8_t u8Count);



LCD1602_nSTATUS LCD1602__enPrint(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, LCD1602_nFINISH *penFinish);
LCD1602_nSTATUS LCD1602__enPrint_Secure(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8MaxCount, LCD1602_nFINISH *penFinish);
LCD1602_nSTATUS LCD1602__enPrintSection(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax, LCD1602_nFINISH *penFinish);
LCD1602_nSTATUS LCD1602__enPrintSection_Secure(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax, uint8_t u8MaxCount, LCD1602_nFINISH *penFinish);

LCD1602_nSTATUS LCD1602__enPrintfSection(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, uint8_t u8WidthMin, uint8_t u8WidthMax, uint8_t u8HeightMin, uint8_t u8HeightMax,...);
LCD1602_nSTATUS LCD1602__enPrintf(const char* pcString, uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,...);



#endif /* HEADER_APP_LCD1602_H_ */
