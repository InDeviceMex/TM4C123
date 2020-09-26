/**
 *
 * @file LCD1602_ReadByte.c
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
#include <xApplication/LCD1602/Adaptive/Intrinsics/xHeader/LCD1602_ReadByte.h>

#include <xUtils/Standard/Standard.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/GPIO.h>

uint8_t LCD1602__u8ReadLowByte(void)
{
    uint32_t u32Reg=0u;
    uint8_t  u8DatoRead=0u;
    u32Reg= GPIO__u32GetData(LCD1602_PORT_D7,LCD1602_D7);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_3;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D6,LCD1602_D6);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_2;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D5,LCD1602_D5);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_1;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D4,LCD1602_D4);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_0;
    }

    return u8DatoRead;
}

uint8_t LCD1602__u8ReadHighByte(void)
{
    uint32_t u32Reg=0u;
    uint8_t  u8DatoRead=0u;

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D7,LCD1602_D7);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_7;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D6,LCD1602_D6);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_6;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D5,LCD1602_D5);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_5;
    }

    u32Reg= GPIO__u32GetData(LCD1602_PORT_D4,LCD1602_D4);
    if(0u != u32Reg)
    {
        u8DatoRead|=GPIO_enPIN_4;
    }

    return u8DatoRead;
}


