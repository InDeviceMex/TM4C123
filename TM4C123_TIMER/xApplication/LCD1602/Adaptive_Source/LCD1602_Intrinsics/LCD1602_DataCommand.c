/**
 *
 * @file LCD1602_DataCommand.c
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
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Intrinsics/LCD1602_DataCommand.h>

#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Enum.h>
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/Header/GPIO.h>

void LCD1602__vSetDataCommand(LCD1602_nRS enMode)
{
    GPIO__vSetData(LCD1602_PORT_RS, LCD1602_RS, ((uint32_t)enMode)<<LCD1602_RS_POS);
}
