/**
 *
 * @file Conversion_IsBackSpace.c
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
#include <xUtils/Conversion/Conversion_Header/Conversion_Number/Conversion_IsBackSpace.h>

#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>

CONV_nBACKSPACE CONV_enIsBackSpace(char cCharacter)
{
    CONV_nBACKSPACE enStatus= CONV_enBACKSPACE_NO;
    if(cCharacter == '\b')
    {
        enStatus=CONV_enBACKSPACE_OK;
    }
    return enStatus;
}


