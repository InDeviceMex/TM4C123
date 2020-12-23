/*
 * PRINTF.h
 *
 *  Created on: 15 may. 2020
 *      Author: vyldram
 */

#ifndef HEADER_APP_PRINTF_H_
#define HEADER_APP_PRINTF_H_


#include <xUtils/Standard/Standard.h>
#include <stdarg.h>
#include <xApplication/CONVERSION/Generic/xHeader/CONV.h>

/* internal conv flag definitions*/


int32_t user_printf(const char* pcFormat, ...);
int32_t user_sprintf_(char* pcBuffer, const char* pcFormat, ...);
int32_t  user_snprintf_(char* pcBuffer, size_t szCount, const char* pcFormat, ...);
int32_t user_vsnprintf_(char* pcBuffer, size_t szCount, const char* pcFormat, va_list vaList);
int32_t user_vprintf_(const char* pcFormat, va_list vaList);
int32_t user_fctprintf(void (*pfvFunctionOut)(char cCharacter, void* pvFunctArguments), void* pvPrintArguments, const char* pcFormat, ...);

#endif /* HEADER_APP_PRINTF_H_ */
