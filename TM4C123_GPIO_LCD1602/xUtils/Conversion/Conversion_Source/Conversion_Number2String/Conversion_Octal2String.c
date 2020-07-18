/**
 *
 * @file Conversion_Octal2String.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Octal2String.h>

#include <stdint.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>

#define OCT2STRINGMAX   (24u)

const char CONV_pc8Octal[8]={'0','1','2','3','4','5','6','7'};

uint8_t CONV__u8Oct2String(uint64_t u64Number, char* pcConv)
{
    CONV_nSTATUS enStatus= CONV_enERROR;
    char  pcConvTemp[OCT2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[OCT2STRINGMAX - 1u];
    uint8_t u8Length =0u;

    enStatus =CONV__enConversion(pcPointerActual, u64Number,&u8Length, 8u,CONV_pc8Octal);
    if(CONV_enOK == enStatus)
    {
        u8Length++;
        pcPointerActual-= u8Length;
        *pcPointerActual = '0';
        enStatus=CONV__enInversion(pcPointerActual,pcConv,u8Length);
        if(CONV_enERROR == enStatus)
        {
            u8Length=0u;
        }
    }
    return u8Length;
}


