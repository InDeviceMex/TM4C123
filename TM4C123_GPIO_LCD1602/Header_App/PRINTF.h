/*
 * PRINTF.h
 *
 *  Created on: 15 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_APP_PRINTF_H_
#define HEADER_APP_PRINTF_H_


#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include "CONV.h"

#define PRINF_DEFAULT_FLOAT_PRECISION (6U)
#define PRINF_MAX_VALUE_FLOAT         (1e9)
// internal conv flag definitions
typedef enum
{

    PRINTF_enFLAGS_ZEROPAD   =(1U <<  0U),
    PRINTF_enFLAGS_LEFT      =(1U <<  1U),
    PRINTF_enFLAGS_PLUS      =(1U <<  2U),
    PRINTF_enFLAGS_SPACE     =(1U <<  3U),
    PRINTF_enFLAGS_HASH      =(1U <<  4U),
    PRINTF_enFLAGS_UPPERCASE =(1U <<  5U),
    PRINTF_enFLAGS_CHAR      =(1U <<  6U),
    PRINTF_enFLAGS_SHORT     =(1U <<  7U),
    PRINTF_enFLAGS_LONG      =(1U <<  8U),
    PRINTF_enFLAGS_LONG_LONG =(1U <<  9U),
    PRINTF_enFLAGS_PRECISION =(1U << 10U),
    PRINTF_enFLAGS_ADAPT_EXP =(1U << 11U),

}PRINTF_nFLAGS;

typedef enum
{
    PRINF_enBUFFER_SIZE_NUMBER= 32u,
    PRINF_enBUFFER_SIZE_FLOAT = 32u,
}PRINTF_nBUFFER_SIZE;

typedef void (*PRINF_FUNCTION_OUT_TypeDef)(char cCharacter, void* pvBuffer, size_t sIndex, size_t sMaxLenght);

typedef struct {
  void  (*pfvFunction)(char cCharacter, void* pvArguments);
  void* pvArguments;
} PRINTF_FUNCTION_OUT_WRAPPER_TypeDef;


#endif /* HEADER_APP_PRINTF_H_ */
