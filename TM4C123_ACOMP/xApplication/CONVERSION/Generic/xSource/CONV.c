/*
 * CONV.c
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#include <xApplication/CONVERSION/Generic/xHeader/CONV.h>



static char CONV_pcStringBack[66] = {0UL};







int32_t Conv__s32String2Hex(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0U;
    int64_t s64InitSuf=0;
    char* pcStringBack=0;
    uint8_t  u8ValueAux=0;

    pcStringBack=CONV_pcStringBack;


    while((*pcString != (char) 0) && (*pcString != '\n') && (*pcString != '\r') && (*pcString != (char) 0x1BU)) /*0x1B is a ESC ASCII*/
    {

        if((*pcString == '0') && (s32Length == 0) )
        {
            s32Length++;
            s64InitSuf=1;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if(((*pcString == 'x') || (*pcString == 'X')) && (s32Length == 0))
        {
            s32Length++;
            s64InitSuf=3;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if(((*pcString == 'x') || (*pcString == 'X')) && (s64InitSuf == 1) && (s32Length == 1))
        {
            s32Length++;
            s64InitSuf=2;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((((uint8_t) *pcString >= (uint8_t) '0') && ((uint8_t) *pcString <= (uint8_t) '9')) && (s64InitSuf != 1))
        {
            u64NumShiftReg= (uint64_t) s64NumSignedReg;
            u64NumShiftReg <<= 4;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            u8ValueAux = (uint8_t) (*pcString );
            u8ValueAux -= (uint8_t) '0';
            s64NumSignedReg += (int64_t) u8ValueAux;
            s32Length++;

            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((((uint8_t) *pcString >= (uint8_t) 'A') && ((uint8_t) *pcString <= (uint8_t) 'F')) && (s64InitSuf != 1))
        {
            u64NumShiftReg= (uint64_t) s64NumSignedReg;
            u64NumShiftReg <<= 4;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            u8ValueAux = (uint8_t) (*pcString );
            u8ValueAux -= (uint8_t) 'A';
            s64NumSignedReg += (int64_t) u8ValueAux;
            s64NumSignedReg += 10;
            s32Length++;

            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((((uint8_t) *pcString >= (uint8_t) 'a') && ((uint8_t) *pcString <= (uint8_t) 'f')) && (s64InitSuf != 1))
        {
            u64NumShiftReg= (uint64_t) s64NumSignedReg;
            u64NumShiftReg <<= 4;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            u8ValueAux = (uint8_t) (*pcString );
            u8ValueAux -= (uint8_t) 'a';
            s64NumSignedReg += (int64_t) u8ValueAux;
            s64NumSignedReg += 10;
            s32Length++;

            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((*pcString == '\b') && (0 != s32Length))
        {
            pcStringBack -= 1U;

            if((*pcStringBack == '0') && (s32Length == 1) )
            {
                s64InitSuf=0;
            }
            else if(((*pcStringBack == 'x') || (*pcStringBack == 'X')) && (s32Length == 1) )
            {
                s64InitSuf=0;
            }
            else if(((*pcStringBack == 'x') || (*pcStringBack == 'X')) && (s64InitSuf == 2) && (s32Length == 2))
            {
                s64InitSuf=1;
            }
            else if(((uint8_t) *(pcStringBack) >= (uint8_t) '0') && ((uint8_t) *(pcStringBack) <= (uint8_t) '9'))
            {
                s64NumSignedReg /= 16;
            }
            else if(((uint8_t) *pcStringBack >= (uint8_t) 'A') && ((uint8_t) *pcStringBack <= (uint8_t) 'F'))
            {
                s64NumSignedReg /= 16;
            }
            else if(((uint8_t) *pcStringBack >= (uint8_t) 'a') && ((uint8_t) *pcStringBack <= (uint8_t) 'f'))
            {
                s64NumSignedReg /= 16;
            }
            else{}
            s32Length--;
        }
        else if (*pcString != '\b')
        {
            s32Length=(int32_t) CONV_enNAN;
            break;
        }
        else{}
        pcString += 1U;
    }

    *s64NumSigned=s64NumSignedReg;
    return s32Length;
}


int32_t Conv__s32String2Oct(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0U;
    char* pcStringBack=0;
    uint8_t  u8ValueAux=0;

    pcStringBack=CONV_pcStringBack;



    while(((char)0 != *pcString) && (*pcString != '\n') && (*pcString != '\r') && (*pcString != (char)0x1BU))
    {
        if((*pcString == '0') && (s32Length == 0) )
        {
            s32Length++;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if(((uint8_t) *pcString >= (uint8_t) '0') && ((uint8_t) *pcString <= (uint8_t) '7'))
        {
            u64NumShiftReg= (uint64_t) s64NumSignedReg;
            u64NumShiftReg <<= 3;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            u8ValueAux= (uint8_t) *pcString;
            u8ValueAux -= (uint8_t) '0';
            s64NumSignedReg += (int64_t) u8ValueAux;
            s32Length++;

            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((*pcString == '\b') && (0 != s32Length))
        {
            pcStringBack -= 1U;
            if(((uint8_t) *(pcStringBack) >= (uint8_t) '0') && ((uint8_t) *(pcStringBack) <= (uint8_t) '7'))
            {
                if(s32Length != 1)
                {
                    s64NumSignedReg /= 8;
                }
            }
            s32Length--;
        }
        else if (*pcString != '\b')
        {
            s32Length=(int32_t) CONV_enNAN;
            break;
        }
        else{}
        pcString += 1U;
    }

    *s64NumSigned=s64NumSignedReg;
    return s32Length;
}

int32_t Conv__s32String2Bin(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0U;
    char* pcStringBack=0;
    uint8_t  u8ValueAux=0;

    pcStringBack=CONV_pcStringBack;



    while(((char) 0 != *pcString) && (*pcString != '\n') && (*pcString != '\r') && (*pcString != (char)0x1BU))
    {
        if(((*pcString == 'b') || (*pcString == 'B')) && (s32Length == 0) )
        {
            s32Length++;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if(((uint8_t) *pcString >= (uint8_t) '0') && ((uint8_t) *pcString <= (uint8_t) '1'))
        {
            u64NumShiftReg= (uint64_t) s64NumSignedReg;
            u64NumShiftReg <<= 1;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            u8ValueAux=(uint8_t) *pcString;
            u8ValueAux -= (uint8_t) '0';
            s64NumSignedReg += (int64_t) u8ValueAux;
            s32Length++;

            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((*pcString == '\b') && (0 != s32Length))
        {
            pcStringBack -= 1U;
            if(((uint8_t) *(pcStringBack) >= (uint8_t) '0') && ((uint8_t) *(pcStringBack) <= (uint8_t) '1'))
            {
                s64NumSignedReg /= 2;
            }

            s32Length--;
        }
        else if (*pcString != '\b')
        {
            s32Length= (int32_t) CONV_enNAN;
        }
        else{}
        pcString += 1U;
    }

    *s64NumSigned=s64NumSignedReg;
    return s32Length;
}

int32_t Conv__s32String2UInt(const char* pcString,uint64_t* u64NumUnsigned )
{
   int64_t u64NumSigned=0;
    int32_t s32Length=0;
    s32Length=Conv__s32String2Integer(pcString, &u64NumSigned);
    if(s32Length != (int32_t) CONV_enNAN)
    {
        *u64NumUnsigned= (uint64_t) u64NumSigned;
    }

    return s32Length;
}




int32_t Conv__s32String2Float(const char* pcString,int8_t s8Decimals, float32_t* pfConversion)
{
    float32_t fNumberInteger=0.0;
    float32_t fNumberDecimal=0.0;
    float32_t fNumberAuxilar=1.0;
    float32_t fNumberDecimalAdded=0.0;
    float32_t fNumberFinal=0.0;
    int32_t s32Sign=0;
    int32_t s32FindDot=0;
    int8_t s8DecimalsActual=0;
    int32_t s32Length=0;
    char* pcStringBack=0;
    uint8_t  u8ValueAux=0;
    const char* pcStringAux=0;
    pcStringBack=CONV_pcStringBack;


    while(((char) 0 != *pcString) && (*pcString != '\n') && (*pcString != '\r') && (*pcString != (char) 0x1BU) && (s8DecimalsActual<s8Decimals))
    {

        if((*pcString == '-') && (s32Length == 0) && (s32FindDot == 0))
        {
            s32Sign=1;
            s32Length++;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((*pcString == '.') && (s32FindDot == 0))
        {
            s32FindDot=1;
            s32Length++;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if(((uint8_t) *pcString >= (uint8_t) '0') && ((uint8_t) *pcString <= (uint8_t) '9'))
        {
            if(s32FindDot == 0)
            {
                fNumberInteger *= 10.0f;
                u8ValueAux=(uint8_t) *pcString;
                u8ValueAux -= (uint8_t) '0';
                fNumberInteger += (float32_t) u8ValueAux;
            }
            else
            {
                fNumberAuxilar /= 10.0f;
                u8ValueAux=(uint8_t) *pcString;
                u8ValueAux -= (uint8_t) '0';
                fNumberDecimal=(float32_t) u8ValueAux;
                fNumberDecimal *= fNumberAuxilar;
                fNumberDecimalAdded += fNumberDecimal;
                s8DecimalsActual++;
            }
            s32Length++;
            *pcStringBack = *pcString;
            pcStringBack += 1U;
        }
        else if((*pcString == '\b') && (s32Length != 0))
        {
            pcStringBack -= 1U;
            if(s32FindDot == 0)
            {
                if(((uint8_t) *pcStringBack >= (uint8_t) '0') && ((uint8_t) *pcStringBack <= (uint8_t) '9'))
                {
                    fNumberInteger /= 10.0f;
                }
                if(*pcStringBack == '-')
                {
                    s32Sign=0;
                }
            }
            else
            {
                if(((uint8_t) *pcStringBack >= (uint8_t) '0') && ((uint8_t) *pcStringBack <= (uint8_t) '9'))
                {
                    fNumberAuxilar *= (float32_t) 10;
                    pcStringAux=pcString;
                    pcStringAux -= 1U;
                    u8ValueAux=(uint8_t) *pcStringAux;
                    u8ValueAux -= (uint8_t) '0';
                    fNumberDecimal=(float32_t) u8ValueAux;
                    fNumberDecimal *= fNumberAuxilar;
                    fNumberDecimalAdded -= fNumberDecimal;
                    s8DecimalsActual--;
                }
                else if(*pcStringBack == '.')
                {
                    s32FindDot=0;
                }
                else{}
            }
            s32Length--;
        }
        else if ((*pcString != '\b'))
        {
            s32Length=(int32_t) CONV_enNAN;
            break;
        }
        else{}

        pcString += 1U;
    }
    fNumberFinal=fNumberInteger+fNumberDecimalAdded;

    if(s32Sign == 1)
    {
        fNumberFinal *= (float32_t) (-1);
    }
    *pfConversion=fNumberFinal;
    return s32Length;
}




