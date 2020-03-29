/*
 * CONV.c
 *
 *  Created on: 8 mar. 2018
 *      Author: InDev
 */

#include "CONV.h"




uint8_t DInt_To_String(int64_t number,uint8_t deci, int8_t* conv)
{
    int8_t convTemp[21]={0}; //longitud maxima de long 12 digitos con signo
    register uint8_t deciActual=0;
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register int64_t  numberReg = number;//paso el numero a un registro para aumentar rendimiento

    pointerActual = &convTemp[21 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion
    if( numberReg < 0)
    {
        numberReg*=-1;
    }

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg % 10; //obtiene el digito de menor peso
        //num1=abs(num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *pointerActual = (int8_t)num  + '0'; //convierte el valor en caracter
        deciActual++;
    }  while((numberReg /= 10) || ((uint8_t)deciActual<deci)); //mientras exista un digito sigue el ciclo

    if ( number < 0)
    {
        pointerActual--;
        *pointerActual = '-';//si el numero es negativo guarda el signo negativo
    }

    numberReg=convTemp+21-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // convTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //conv="-156\0"
        ((int8_t *)conv)[i] = ((const int8_t *)pointerActual)[i];
    }

    return (uint8_t)numberReg - 1;
}



uint8_t Int_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[21]={0}; //longitud maxima de long 12 digitos con signo
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register int64_t  numberReg = number;//paso el numero a un registro para aumentar rendimiento

    pointerActual = &convTemp[21 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion
    if( numberReg < 0)
    {
        numberReg*=-1;
    }

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg % 10; //obtiene el digito de menor peso
        //num1=abs(num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *pointerActual = num  + '0'; //convierte el valor en caracter
    }  while((numberReg /= 10)); //mientras exista un digito sigue el ciclo

    if ( number < 0)
    {
        pointerActual--;
        *pointerActual = '-';//si el numero es negativo guarda el signo negativo
    }

    numberReg=convTemp+21-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // convTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //conv="-156\0"
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}



uint8_t Int_To_String_Ceros(int64_t number,int8_t cerosLeft, int8_t* conv)
{
    int8_t convTemp[30]={0}; //longitud maxima de long 12 digitos con signo
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register int64_t  numberReg = number;//paso el numero a un registro para aumentar rendimiento

    if(cerosLeft>29)
    {
        cerosLeft=29;
    }
    pointerActual = &convTemp[30 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion
    if( numberReg < 0)
    {
        numberReg*=-1;
    }

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg % 10; //obtiene el digito de menor peso
        //num1=abs(num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *pointerActual = num  + '0'; //convierte el valor en caracter
        cerosLeft--;
    }  while((numberReg /= 10)&&(pointerActual>convTemp)); //mientras exista un digito sigue el ciclo

    while(cerosLeft>0)
    {
        pointerActual--;
        *pointerActual ='0';
        cerosLeft--;
    }
    if ( number < 0)
    {
        pointerActual--;
        *pointerActual = '-';//si el numero es negativo guarda el signo negativo
    }

    numberReg=convTemp+30-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // convTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //conv="-156\0"
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}




uint8_t UInt_To_String(uint64_t number, int8_t* conv)
{
    int8_t convTemp[23]={0}; //longitud maxima de long 12 digitos con signo
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = number;//paso el numero a un registro para aumentar rendimiento

    pointerActual = &convTemp[21 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg % 10; //obtiene el digito de menor peso
        //num1=abs(num);//un if es mas rapido que una multiplicacion por -1 si es negativo el valor
        *pointerActual = num  + '0'; //convierte el valor en caracter
    }  while((numberReg /= 10)); //mientras exista un digito sigue el ciclo


    numberReg=convTemp+21-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        //toma como base para copiar el ultimo digito utilizado
        //ejemplo
       // convTemp="xxxxxxx-156\0"
       // punteroActual = "-156\0"
        //conv="-156\0"
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}


const int64_t dec[16]=
{0,10,100,1000,10000,100000,1000000,10000000,100000000,
 1000000000,10000000000,100000000000,1000000000000,
 10000000000000,100000000000000,1000000000000000
};

uint8_t Float_To_String(double number,int32_t decimals,int8_t* conv)
{
    register int64_t deci=0; //contiene los decimales en version entero
    register double decimal=0;//contiene el valor de decimales en version double
    register uint8_t values=0;//cuantos digitos se imprimen

    decimal=number-(int64_t)number; //obtiene la parte decimal
    decimal*=dec[decimals];//hace la multiplicacion depende de cuantos decimales necesitemos
    deci=(int64_t)decimal;//castea la parte decimal a un int64_t (64 bits)
    if(deci<0)//si el numero es negativo elimina el signo
      deci*=-1;
    values= DInt_To_String((int64_t)number,1, conv); //convierte la parte entera del numero
    conv[values]='.';//agrega un '.' en la posicion del fin de cadena
    values++;//aumenta a la siguiente posicion
    values+=DInt_To_String(deci,decimals, &conv[values]);//convierte la parte decimal despues del punto
    return values;//regresa la cantidad de digitos convertidos
}


const int8_t HEXA[16]=
{
 '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
};

const int8_t hexa[16]=
{
 '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'
};

uint8_t Hex_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[19]={0}; //longitud maxima de long 16 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t) number;//paso el numero a un registro para aumentar rendimiento

    pointerActual = &convTemp[19 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0xF; //obtiene el digito de menor peso
        *pointerActual = hexa[num]; //convierte el valor en caracter
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
       // numeriReg>>=4;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo

    pointerActual--;
    *pointerActual = 'x';
    pointerActual--;
    *pointerActual = '0';
    numberReg=convTemp+19-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}

uint8_t HEX_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[19]={0}; //longitud maxima de long 16 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t)number;//paso el numero a un registro para aumentar rendimiento

    pointerActual = &convTemp[19 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0xF; //obtiene el digito de menor peso
        *pointerActual = HEXA[num]; //convierte el valor en caracter
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo

    pointerActual--;
    *pointerActual = 'X';
    pointerActual--;
    *pointerActual = '0';
    numberReg=convTemp+19-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}


uint8_t Oct_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[24]={0}; //longitud maxima de long 22 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t)number;//paso el number a un registro para aumentar rendimiento

    pointerActual = &convTemp[24 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0x7; //obtiene el digito de menor peso
        *pointerActual = num+'0'; //convierte el valor en caracter
        numberReg>>=1;
        numberReg>>=1;
        numberReg>>=1;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo


    pointerActual--;
    *pointerActual = '0';//si el number es negativo guarda el signo negativo

    numberReg=convTemp+24-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}


uint8_t Bin_To_String(int64_t number, int8_t* conv)
{
    int8_t convTemp[40]={0}; //longitud maxima de long 22 digitos
    register int8_t *pointerActual;
    register int32_t num=0;
    register int8_t i=0;
    register uint64_t  numberReg = (uint64_t)number;//paso el number a un registro para aumentar rendimiento

    pointerActual = &convTemp[40 - 1]; //empezamos llenando desde la ultima posicion
    *pointerActual = 0; //guarda el fin de cadena en la ultima posicion

    do {
        pointerActual--;//se decrementa la posicion donse guardara el valor
        num=numberReg&0x1; //obtiene el digito de menor peso
        *pointerActual = num+'0'; //convierte el valor en caracter
        numberReg>>=1;
    }  while((numberReg > 0)); //mientras exista un digito sigue el ciclo


    pointerActual--;
    *pointerActual = 'b';//si el number es negativo guarda el signo negativo

    numberReg=convTemp+40-pointerActual;//realiza la resta de cuantos caracteres se utilizaron
    for (i = 0; i< numberReg; i++) //hace un ciclo burbuja optimizado
    {
        ((uint8_t *)conv)[i] = ((const uint8_t *)pointerActual)[i];
    }

    return numberReg - 1;
}




int32_t String_To_Hex(int8_t* string,int64_t*num)
{
    int32_t length=0;
      (*num)=0;
      while((*string) && ( *string!='0'))
      {
          string++;
      }
      while((*string)&& (*string)!='X' && (*string)!='x')
      {
          string++;
      }

       while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
       {
           if(*string>='0' && *string<='9')
           {
               (*num)<<=4;
               (*num)+=*string-'0';
               length++;
           }
           else if(*string>='A' && *string<='F')
           {
              (*num)<<=4;
              (*num)+=(*string-'A')+10;
              length++;
           }
           else if(*string>='a' && *string<='f')
           {
              (*num)<<=4;
              (*num)+=(*string-'a')+10;
              length++;
           }
           else if((*string==0x8)&& length)
           {
               (*num)>>=4;
               length--;
           }
           string++;
       }
       return length;
}


//todo modificar HEXhex Oct BIn and FLoat como se modifico INt

int32_t String_To_HEX(int8_t* string,int64_t*num)
{
    int32_t length=0;
    (*num)=0;
    while((*string) && ( *string!='0'))
    {
        string++;
    }
    while((*string)&& (*string)!='X' && (*string)!='x')
    {
        string++;
    }

     while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
     {
         if(*string>='0' && *string<='9')
         {
             (*num)<<=4;
             (*num)+=*string-'0';
             length++;
         }
         else if(*string>='A' && *string<='F')
         {
            (*num)<<=4;
            (*num)+=(*string-'A')+10;
            length++;
         }
         else if(*string>='a' && *string<='f')
         {
            (*num)<<=4;
            (*num)+=(*string-'a')+10;
            length++;
         }
         else if((*string==0x8)&& length)
         {
             (*num)>>=4;
             length--;
         }
         string++;
     }
     return length;
}


int32_t String_To_Oct(int8_t* string,int64_t*num)
{
    int32_t length=0;
    (*num)=0;
    while((*string) && *string!='0')
    {
        string++;
    }


    if(*string!='0')
        return length;
    string++;

    while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
    {
        if(*string>='0' && *string<='7')
        {
            (*num)<<=3;
            (*num)+=*string-'0';
            length++;
        }
        else if((*string==0x8)&& length)
        {
            (*num)>>=3;
            length--;
        }
        string++;
    }
    return length;
}



int32_t String_To_Bin(int8_t* string,int64_t*num)
{
    int32_t length=0;
    (*num)=0;
    while((*string) && (*string!='b'))
    {
        string++;
    }


    if(*string!='b')
        return length;
    string++;

    while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
    {
        if(*string>='0' && *string<='1')
        {
            (*num)<<=1;
            (*num)+=*string-'0';
            length++;
        }
        else if((*string==0x8)&& length)
        {
            (*num)>>=1;
            length--;
        }
        string++;
    }
    return length;
}


int32_t String_To_Int(int8_t* string,int64_t*num)
{
    register int32_t sign=0;
    int32_t length=0;
    (*num)=0;

    while(((*string) && ((*string<'0') || (*string>'9')) && *string!='-'))
    {
        string++;
    }
    if(*string=='-')
    {
        sign=1;
        string++;
    }

    while((*string)&&(*string!=0xA)&&(*string!=0xD)&&(*string!=0x1B))
    {
        if(*string>='0' && *string<='9')
        {
            (*num)*=10;
            (*num)+=*string-'0';
            length++;
        }
        else if((*string==0x8)&& length)
        {
            (*num) /= 10;
            length--;
        }
        string++;
    }
    if(length)
    {
        if(sign)
            (*num)*=-1;
    }
    return length;

}

int32_t String_To_UInt(int8_t* string,uint64_t* numU )
{
    int64_t numS=0;
    if(!String_To_Int(string,&numS))
        return 0;
    *numU= (uint64_t)numS;

    return 1;
}




float String_To_Float(int8_t* string,int8_t deci)
{
    float numInt=0;
    float numDec=0;
    float numAux=1;
    float numD=0;
    float num=0;
    int32_t find=0;
    int8_t deciActual=0;
    while((*string) && (deciActual<deci))
    {
      if((*string=='.') && (find==0))
      {
          find=1;
      }
      else if(find==0)
      {
          numInt*=10;
          if((*string>='0') && (*string<='9'))
                numInt+=*string-'0';
          else
             return 0;
      }
      else if(find==1)
      {
          numAux/=10;
          if((*string>='0') && (*string<='9'))
          {
                numDec=*string-'0';
                numDec*=numAux;
                numD+=numDec;
          }
          deciActual++;
         // else
           //  return 0;
      }
      else
          return 0;
      string++;
    }
    num=numInt+numD;
    return num;
}

