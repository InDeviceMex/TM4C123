/**
 *
 * @file LCD1602_Write.c
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
#include <xApplication/LCD1602/Adaptive/Functions/xHeader/LCD1602_Write.h>

#include <stdint.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Enum.h>
#include <xApplication/LCD1602/Adaptive/Intrinsics/LCD1602_Intrinsics.h>


void LCD1602__vWritePin8Bit(uint8_t u8Data,LCD1602_nRS enMode)
{
    LCD1602__vSetWriteMode();
    LCD1602__vSetDataCommand(enMode);
    LCD1602__vPrepareWriteEnable();
    LCD1602__vWriteHighNible(u8Data);
    LCD1602__vPulseWriteEnable();
}

void LCD1602__vWrite(uint8_t u8Data,LCD1602_nRS enMode)
{
    LCD1602__vSetWriteMode();
    LCD1602__vSetDataCommand(enMode);

    LCD1602__vPrepareWriteEnable();
    LCD1602__vWriteHighNible(u8Data);
    LCD1602__vPulseWriteEnable();

    LCD1602__vPrepareWriteEnable();
    LCD1602__vWriteLowNible(u8Data);
    LCD1602__vPulseWriteEnable();

    LCD1602__vDelay(40.0f);
}

