/**
 *
 * @file GPIO_Data.c
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
 * @verbatim 3 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/GPIO/Driver/xHeader/GPIO_Data.h>

#include <xDriver_MCU/GPIO/Driver/Intrinsics/Primitives/GPIO_Primitives.h>
#include <xDriver_MCU/GPIO/Peripheral/GPIO_Peripheral.h>

inline void GPIO__vSetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t u32Data)
{
    uint32_t u32Pin = 0UL;
    u32Pin = (uint32_t) enPin;
    u32Pin &= (uint32_t) GPIO_enPIN_ALL;
    GPIO__vWriteRegister(enPort, GPIO_GPIODATA_OFFSET, u32Data, u32Pin, 0UL);
}

inline GPIO_nSTATUS GPIO__enGetData(GPIO_nPORT enPort, GPIO_nPIN enPin, uint32_t* pu32Feature)
{
    GPIO_nSTATUS enStatus = GPIO_enSTATUS_UNDEF;
    uint32_t u32Pin = 0UL;
    u32Pin = (uint32_t) enPin;
    u32Pin &= (uint32_t) GPIO_enPIN_ALL;
    enStatus = GPIO__enReadRegister(enPort, GPIO_GPIODATA_OFFSET, pu32Feature, u32Pin, 0UL);
    return enStatus;
}
