/**
 *
 * @file Conversion_Inversion.c
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
#include <xUtils/Conversion/Conversion_Number2String/Conversion_Primitives/xHeader/Conversion_Inversion.h>

CONV_nSTATUS CONV__enInversion(const char* const pcPointerIn,char* const pcPointerOut,uint8_t u8Length)
{
    CONV_nSTATUS enStatus= CONV_enSTATUS_ERROR;
    uint8_t u8I=0;
    const char* pcPointerInAux=0u;
    char* pcPointerOutAux=0u;
    if(((uint32_t)0!=(uint32_t)pcPointerIn) && ((uint32_t)0!=(uint32_t)pcPointerOut))
    {
        enStatus= CONV_enSTATUS_OK;
        pcPointerOutAux=pcPointerOut;
        pcPointerInAux=pcPointerIn;
        for (u8I = 0u; u8I<=u8Length; u8I++) /*hace un ciclo burbuja optimizado*/
        {
            *pcPointerOutAux= *pcPointerInAux;
            pcPointerOutAux+=1u;
            pcPointerInAux+=1u;
        }
    }
    return enStatus;
}




