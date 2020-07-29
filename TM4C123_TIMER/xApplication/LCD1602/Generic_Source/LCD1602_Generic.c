/*
 * LCD1602.c
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */



#include <LCD1602/Generic_Header/LCD1602_Generic.h>

typedef LCD1602_nSTATUS (*LCD1602_SET_ADDRESS_TypeDef)(uint8_t u8Column, uint8_t u8Row);

LCD1602_nBUSY   LCD1602_enReadCommand(uint8_t* pu8Column,uint8_t* pu8Row);

LCD1602_nBUSY   LCD1602_enWait(void);
LCD1602_nSTATUS LCD1602_enAdreesScreenLimit(uint8_t* pu8Column, uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602_enAdreesScreenLimitSection(uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);

LCD1602_nBUSY   LCD1602_enReadBusy(void);

LCD1602_nSTATUS LCD1602_enGetAddress(uint8_t* pu8Column,uint8_t* pu8Row);
LCD1602_nSTATUS LCD1602_enSetAddress(uint8_t u8Column, uint8_t u8Row);

LCD1602_nSTATUS LCD1602_enWriteData(uint8_t u8Data);
LCD1602_nSTATUS LCD1602_enWriteChar(char cData);
LCD1602_nSTATUS LCD1602_enWriteCommand(LCD1602_nCommands enCommand);

LCD1602_nSTATUS LCD1602_enReadData(char* pcData);
LCD1602_nSTATUS LCD1602_enReadChar(char* pcData,uint8_t u8Column, uint8_t u8Row);

void LCD1602_vResetColumn(uint8_t* pu8Column,uint8_t u8WidthMin);
void LCD1602_vResetRow(uint8_t* pu8Row,uint8_t u8HeightMin);
void LCD1602_vAddRow(uint8_t* pu8Row,uint8_t u8HeightMin,uint8_t u8HeightMax);
void LCD1602_vBackspace(uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin, uint8_t u8HeightMin,uint8_t u8HeightMax);

LCD1602_nSTATUS LCD1602_enCheckLimits(uint8_t* pu8WidthMin,uint8_t* pu8WidthMax, uint8_t* pu8HeightMin,uint8_t* pu8HeightMax);


LCD1602_nSTATUS LCD1602_enAdreesLimitSection(LCD1602_SET_ADDRESS_TypeDef penFunctionSetAddress, uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax);
const char LCD1602_pcSpecialChar[8][8]= /*ḞỲḂ?\ẀṀñ*/
{
 {2,5,2,0u,0u,0u,0u,0}, /* Ḟ*/
 {0u,0u,0u,0u,0xF,1,0u,0}, /* Ỳ*/
 {4,0u,0u,4,4,4,4,0},/* Ḃ*/
 {4,0u,4,8,0x10u,0x11,0xE,0}, /*ṡ*/
 {0u,0x10u,8,4,2,1,0u,0},/* diagonal invertida*/
 {0xA,0u,0u,0u,0u,0u,0u,0}, /*Ẁ*/
 {0u,2,4,8,0u,0u,0u,0},/*Ṁ*/
 {0xA,0x05,0u,0x16,0x19,0x11,0x11,0}/*ñ*/
/* {0xE,0x1B,0x11,0x11,0x13,0x17,0x1F,0x1F},//simbolo bateria*/
};

char LCD1602_pcBuffer[LCD1602_COLUMN_MAX*LCD1602_ROW_MAX+1u]       ={" INDEVICE TIVAC   LCD1602 SW:   "};

char LCD1602_pcBufferClear[LCD1602_COLUMN_MAX*LCD1602_ROW_MAX+1u]  ={"                                "};

/*ToDO Change SYSTICK delays for a TIMER delay*/
LCD1602_nSTATUS LCD1602__enInit(void)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint32_t u32WriteSpecialChar=0u;

    LCD1602__vInitGPIO();

    LCD1602__vDelay(15000.0f);/*15 ms*/

    /*Wirte 0x3x to LCD*/
    LCD1602__vWritePin8Bit(0x30u,LCD1602_enCOMMAND);
    LCD1602__vDelay(4100.0f);/*4.1 ms*/

    /*Wirte 0x3x to LCD*/
    LCD1602__vWritePin8Bit(0x30u,LCD1602_enCOMMAND);
    LCD1602__vDelay(100000.0f);/*100 ms*/

    /*Wirte 0x3x to LCD*/
    LCD1602__vWritePin8Bit(0x30u,LCD1602_enCOMMAND);
    LCD1602__vDelay(40.0f);/*40 us*/

    /*Write 0x2x to LCD in order to configure as 4 bits*/
    LCD1602__vWritePin8Bit(0x20u,LCD1602_enCOMMAND);
    LCD1602__vDelay(40.0f);/*40 us*/


    /*M8BIT o M4BIT,M2LINE o M1LINE, M5_8_Font o M5_11_Font */
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enM4BIT|LCD1602_enM2LINE|LCD1602_enM5_8_Font));
    if(LCD1602_enSTATUS_OK==enStatus)
    {
        /*ONDisp o OFFDisp, ONCursor o OFFCursor,ONBlink o OFFBLink*/
        enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enONDisp|LCD1602_enOFFCursor|LCD1602_enOFFBlink) );
        if(LCD1602_enSTATUS_OK==enStatus)
        {
            enStatus=LCD1602__enClearScreenDirect();
            if(LCD1602_enSTATUS_OK==enStatus)
            {
                /*IAdd o DAdd*/
                enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enIncAdd));
                if(LCD1602_enSTATUS_OK==enStatus)
                {
                    for(u32WriteSpecialChar=0u;u32WriteSpecialChar<8u;u32WriteSpecialChar++)
                    {
                        enStatus= LCD1602__enWriteGCRam((const char*)&LCD1602_pcSpecialChar[u32WriteSpecialChar][0u],(uint8_t) u32WriteSpecialChar);
                        if(LCD1602_enSTATUS_ERROR==enStatus)
                        {
                            break;
                        }
                    }
                    if(LCD1602_enSTATUS_OK==enStatus)
                    {
                        enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enHOME));/*Manda cursor a home*/
                        LCD1602__vDelay(1640.0f);
                    }
                }
            }
        }
    }

    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    return enStatus;
}


/*Intrinsics for LCD1602*/


LCD1602_nSTATUS LCD1602_enWriteData(uint8_t u8Data)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    enBusyBit= LCD1602_enWait();
    if(LCD1602_enOK == enBusyBit)
    {
        LCD1602__vWrite(u8Data,LCD1602_enDATA);
        enStatus =LCD1602_enSTATUS_OK;
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enWriteCommand(LCD1602_nCommands enCommand)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint8_t u8Command = (uint8_t)enCommand;
    enBusyBit= LCD1602_enWait();
    if(LCD1602_enOK == enBusyBit)
    {
        LCD1602__vWrite(u8Command,LCD1602_enCOMMAND);

        enStatus =LCD1602_enSTATUS_OK;
    }
    return enStatus;
}


LCD1602_nSTATUS LCD1602_enWriteChar(char cData)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    /*°¬¡?\¨´ñ*/
    switch((uint32_t)cData)
    {
    /*Character specials*/
    case 17u:
        cData=(char)0;
        break;
    case 18u:
        cData=(char)1;
        break;
    case 19u:
        cData=(char)2;
        break;
    case 20u:
        cData=(char)3;
        break;
    case 21u:
        cData=(char)4;
        break;
    case 22u:
        cData=(char)5;
        break;
    case 23u:
        cData=(char)6;
        break;
    case 24u:
    case 25u:
        cData=(char)7;
        break;

    default:
        break;
    }
    enStatus= LCD1602_enWriteData((uint8_t)cData);
    return enStatus;
}


LCD1602_nSTATUS LCD1602_enReadData(char* pcData)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    if(0!=pcData)
    {
        enBusyBit= LCD1602_enWait();
        if(LCD1602_enOK == enBusyBit)
        {
            *pcData=LCD1602__u8Read(LCD1602_enDATA);
            enStatus =LCD1602_enSTATUS_OK;
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enReadChar(char* pcData,uint8_t u8Column, uint8_t u8Row)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    if((uint32_t)0!= (uint32_t)pcData)
    {
        enStatus=LCD1602_enSetAddress(u8Column,u8Row);
        if(LCD1602_enSTATUS_OK == enStatus)
        {
            enStatus= LCD1602_enReadData((char*)pcData);
            /*°¬¡?\¨´ñ*/
            /*Character specials*/
       /*     switch(*pcData)
            {
            case 0:
                *pcData=(char)'°';
                break;
            case 1:
                *pcData=(char)'¬';
                break;
            case 2:
                *pcData=(char)'¡';
                break;
            case 3:
                *pcData=(char)'?';
                break;
            case 4:
                *pcData=(char)'\\';
                break;
            case 5:
                *pcData=(char)'¨';
                break;
            case 6:
                *pcData=(char)'´';
                break;
            case 7:
                *pcData=(char)'ñ';
                break;

            default:
                break;
            }
            */
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enGetAddress(uint8_t* pu8Column,uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8DataRead=0u;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row))
    {
        u8DataRead=LCD1602__u8Read(LCD1602_enCOMMAND);

        if(GPIO_enPIN6 & u8DataRead)
        {
            *pu8Row=(uint8_t)(LCD1602_ROW_MAX-1u);
        }
        else
        {
            *pu8Row=(uint8_t)(LCD1602_ROW_MIN-1u);
        }

        *pu8Column=u8DataRead&(uint8_t)(LCD1602_COLUMN_MAX-1u);
        enStatus= LCD1602_enSTATUS_OK;
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enSetAddress(uint8_t u8Column, uint8_t u8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Address=0x80;
    u8Column&= (LCD1602_COLUMN_MAX-1u);
    u8Address|=u8Column;
    u8Address|=(uint8_t)((u8Row&(uint8_t) (LCD1602_ROW_MAX-1u))<<6u);
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)u8Address);
    return enStatus;
}

LCD1602_nBUSY   LCD1602_enReadCommand(uint8_t* pu8Column,uint8_t* pu8Row)
{

    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint8_t u8DataRead=0u;
    if(((uint32_t)0!=(uint32_t)pu8Column)&&((uint32_t)0!=(uint32_t)pu8Row))
    {
        *pu8Column=0u;
        *pu8Row=0u;
        u8DataRead=LCD1602__u8Read(LCD1602_enCOMMAND);

        if(0u==(GPIO_enPIN7 & u8DataRead))
        {
            enBusyBit=LCD1602_enOK;
        }

        if(GPIO_enPIN6 & u8DataRead)
        {
            *pu8Row=1u;
        }

        *pu8Column=u8DataRead&(uint8_t)(LCD1602_COLUMN_MAX-1u);
    }
    return enBusyBit;
}

LCD1602_nBUSY   LCD1602_enReadBusy(void)
{

    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint8_t u8DataRead=0u;
    u8DataRead=LCD1602__u8Read(LCD1602_enCOMMAND);

    if(0u==((uint8_t)GPIO_enPIN7 & u8DataRead))
    {
        enBusyBit=LCD1602_enOK;
    }

    return enBusyBit;
}


LCD1602_nBUSY LCD1602_enWait(void)
{

    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint32_t u32TimeOut=40;

    do
    {
        enBusyBit=LCD1602_enReadBusy();
        u32TimeOut--;
    }while((LCD1602_enBUSY==enBusyBit)&&(0u!=u32TimeOut));

    return enBusyBit;
}



void LCD1602_vResetColumn(uint8_t* pu8Column,uint8_t u8WidthMin)
{
    if((uint32_t)0 != (uint32_t)pu8Column)
    {
        (*pu8Column)=u8WidthMin;
    }
}

void LCD1602_vResetRow(uint8_t* pu8Row,uint8_t u8HeightMin)
{
    if((uint32_t)0 != (uint32_t)pu8Row)
    {
        (*pu8Row)=u8HeightMin;
    }
}

void LCD1602_vAddRow(uint8_t* pu8Row,uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    if((uint32_t)0 != (uint32_t)pu8Row)
    {
        (*pu8Row)++;
        if(*pu8Row>(u8HeightMax))
        {
            (*pu8Row)=u8HeightMin;
        }
    }

}

void LCD1602_vBackspace(uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    if(((uint32_t)0 != (uint32_t)pu8Row) && ((uint32_t)0 != (uint32_t)pu8Column))
    {
        if(((*pu8Column)!=u8WidthMin) || ((*pu8Row)!=u8HeightMin))
        {
            if(((*pu8Column)!=u8WidthMin)) /*si la u8Column encuentra entre 1 y 15 puede disminuir uno*/
            {
                (*pu8Column)--;
            }
            else
            {
                if(((*pu8Row)!=u8HeightMin)) /*si la u8Column es 0 entonces checa si existen u8Rows que disminuir*/
                {
                    (*pu8Column)=u8HeightMax;
                    (*pu8Row)--;
                }
            }
        }
    }
}

LCD1602_nSTATUS LCD1602_enCheckLimits(uint8_t* pu8WidthMin,uint8_t* pu8WidthMax, uint8_t* pu8HeightMin,uint8_t* pu8HeightMax)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Aux=0u;
    if((pu8WidthMin!=0u) && (pu8WidthMax!=0u) && (pu8HeightMin!=0u) && (pu8HeightMax!=0u))
    {
        if((*pu8WidthMin<(LCD1602_COLUMN_MAX)) && (*pu8WidthMax<(LCD1602_COLUMN_MAX)) && (*pu8HeightMin<(LCD1602_ROW_MAX)) && (*pu8HeightMax<(LCD1602_ROW_MAX)))
        {
            if(*pu8WidthMin>*pu8WidthMax)
            {
                u8Aux=*pu8WidthMin;
                *pu8WidthMin=*pu8WidthMax;
                *pu8WidthMax=u8Aux;
            }

            if(*pu8HeightMin>*pu8HeightMax)
            {
                u8Aux=*pu8HeightMin;
                *pu8HeightMin=*pu8HeightMax;
                *pu8HeightMax=u8Aux;
            }
            enStatus=LCD1602_enSTATUS_OK;
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enAdreesLimitSection(LCD1602_SET_ADDRESS_TypeDef penFunctionSetAddress, uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row))
    {
        (*pu8Column)++;
        enStatus= LCD1602_enSTATUS_OK;
        if((*pu8Column)>u8WidthMax) /*si la columna es 0 indica que empieza una nueva fila*/
        {
            (*pu8Column)=u8WidthMin;
            (*pu8Row)++;/*invierte el valor e fila para que se reinciie*/
            if((*pu8Row)>(u8HeightMax))
            {
                (*pu8Row)=u8HeightMin;
            }
            if(0!=penFunctionSetAddress)
            {
                enStatus= penFunctionSetAddress(*pu8Column,*pu8Row);/*pone el cursor en 0u,x*/
            }
        }
    }
    return enStatus;
}






LCD1602_nSTATUS LCD1602__enWriteGCRam(const char* pcChar, uint8_t u8Address)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Iter=0u;
    if((uint32_t)0 != (uint32_t)pcChar)
    {
        if( u8Address<=7u) /*solo tiene espacio para guardar 8 caracteres*/
        {
            enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)((uint8_t)LCD1602_enGCRAM+(uint8_t)(u8Address<<3u)));/* 01xx xddd x=caracter d=posicion*/
            if(LCD1602_enSTATUS_OK == enStatus)
            {
                while(u8Iter<8u)
                {
                    enStatus=LCD1602_enWriteData(pcChar[u8Iter]);
                    u8Iter++;
                    if(LCD1602_enSTATUS_ERROR == enStatus)
                    {
                        break;
                    }
                }

            }
        }
    }
    return enStatus;
}





/* Functions for READ and WRITE into the BUFFER*/

LCD1602_nSTATUS LCD1602__enClearBufferSection(char* pcBuffer,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Column=u8WidthMin;
    uint8_t u8Row=u8HeightMin;
    char* pcBufferAux=0;
    enStatus=LCD1602_enCheckLimits(&u8WidthMin,&u8WidthMax, &u8HeightMin,&u8HeightMax);
    if(LCD1602_enSTATUS_OK == enStatus)
    {
        pcBufferAux=pcBuffer;
        for(u8Row=u8HeightMin; u8Row<=u8HeightMax; u8Row++)
        {
            pcBufferAux=pcBuffer+(LCD1602_COLUMN_MAX*u8Row);
            for(u8Column=u8WidthMin; u8Column<=u8WidthMax; u8Column++)
            {
                *(pcBufferAux+u8Column)=' ';
            }
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enClearBufferSectionDirect(uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enClearBufferSection(LCD1602_pcBuffer,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enClearBuffer(char* pcBuffer)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enClearBufferSection(pcBuffer,LCD1602_COLUMN_MIN-1u,LCD1602_COLUMN_MAX-1u,LCD1602_ROW_MIN-1u,LCD1602_ROW_MAX-1u);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enClearBufferDirect(void)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enClearBufferSectionDirect(LCD1602_COLUMN_MIN-1u,LCD1602_COLUMN_MAX-1u,LCD1602_ROW_MIN-1u,LCD1602_ROW_MAX-1u);
    return enStatus;
}










LCD1602_nSTATUS LCD1602_enAdreesBufferLimitSection(uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602_enAdreesLimitSection((LCD1602_SET_ADDRESS_TypeDef)0u,pu8Column,pu8Row,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enAdreesBufferLimit(uint8_t* pu8Column, uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602_enAdreesBufferLimitSection(pu8Column, pu8Row,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
    return enStatus;
}









LCD1602_nSTATUS LCD1602__enWriteBuffer(char cData, char* pcBuffer, const uint8_t* pu8Column, const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Row=0u;
    uint8_t u8Column=0u;
    uint32_t u32Index=0u;

    if((0u!=*pu8Column)&&(0u!=*pu8Row) && (0u!=pcBuffer))
    {
        if((*pu8Column<(LCD1602_COLUMN_MAX)) && (*pu8Row<(LCD1602_ROW_MAX)))
        {
            u8Row=(*pu8Row);
            u8Column=(*pu8Column);
            u32Index=(LCD1602_COLUMN_MAX*(uint32_t)u8Row)+(uint32_t)u8Column;
            pcBuffer[u32Index]=cData;
            enStatus=LCD1602_enSTATUS_OK;
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteBufferDirect(char cData, const uint8_t* pu8Column,const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteBuffer(cData,LCD1602_pcBuffer,pu8Column,pu8Row);
    return enStatus;
}







LCD1602_nSTATUS LCD1602__enReadBuffer(char* pcData,const char* pcBuffer, const uint8_t* pu8Column, const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8AuxValue=0u;
    uint8_t u8Row=0u;
    uint8_t u8Column=0u;
    uint32_t u32Index=0u;
    if((0u!=*pu8Column)&&(0u!=*pu8Row) && (0u!=pcBuffer)&& (0!=pcData))
    {
        if((*pu8Column<(LCD1602_COLUMN_MAX)) && (*pu8Row<(LCD1602_ROW_MAX)))
        {
            u8Row=(*pu8Row);
            u8Column=(*pu8Column);
            u32Index=(LCD1602_COLUMN_MAX*(uint32_t)u8Row)+(uint32_t)u8Column;
            u8AuxValue=(uint8_t)pcBuffer[u32Index];
            *pcData= (uint8_t)u8AuxValue;
            enStatus=LCD1602_enSTATUS_OK;
        }
    }
    return enStatus;
}


LCD1602_nSTATUS LCD1602__enReadBufferDirect(char* pcData,const uint8_t* pu8Column,const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enReadBuffer(pcData,LCD1602_pcBuffer,pu8Column,pu8Row);
    return enStatus;
}










LCD1602_nSTATUS LCD1602__enWriteStringBufferSection_Secure(char* pcBuffer, const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint32_t u32Index=0u;
    uint8_t u8Column=0u;
    uint8_t u8Row=0u;

    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row) && ((uint32_t)0!=(uint32_t)pcString) && ((uint32_t)0!=(uint32_t)pu8Count))
    {
        enStatus=LCD1602_enCheckLimits(&u8WidthMin,&u8WidthMax, &u8HeightMin,&u8HeightMax);
        if(LCD1602_enSTATUS_OK == enStatus)
        {
            if(((*pu8Column)<=u8WidthMax) && ((*pu8Row)<=u8HeightMax) && ((*pu8Column)>=u8WidthMin) && ((*pu8Row)>=u8HeightMin))
            {
                *pu8Count=0u;
                while(((char)0u!=*pcString) && (u8MaxCount>(*pu8Count)))
                {
                    u8Column=(*pu8Column);
                    u8Row = (*pu8Row);
                    u32Index=LCD1602_COLUMN_MAX;
                    u32Index*=(uint32_t)u8Row;
                    u32Index+=(uint32_t)u8Column;
                    pcBuffer[u32Index]=*pcString;
                    pcString++;/*el puntero apunta al siguiente caracter*/
                    (*pu8Count)++;/*suma 1 al count total de caracter enviados a la LCD*/
                    enStatus=LCD1602_enAdreesBufferLimitSection(pu8Column, pu8Row,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
                    if(LCD1602_enSTATUS_ERROR == enStatus)
                    {
                        break;
                    }
                }
            }
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringBufferSectionDirect_Secure(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringBufferSection_Secure((char*)LCD1602_pcBuffer,pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,u8MaxCount);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringBufferSection(char* pcBuffer, const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringBufferSection_Secure(pcBuffer,pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,LCD1602_MAX_COUNT);
        return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringBufferSectionDirect(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringBufferSectionDirect_Secure(pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,LCD1602_MAX_COUNT);
        return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringBuffer(char* pcBuffer,const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringBufferSection_Secure(pcBuffer,pcString,pu8Column,pu8Row,pu8Count,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u),LCD1602_MAX_COUNT);
        return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringBufferDirect(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringBuffer((char*)LCD1602_pcBuffer,pcString,pu8Column,pu8Row,pu8Count);
        return enStatus;
}




/*Functions for READ and WRITE in the SCREEN*/

LCD1602_nSTATUS LCD1602__enReloadScreenSection(char* pcBuffer,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Column=u8WidthMin;
    uint8_t u8Row=u8HeightMin;
    char cReg=0;
    char* pcBufferAux=0;

    enStatus=LCD1602_enCheckLimits(&u8WidthMin,&u8WidthMax, &u8HeightMin,&u8HeightMax);
    if(LCD1602_enSTATUS_OK == enStatus)
    {
        for(u8Row=u8HeightMin; u8Row<=u8HeightMax; u8Row++)
        {
            enStatus=LCD1602_enSetAddress(u8WidthMin,u8Row);
            if(LCD1602_enSTATUS_OK == enStatus)
            {
                pcBufferAux=((char*)pcBuffer+(LCD1602_COLUMN_MAX*u8Row));
                for(u8Column=u8WidthMin; u8Column<=u8WidthMax; u8Column++)
                {
                    cReg=*((char*)pcBufferAux+u8Column);
                    enStatus=LCD1602_enWriteChar(cReg);
                    if(LCD1602_enSTATUS_ERROR == enStatus)
                    {
                        break;
                    }
                }
            }
            if(LCD1602_enSTATUS_ERROR == enStatus)
            {
                break;
            }
        }
        if(LCD1602_enSTATUS_OK == enStatus)
        {
            enStatus=LCD1602_enSetAddress(u8WidthMin,u8HeightMin);
        }
        else
        {
            LCD1602_enSetAddress(u8WidthMin,u8HeightMin);
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enReloadScreenSectionDirect(uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enReloadScreenSection(LCD1602_pcBuffer,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enReloadScreen(char* pcBuffer)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enReloadScreenSection(pcBuffer,LCD1602_COLUMN_MIN-1u,LCD1602_COLUMN_MAX-1u,LCD1602_ROW_MIN-1u,LCD1602_ROW_MAX-1u);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enReloadScreenDirect(void)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enReloadScreenSection(LCD1602_pcBuffer,LCD1602_COLUMN_MIN-1u,LCD1602_COLUMN_MAX-1u,LCD1602_ROW_MIN-1u,LCD1602_ROW_MAX-1u);
    return enStatus;
}








LCD1602_nSTATUS LCD1602__enClearScreenSection(char* pcBuffer,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enReloadScreenSection(pcBuffer,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enClearScreenSectionDirect(uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus= LCD1602__enClearScreenSection(LCD1602_pcBufferClear, u8WidthMin, u8WidthMax, u8HeightMin, u8HeightMax);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enClearScreen(const char* pcBuffer)
{
    (void)pcBuffer;
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enCLEAR));/*limpia la pantalla*/
    LCD1602__vDelay(1640.0f);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enClearScreenDirect(void)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602_enWriteCommand((LCD1602_nCommands)(LCD1602_enCLEAR));/*limpia la pantalla*/
    LCD1602__vDelay(1640.0f);
    return enStatus;
}









LCD1602_nSTATUS LCD1602_enAdreesScreenLimitSection(uint8_t* pu8Column, uint8_t* pu8Row,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_OK;
    enStatus=LCD1602_enAdreesLimitSection((LCD1602_SET_ADDRESS_TypeDef)&LCD1602_enSetAddress,pu8Column,pu8Row,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enAdreesScreenLimit(uint8_t* pu8Column, uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_OK;
    enStatus=LCD1602_enAdreesBufferLimitSection(pu8Column, pu8Row,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
    return enStatus;
}









LCD1602_nSTATUS LCD1602__enWriteScreen(char cData, const char* pcBuffer,const  uint8_t* pu8Column,const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    (void)pcBuffer;

    if((0u!=*pu8Column)&&(0u!=*pu8Row))
    {
        if((*pu8Column<(LCD1602_COLUMN_MAX)) && (*pu8Row<(LCD1602_ROW_MAX)))
        {
            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
            if(LCD1602_enSTATUS_OK ==enStatus)
            {
                enStatus=LCD1602_enWriteChar(cData);
            }
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteScreenDirect(char cData,const  uint8_t* pu8Column,const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602__enWriteScreen(cData,(const char*)0u,pu8Column,pu8Row);
    return enStatus;
}










LCD1602_nSTATUS LCD1602__enReadScreen(char* pcData, const char* pcBuffer, const uint8_t* pu8Column,const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    (void)pcBuffer;

    if((0u!=*pu8Column)&&(0u!=*pu8Row))
    {
        if((*pu8Column<(LCD1602_COLUMN_MAX)) && (*pu8Row<(LCD1602_ROW_MAX)))
        {
            enStatus=LCD1602_enReadChar((char*) pcData,*pu8Column,*pu8Row);
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enReadScreenDirect(char* pcData, const uint8_t* pu8Column,const uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602__enReadScreen(pcData,(const char*)0u,pu8Column,pu8Row);
    return enStatus;
}










LCD1602_nSTATUS LCD1602__enWriteStringScreenSection_Secure(const char* pcBuffer,const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    (void)pcBuffer;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row) && ((uint32_t)0!=(uint32_t)pcString) && ((uint32_t)0!=(uint32_t)pu8Count))
    {
        enStatus=LCD1602_enCheckLimits(&u8WidthMin,&u8WidthMax, &u8HeightMin,&u8HeightMax);
        if(LCD1602_enSTATUS_OK == enStatus)
        {
            if(((*pu8Column)<=u8WidthMax) && ((*pu8Row)<=u8HeightMax) && ((*pu8Column)>=u8WidthMin) && ((*pu8Row)>=u8HeightMin))
            {
                enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                if(LCD1602_enSTATUS_OK ==enStatus)
                {
                    *pu8Count=0u;
                    while(((char)0u!=*pcString) && (u8MaxCount>(*pu8Count)))
                    {
                        enStatus=LCD1602_enWriteChar((uint8_t)*pcString);
                        pcString++;/*el puntero apunta al siguiente caracter*/
                        (*pu8Count)++;/*suma 1 al count total de caracter enviados a la LCD*/
                        if(LCD1602_enSTATUS_ERROR == enStatus)
                        {
                            break;
                        }
                        enStatus=LCD1602_enAdreesScreenLimitSection(pu8Column, pu8Row,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
                        if(LCD1602_enSTATUS_ERROR == enStatus)
                        {
                            break;
                        }
                    }
                }
            }
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringScreenSectionDirect_Secure(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringScreenSection_Secure((char*)0u,pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,u8MaxCount);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringScreenSection(const char* pcBuffer, const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringScreenSection_Secure(pcBuffer,pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,LCD1602_MAX_COUNT);
        return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringScreenSectionDirect(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringScreenSectionDirect_Secure(pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,LCD1602_MAX_COUNT);
        return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringScreen(const char* pcBuffer, const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringScreenSection_Secure(pcBuffer,pcString,pu8Column,pu8Row,pu8Count,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u),LCD1602_MAX_COUNT);
        return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteStringScreenDirect(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enWriteStringScreen((const char*)0u,pcString,pu8Column,pu8Row,pu8Count);
        return enStatus;
}







LCD1602_nSTATUS LCD1602__enReadString(char* pcString, uint8_t u8Column,uint8_t u8Row,uint8_t u8Count)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8CurrentColumn=0u;
    uint8_t u8CurrentRow=0u;
    if( (uint32_t)0 != (uint32_t)pcString)
    {
        if(u8Column<(LCD1602_COLUMN_MAX))
        {
            if(u8Row<(LCD1602_ROW_MAX))
            {
                enStatus=LCD1602_enGetAddress(&u8CurrentColumn,&u8CurrentRow);
                if(LCD1602_enSTATUS_OK ==enStatus)
                {
                    enStatus=LCD1602_enSetAddress(u8Column,u8Row);
                    if(LCD1602_enSTATUS_OK==enStatus)
                    {
                        while(0u!=u8Count)
                        {
                            LCD1602_enReadChar((char*)pcString,u8Column,u8Row);
                            enStatus=LCD1602_enAdreesScreenLimit(&u8Column, &u8Row);
                            pcString++;
                            u8Count--;
                            if(LCD1602_enSTATUS_ERROR==enStatus)
                            {
                                break;
                            }
                        }
                        *pcString=0u;
                        if(LCD1602_enSTATUS_OK==enStatus)
                        {
                            enStatus=LCD1602_enSetAddress(u8CurrentColumn,u8CurrentRow);
                        }
                    }
                }
            }
        }
    }
    return enStatus;
}


#if 0 /*Deactivated*/
LCD1602_nSTATUS LCD1602__enPrintSection_Secure(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,uint8_t u8MaxCount, LCD1602_nFINISH *penFinish)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Auxiliar=0u;
    int8_t *ps8Column=0;
    int8_t *ps8Row=0;
    int8_t s8WidthMin=0;
    int8_t s8HeightMin=0;
    char* pcStringAux=0;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row) && ((uint32_t)0!=(uint32_t)pcString) && ((uint32_t)0!=(uint32_t)pu8Count)&& ((uint32_t)0!=(uint32_t)penFinish))
    {
        *penFinish=LCD1602_enCONITNUE;
        pcStringAux=(char*)pcString;
        if( (u8WidthMin<(LCD1602_COLUMN_MAX)) && (u8WidthMax<(LCD1602_COLUMN_MAX)) && (u8HeightMin<(LCD1602_ROW_MAX)) && (u8HeightMax<(LCD1602_ROW_MAX)) )
        {
            if(u8WidthMax<u8WidthMin)
            {
                u8Auxiliar=u8WidthMin;
                u8WidthMin=u8WidthMax;
                u8WidthMax=u8Auxiliar;
            }

            if(u8HeightMax<u8HeightMin)
            {
                u8Auxiliar=u8HeightMin;
                u8HeightMin=u8HeightMax;
                u8HeightMax=u8Auxiliar;
            }
            ps8Column=(int8_t*)pu8Column;
            ps8Row=(int8_t*)pu8Row;
            s8WidthMin=(int8_t)u8WidthMin;
            s8HeightMin=(int8_t)u8HeightMin;
            if(((uint8_t)(*pu8Column)<=(uint8_t)u8WidthMax) && (*ps8Column>=s8WidthMin) && ((uint8_t)(*pu8Row)<=(uint8_t)u8HeightMax) && (*ps8Row>=s8HeightMin))
            {
                enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                if(LCD1602_enSTATUS_OK ==enStatus)
                {
                    *pu8Count=0u;
                    while((0u!=*pcStringAux) && (u8MaxCount>(*pu8Count)))
                    {
                        switch(*pcStringAux)
                        {
                        case '\n':
                            if((u8WidthMin !=*pu8Column) || (0u==*pu8Count))
                            {
                                LCD1602_vAddRow(pu8Row,u8HeightMin,u8HeightMax);
                            }
                            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                            if(LCD1602_enSTATUS_ERROR ==enStatus)
                            {
                                *penFinish=LCD1602_enFINISH;
                            }
                            break;
                        case '\r':
                            LCD1602_vResetColumn(pu8Column,u8WidthMin);
                            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                            if(LCD1602_enSTATUS_ERROR ==enStatus)
                            {
                                *penFinish=LCD1602_enFINISH;
                            }
                            break;
                        case '\t':
                            if((*pu8Column)<(u8WidthMax-LCD1602_TAB_SIZE))
                            {
                                (*pu8Column)+=LCD1602_TAB_SIZE;
                            }
                            else
                            {
                                LCD1602_vResetColumn(pu8Column,u8WidthMin);
                                LCD1602_vAddRow(pu8Row,u8HeightMin,u8HeightMax);
                            }
                            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                            if(LCD1602_enSTATUS_ERROR ==enStatus)
                            {
                                *penFinish=LCD1602_enFINISH;
                            }
                            break;
                        case '\b':
                            LCD1602_vBackspace(pu8Column,pu8Row,u8WidthMin,u8HeightMin,u8HeightMax);
                            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                            if(LCD1602_enSTATUS_ERROR ==enStatus)
                            {
                                *penFinish=LCD1602_enFINISH;
                            }
                            break;
                        case '\a':
                            LCD1602_vBackspace(pu8Column,pu8Row,u8WidthMin,u8HeightMin,u8HeightMax);
                            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                            *penFinish=LCD1602_enFINISH;
                            if(LCD1602_enSTATUS_OK ==enStatus)
                            {
                                enStatus=LCD1602_enWriteChar(' ');
                                if(LCD1602_enSTATUS_OK ==enStatus)
                                {
                                    enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                                    if(LCD1602_enSTATUS_OK==enStatus)
                                    {
                                        *penFinish=LCD1602_enCONITNUE;
                                    }

                                }
                            }
                            break;
                        case (char)0x1B: /* 0x1b is a scape in ascci \e is violating MISRA 4.1*/
                            *penFinish=LCD1602_enFINISH;
                            break;
                        case '\f':
                            LCD1602_vResetColumn(pu8Column,u8WidthMin);
                            LCD1602_vResetRow(pu8Row,u8HeightMin);
                            enStatus=LCD1602__enClearScreenSection((uint8_t*) 0u,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
                            *penFinish=LCD1602_enFINISH;
                            if(LCD1602_enSTATUS_OK == enStatus)
                            {
                                enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                                if(LCD1602_enSTATUS_OK==enStatus)
                                {
                                    *penFinish=LCD1602_enCONITNUE;
                                }
                            }
                            break;
                        default:
                            enStatus=LCD1602_enWriteChar((uint8_t)*pcStringAux);
                            *penFinish=LCD1602_enFINISH;
                            if(LCD1602_enSTATUS_OK == enStatus)
                            {
                                enStatus=LCD1602_enAdreesScreenLimitSection(pu8Column, pu8Row,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax);
                                if(LCD1602_enSTATUS_OK == enStatus)
                                {
                                    *penFinish=LCD1602_enCONITNUE;
                                }
                            }
                            break;
                        }
                        pcStringAux++;/*el puntero apunta al siguiente caracter*/
                        (*pu8Count)++;/*suma 1 al count total de caracter enviados a la LCD*/
                        if(LCD1602_enFINISH == *penFinish)
                        {
                            break;
                        }
                    }
                }
            }
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enPrintSection(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax, LCD1602_nFINISH *penFinish)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enPrintSection_Secure(pcString,pu8Column,pu8Row,pu8Count,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,LCD1602_MAX_COUNT,penFinish);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enPrint_Secure(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8MaxCount, LCD1602_nFINISH *penFinish)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enPrintSection_Secure(pcString,pu8Column,pu8Row,pu8Count,0u,15u,0u,1u,u8MaxCount,penFinish);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enPrint(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count, LCD1602_nFINISH *penFinish)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    enStatus=LCD1602__enPrintSection_Secure(pcString,pu8Column,pu8Row,pu8Count,0u,15u,0u,1u,LCD1602_MAX_COUNT,penFinish);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enPrintfSection(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,uint8_t u8WidthMin,uint8_t u8WidthMax, uint8_t u8HeightMin,uint8_t u8HeightMax,...)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nFINISH enFinish=LCD1602_enCONITNUE;
    uint8_t u8Auxiliar=0u;
    uint8_t u8CounterAux=0u;
    va_list ap;
    int32_t s32ValueARGInteger=0;
    uint32_t u32ValueARGInteger=0u;
    int64_t s64ValueARGInteger=0;
    uint64_t u64ValueARGInteger=0u;
    char cValueARGChar=0;
    double fValueARGFloat=0;
    void*   vValueARGPointer=0;
    char cNumberConv[40]={0};
    char* pcStringAux=0;
    char* cNumberConversion=0;

    cNumberConversion=cNumberConv;
    va_start((va_list)ap, u8HeightMax);

    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row) && ((uint32_t)0!=(uint32_t)pcString) && ((uint32_t)0!=(uint32_t)pu8Count))
    {

        pcStringAux=(char*)pcString;
        if( (u8WidthMin<(LCD1602_COLUMN_MAX)) && (u8WidthMax<(LCD1602_COLUMN_MAX)) && (u8HeightMin<(LCD1602_ROW_MAX)) && (u8HeightMax<(LCD1602_ROW_MAX)))
        {
            if(u8WidthMax<u8WidthMin)
            {
                u8Auxiliar=u8WidthMin;
                u8WidthMin=u8WidthMax;
                u8WidthMax=u8Auxiliar;
            }

            if(u8HeightMax<u8HeightMin)
            {
                u8Auxiliar=u8HeightMin;
                u8HeightMin=u8HeightMax;
                u8HeightMax=u8Auxiliar;
            }

            *pu8Count=0u;
            while(0u!=*pcStringAux)
            {
                switch(*pcStringAux)
                {
                case '%':
                    pcStringAux++;
                    switch(*pcStringAux)
                    {
                    case 'd':
                    case 'i':
                        cNumberConversion=cNumberConv;
                        s32ValueARGInteger=(int32_t)va_arg(ap, int32_t);
                        CONV__u8Int2String((int64_t)s32ValueARGInteger,cNumberConversion);
                        break;
                    case 'u':
                        cNumberConversion=cNumberConv;
                        u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                        CONV__u8UInt2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                        break;
                    case 'x':
                        cNumberConversion=cNumberConv;
                        u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                        CONV__u8Hex2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                        break;
                    case 'X':
                        cNumberConversion=cNumberConv;
                        u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                        CONV__u8HEX2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                        break;
                    case 'o':
                        cNumberConversion=cNumberConv;
                        u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                        CONV__u8Oct2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                        break;
                    case 'p':
                        cNumberConversion=cNumberConv;
                        vValueARGPointer=(void*)va_arg(ap, void*);
                        CONV__u8Bin2String((uint64_t)vValueARGPointer,cNumberConversion);
                        break;
                    case 'F':
                    case 'f':
                        cNumberConversion=cNumberConv;
                        fValueARGFloat=(double)va_arg(ap, double);
                        CONV__u8Float2String((double)fValueARGFloat,0u,1u,2,3,cNumberConversion);
                        break;
                    case 'c':
                        cNumberConversion=cNumberConv;
                        cValueARGChar=(char)va_arg(ap, uint32_t);
                        cNumberConversion[0]=cValueARGChar;
                        cNumberConversion[1]=0u;
                        break;
                    case 's':
                        cNumberConversion=(char*)va_arg(ap,char*);

                        break;
                    case 'l':
                        pcStringAux++;
                        switch(*pcStringAux)
                        {
                        case 'f':
                            cNumberConversion=cNumberConv;
                            fValueARGFloat=(double)va_arg(ap, double);
                            CONV__u8Float2String((double)fValueARGFloat,0u,1u,2,5,cNumberConversion);
                            break;
                        case 'l':
                            pcStringAux++;
                            switch(*pcStringAux)
                            {
                            case 'd':
                            case 'i':
                                cNumberConversion=cNumberConv;
                                s64ValueARGInteger=(int64_t)va_arg(ap, int64_t);
                                CONV__u8Int2String((int64_t)s64ValueARGInteger,cNumberConversion);

                                break;
                            case 'u':
                                cNumberConversion=cNumberConv;
                                u64ValueARGInteger=(uint64_t)va_arg(ap, uint64_t);
                                CONV__u8UInt2String((uint64_t)u64ValueARGInteger,cNumberConversion);
                                break;
                            default:
                                cNumberConversion=cNumberConv;
                                pcStringAux-=3;/*1 for % other for 'l' other for 'l'*/
                                cNumberConversion[0]=*pcStringAux;
                                cNumberConversion[1]=0u;
                                break;
                            }

                            break;
                        case 'd':
                        case 'i':
                            cNumberConversion=cNumberConv;
                            s32ValueARGInteger=(int32_t)va_arg(ap, int32_t);
                            CONV__u8Int2String((int64_t)s32ValueARGInteger,cNumberConversion);

                            break;
                        case 'u':
                            cNumberConversion=cNumberConv;
                            u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                            CONV__u8UInt2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                            break;
                        default:
                            cNumberConversion=cNumberConv;
                            pcStringAux-=2;/*1 for % other for 'l'*/
                            cNumberConversion[0]=*pcStringAux;
                            cNumberConversion[1]=0u;
                            break;
                        }
                        break;
                    default:
                        cNumberConversion=cNumberConv;
                        pcStringAux--;
                        cNumberConversion[0]=*pcStringAux;
                        cNumberConversion[1]=0u;
                        break;
                    }
                    break;
                default:
                    cNumberConversion=cNumberConv;
                    cNumberConversion[0]=*pcStringAux;
                    cNumberConversion[1]=0u;
                    break;
                }
                enStatus=LCD1602__enPrintSection(cNumberConversion,pu8Column,pu8Row,&u8CounterAux,u8WidthMin,u8WidthMax,u8HeightMin,u8HeightMax,&enFinish);

                if(LCD1602_enSTATUS_OK == enStatus)
                {
                    *pu8Count+=(u8CounterAux);
                    pcStringAux++;/*el puntero apunta al siguiente caracter*/
                }
                if(LCD1602_enFINISH == enFinish)
                {
                    break;
                }
            }
        }
    }
    va_end(ap);
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enPrintf(const char* pcString,uint8_t* pu8Column, uint8_t* pu8Row, uint8_t* pu8Count,...)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nFINISH enFinish=LCD1602_enCONITNUE;
    uint8_t u8CounterAux=0u;
    va_list ap;
    int32_t s32ValueARGInteger=0;
    uint32_t u32ValueARGInteger=0;
    int64_t s64ValueARGInteger=0;
    uint64_t u64ValueARGInteger=0u;
    char cValueARGChar=0;
    double fValueARGFloat=0;
    void*   vValueARGPointer=0;
    char cNumberConv[30]= {0};
    char* cNumberConversion=0;

    cNumberConversion=cNumberConv;
    va_start(ap, pu8Count);

    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row) && ((uint32_t)0!=(uint32_t)pcString) && ((uint32_t)0!=(uint32_t)pu8Count))
    {
        (*pu8Column)+=(LCD1602_COLUMN_MIN-1u);
        (*pu8Row)+=(LCD1602_ROW_MIN-1u);
        if(((*pu8Column)<(LCD1602_COLUMN_MAX)) && ((*pu8Row)<(LCD1602_ROW_MAX)))
        {
            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
            if(LCD1602_enSTATUS_OK ==enStatus)
            {
                *pu8Count=0u;
                while(0u!=*pcString)
                {
                    switch(*pcString)
                    {
                    case '\n':
                        if(((LCD1602_COLUMN_MIN-1u) !=*pu8Column) || (0u==*pu8Count))
                        {
                            LCD1602_vAddRow(pu8Row,(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                        }
                        enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                        if(LCD1602_enSTATUS_ERROR ==enStatus)
                        {
                            enFinish=LCD1602_enFINISH;
                        }
                        break;
                    case '\r':
                        LCD1602_vResetColumn(pu8Column,(LCD1602_COLUMN_MIN-1u));
                        enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                        if(LCD1602_enSTATUS_ERROR ==enStatus)
                        {
                            enFinish=LCD1602_enFINISH;
                        }
                        break;
                    case '\t':
                        if((*pu8Column)<((LCD1602_COLUMN_MAX-1u)-LCD1602_TAB_SIZE))
                        {
                            (*pu8Column)+=LCD1602_TAB_SIZE;
                        }
                        else
                        {
                            LCD1602_vResetColumn(pu8Column,(LCD1602_COLUMN_MIN-1u));
                            LCD1602_vAddRow(pu8Row,(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                        }
                        enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                        if(LCD1602_enSTATUS_ERROR ==enStatus)
                        {
                            enFinish=LCD1602_enFINISH;
                        }
                        break;
                    case '\b':
                        LCD1602_vBackspace(pu8Column,pu8Row,(LCD1602_COLUMN_MIN-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                        enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                        if(LCD1602_enSTATUS_ERROR ==enStatus)
                        {
                            enFinish=LCD1602_enFINISH;
                        }
                        break;
                    case '\a':
                        LCD1602_vBackspace(pu8Column,pu8Row,(LCD1602_COLUMN_MIN-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                        enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                        enFinish=LCD1602_enFINISH;
                        if(LCD1602_enSTATUS_OK ==enStatus)
                        {
                            enStatus=LCD1602_enWriteChar(' ');
                            if(LCD1602_enSTATUS_OK ==enStatus)
                            {
                                enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                                if(LCD1602_enSTATUS_OK==enStatus)
                                {
                                    enFinish=LCD1602_enCONITNUE;
                                }

                            }
                        }
                        break;
                    case (char)0x1B:
                        enFinish=LCD1602_enFINISH;
                        break;
                    case '\f':
                        LCD1602_vResetColumn(pu8Column,(LCD1602_COLUMN_MIN-1u));
                        LCD1602_vResetRow(pu8Row,(LCD1602_ROW_MIN-1u));
                        enStatus=LCD1602__enClearScreenSection((uint8_t* )0u,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                        enFinish=LCD1602_enFINISH;
                        if(LCD1602_enSTATUS_OK == enStatus)
                        {
                            enStatus=LCD1602_enSetAddress(*pu8Column,*pu8Row);
                            if(LCD1602_enSTATUS_OK==enStatus)
                            {
                                enFinish=LCD1602_enCONITNUE;
                            }
                        }
                        break;
                    case '%':
                        pcString++;
                        switch(*pcString)
                        {
                        case 'd':
                        case 'i':
                            cNumberConversion=cNumberConv;
                            s32ValueARGInteger=(int32_t)va_arg(ap, int32_t);
                            CONV__u8Int2String((int64_t)s32ValueARGInteger,cNumberConversion);
                            break;
                        case 'u':
                            cNumberConversion=cNumberConv;
                            u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                            CONV__u8UInt2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                            break;
                        case 'x':
                            cNumberConversion=cNumberConv;
                            u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                            CONV__u8Hex2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                            break;
                        case 'X':
                            cNumberConversion=cNumberConv;
                            u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                            CONV__u8HEX2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                            break;
                        case 'o':
                            cNumberConversion=cNumberConv;
                            u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                            CONV__u8Oct2String((uint64_t)u32ValueARGInteger,cNumberConversion);
                            break;
                        case 'p':
                            cNumberConversion=cNumberConv;
                            vValueARGPointer=(void*)va_arg(ap, void*);
                            CONV__u8Bin2String((uint64_t)vValueARGPointer,cNumberConversion);
                            break;
                        case 'F':
                        case 'f':
                            cNumberConversion=cNumberConv;
                            fValueARGFloat=(double)va_arg(ap, double);
                            CONV__u8Float2String((double)fValueARGFloat,0u,1u,(int32_t)2,(int32_t)3,cNumberConversion);
                            break;
                        case 'c':
                            cNumberConversion=cNumberConv;
                            cValueARGChar=(char)va_arg(ap, uint32_t);
                            cNumberConversion[0]=cValueARGChar;
                            cNumberConversion[1]=0u;
                            break;
                        case 's':
                            cNumberConversion=(char*)va_arg(ap,char*);

                            break;
                        case 'l':
                            pcString++;
                            switch(*pcString)
                            {
                            case 'f':
                                cNumberConversion=cNumberConv;
                                fValueARGFloat=(double)va_arg(ap, double);
                                CONV__u8Float2String((double)fValueARGFloat,0u,1u,2,5,cNumberConversion);
                                break;
                            case 'l':
                                pcString++;
                                switch(*pcString)
                                {
                                case 'd':
                                case 'i':
                                    cNumberConversion=cNumberConv;
                                    s64ValueARGInteger=(int64_t)va_arg(ap, int64_t);
                                    CONV__u8Int2String((int64_t)s64ValueARGInteger,cNumberConversion);

                                    break;
                                case 'u':
                                    cNumberConversion=cNumberConv;
                                    u64ValueARGInteger=(uint64_t)va_arg(ap, uint64_t);
                                    CONV__u8UInt2String((uint64_t)u64ValueARGInteger,cNumberConversion);
                                    break;
                                default:
                                    cNumberConversion=cNumberConv;
                                    pcString-=3;/*1 for % other for 'l' other for 'l'*/
                                    cNumberConversion[0]=*pcString;
                                    cNumberConversion[1]=0u;
                                    break;
                                }

                                break;
                            case 'd':
                            case 'i':
                                cNumberConversion=cNumberConv;
                                s32ValueARGInteger=(int32_t)va_arg(ap, int32_t);
                                CONV__u8Int2String((int64_t)s32ValueARGInteger,cNumberConversion);

                                break;
                            case 'u':
                                cNumberConversion=cNumberConv;
                                u32ValueARGInteger=(uint32_t)va_arg(ap, uint32_t);
                                CONV__u8UInt2String((uint64_t)u32ValueARGInteger,(char*)cNumberConversion);
                                break;
                            default:
                                cNumberConversion=cNumberConv;
                                pcString-=2;/*1 for % other for 'l'*/
                                cNumberConversion[0]=*pcString;
                                cNumberConversion[1]=0u;
                                break;
                            }
                            break;
                        default:
                            cNumberConversion=cNumberConv;
                            pcString--;
                            cNumberConversion[0]=*pcString;
                            cNumberConversion[1]=0u;
                            break;
                        }
                        enStatus=LCD1602__enWriteStringScreenSection((char*)0u,cNumberConversion,pu8Column,pu8Row,&u8CounterAux,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                        enFinish=LCD1602_enFINISH;
                        if(LCD1602_enSTATUS_OK == enStatus)
                        {
                            enFinish=LCD1602_enCONITNUE;
                            *pu8Count+=(u8CounterAux-1u);
                        }
                        break;
                    default:
                        enStatus=LCD1602_enWriteChar((uint8_t)*pcString);
                        enFinish=LCD1602_enFINISH;
                        if(LCD1602_enSTATUS_OK == enStatus)
                        {
                            enStatus=LCD1602_enAdreesScreenLimitSection(pu8Column, pu8Row,(LCD1602_COLUMN_MIN-1u),(LCD1602_COLUMN_MAX-1u),(LCD1602_ROW_MIN-1u),(LCD1602_ROW_MAX-1u));
                            if(LCD1602_enSTATUS_OK == enStatus)
                            {
                                enFinish=LCD1602_enCONITNUE;
                            }
                        }
                        break;
                    }
                    pcString++;/*el puntero apunta al siguiente caracter*/
                    (*pu8Count)++;/*suma 1 al count total de caracter enviados a la LCD*/
                    if(LCD1602_enFINISH == enFinish)
                    {
                        break;
                    }
                }
            }
        }
    }
    va_end(ap);
    return enStatus;
}
#endif
/*End Of File*/
