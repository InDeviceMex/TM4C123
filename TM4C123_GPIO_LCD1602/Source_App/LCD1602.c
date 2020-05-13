/*
 * LCD1602.c
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */



#include <LCD1602.h>

void LCD1602_vPrepareWriteEnable(void);
void LCD1602_vPulseWriteEnable(void);

void LCD1602_vPrepareReadEnable(void);
void LCD1602_vPulseReadEnable(void);

void LCD1602_vSetCommandMode(void);
void LCD1602_vSetDataMode(void);
void LCD1602_vSetWriteMode(void);
void LCD1602_vSetReadMode(void);

void LCD1602_vWrite(uint8_t u8Data,LCD1602_nRS enMode);
uint8_t LCD1602_u8Read(LCD1602_nRS enMode);
LCD1602_nBUSY   LCD1602_enReadCommand(uint8_t* pu8Column,uint8_t* pu8Row);

LCD1602_nBUSY LCD1602_enWait(void);
LCD1602_nSTATUS LCD1602_enAdreesLimit(uint8_t* pu8Column, uint8_t* pu8Row);
LCD1602_nBUSY   LCD1602_enReadBusy(void);

const uint8_t LCD1602_u8SpecialChar[8][8]= //ḞỲḂ?\ẀṀñ
{
 {2,5,2,0,0,0,0,0}, // Ḟ
 {0,0,0,0,0xF,1,0,0}, // Ỳ
 {4,0,0,4,4,4,4,0},// Ḃ
 {4,0,4,8,0x10,0x11,0xE,0}, //ṡ
 {0,0x10,8,4,2,1,0,0},// diagonal invertida
 {0xA,0,0,0,0,0,0,0}, //Ẁ
 {0,2,4,8,0,0,0,0},//Ṁ
 {0xA,0x05,0,0x16,0x19,0x11,0x11,0}//ñ
// {0xE,0x1B,0x11,0x11,0x13,0x17,0x1F,0x1F},//simbolo bateria
};

/*ToDO Change SYSTICK delays for a TIMER delay*/
LCD1602_nSTATUS LCD1602__enInit(void)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_OK;
    uint32_t u32WriteSpecialChar=0;

    /*Initial State of PIN as output*/
    GPIO__vEnDigital(LCD1602_PORT_E,LCD1602_E);
    GPIO__vEnDigital(LCD1602_PORT_RS,LCD1602_RS);
    GPIO__vEnDigital(LCD1602_PORT_RW,LCD1602_RW);
    GPIO__vEnDigital(LCD1602_PORT_D4,LCD1602_D4);
    GPIO__vEnDigital(LCD1602_PORT_D5,LCD1602_D5);
    GPIO__vEnDigital(LCD1602_PORT_D6,LCD1602_D6);
    GPIO__vEnDigital(LCD1602_PORT_D7,LCD1602_D7);

    GPIO__vDisAnalog(LCD1602_PORT_E,LCD1602_E);
    GPIO__vDisAnalog(LCD1602_PORT_RS,LCD1602_RS);
    GPIO__vDisAnalog(LCD1602_PORT_RW,LCD1602_RW);
    GPIO__vDisAnalog(LCD1602_PORT_D4,LCD1602_D4);
    GPIO__vDisAnalog(LCD1602_PORT_D5,LCD1602_D5);
    GPIO__vDisAnalog(LCD1602_PORT_D6,LCD1602_D6);
    GPIO__vDisAnalog(LCD1602_PORT_D7,LCD1602_D7);

    GPIO__enSetConfig(LCD1602_PORT_E,LCD1602_E,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_RS,LCD1602_RS,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_RW,LCD1602_RW,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=0;
    GPIO_AHB_BLOCK[LCD1602_PORT_RW]->GPIODATA_MASK[LCD1602_RW]=0;
    GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;
    GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;
    GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;
    GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    SysTick__vDelayUs(15000);//15 ms

    LCD1602_vPrepareWriteEnable();
    //Wirte 0x3x to LCD
    GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    LCD1602_vPulseWriteEnable();
    SysTick__vDelayUs(41000);//4.1 ms

    //Wirte 0x3x to LCD
    LCD1602_vPrepareWriteEnable();
    LCD1602_vPulseWriteEnable();
    SysTick__vDelayUs(100000);//100 ms

    //Wirte 0x3x to LCD
    LCD1602_vPrepareWriteEnable();
    LCD1602_vPulseWriteEnable(); //manda un pulso en el pin E (Enable)
    SysTick__vDelayUs(40);//40 us

    //Write 0x2x to LCD in order to configure as 4 bits
    LCD1602_vPrepareWriteEnable();
    GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;
    LCD1602_vPulseWriteEnable(); //manda un pulso en el pin E (Enable)
    SysTick__vDelayUs(40);//40 us


    /*M8BIT o M4BIT,M2LINE o M1LINE, M5_8_Font o M5_11_Font */
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enM4BIT|LCD1602_enM2LINE|LCD1602_enM5_8_Font));
    if(LCD1602_enSTATUS_ERROR==enStatus)
    {
        return enStatus;
    }
    /*ONDisp o OFFDisp, ONCursor o OFFCursor,ONBlink o OFFBLink*/
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enONDisp|LCD1602_enOFFCursor|LCD1602_enOFFBlink) );
    if(LCD1602_enSTATUS_ERROR==enStatus)
    {
        return enStatus;
    }
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enCLEAR)); //limpia la pantalla
    SysTick__vDelayUs(1640);
    if(LCD1602_enSTATUS_ERROR==enStatus)
    {
        return enStatus;
    }

    /*IAdd o DAdd*/
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enIncAdd));
    if(LCD1602_enSTATUS_ERROR==enStatus)
    {
        return enStatus;
    }

    for(u32WriteSpecialChar=0;u32WriteSpecialChar<8;u32WriteSpecialChar++)
    {
        enStatus= LCD1602__enWriteGCRam((char*)&LCD1602_u8SpecialChar[u32WriteSpecialChar][0], u32WriteSpecialChar);
        if(LCD1602_enSTATUS_ERROR==enStatus)
            return enStatus;
    }


    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enHOME));//Manda cursor a home
    SysTick__vDelayUs(1640);
    if(LCD1602_enSTATUS_ERROR==enStatus)
    {
        return enStatus;
    }

    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)(LCD1602_enSRDisp) );
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteData(uint8_t u8Data)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    enBusyBit= LCD1602_enWait();
    if(LCD1602_enOK == enBusyBit)
    {
        LCD1602_vWrite(u8Data,LCD1602_enDATA);
        enStatus =LCD1602_enSTATUS_OK;
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteCommand(LCD1602_nCommands enCommand)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint8_t u8Command = (uint8_t)enCommand;
    enBusyBit= LCD1602_enWait();
    if(LCD1602_enOK == enBusyBit)
    {
        LCD1602_vWrite(u8Command,LCD1602_enCOMMAND);

        enStatus =LCD1602_enSTATUS_OK;
    }
    return enStatus;
}


LCD1602_nSTATUS LCD1602__enReadData(uint8_t* pu8Data)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    if(0!=pu8Data)
    {
        enBusyBit= LCD1602_enWait();
        if(LCD1602_enOK == enBusyBit)
        {
            *pu8Data=LCD1602_u8Read(LCD1602_enDATA);
            enStatus =LCD1602_enSTATUS_OK;
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enGetAddress(uint8_t* pu8Column,uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8DataRead=0;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row))
    {
        u8DataRead=LCD1602_u8Read(LCD1602_enCOMMAND);

        if(GPIO_enPIN6 & u8DataRead)
            *pu8Row=1;
        else
            *pu8Row=0;

        *pu8Column=u8DataRead&0xF;
        enStatus= LCD1602_enSTATUS_OK;
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enSetAddress(uint8_t u8Column, uint8_t u8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Address=0x80;
    u8Address|=u8Column&0xF;
    u8Address|=((u8Row&0x1)<<6);
    enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)u8Address);
    return enStatus;
}

LCD1602_nSTATUS LCD1602_enAdreesLimit(uint8_t* pu8Column, uint8_t* pu8Row)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_OK;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row))
    {
        (*pu8Column)++;
        if(0 == (*pu8Column&0xF)) //si la columna es 0 indica que empieza una nueva fila
        {
            (*pu8Column)=0;
            (*pu8Row)++; //invierte el valor e fila para que se reinciie
            (*pu8Row)&=1;
            enStatus= LCD1602__enSetAddress(*pu8Column,*pu8Row); //pone el cursor en 0,x
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enReadString(char* pcString, uint8_t u8Column,uint8_t u8Row,uint8_t u8Count)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8CurrentColumn=0;
    uint8_t u8CurrentRow=0;
    if( (uint32_t)0 != (uint32_t)pcString)
    {
        u8Column&=0xF;
        u8Row&=1;
        enStatus=LCD1602__enGetAddress(&u8CurrentColumn,&u8CurrentRow);
        if(LCD1602_enSTATUS_OK ==enStatus)
        {
            enStatus=LCD1602__enSetAddress(u8Column,u8Row);
            if(LCD1602_enSTATUS_OK==enStatus)
            {
                while(0!=u8Count)
                {
                    LCD1602__enReadChar((char*)pcString,u8Column,u8Row);
                    enStatus=LCD1602_enAdreesLimit(&u8Column, &u8Row);
                    pcString++;
                    u8Count--;
                    if(LCD1602_enSTATUS_ERROR==enStatus)
                        break;
                }
                *pcString=0;
                if(LCD1602_enSTATUS_OK==enStatus)
                {
                    enStatus=LCD1602__enSetAddress(u8CurrentColumn,u8CurrentRow);
                }
            }
        }
    }
    return enStatus;
}

LCD1602_nSTATUS LCD1602__enWriteString(char* pcString, uint8_t* pu8Column,uint8_t* pu8Row,uint8_t* pu8Count)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    if(((uint32_t)0!=(uint32_t)pu8Column) && ((uint32_t)0!=(uint32_t)pu8Row) && ((uint32_t)0!=(uint32_t)pcString) && ((uint32_t)0!=(uint32_t)pu8Count))
    {
        enStatus=LCD1602__enSetAddress(*pu8Column,*pu8Row);
        if(LCD1602_enSTATUS_OK ==enStatus)
        {
            *pu8Count=0;
            while(*pcString!=0)
            {
                enStatus=LCD1602__enWriteChar((uint8_t)*pcString);
                pcString++;
                (*pu8Count)++;
                if(LCD1602_enSTATUS_ERROR == enStatus)
                {
                    break;
                }
                enStatus=LCD1602_enAdreesLimit(pu8Column, pu8Row);
                if(LCD1602_enSTATUS_ERROR == enStatus)
                {
                    break;
                }
            }
        }
    }
    return enStatus;
}


LCD1602_nSTATUS LCD1602__enWriteChar(char cData)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    //°¬¡?\¨´ñ
    switch(cData)
    {
    //Character specials
/*    case '°':
        cData=0;
        break;
    case '¬':
        cData=1;
        break;
    case '¡':
        cData=2;
        break;
    case '?':
        cData=3;
        break;
    case '\\':
        cData=4;
        break;
    case '¨':
        cData=5;
        break;
    case '´':
        cData=6;
        break;
    case 'ñ':
    case 'Ñ':
        cData=7;
        break;
*/
    default:
        break;
    }
    enStatus= LCD1602__enWriteData((uint8_t)cData);
    return enStatus;
}



LCD1602_nSTATUS LCD1602__enReadChar(char* pcData,uint8_t u8Column, uint8_t u8Row)
{

    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    if((uint32_t)0!= (uint32_t)pcData)
    {
        enStatus=LCD1602__enSetAddress(u8Column,u8Row);
        if(LCD1602_enSTATUS_OK == enStatus)
        {
            enStatus= LCD1602__enReadData((uint8_t*)pcData);
            //°¬¡?\¨´ñ
            switch(*pcData)
            {
            //Character specials
    /*
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
    */
            default:
                break;
            }
        }
    }
    return enStatus;
}


LCD1602_nSTATUS LCD1602__enWriteGCRam(const char* pcChar, uint8_t u8Address)
{
    LCD1602_nSTATUS enStatus= LCD1602_enSTATUS_ERROR;
    uint8_t u8Iter=0;
    if((uint32_t)0 != (uint32_t)pcChar)
    {
        if( u8Address<=7) //solo tiene espacio para guardar 8 caracteres
        {
            enStatus=LCD1602__enWriteCommand((LCD1602_nCommands)((uint8_t)LCD1602_enGCRAM+(u8Address<<3))); // 01xx xddd x=caracter d=posicion
            if(LCD1602_enSTATUS_OK == enStatus)
            {
                while(u8Iter<8)
                {
                    enStatus=LCD1602__enWriteData(pcChar[u8Iter++]);
                    if(LCD1602_enSTATUS_ERROR == enStatus)
                        break;
                }
            }
        }
    }
    return enStatus;
}
/*
unsigned char LCD1602_Print(char* cadena,unsigned char* columna, unsigned char* fila)
{
    register unsigned char conteo=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
    register char salir=0; //variable que funciona cuanod encuentra un ESC
     (*columna)&=0xF;//delimita el valor inicial de columna de 0 a 15
    LCD1602_Pos(*columna,*fila); //indica la posicion inicial del cursor
    while(*cadena)// realiza el ciclo mientras la cadena tenga algun valor
           //el valor 0 o '\0' es fin de cadena
    {
        switch (*cadena) //detecta si existe un caracter especial
        {
        case '\n': //salto de linea
            (*fila)++; //aumenta la fila
            break;
        case '\r': //retorno de carro
            *columna=0; //actualiza el valor de la columna a la primera posicion
            break;
        case '\t': //tabulacion
            if(((*columna)&0xF)<13)
                *columna+=3; //aumenta 3 espacios vacios
            else
            {
                *columna=0; // pasa a la siguiente fila si no cabe la tabulacion
                (*fila)++;
            }
            break;
         case '\a':
         case '\b': //retroceso
            if(((*columna)!=0) || ((*fila)!=0)) //si la columna y fila es diferente a 0 puede retroceder
            {
                if(((*columna)!=0)) //si la columna encuentra entre 1 y 15 puede disminuir uno
                    (*columna)--;
                else
                    if(((*fila)!=0)) //si la columna es 0 entonces checa si existen filas que disminuir
                    {
                        (*columna)=0xF;
                        (*fila)--;
                    }
            }
            if((*cadena)=='\a')
            {
                LCD1602_Pos(*columna,*fila); //actualiza la posicion
                LCD1602_Char(' ');//borra el caracter que pudiera haber en la posicion
            }
            break;
        case '\e': //escape
            salir=1;//indica que se necesita salir de la funcion
            break;
        case '\f': //nueva pagina
            *columna=*fila=0;//reinicia los valores
             LCD1602_Com(CLEAR); //limpia la pantalla
            break;
        default :
            LCD1602_Char(*(cadena)); //envia el caracter correspondiente
            LCD1602_Limites(columna,fila);
            break;
        }
        cadena++; //el puntero apunta al siguiente caracter
        conteo++; //suma 1 al conteo total de caracter enviados a la LCD
        if(salir) //si detecto un \e (escape) sale del ciclo while
            break;
        LCD1602_Pos(*columna,*fila); //actualiza la posicion

    }
     return conteo; //regresa el conteo de caracteres y caracteres especiales
}




unsigned char LCD1602_Printf(char* cadena,unsigned char* columna, unsigned char* fila,...)
{
    register unsigned char conteo=0;//variable usada para saber cuantos caracteres se mandaron a la LCD
    register char salir=0; //variable que funciona cuanod encuentra un ESC

    va_list ap; //crea puntero de los argumentos
    double valorARGd; //variable donde guardara el valor del argumento
    char* valorARGc; //variable donde guardara el valor del argumento
    long valorARGi; //variable donde guardara el valor del argumento
    char conversion[30];
    va_start(ap, fila);//maneja la memoria de los argumentos empezando desde el ultimo conocido ingresado

    (*columna)&=0xF;//delimita el valor inicial de columna de 0 a 15
    LCD1602_Pos(*columna,*fila); //indica la posicion inicial del cursor
    while(*cadena)// realiza el ciclo mientras la cadena tenga algun valor
           //el valor 0 o '\0' es fin de cadena
    {
        switch (*cadena) //detecta si existe un caracter especial
        {
        case '\n': //salto de linea
            (*fila)++; //aumenta la fila
            break;
        case '\r': //retorno de carro
            *columna=0; //actualiza el valor de la columna a la primera posicion
            break;
        case '\t': //tabulacion
            if(((*columna)&0xF)<13)
                *columna+=3; //aumenta 3 espacios vacios
            else
            {
                *columna=0; // pasa a la siguiente fila si no cabe la tabulacion
                (*fila)++;
            }
            break;
         case '\a':
         case '\b': //retroceso
            if(((*columna)!=0) || ((*fila)!=0)) //si la columna y fila es diferente a 0 puede retroceder
            {
                if(((*columna)!=0)) //si la columna encuentra entre 1 y 15 puede disminuir uno
                    (*columna)--;
                else
                    if(((*fila)!=0)) //si la columna es 0 entonces checa si existen filas que disminuir
                    {
                        (*columna)=0xF;
                        (*fila)--;
                    }
            }
            if((*cadena)=='\a')
            {
                LCD1602_Pos(*columna,*fila); //actualiza la posicion
                LCD1602_Dato(' ');//borra el caracter que pudiera haber en la posicion
            }
            break;
        case '\e': //escape
            salir=1;//indica que se necesita salir de la funcion
            break;
        case '\f': //nueva pagina
            *columna=*fila=0;//reinicia los valores
            LCD1602_Com(CLEAR); //limpia la pantalla
            break;
        case '%':
            cadena++;
            switch(*cadena)
            {
                case 'd': //"%d o %i"
                case 'i':
                    valorARGi=(int)va_arg(ap, int);
                    Conv_Entero(valorARGi,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break;
                case 'u':// "%u"
                    valorARGi=(unsigned int)va_arg(ap, unsigned int);
                    Conv_Entero(valorARGi,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break;
                case 'x': //"%x"
                    valorARGi=(unsigned int)va_arg(ap, unsigned int);
                    Conv_Hex(valorARGi,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break;
                case 'X':// "%X"
                    valorARGi=(unsigned int)va_arg(ap, unsigned int);
                    Conv_HEX(valorARGi,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break;
                case 'o': //"%o"
                    valorARGi=(unsigned int)va_arg(ap, unsigned int);
                    Conv_Oct(valorARGi,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break;
              case 'c': //"%c"
                    valorARGi=(unsigned char)va_arg(ap, unsigned char);
                    LCD1602_Char(valorARGi);//manda el caracter a la LCD
                     LCD1602_Limites(columna,fila);
                    break;
                case 'p': //"%p"
                    valorARGi=(unsigned long)va_arg(ap, void*);
                    Conv_Hex(valorARGi,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break;
                case 's':// "%s"
                    valorARGc=(char*)va_arg(ap,char*);  //el siguiente argumento es un puntero
                    conteo+=LCD1602_Print(valorARGc,columna,fila)-1;//imprime la cadena del puntero
                    break;
                case 'F':
                   case 'f': //"%f"
                       valorARGd=(double)va_arg(ap, double);
                       Conv_Float((float)valorARGd,3,conversion);
                       conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                       break;
                case 'l'://"%lf" "%8.4lf" "%5.3f" "%l"
                    cadena++; //aumenta en uno la posicion del string
                    if(*cadena=='f') //si es 'f' el sig caracter significa que vamos a convertir un double
                    {
                    valorARGd=(double)va_arg(ap, double);
                    Conv_Float((double)valorARGd,3,conversion);
                    conteo+=LCD1602_Cadena(conversion,columna,fila)-1;
                    break; //break de este caso
                    }
                    else
                        cadena--; //si no encuentra la 'f' regresa a la 'l'
                default:// "%p"
                    cadena--;//si no es ningun caso anterior regresa al '%'
                case '%':
                     LCD1602_Dato('%');
                     LCD1602_Limites(columna,fila);
                     break;
           }
            break;
        default :
            LCD1602_Char(*(cadena)); //envia el caracter correspondiente
            LCD1602_Limites(columna,fila);
            break;
        }
        cadena++; //el puntero apunta al siguiente caracter
        conteo++; //suma 1 al conteo total de caracter enviados a la LCD
        if(salir) //si detecto un \e (escape) sale del ciclo while
            break;
        LCD1602_Pos(*columna,*fila); //actualiza la posicion

    }
    va_end(ap); //reinicia el puntero

     return conteo; //regresa el conteo de caracteres y caracteres especiales
}

*/

void LCD1602_vSetCommandMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)LCD1602_enCOMMAND)<<LCD1602_RS_POS;
}

void LCD1602_vSetDataMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)LCD1602_enDATA)<<LCD1602_RS_POS;
}

void LCD1602_vSetWriteMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RW]->GPIODATA_MASK[LCD1602_RW]=((uint32_t)LCD1602_enWRITE)<<LCD1602_RW_POS;
}

void LCD1602_vSetReadMode(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_RW]->GPIODATA_MASK[LCD1602_RW]=((uint32_t)LCD1602_enREAD)<<LCD1602_RW_POS;
}

void LCD1602_vWrite(uint8_t u8Data,LCD1602_nRS enMode)
{
    LCD1602_vSetWriteMode();
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)enMode)<<LCD1602_RS_POS;

    LCD1602_vPrepareWriteEnable();

    if(u8Data&GPIO_enPIN7)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN6)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN5)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN4)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;

    LCD1602_vPulseWriteEnable();

    LCD1602_vPrepareWriteEnable();

    if(u8Data&GPIO_enPIN3)
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=LCD1602_D7;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7]=0;

    if(u8Data&GPIO_enPIN2)
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=LCD1602_D6;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6]=0;

    if(u8Data&GPIO_enPIN1)
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=LCD1602_D5;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5]=0;

    if(u8Data&GPIO_enPIN0)
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=LCD1602_D4;
    else
        GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4]=0;

    LCD1602_vPulseWriteEnable();

    SysTick__vDelayUs(40);
}


uint8_t LCD1602_u8Read(LCD1602_nRS enMode)
{
    uint32_t u32Reg=0;
    uint8_t  u8DatoRead=0;

    GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);
    GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);
    GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);
    GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_INPUT_2MA_OPENDRAIN_PULLDOWN);

    LCD1602_vSetReadMode();
    GPIO_AHB_BLOCK[LCD1602_PORT_RS]->GPIODATA_MASK[LCD1602_RS]=((uint32_t)enMode)<<LCD1602_RS_POS;

    LCD1602_vPrepareReadEnable();

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN7;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN6;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN5;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN4;

    LCD1602_vPulseReadEnable();

    LCD1602_vPrepareReadEnable();

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D7]->GPIODATA_MASK[LCD1602_D7];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN3;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D6]->GPIODATA_MASK[LCD1602_D6];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN2;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D5]->GPIODATA_MASK[LCD1602_D5];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN1;

    u32Reg= GPIO_AHB_BLOCK[LCD1602_PORT_D4]->GPIODATA_MASK[LCD1602_D4];
    if(0 != u32Reg)
        u8DatoRead|=GPIO_enPIN0;

    LCD1602_vPulseReadEnable();

    LCD1602_vSetWriteMode();
    GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    SysTick__vDelayUs(40);
    return u8DatoRead;
}


void LCD1602_vPrepareWriteEnable(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;
}

/* Pulse of 2 us */
void LCD1602_vPulseWriteEnable(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=LCD1602_E;
    SysTick__vDelayUs(0.6);
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;//manda a 0 logico E, completando el pulso
    SysTick__vDelayUs(0.6);
}




void LCD1602_vPrepareReadEnable(void)
{
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;
    SysTick__vDelayUs(0.1);
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=LCD1602_E;
    SysTick__vDelayUs(0.3);
}
/* Pulse of 2 us */
void LCD1602_vPulseReadEnable(void)
{
    SysTick__vDelayUs(0.3);
    GPIO_AHB_BLOCK[LCD1602_PORT_E]->GPIODATA_MASK[LCD1602_E]=0;//manda a 0 logico E, completando el pulso
    SysTick__vDelayUs(0.6);
}





LCD1602_nBUSY   LCD1602_enReadCommand(uint8_t* pu8Column,uint8_t* pu8Row)
{

    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint8_t u8DataRead=0;
    if(((uint32_t)0!=(uint32_t)pu8Column)&&((uint32_t)0!=(uint32_t)pu8Row))
    {
        *pu8Column=0;
        *pu8Row=0;
        u8DataRead=LCD1602_u8Read(LCD1602_enCOMMAND);

        if(0==(GPIO_enPIN7 & u8DataRead))
            enBusyBit=LCD1602_enOK;

        if(GPIO_enPIN6 & u8DataRead)
            *pu8Row=1;

        *pu8Column=u8DataRead&0xF;
    }
    return enBusyBit;
}

LCD1602_nBUSY   LCD1602_enReadBusy(void)
{

    LCD1602_nBUSY enBusyBit=LCD1602_enBUSY;
    uint8_t u8DataRead=0;
    u8DataRead=LCD1602_u8Read(LCD1602_enCOMMAND);

    if(0==(GPIO_enPIN7 & u8DataRead))
        enBusyBit=LCD1602_enOK;

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
    }while((LCD1602_enBUSY==enBusyBit)&&(0!=u32TimeOut));

    return enBusyBit;
}
//End Of File
