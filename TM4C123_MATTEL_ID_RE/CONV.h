/*
 * CONV.h
 *
 *  Created on: 8 mar. 2018
 *      Author: InDev
 */

#ifndef CONV_H_
#define CONV_H_

#include <stdint.h>

uint8_t Int_To_String(int64_t number, int8_t* conv);
uint8_t Int_To_String_Ceros(int64_t number,int8_t cerosLeft, int8_t* conv);
uint8_t DInt_To_String(int64_t number,uint8_t deci, int8_t* conv);
uint8_t UInt_To_String(uint64_t number, int8_t* conv);
uint8_t Hex_To_String(int64_t number, int8_t* conv);
uint8_t HEX_To_String(int64_t number, int8_t* conv);
uint8_t Oct_To_String(int64_t number, int8_t* conv);
uint8_t Bin_To_String(int64_t number, int8_t* conv);
uint8_t Float_To_String(double number,int32_t decimals,int8_t* conv);



int32_t String_To_Hex(int8_t* string,int64_t*num);
int32_t String_To_HEX(int8_t* string,int64_t*num);
int32_t String_To_Oct(int8_t* string,int64_t*num);
int32_t String_To_Bin(int8_t* string,int64_t*num);
int32_t String_To_Int(int8_t* string,int64_t*num);
int32_t String_To_UInt(int8_t* string,uint64_t* numU );
float String_To_Float(int8_t* string,int8_t deci);

#endif /* CONV_H_ */
