/**
 *
 * @file Conversion_UInteger2String.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_UInteger2String.h>

#include <stdint.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>

#define INT2STRINGMAX   (21u)

const char CONV_pc8Decimal[10]={'0','1','2','3','4','5','6','7','8','9'};

uint8_t CONV__u8UInt2String(uint64_t u64Number, char* pcConv)
{
    char       pcConvTemp[INT2STRINGMAX]={0};/*longitud maxima de long 12 digitos con signo*/
    uint8_t u8Length =0u;
    CONV_nSTATUS enStatus= CONV_enERROR;
    char *pcPointerActual = &pcConvTemp[INT2STRINGMAX - 1u];/*empezamos llenando desde la ultima posicion*/

    enStatus =CONV__enConversion(pcPointerActual, u64Number,&u8Length, 10u,CONV_pc8Decimal);
    if(CONV_enOK == enStatus)
    {
        pcPointerActual-= u8Length;
        enStatus=CONV__enInversion(pcPointerActual,pcConv,u8Length);
        if(CONV_enERROR == enStatus)
        {
            u8Length=0u;
        }
    }
    return u8Length;
}




