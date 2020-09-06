/**
 *
 * @file Conversion_String2Integer.c
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
#include <xUtils/Standard/Standard.h>
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>
#include <xUtils/Conversion/Conversion_Number/Conversion_Number.h>
#include <xUtils/Conversion/Conversion_String2Number/xHeader/Conversion_String2Integer.h>



int32_t CONV__s32String2Int(const char* pcString,int64_t* s64NumSigned )
{
    int32_t s32Length=0;
    int64_t s64NumSignedReg=0;

    CONV_nSTATUS enStatus= CONV_enSTATUS_ERROR;
    CONV_nDIGIT enDigit= CONV_enDIGIT_NO;
    CONV_nBACKSPACE enBackSpace= CONV_enBACKSPACE_NO;
    CONV_nSIGNED enSign=CONV_enSIGNED_POSITIVE;

    char cStringBack[30]={0};
    char* pcStringBack=cStringBack;
    uint8_t  u8ValueAux=0;

    if((uint32_t)0u == (uint32_t)pcString)
    {
        /* The following situation is only valid when CONV_enSTATUS_OK is 0 and CONV_enSTATUS_ERROR is 1*/
        enStatus=(CONV_nSTATUS)CONV__enIsNewLineReturn(*pcString);
        enStatus&=(CONV_nSTATUS)CONV__enIsScape(*pcString);
        enStatus&=(CONV_nSTATUS)CONV__enIsNull(*pcString);
        while(enStatus)
        {

            enDigit=CONV__enIsDigit(*pcString);
            enBackSpace=CONV__enIsBackSpace(*pcString);

            if((*pcString=='-') && (s32Length==0))
            {
                enSign=CONV_enSIGNED_NEGATIVE;
                s32Length++;
                *pcStringBack=*pcString;
                pcStringBack+=1u;
            }
            else if(CONV_enDIGIT_OK == enDigit)
            {
                s64NumSignedReg*=10;
                u8ValueAux= (uint8_t)*pcString;
                u8ValueAux-=(uint8_t)'0';
                s64NumSignedReg+=(int64_t)u8ValueAux;
                s32Length++;
                *pcStringBack=*pcString;
                pcStringBack+=1u;
            }
            else if((CONV_enBACKSPACE_OK==enBackSpace) && (0 != s32Length))
            {
                pcStringBack-=1u;
                enDigit=CONV__enIsDigit(*pcStringBack);
                if(CONV_enDIGIT_OK == enDigit)
                {
                    s64NumSignedReg/=10;
                }
                if(*(pcStringBack)=='-')
                {
                    enSign=CONV_enSIGNED_POSITIVE;
                }
                s32Length--;
            }
            else if (CONV_enBACKSPACE_OK==enBackSpace)
            {
                s32Length =(int32_t)CONV_enNAN;
                break;
            }
            else{}

            pcString+=1u;

            enStatus=(CONV_nSTATUS)CONV__enIsNewLineReturn(*pcString);
            enStatus&=(CONV_nSTATUS)CONV__enIsScape(*pcString);
            enStatus&=(CONV_nSTATUS)CONV__enIsNull(*pcString);
        }


        if(CONV_enSIGNED_NEGATIVE == enSign)
        {
            s64NumSignedReg*=-1;
            s32Length++;
        }
        *s64NumSigned=s64NumSignedReg;
    }
    return s32Length;
}

