/**
 *
 * @file EEPROM_InterruptRegisterIRQSource.c
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/EEPROM/Peripheral/xHeader/EEPROM_Dependencies.h>

void EEPROM__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void))
{
    if(0UL != (uint32_t) pfIrqSourceHandler)
    {
        FLASH__vRegisterIRQSourceHandler( pfIrqSourceHandler, FLASH_enINTERRUPT_EEPROM);
    }
}
