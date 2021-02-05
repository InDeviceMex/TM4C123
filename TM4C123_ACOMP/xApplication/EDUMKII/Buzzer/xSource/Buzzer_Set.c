/**
 *
 * @file Buzzer_Set.c
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
 * @verbatim 17 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 17 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xApplication/EDUMKII/Buzzer/xHeader/Buzzer_Set.h>
#include <xApplication/EDUMKII/Buzzer/xHeader/Buzzer_Enum.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/TIMER/TIMER.h>

void EDUMKII_Buzzer_vSet(uint32_t u32Value)
{
    uint32_t u32TimerValue = 0UL;
    if(1023UL >= u32Value)
    {
        u32TimerValue = u32Value * 10240U;
        u32TimerValue >>= 10UL;

        if(0UL == u32Value)
        {
            u32TimerValue = 10240U-1U;
        }
        else
        {
            u32TimerValue = 10240U-1U - u32TimerValue;
        }
        TIMER__vSetMatch(EDUMKII_BUZZER_TIMER,(uint64_t) u32TimerValue);
    }
}
