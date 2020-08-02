/**
 *
 * @file LCD1602_OutputConfig.c
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
#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Intrinsics/LCD1602_OutputConfig.h>

#include <xApplication/LCD1602/Adaptive_Header/LCD1602_Defines.h>
#include <xDriver_MCU/GPIO/Header/GPIO.h>

void LCD1602__vSetDataOutputConfig(void)
{
    GPIO__enSetConfig(LCD1602_PORT_D4,LCD1602_D4,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D5,LCD1602_D5,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D6,LCD1602_D6,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
    GPIO__enSetConfig(LCD1602_PORT_D7,LCD1602_D7,GPIO_enCONFIG_OUTPUT_2MA_PUSHPULL);
}
