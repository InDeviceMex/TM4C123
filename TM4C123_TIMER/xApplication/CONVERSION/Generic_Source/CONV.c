/*
 * CONV.c
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#include <xApplication/CONVERSION/Generic_Header/CONV.h>










int32_t CONV__s32String2Hex(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0u;
    int64_t s64InitSuf=0;
    char cStringBack[66]={0};
    char* pcStringBack=0;
    char  cValueAux=0;

    pcStringBack=cStringBack;


    while((*pcString != (char) 0) && (*pcString!='\n') && (*pcString!='\r') && (*pcString!=(char) 0x1Bu)) /*0x1B is a ESC ASCII*/
    {

        if((*pcString=='0') &&(s32Length==0) )
        {
            s32Length++;
            s64InitSuf=1;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if(((*pcString=='x') ||(*pcString=='X'))  &&(s32Length==0))
        {
            s32Length++;
            s64InitSuf=3;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if(((*pcString=='x') ||(*pcString=='X')) &&(s64InitSuf==1) && (s32Length==1))
        {
            s32Length++;
            s64InitSuf=2;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if(((*pcString>='0') && (*pcString<='9')) &&(s64InitSuf!=1))
        {
            u64NumShiftReg= (uint64_t)s64NumSignedReg;
            u64NumShiftReg<<=4;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            cValueAux = *pcString-'0';
            s64NumSignedReg+=(int64_t)cValueAux;
            s32Length++;

            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if(((*pcString>='A') && (*pcString<='F'))&&(s64InitSuf!=1))
        {
            u64NumShiftReg= (uint64_t)s64NumSignedReg;
            u64NumShiftReg<<=4;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            cValueAux = *pcString-'A';
            s64NumSignedReg+=(int64_t)cValueAux;
            s64NumSignedReg+=10;
            s32Length++;

            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if(((*pcString>='a') && (*pcString<='f')) &&(s64InitSuf!=1))
        {
            u64NumShiftReg= (uint64_t)s64NumSignedReg;
            u64NumShiftReg<<=4;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            cValueAux = *pcString-'a';
            s64NumSignedReg+=(int64_t)cValueAux;
            s64NumSignedReg+=10;
            s32Length++;

            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString=='\b')&& (0 != s32Length))
        {
            pcStringBack--;

            if((*pcStringBack=='0') &&(s32Length==1) )
            {
                s64InitSuf=0;
            }
            else if(((*pcStringBack=='x') ||(*pcStringBack=='X'))&&(s32Length==1) )
            {
                s64InitSuf=0;
            }
            else if(((*pcStringBack=='x') ||(*pcStringBack=='X')) &&(s64InitSuf==2) && (s32Length==2))
            {
                s64InitSuf=1;
            }
            else if((*(pcStringBack)>='0') && (*(pcStringBack)<='9'))
            {
                s64NumSignedReg/=16;
            }
            else if((*pcStringBack>='A') && (*pcStringBack<='F'))
            {
                s64NumSignedReg/=16;
            }
            else if((*pcStringBack>='a') && (*pcStringBack<='f'))
            {
                s64NumSignedReg/=16;
            }
            else{}
            s32Length--;
        }
        else if (*pcString!='\b')
        {
            s32Length=(int32_t)CONV_enNAN;
            break;
        }
        else{}
        pcString++;
    }

    *s64NumSigned=s64NumSignedReg;
    return s32Length;
}


int32_t CONV__s32String2Oct(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0u;
    char cStringBack[66]={0};
    char* pcStringBack=0;
    char  cValueAux=0;

    pcStringBack=cStringBack;



    while(((char)0 != *pcString)&&(*pcString!='\n')&&(*pcString!='\r')&&(*pcString!= (char)0x1Bu))
    {
        if((*pcString=='0') &&(s32Length==0) )
        {
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString>='0') && (*pcString<='7'))
        {
            u64NumShiftReg= (uint64_t)s64NumSignedReg;
            u64NumShiftReg<<=3;
            s64NumSignedReg = (int64_t) u64NumShiftReg;

            cValueAux=*pcString-'0';
            s64NumSignedReg+=(int64_t)cValueAux;
            s32Length++;

            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString=='\b')&& (0 != s32Length))
        {
            pcStringBack--;
            if((*(pcStringBack)>='0') && (*(pcStringBack)<='7'))
            {
                if(s32Length!=1)
                {
                    s64NumSignedReg/=8;
                }
            }
            s32Length--;
        }
        else if (*pcString!='\b')
        {
            s32Length=(int32_t)CONV_enNAN;
            break;
        }
        else{}
        pcString++;
    }

    *s64NumSigned=s64NumSignedReg;
    return s32Length;
}

int32_t CONV__s32String2Bin(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0u;
    char cStringBack[66]={0};
    char* pcStringBack=0;
    char  cValueAux=0;

    pcStringBack=cStringBack;



    while(((char) 0 != *pcString)&&(*pcString!='\n')&&(*pcString!='\r')&&(*pcString!=(char)0x1Bu))
    {
        if(((*pcString=='b') || (*pcString=='B')) &&(s32Length==0) )
        {
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString>='0') && (*pcString<='1'))
        {
            u64NumShiftReg= (uint64_t)s64NumSignedReg;
            u64NumShiftReg<<=1;
            s64NumSignedReg = (int64_t) u64NumShiftReg;
            cValueAux=*pcString-'0';
            s64NumSignedReg+=(int64_t)cValueAux;
            s32Length++;

            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString=='\b')&& (0!= s32Length))
        {
            pcStringBack--;
            if((*(pcStringBack)>='0') && (*(pcStringBack)<='1'))
            {
                s64NumSignedReg/=2;
            }

            s32Length--;
        }
        else if (*pcString!='\b')
        {
            s32Length= (int32_t)CONV_enNAN;
        }
        else{}
        pcString++;
    }

    *s64NumSigned=s64NumSignedReg;
    return s32Length;
}

int32_t CONV__s32String2UInt(const char* pcString,uint64_t* u64NumUnsigned )
{
   int64_t u64NumSigned=0;
    int32_t s32Length=0;
    s32Length=CONV__s32String2Int(pcString,&u64NumSigned);
    if(s32Length!=(int32_t) CONV_enNAN)
    {
        *u64NumUnsigned= (uint64_t)u64NumSigned;
    }

    return s32Length;
}




int32_t CONV__s32String2Float(const char* pcString,int8_t s8Decimals, float* pfConversion)
{
    float fNumberInteger=0.0;
    float fNumberDecimal=0.0;
    float fNumberAuxilar=1.0;
    float fNumberDecimalAdded=0.0;
    float fNumberFinal=0.0;
    int32_t s32Sign=0;
    int32_t s32FindDot=0;
    int8_t s8DecimalsActual=0;
    int32_t s32Length=0;
    char cStringBack[66]={0};
    char* pcStringBack=0;
    char  cValueAux=0;

    pcStringBack=cStringBack;


    while(((char) 0 != *pcString)&&(*pcString!='\n')&&(*pcString!='\r')&&(*pcString!= (char) 0x1Bu) && (s8DecimalsActual<s8Decimals))
    {

        if((*pcString=='-') && (s32Length==0) && (s32FindDot==0))
        {
            s32Sign=1;
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString=='.') && (s32FindDot==0))
        {
            s32FindDot=1;
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString>='0') && (*pcString<='9'))
        {
            if(s32FindDot==0)
            {
                fNumberInteger*=10.0f;
                cValueAux=(*pcString-'0');
                fNumberInteger+=(float)cValueAux;
            }
            else
            {
                fNumberAuxilar/=10.0f;
                cValueAux=(*pcString-'0');
                fNumberDecimal=(float)cValueAux;
                fNumberDecimal*=fNumberAuxilar;
                fNumberDecimalAdded+=fNumberDecimal;
                s8DecimalsActual++;
            }
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString=='\b')&& (s32Length!=0))
        {
            pcStringBack--;
            if(s32FindDot==0)
            {
                if((*pcStringBack>='0') && (*pcStringBack<='9'))
                {
                    fNumberInteger/=10.0f;
                }
                if(*pcStringBack=='-')
                {
                    s32Sign=0;
                }
            }
            else
            {
                if((*pcStringBack>='0') && (*pcStringBack<='9'))
                {
                    fNumberAuxilar*=(float)10;
                    cValueAux=(*(pcString-1)-'0');
                    fNumberDecimal=(float)cValueAux;
                    fNumberDecimal*=fNumberAuxilar;
                    fNumberDecimalAdded-=fNumberDecimal;
                    s8DecimalsActual--;
                }
                else if(*pcStringBack=='.')
                {
                    s32FindDot=0;
                }
                else{}
            }
            s32Length--;
        }
        else if ((*pcString!='\b'))
        {
            s32Length=(int32_t)CONV_enNAN;
            break;
        }
        else{}

        pcString++;
    }
    fNumberFinal=fNumberInteger+fNumberDecimalAdded;

    if(s32Sign==1)
    {
        fNumberFinal*=(float)-1;
    }
    *pfConversion=fNumberFinal;
    return s32Length;
}




