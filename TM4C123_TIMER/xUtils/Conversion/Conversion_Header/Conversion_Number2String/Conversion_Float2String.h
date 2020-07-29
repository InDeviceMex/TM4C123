/**
 *
 * @file Conversion_Float2String.h
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
#ifndef XUTILS_CONVERSION_CONVERSION_HEADER_CONVERSION_NUMBER2STRING_CONVERSION_FLOAT2STRING_H_
#define XUTILS_CONVERSION_CONVERSION_HEADER_CONVERSION_NUMBER2STRING_CONVERSION_FLOAT2STRING_H_

#include <stdint.h>

uint8_t CONV__u8Float2String(double dNumber,uint8_t u8Positive,uint8_t u8Padding0,int32_t s32Enteros,int32_t s32Decimals,char* pcConv);

#endif /* XUTILS_CONVERSION_CONVERSION_HEADER_CONVERSION_NUMBER2STRING_CONVERSION_FLOAT2STRING_H_ */
