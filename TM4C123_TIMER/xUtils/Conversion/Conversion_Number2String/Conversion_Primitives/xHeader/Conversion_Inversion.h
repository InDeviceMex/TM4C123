/**
 *
 * @file Conversion_Inversion.h
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
#ifndef XUTILS_CONVERSION_XHEADER_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_CONVERSION_INVERSION_H_
#define XUTILS_CONVERSION_XHEADER_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_CONVERSION_INVERSION_H_

#include <stdint.h>
#include <xUtils/Conversion/xHeader/Conversion_Enum.h>

CONV_nSTATUS CONV__enInversion(const char* const pcPointerIn,char* const pcPointerOut,uint8_t u8Length);

#endif /* XUTILS_CONVERSION_XHEADER_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_CONVERSION_INVERSION_H_ */
