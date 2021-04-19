/**
 *
 * @file LCD1602_WriteByte.c
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
#include <xApplication/LCD1602/Adaptive/Intrinsics/xHeader/LCD1602_WriteByte.h>

#include <xUtils/Standard/Standard.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/GPIO.h>


void LCD1602__vWriteLowNible(uint8_t u8Data)
{
    if(u8Data & GPIO_enPIN_3)
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, LCD1602_D7);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, 0U);
    }

    if(u8Data & GPIO_enPIN_2)
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, LCD1602_D6);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, 0U);
    }

    if(u8Data & GPIO_enPIN_1)
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, LCD1602_D5);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, 0U);
    }

    if(u8Data & GPIO_enPIN_0)
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, LCD1602_D4);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, 0U);
    }

}

void LCD1602__vWriteHighNible(uint8_t u8Data)
{
    if(u8Data & GPIO_enPIN_7)
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, LCD1602_D7);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, 0U);
    }

    if(u8Data & GPIO_enPIN_6)
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, LCD1602_D6);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, 0U);
    }

    if(u8Data & GPIO_enPIN_5)
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, LCD1602_D5);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, 0U);
    }

    if(u8Data & GPIO_enPIN_4)
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, LCD1602_D4);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, 0U);
    }
}
