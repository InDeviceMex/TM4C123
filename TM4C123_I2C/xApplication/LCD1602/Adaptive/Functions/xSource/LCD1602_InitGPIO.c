/**
 *
 * @file LCD1602_InitGPIO.c
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

#include <xApplication/LCD1602/Adaptive/Functions/xHeader/LCD1602_InitGPIO.h>

#include <xUtils/Standard/Standard.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/GPIO.h>

void LCD1602__vInitGPIO(void)
{
    /*Initial State of PIN as output*/
     GPIO__vEnDigital(LCD1602_PORT_E, LCD1602_E);
     GPIO__vEnDigital(LCD1602_PORT_RS, LCD1602_RS);
     GPIO__vEnDigital(LCD1602_PORT_RW, LCD1602_RW);
     GPIO__vEnDigital(LCD1602_PORT_D4, LCD1602_D4);
     GPIO__vEnDigital(LCD1602_PORT_D5, LCD1602_D5);
     GPIO__vEnDigital(LCD1602_PORT_D6, LCD1602_D6);
     GPIO__vEnDigital(LCD1602_PORT_D7, LCD1602_D7);

     GPIO__vDisAnalog(LCD1602_PORT_E, LCD1602_E);
     GPIO__vDisAnalog(LCD1602_PORT_RS, LCD1602_RS);
     GPIO__vDisAnalog(LCD1602_PORT_RW, LCD1602_RW);
     GPIO__vDisAnalog(LCD1602_PORT_D4, LCD1602_D4);
     GPIO__vDisAnalog(LCD1602_PORT_D5, LCD1602_D5);
     GPIO__vDisAnalog(LCD1602_PORT_D6, LCD1602_D6);
     GPIO__vDisAnalog(LCD1602_PORT_D7, LCD1602_D7);

     GPIO__enSetConfig(LCD1602_PORT_E, LCD1602_E, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_RS, LCD1602_RS, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_RW, LCD1602_RW, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D4, LCD1602_D4, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D5, LCD1602_D5, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D6, LCD1602_D6, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
     GPIO__enSetConfig(LCD1602_PORT_D7, LCD1602_D7, GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);

     GPIO_AHB__vSetData(LCD1602_PORT_E, LCD1602_E, 0U);
     GPIO_AHB__vSetData(LCD1602_PORT_RS, LCD1602_RS, 0U);
     GPIO_AHB__vSetData(LCD1602_PORT_RW, LCD1602_RW, 0U);
     GPIO_AHB__vSetData(LCD1602_PORT_D4, LCD1602_D4, 0U);
     GPIO_AHB__vSetData(LCD1602_PORT_D5, LCD1602_D5, 0U);
     GPIO_AHB__vSetData(LCD1602_PORT_D6, LCD1602_D6, 0U);
     GPIO_AHB__vSetData(LCD1602_PORT_D7, LCD1602_D7, 0U);
}


