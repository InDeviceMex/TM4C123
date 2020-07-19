/**
 *
 * @file Conversion_IsNewLineReturn.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number/Conversion_IsNewLineReturn.h>

#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>

CONV_nNEWLINERETURN CONV_enIsNewLineReturn(char cCharacter)
{
    CONV_nNEWLINERETURN enStatus= CONV_enNEWLINERETURN_NO;
    if((cCharacter == '\n') || (cCharacter == '\r') )
    {
        enStatus=CONV_enNEWLINERETURN_OK;
    }
    return enStatus;
}


