/**
 *
 * @file Conversion_Conversion.h
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
#ifndef XUTILS_CONVERSION_CONVERSION_HEADER_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_CONVERSION_CONVERSION_H_
#define XUTILS_CONVERSION_CONVERSION_HEADER_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_CONVERSION_CONVERSION_H_

#include <stdint.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Enum.h>

CONV_nSTATUS CONV__enConversion(char* pcPointer, uint64_t u64Number,uint8_t* u8Length, uint8_t u8Base ,const char* pcLookUpTable);




#endif /* XUTILS_CONVERSION_CONVERSION_HEADER_CONVERSION_NUMBER2STRING_CONVERSION_PRIMITIVES_CONVERSION_CONVERSION_H_ */
