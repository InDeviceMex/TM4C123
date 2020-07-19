/**
 *
 * @file Conversion_IsNull.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number/Conversion_IsNull.h>

#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>

CONV_nNULL CONV_enIsNull(char cCharacter)
{
    CONV_nNULL enStatus= CONV_enNULL_NO;
    if(cCharacter == '\0')
    {
        enStatus=CONV_enNULL_OK;
    }
    return enStatus;
}



