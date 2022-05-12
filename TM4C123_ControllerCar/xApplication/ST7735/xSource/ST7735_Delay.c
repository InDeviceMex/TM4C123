/**
 *
 * @file ST7735_Delay.c
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
 * @verbatim 18 feb. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 18 feb. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/ST7735/xHeader/ST7735_Delay.h>
#include <xApplication_MCU/Core/SYSTICK/SYSTICK.h>

void ST7735__vDelay1ms(uint32_t u32DelayArg)
{
    u32DelayArg *= 1000UL;
    SYSTICK__vDelayUs(u32DelayArg);
}


