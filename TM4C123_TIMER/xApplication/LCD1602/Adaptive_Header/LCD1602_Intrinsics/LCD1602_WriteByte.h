/**
 *
 * @file LCD1602_WriteByte.h
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
#ifndef XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_INTRINSICS_LCD1602_WRITEBYTE_H_
#define XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_INTRINSICS_LCD1602_WRITEBYTE_H_

#include <stdint.h>

void LCD1602__vWriteLowNible(uint8_t u8Data);
void LCD1602__vWriteHighNible(uint8_t u8Data);

#endif /* XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_INTRINSICS_LCD1602_WRITEBYTE_H_ */
