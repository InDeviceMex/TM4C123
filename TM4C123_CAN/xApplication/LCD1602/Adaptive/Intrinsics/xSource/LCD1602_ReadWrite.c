/**
 *
 * @file LCD1602_ReadWrite.c
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
#include <xApplication/LCD1602/Adaptive/Intrinsics/xHeader/LCD1602_ReadWrite.h>

#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Enum.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void LCD1602__vSetReadWrite(LCD1602_nRW enMode)
{
    GPIO__vSetData(LCD1602_PORT_RW, LCD1602_RW, ((uint32_t) enMode) << LCD1602_RW_POS);
}


