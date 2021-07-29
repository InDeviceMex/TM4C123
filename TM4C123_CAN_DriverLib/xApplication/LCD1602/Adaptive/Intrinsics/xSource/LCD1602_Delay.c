/**
 *
 * @file LCD1602_Delay.c
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
#include <xApplication/LCD1602/Adaptive/Intrinsics/xHeader/LCD1602_Delay.h>

#include <xApplication_MCU/Core/SYSTICK/SYSTICK.h>

void LCD1602__vDelay(float32_t f32Delay)
{
    SYSTICK__vDelayUs((uint32_t) f32Delay);
}


