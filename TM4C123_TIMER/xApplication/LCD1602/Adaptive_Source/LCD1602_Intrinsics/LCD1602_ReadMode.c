/**
 *
 * @file LCD1602_ReadMode.c
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
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Intrinsics/LCD1602_ReadMode.h>

#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Enum.h>
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Defines.h>
#include <xDriver_MCU/Driver_Header/GPIO/GPIO.h>


void LCD1602__vSetReadMode(void)
{
    GPIO__vSetData(LCD1602_PORT_RW, LCD1602_RW, ((uint32_t)LCD1602_enREAD)<<LCD1602_RW_POS);
}



