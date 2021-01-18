/**
 *
 * @file Led_Enum.h
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
#ifndef XAPPLICATION_EDUMKII_LED_XHEADER_LED_ENUM_H_
#define XAPPLICATION_EDUMKII_LED_XHEADER_LED_ENUM_H_

#include <xUtils/Standard/Standard.h>


#define EDUMKII_LED_RED_DIGITAL (GPIO_enGPIOF3)
#define EDUMKII_LED_RED (GPIO_enT1CCP1_F3)
#define EDUMKII_LED_RED_PORT (GPIO_enPORT_F)
#define EDUMKII_LED_RED_PIN (GPIO_enPIN_3)
#define EDUMKII_LED_RED_TIMER (TIMER_enT1B)

#define EDUMKII_LED_GREEN_DIGITAL (GPIO_enGPIOB3)
#define EDUMKII_LED_GREEN (GPIO_enT3CCP1)
#define EDUMKII_LED_GREEN_PORT (GPIO_enPORT_B)
#define EDUMKII_LED_GREEN_PIN (GPIO_enPIN_3)
#define EDUMKII_LED_GREEN_TIMER (TIMER_enT3B)

#define EDUMKII_LED_BLUE_DIGITAL (GPIO_enGPIOC4)
#define EDUMKII_LED_BLUE (GPIO_enWT0CCP0)
#define EDUMKII_LED_BLUE_PORT (GPIO_enPORT_C)
#define EDUMKII_LED_BLUE_PIN (GPIO_enPIN_4)
#define EDUMKII_LED_BLUE_TIMER (TIMER_enWT0A)



typedef enum
{
    EDUMKII_enLED_NO = 0x0UL,
    EDUMKII_enLED_RED= 0x1UL,
    EDUMKII_enLED_GREEN = 0x2UL,
    EDUMKII_enLED_BLUE = 0x4UL,
    EDUMKII_enLED_ALL = 0x7UL
}EDUMKII_nLED;



#endif /* XAPPLICATION_EDUMKII_LED_XHEADER_LED_ENUM_H_ */
