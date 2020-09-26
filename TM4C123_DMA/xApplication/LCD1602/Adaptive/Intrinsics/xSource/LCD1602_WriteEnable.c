/**
 *
 * @file LCD1602_WriteEnable.c
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

#include <xApplication/LCD1602/Adaptive/Intrinsics/xHeader/LCD1602_WriteEnable.h>

#include <xApplication/LCD1602/Adaptive/Intrinsics/xHeader/LCD1602_Delay.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void LCD1602__vPrepareWriteEnable(void)
{
    GPIO__vSetData(LCD1602_PORT_E, LCD1602_E, 0u);
}

/* Pulse of 2 us */
void LCD1602__vPulseWriteEnable(void)
{
    GPIO__vSetData(LCD1602_PORT_E, LCD1602_E, LCD1602_E);
    LCD1602__vDelay(0.6f);
    GPIO__vSetData(LCD1602_PORT_E, LCD1602_E, 0u);
    LCD1602__vDelay(0.6f);
}



