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
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Intrinsics/LCD1602_WriteByte.h>

#include <stdint.h>
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Defines.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO.h>


void LCD1602__vWriteLowNible(uint8_t u8Data)
{
    if(u8Data&GPIO_enPIN3)
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, LCD1602_D7);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, 0u);
    }

    if(u8Data&GPIO_enPIN2)
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, LCD1602_D6);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, 0u);
    }

    if(u8Data&GPIO_enPIN1)
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, LCD1602_D5);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, 0u);
    }

    if(u8Data&GPIO_enPIN0)
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, LCD1602_D4);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, 0u);
    }

}

void LCD1602__vWriteHighNible(uint8_t u8Data)
{
    if(u8Data&GPIO_enPIN7)
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, LCD1602_D7);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D7, LCD1602_D7, 0u);
    }

    if(u8Data&GPIO_enPIN6)
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, LCD1602_D6);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D6, LCD1602_D6, 0u);
    }

    if(u8Data&GPIO_enPIN5)
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, LCD1602_D5);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D5, LCD1602_D5, 0u);
    }

    if(u8Data&GPIO_enPIN4)
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, LCD1602_D4);
    }
    else
    {
        GPIO__vSetData(LCD1602_PORT_D4, LCD1602_D4, 0u);
    }
}
