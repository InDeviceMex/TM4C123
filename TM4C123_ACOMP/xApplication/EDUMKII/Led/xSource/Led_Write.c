/**
 *
 * @file Led_Write.c
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
#include <xApplication/EDUMKII/Led/xHeader/Led_Write.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/GPIO/GPIO.h>
#include <xDriver_MCU/TIMER/TIMER.h>



void EDUMKII_Led_vWriteDigital(EDUMKII_nLED enLedSelect, uint32_t u32Value)
{
    if((uint32_t) EDUMKII_enLED_RED == ((uint32_t) enLedSelect & (uint32_t) EDUMKII_enLED_RED))
    {
        GPIO__vSetData(EDUMKII_LED_RED_PORT, EDUMKII_LED_RED_PIN, (u32Value & (uint32_t) EDUMKII_enLED_RED) << 3UL);
    }

    if((uint32_t) EDUMKII_enLED_GREEN == ((uint32_t) enLedSelect & (uint32_t) EDUMKII_enLED_GREEN))
    {
        GPIO__vSetData(EDUMKII_LED_GREEN_PORT, EDUMKII_LED_GREEN_PIN, (u32Value & (uint32_t) EDUMKII_enLED_GREEN) << 2UL);
    }

    if((uint32_t) EDUMKII_enLED_BLUE == ((uint32_t) enLedSelect & (uint32_t) EDUMKII_enLED_BLUE))
    {
        GPIO__vSetData(EDUMKII_LED_BLUE_PORT, EDUMKII_LED_BLUE_PIN,(u32Value & (uint32_t) EDUMKII_enLED_BLUE) << 2UL);
    }

}

void EDUMKII_Led_vWritePWM(EDUMKII_nLED enLedSelect, uint32_t u32Value)
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

        if((uint32_t) EDUMKII_enLED_RED == ((uint32_t) enLedSelect & (uint32_t) EDUMKII_enLED_RED))
        {
            TIMER__vSetMatch(EDUMKII_LED_RED_TIMER,(uint64_t) u32TimerValue);
        }

        if((uint32_t) EDUMKII_enLED_GREEN == ((uint32_t) enLedSelect & (uint32_t) EDUMKII_enLED_GREEN))
        {
            TIMER__vSetMatch(EDUMKII_LED_GREEN_TIMER,(uint64_t) u32TimerValue);
        }

        if((uint32_t) EDUMKII_enLED_BLUE == ((uint32_t) enLedSelect & (uint32_t) EDUMKII_enLED_BLUE))
        {
            TIMER__vSetMatch(EDUMKII_LED_BLUE_TIMER,(uint64_t) u32TimerValue);
        }
    }
}


void EDUMKII_Led_vWriteRGB(uint32_t u32ValueRed, uint32_t u32ValueGreen, uint32_t u32ValueBlue)
{
    EDUMKII_Led_vWritePWM(EDUMKII_enLED_RED, u32ValueRed);
    EDUMKII_Led_vWritePWM(EDUMKII_enLED_GREEN, u32ValueGreen);
    EDUMKII_Led_vWritePWM(EDUMKII_enLED_BLUE, u32ValueBlue);
}
