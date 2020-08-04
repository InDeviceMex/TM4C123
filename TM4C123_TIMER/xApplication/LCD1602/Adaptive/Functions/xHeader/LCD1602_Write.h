/**
 *
 * @file LCD1602_Write.h
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
#ifndef XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_FUNCTIONS_LCD1602_WRITE_H_
#define XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_FUNCTIONS_LCD1602_WRITE_H_

#include <stdint.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Enum.h>

void LCD1602__vWritePin8Bit(uint8_t u8Data,LCD1602_nRS enMode);
void LCD1602__vWrite(uint8_t u8Data,LCD1602_nRS enMode);


#endif /* XAPPLICATION_LCD1602_ADAPTIVE_HEADER_LCD1602_FUNCTIONS_LCD1602_WRITE_H_ */
