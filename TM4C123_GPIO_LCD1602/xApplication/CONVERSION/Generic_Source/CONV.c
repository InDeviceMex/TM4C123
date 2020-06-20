/*
 * CONV.c
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#include <xApplication/CONVERSION/Generic_Header/CONV.h>

uint32_t CONV_u32StringLength(const char* pcString, uint32_t u32MaxSize)
{
  const char* psStringReg;
  uint32_t u32Count=0;
  if(0!=pcString)
  {
      psStringReg = pcString;
      while(((char)0!=(char) *psStringReg) && ((uint32_t)0!=(uint32_t)u32MaxSize))
      {
          psStringReg++;
          u32MaxSize--;
      }
      u32Count=(uint32_t)psStringReg;
      u32Count-=(uint32_t)pcString;
  }
  return (uint32_t)u32Count;
}

CONV_nSTATUS CONV_enIsDigit(char cCharacter)
{
    CONV_nSTATUS enStatus= CONV_enERROR;
    if((cCharacter >= '0') && (cCharacter <= '9'))
    {
        enStatus=CONV_enOK;
    }

    return enStatus;
}


/*ToDo review CONV__u8DIntToString*/
uint8_t CONV__u8DIntToString(int64_t s64Number,uint8_t u8Positive,uint8_t u8Padding0,uint8_t u8Deci, char* pcConv)
{
    char pcConvTemp[21]={0}; /*longitud maxima de long 12 digitos con signo*/
    char *pcPointerActual;
    uint8_t u8DeciActual=0;
    int8_t s8Num=0;
    int8_t s8I=0;
    uint8_t u8FlagSign=1;
    uint8_t u8Comp1=0;
    uint8_t u8Comp2=0;
    int32_t s32Result=0;
    int64_t  s64NumberReg = s64Number;/*paso el Numero a un registro para aumentar rendimiento*/
    uint32_t u32ResultAux=0;

    pcPointerActual = &pcConvTemp[21 - 1];/*empezamos llenando desde la ultima posicion*/
    *pcPointerActual = (char) 0;/*guarda el fin de cadena en la ultima posicion*/

    if (u8Deci>(uint8_t)19)
    {
        u8Deci=(uint8_t)19;
    }
    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        s8Num=(int8_t) (s64NumberReg % 10);/*obtiene el digito de menor peso*/
        if(s8Num<0)
        {
            s8Num*=-1;
        }

        if(0 != s64NumberReg)
        {
            u8Comp1=1u;
        }
        else
        {
            u8Comp1=0u;
        }
        if(0u == u8DeciActual)
        {
            u8Comp2=1u;
        }
        else
        {
            u8Comp2=0u;
        }
        u8Comp1|=u8Comp2;
        if ((uint8_t)1 == u8Comp1)
        {
            *pcPointerActual = (uint8_t)s8Num  + '0';/*pcConvierte el valor en caracter*/
            u8DeciActual++;
        }
        else
        {
            if(u8Padding0)
            {
                *pcPointerActual = '0';/*pcConvierte el valor en caracter*/
                u8DeciActual++;
            }
            else if (u8FlagSign)
            {
                if ( s64Number < 0)
                {
                    *pcPointerActual = '-';/*si el s32Numero es negativo guarda el signo negativo*/
                }
                else if (u8Positive)
                {
                    *pcPointerActual = '+';/*si el s32Numero es negativo guarda el signo negativo*/
                }
                else{}
                u8FlagSign=(uint8_t) 0;
            }
            else
            {
                *pcPointerActual= ' ';
                u8DeciActual++;
            }

        }
        s64NumberReg /= 10;
    }  while((0 != s64NumberReg) || (u8DeciActual<u8Deci));/*mientras exista un digito sigue el ciclo*/

    if(u8FlagSign)
    {
        if ( s64Number < 0)
        {
            pcPointerActual--;
            *pcPointerActual = '-';/*si el s32Numero es negativo guarda el signo negativo*/
        }
        else if (u8Positive)
        {
            pcPointerActual--;
            *pcPointerActual = '+';/*si el s32Numero es negativo guarda el signo negativo*/
        }
        else{}
    }
    u32ResultAux=((uint32_t)&pcConvTemp[21 - 1]);
    s64NumberReg=(int64_t)u32ResultAux;
    s64NumberReg+=1;
    u32ResultAux=((uint32_t)pcPointerActual);
    s64NumberReg-=(int64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    for (s8I = (int8_t) (s64NumberReg-1); s8I>= (int8_t)0; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        pcConv[(uint8_t)s8I] = pcPointerActual[(uint8_t)s8I];
    }
    s32Result=(int32_t)s64NumberReg;
    s32Result-=1;
    return (uint8_t) (s32Result);
}


uint8_t CONV__u8IntToString(int64_t s64Number, char* pcConv)
{
    char    pcConvTemp[INT2STRINGMAX]={0};/*longitud maxima de long 12 digitos con signo*/
    char    *pcPointerActual = &pcConvTemp[INT2STRINGMAX-1u];/*empezamos llenando desde la ultima posicion;*/
    int32_t s32Num=0;
    int8_t  s8I=0;
    int64_t s64NumberReg = s64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    int8_t  s8FlagSign=0;
    uint32_t u32ResultAux=0;

    *pcPointerActual = (char)0;/*guarda el fin de cadena en la ultima posicion*/
    if( s64NumberReg < 0)
    {
        s64NumberReg*=-1;
        s8FlagSign=1;
    }

    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        s32Num=(int32_t)(s64NumberReg % (int64_t)10);/*obtiene el digito de menor peso*/
        *pcPointerActual = (char) ((char)s32Num  + '0');/*pcConvierte el valor en caracter*/
        s64NumberReg /= 10;
    }   while((s64NumberReg!=0)&&(pcPointerActual>(pcConvTemp+s8FlagSign)));/*mientras exista un digito sigue el ciclo*/

    if (s8FlagSign==1)
    {
        pcPointerActual--;
        *pcPointerActual = '-';/*si el s32Numero es negativo guarda el signo negativo*/
    }
    u32ResultAux= ((uint32_t)pcConvTemp);
    s64NumberReg=(int64_t)u32ResultAux;
    s64NumberReg+=(int64_t)INT2STRINGMAX;
    s64NumberReg-=1;
    u32ResultAux=((uint32_t)pcPointerActual);
    s64NumberReg-=(int64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    for (s8I = (int8_t)s64NumberReg; s8I>= (int8_t)0; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((const char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t) s64NumberReg;
}



uint8_t CONV__u8IntToStringCeros(int64_t s64Number,int8_t s8CerosLeft, char* pcConv)
{
    char    pcConvTemp[INT2STRINGMAX]={0};/*longitud maxima de long 12 digitos con signo*/
    char    *pcPointerActual = &pcConvTemp[INT2STRINGMAX - 1u];/*empezamos llenando desde la ultima posicion*/
    int32_t s32Num=0;
    int8_t  s8I=0;
    int64_t s64NumberReg = s64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    int8_t  s8FlagSign=0;
    uint32_t u32ResultAux=0;

    if(s8CerosLeft>(int8_t)(INT2STRINGMAX-2u))
    {
        s8CerosLeft=(int8_t)(INT2STRINGMAX-2u);
    }

    *pcPointerActual = (char)0;/*guarda el fin de cadena en la ultima posicion*/
    if( s64NumberReg < 0)
    {
        s64NumberReg*=-1;
        s8FlagSign=1;
    }

    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        s32Num=(int32_t)(s64NumberReg % 10);/*obtiene el digito de menor peso*/
        *pcPointerActual =(char) ((char)s32Num  + '0');/*pcConvierte el valor en caracter*/
        s8CerosLeft--;
        s64NumberReg /= 10;
    }  while((s64NumberReg!=0)&&(pcPointerActual>(pcConvTemp+s8FlagSign)));/*mientras exista un digito sigue el ciclo*/

    while((pcPointerActual>(pcConvTemp+s8FlagSign)) && (s8CerosLeft>0))
    {
        pcPointerActual--;
        *pcPointerActual ='0';
        s8CerosLeft--;
    }
    if (s8FlagSign==1)
    {
        pcPointerActual--;
        *pcPointerActual = '-';/*si el s32Numero es negativo guarda el signo negativo*/
    }
    u32ResultAux= ((uint32_t)pcConvTemp);
    s64NumberReg=(int64_t)u32ResultAux;
    s64NumberReg+=(int64_t)INT2STRINGMAX;
    s64NumberReg-=1;
    u32ResultAux = ((uint32_t)pcPointerActual);
    s64NumberReg-=(int64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    for (s8I = (int8_t) s64NumberReg; s8I>= (int8_t)0; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((const char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t)s64NumberReg;

}

uint8_t CONV__u8UIntToString(uint64_t u64Number, char* pcConv)
{
    char       pcConvTemp[INT2STRINGMAX]={0};/*longitud maxima de long 12 digitos con signo*/
    char       *pcPointerActual = &pcConvTemp[INT2STRINGMAX - 1u];/*empezamos llenando desde la ultima posicion*/
    volatile int32_t    s32Num=0;
    int8_t         s8I=0;
    volatile int8_t         s8Num=0;
    volatile uint64_t   u64NumberReg = u64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    uint32_t u32ResultAux=0;

    *pcPointerActual = (char) 0;/*guarda el fin de cadena en la ultima posicion*/
    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        u64NumberReg%=(uint64_t)10u;
        s32Num=(int32_t)(u64NumberReg);/*obtiene el digito de menor peso*/
        *pcPointerActual = (uint8_t)s32Num  + '0';/*pcConvierte el valor en caracter*/
        u64NumberReg /= (uint64_t)10ul;
    }  while((0u != u64NumberReg));/*mientras exista un digito sigue el ciclo*/
    u32ResultAux = ((uint32_t)pcConvTemp);
    u64NumberReg=(uint64_t) u32ResultAux;
    u64NumberReg+=(uint64_t)INT2STRINGMAX;
    u64NumberReg-=1u;
    u32ResultAux = ((uint32_t)pcPointerActual);
    u64NumberReg-=(uint64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    s8Num=(int8_t)u64NumberReg;
    for (s8I = s8Num; s8I >= 0; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t) u64NumberReg;
}


const int64_t CONV_s64Dec[16]=
{0,10,100,1000,10000,100000,1000000,10000000,100000000,
 1000000000,10000000000,100000000000,1000000000000,
 10000000000000,100000000000000,1000000000000000
};
/* ToDo Actualizar Float*/
uint8_t CONV__u8FloatToString(double dNumber,uint8_t u8Positive,uint8_t u8Padding0,int32_t s32Enteros,int32_t s32Decimals,char* pcConv)
{
    int64_t CONV_s64Deci=0;/*contiene los dDecimales en version entero*/
    double dDecimal=0;/*contiene el valor de dDecimales en version double*/
    uint8_t u8Values=0;/*cuantos digitos se imprimen*/
    uint8_t u8NegativeNumber=0;/*cuantos digitos se imprimen*/

    if(s32Decimals>15)
    {
        s32Decimals=15;
    }
    CONV_s64Deci =(int64_t)dNumber;
    dDecimal=(double)(dNumber-(double)CONV_s64Deci);/*obtiene la parte dDecimal*/
    dDecimal*=(double) CONV_s64Dec[(uint32_t)s32Decimals];/*hace la multiplicacion depende de cuantos dDecimales necesitemos*/
    CONV_s64Deci=(int64_t)dDecimal;/*castea la parte dDecimal a un int64_t (64 bits)*/
    if(CONV_s64Deci<0)/*si el numero es negativo elimina el signo*/
    {
      CONV_s64Deci*=-1;
    }

    if(dNumber<(double)0)
    {
        u8Positive= (uint8_t)1;
        u8NegativeNumber= (uint8_t)1;
    }
    u8Values= CONV__u8DIntToString((int64_t)dNumber,u8Positive,u8Padding0,(uint8_t)s32Enteros, pcConv);/*pcConvierte la parte entera del numero*/
    if(u8NegativeNumber== (uint8_t)1)
    {
        pcConv[0]='-';
    }

    pcConv[u8Values]='.';/*agrega un '.' en la posicion del fin de cadena*/
    u8Values++;/*aumenta a la siguiente posicion*/
    u8Values+=CONV__u8DIntToString((int64_t)CONV_s64Deci,0u,1u,(uint8_t)s32Decimals, (char*)&pcConv[u8Values]);/*pcConvierte la parte dDecimal despues del punto*/
    return u8Values;/*regresa la cantidad de digitos pcConvertidos*/
}



const int8_t CONV_ps8Hexa[16]=
{
 '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'
};
uint8_t CONV__u8HexToString(uint64_t u64Number, char* pcConv)
{
    char  pcConvTemp[HEX2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[HEX2STRINGMAX - 1u];
    int32_t  s32Num=0;
    int8_t   s8I=0;
    uint64_t u64NumberReg = (uint64_t) u64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    uint32_t u32ResultAux=0;

    *pcPointerActual = (char)0;/*guarda el fin de cadena en la ultima posicion*/

    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        u64NumberReg&=(uint64_t)0xFu;
        s32Num=(int32_t)(u64NumberReg);/*obtiene el digito de menor peso*/
        *pcPointerActual =(char) CONV_ps8Hexa[(uint32_t)s32Num];/*pcConvierte el valor en caracter*/
        u64NumberReg>>=4;
    }  while((u64NumberReg > (uint64_t)0));/*mientras exista un digito sigue el ciclo*/

    pcPointerActual--;
    *pcPointerActual = 'x';
    pcPointerActual--;
    *pcPointerActual = '0';
    u32ResultAux = ((uint32_t)pcConvTemp);
    u64NumberReg=(uint64_t)u32ResultAux;
    u64NumberReg+=(uint64_t)HEX2STRINGMAX;
    u64NumberReg-=1u;
    u32ResultAux= ((uint32_t)pcPointerActual);
    u64NumberReg-=(uint64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    for (s8I = (int8_t)u64NumberReg; s8I>=(int8_t)0 ; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t) u64NumberReg;
}


const int8_t CONV_ps8HEXA[16]=
{
 '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
};
uint8_t CONV__u8HEXToString(uint64_t u64Number, char* pcConv)
{
    char  pcConvTemp[HEX2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[HEX2STRINGMAX - 1u];
    int32_t  s32Num=0;
    int8_t   s8I=0;
    uint64_t u64NumberReg = (uint64_t) u64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    uint32_t u32ResultAux=0;

    *pcPointerActual = (char) 0;/*guarda el fin de cadena en la ultima posicion*/

    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        u64NumberReg &= (uint64_t)0xFu;
        s32Num=(int32_t)(u64NumberReg);/*obtiene el digito de menor peso*/
        *pcPointerActual = (char)CONV_ps8HEXA[(uint32_t)s32Num];/*convierte el valor en caracter*/
        u64NumberReg>>=4;
    }  while((u64NumberReg > (uint64_t)0));/*mientras exista un digito sigue el ciclo*/

    pcPointerActual--;
    *pcPointerActual = 'X';
    pcPointerActual--;
    *pcPointerActual = '0';
    u32ResultAux=((uint32_t)pcConvTemp);
    u64NumberReg=(uint64_t) u32ResultAux;
    u64NumberReg+=(uint64_t)HEX2STRINGMAX;
    u64NumberReg-=1u;
    u32ResultAux= ((uint32_t)pcPointerActual);
    u64NumberReg-=(uint64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    for (s8I = (int8_t)u64NumberReg; s8I>=(int8_t)0 ; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t)u64NumberReg;
}

uint8_t CONV__u8OctToString(uint64_t u64Number, char* pcConv)
{
    char  pcConvTemp[OCT2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[OCT2STRINGMAX - 1u];
    int32_t  s32Num=0;
    int8_t   s8I=0;
    uint64_t u64NumberReg = (uint64_t) u64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    uint32_t u32ResultAux=0;

    *pcPointerActual = (char)0;/*guarda el fin de cadena en la ultima posicion*/

    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        u64NumberReg&=(uint64_t)0x7u;
        s32Num=(int32_t)(u64NumberReg);/*obtiene el digito de menor peso*/
        *pcPointerActual = (char) ((char)s32Num + '0');/*convierte el valor en caracter*/
        u64NumberReg>>=3;
    }  while((u64NumberReg > (uint64_t)0));/*mientras exista un digito sigue el ciclo*/

    pcPointerActual--;
    *pcPointerActual = '0';
    u32ResultAux =  ((uint32_t)pcConvTemp);
    u64NumberReg=(uint64_t)u32ResultAux;
    u64NumberReg+=(uint64_t)OCT2STRINGMAX;
    u64NumberReg-=1u;
    u32ResultAux = ((uint32_t)pcPointerActual);
    u64NumberReg-=(uint64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/

    for (s8I = (int8_t)u64NumberReg; s8I>=(int8_t)0 ; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t)u64NumberReg;
}

uint8_t CONV__u8BinToString(uint64_t u64Number, char* pcConv)
{
    char  pcConvTemp[BIN2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[BIN2STRINGMAX - 1u];
    int32_t  s32Num=0;
    int8_t   s8I=0;
    uint64_t u64NumberReg = (uint64_t) u64Number;/*paso el s32Numero a un registro para aumentar rendimiento*/
    uint32_t u32ResultAux=0;

    *pcPointerActual = 0u;/*guarda el fin de cadena en la ultima posicion*/

    do {
        pcPointerActual--;/*se decrementa la posicion donse guardara el valor*/
        u64NumberReg&=0x1u;
        s32Num=(int32_t)(u64NumberReg);/*obtiene el digito de menor peso*/
        *pcPointerActual = (char)((char)s32Num + '0');/*convierte el valor en caracter*/
        u64NumberReg>>=1;
    }  while((u64NumberReg > 0u));/*mientras exista un digito sigue el ciclo*/

    pcPointerActual--;
    *pcPointerActual = 'b';
    u32ResultAux= ((uint32_t)pcConvTemp);
    u64NumberReg=(uint64_t)u32ResultAux;
    u64NumberReg+=BIN2STRINGMAX;
    u64NumberReg-=1u;
    u32ResultAux= ((uint32_t)pcPointerActual);
    u64NumberReg-=(uint64_t)u32ResultAux;/*realiza la resta de cuantos caracteres se utilizaron*/
    for (s8I = (int8_t) u64NumberReg; s8I>=0 ; s8I--) /*hace un ciclo burbuja optimizado*/
    {
        ((char *)pcConv)[(uint8_t)s8I] = ((char *)pcPointerActual)[(uint8_t)s8I];
    }

    return (uint8_t)u64NumberReg;
}



int32_t CONV__s32String2Hex(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    uint64_t u64NumShiftReg=0;
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
    uint64_t u64NumShiftReg=0;
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
    uint64_t u64NumShiftReg=0;
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

int32_t CONV__s32String2Int(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Sign=0;
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;
    char cStringBack[30]={0};
    char* pcStringBack=0;
    char  cValueAux=0;

    pcStringBack=cStringBack;



    while(((char) 0 != *pcString)&&(*pcString!='\n')&&(*pcString!='\r')&&(*pcString!= (char) 0x1Bu))
    {
        if((*pcString=='-') && (s32Length==0))
        {
            s32Sign=1;
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString>='0') && (*pcString<='9'))
        {
            s64NumSignedReg*=10;
            cValueAux= *pcString-'0';
            s64NumSignedReg+=(int64_t)cValueAux;
            s32Length++;
            *pcStringBack=*pcString;
            pcStringBack++;
        }
        else if((*pcString=='\b') && (0 != s32Length))
        {
            pcStringBack--;
            if((*(pcStringBack)>='0') && (*(pcStringBack)<='9'))
            {
                s64NumSignedReg/=10;
            }
            if(*(pcStringBack)=='-')
            {
                s32Sign=0;
            }
            s32Length--;
        }
        else if (*pcString!='\b')
        {
            s32Length =(int32_t)CONV_enNAN;
            break;
        }
        else{}
        pcString++;
    }


    if(s32Sign)
    {
        s64NumSignedReg*=-1;
        s32Length++;
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




