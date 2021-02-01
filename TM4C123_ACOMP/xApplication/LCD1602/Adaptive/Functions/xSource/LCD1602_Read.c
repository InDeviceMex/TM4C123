/**
 *
 * @file LCD1602_Read.c
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

#include <xApplication/LCD1602/Adaptive/Functions/xHeader/LCD1602_Read.h>

#include <xUtils/Standard/Standard.h>
#include <xApplication/LCD1602/Adaptive/xHeader/LCD1602_Enum.h>
#include <xApplication/LCD1602/Adaptive/Intrinsics/LCD1602_Intrinsics.h>

uint8_t LCD1602__u8Read(LCD1602_nRS enMode)
{
    uint8_t  u8DatoRead=0U;
    LCD1602__vSetDataInputConfig();

    LCD1602__vSetReadMode();
    LCD1602__vSetDataCommand(enMode);

    LCD1602__vPrepareReadEnable();
    u8DatoRead=LCD1602__u8ReadHighByte();
    LCD1602__vPulseReadEnable();

    LCD1602__vPrepareReadEnable();
    u8DatoRead |= LCD1602__u8ReadLowByte();
    LCD1602__vPulseReadEnable();

    LCD1602__vSetWriteMode();
    LCD1602__vSetDataOutputConfig();
    LCD1602__vDelay(40.0f);
    return u8DatoRead;
}
