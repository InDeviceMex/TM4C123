/*
 * CONV.h
 *
 *  Created on: 11 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_DRIVER_CONV_H_
#define HEADER_DRIVER_CONV_H_



#include <stdint.h>

#define INT2STRINGMAX   (21u)
#define HEX2STRINGMAX   (19u)
#define OCT2STRINGMAX   (24u)
#define BIN2STRINGMAX   (40u)



typedef enum
{
    CONV_enOK = 0u,
    CONV_enERROR = 1u,
    CONV_enNAN = 0xFFu,
}CONV_nSTATUS;


uint32_t CONV_u32StringLength(const char* pcString, uint32_t u32MaxSize);
CONV_nSTATUS CONV_enIsDigit(char cCharacter);

uint8_t CONV__u8IntToString(int64_t s64Number, char* pcConv);
uint8_t CONV__u8UIntToString(uint64_t u64Number, char* pcConv);
uint8_t CONV__u8HexToString(uint64_t u64Number, char* pcConv);
uint8_t CONV__u8HEXToString(uint64_t u64Number, char* pcConv);
uint8_t CONV__u8OctToString(uint64_t u64Number, char* pcConv);
uint8_t CONV__u8BinToString(uint64_t u64Number, char* pcConv);
uint8_t CONV__u8IntToStringCeros(int64_t s64Number,int8_t s8CerosLeft, char* pcConv);
uint8_t CONV__u8DIntToString(int64_t s64Number,uint8_t u8Positive,uint8_t u8Padding0,uint8_t u8Deci, char* pcConv);
uint8_t CONV__u8FloatToString(double dNumber,uint8_t u8Positive,uint8_t u8Padding0,int32_t s32Enteros,int32_t s32Decimals,char* pcConv);




int32_t CONV__s32String2Hex(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2Oct(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2Bin(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2Int(const char* pcString,int64_t* s64NumSigned );
int32_t CONV__s32String2UInt (const char* pcString,uint64_t* u64NumUnsigned );
int32_t CONV__s32String2Float(const char* pcString,int8_t s8Decimals, float* pfConversion);



#endif /* HEADER_DRIVER_CONV_H_ */
