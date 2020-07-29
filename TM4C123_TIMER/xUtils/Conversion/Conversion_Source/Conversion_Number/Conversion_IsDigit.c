/**
 *
 * @file Conversion_IsDigit.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number/Conversion_IsDigit.h>

#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>

CONV_nDIGIT CONV_enIsDigit(char cCharacter)
{
    CONV_nDIGIT enStatus= CONV_enDIGIT_NO;
    if((cCharacter >= '0') && (cCharacter <= '9'))
    {
        enStatus=CONV_enDIGIT_OK;
    }

    return enStatus;
}
