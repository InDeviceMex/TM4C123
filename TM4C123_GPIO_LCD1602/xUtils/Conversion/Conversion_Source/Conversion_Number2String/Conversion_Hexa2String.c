/**
 *
 * @file Conversion_Hexa2String.c
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
 * @verbatim 17 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Hexa2String.h>

#include <stdint.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Primitives/Conversion_Primitives.h>

#define HEX2STRINGMAX   (19u)

const char CONV_pc8Hexa[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
uint8_t CONV__u8Hex2String(uint64_t u64Number, char* pcConv)
{
    CONV_nSTATUS enStatus= CONV_enERROR;
    char  pcConvTemp[HEX2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[HEX2STRINGMAX - 1u];
    uint8_t u8Length =0u;

    enStatus =CONV__enConversion(pcPointerActual, u64Number,&u8Length, 16u,CONV_pc8Hexa);
    if(CONV_enOK == enStatus)
    {
        u8Length++;
        pcPointerActual-= u8Length;
        *pcPointerActual = 'x';
        u8Length++;
        pcPointerActual--;
        *pcPointerActual = '0';
        enStatus=CONV__enInversion(pcPointerActual,pcConv,u8Length);
        if(CONV_enERROR == enStatus)
        {
            u8Length=0u;
        }
    }
    return u8Length;
}



const char CONV_pc8HEXA[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
uint8_t CONV__u8HEX2String(uint64_t u64Number, char* pcConv)
{
    CONV_nSTATUS enStatus= CONV_enERROR;
    char  pcConvTemp[HEX2STRINGMAX]={0};/*longitud maxima de long 16 digitos*/
    char  *pcPointerActual=&pcConvTemp[HEX2STRINGMAX - 1u];
    uint8_t u8Length =0u;

    enStatus =CONV__enConversion(pcPointerActual, u64Number,&u8Length, 16u,CONV_pc8HEXA);
    if(CONV_enOK == enStatus)
    {
        u8Length++;
        pcPointerActual-= u8Length;
        *pcPointerActual = 'X';
        u8Length++;
        pcPointerActual--;
        *pcPointerActual = '0';
        enStatus=CONV__enInversion(pcPointerActual,pcConv,u8Length);
        if(CONV_enERROR == enStatus)
        {
            u8Length=0u;
        }
    }
    return u8Length;
}

