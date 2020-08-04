/**
 *
 * @file Conversion_Float2String.c
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
 * @verbatim 18 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */

#include <stdint.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Float2String.h>
#include <xUtils/Conversion/Conversion_Number2String/xHeader/Conversion_Integer2String.h>

const int64_t CONV_s64Dec[16]=
{0,10,100,1000,10000,100000,1000000,10000000,100000000,
 1000000000,10000000000,100000000000,1000000000000,
 10000000000000,100000000000000,1000000000000000
};
/* ToDo Actualizar Float*/
uint8_t CONV__u8Float2String(double dNumber,uint8_t u8Positive,uint8_t u8Padding0,int32_t s32Enteros,int32_t s32Decimals,char* pcConv)
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
    u8Values= CONV__u8DInt2String((int64_t)dNumber,u8Positive,u8Padding0,(uint8_t)s32Enteros, pcConv);/*pcConvierte la parte entera del numero*/
    if(u8NegativeNumber== (uint8_t)1)
    {
        pcConv[0]='-';
    }

    pcConv[u8Values]='.';/*agrega un '.' en la posicion del fin de cadena*/
    u8Values++;/*aumenta a la siguiente posicion*/
    u8Values+=CONV__u8DInt2String((int64_t)CONV_s64Deci,0u,1u,(uint8_t)s32Decimals, (char*)&pcConv[u8Values]);/*pcConvierte la parte dDecimal despues del punto*/
    return u8Values;/*regresa la cantidad de digitos pcConvertidos*/
}
