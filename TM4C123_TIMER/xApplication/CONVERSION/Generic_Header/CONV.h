/*
 * CONV.h
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_DRIVER_CONV_H_
#define HEADER_DRIVER_CONV_H_



#include <stdint.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Number/Conversion_Number.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_Number2String/Conversion_Number2String.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_String2Number/Conversion_String2Number.h>
#include <xUtils/Conversion/Conversion_Header/Conversion_String/Conversion_String.h>

int32_t CONV__s32String2Hex(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2Oct(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2Bin(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2UInt (const char* pcString,uint64_t* u64NumUnsigned );
int32_t CONV__s32String2Float(const char* pcString,int8_t s8Decimals, float* pfConversion);

#endif /* HEADER_DRIVER_CONV_H_ */
