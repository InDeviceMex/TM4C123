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
#include <stdint.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptRegisterIRQSource.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/FLASH/FLASH.h>

void EEPROM__vRegisterIRQSourceHandler(void (*pfIrqSourceHandler) (void))
{
    uint32_t u32IrqSourceHandler=0;
    if((uint32_t)pfIrqSourceHandler !=0u)
    {
        u32IrqSourceHandler=((uint32_t)pfIrqSourceHandler|(uint32_t)1u);
        FLASH__vRegisterIRQSourceHandler((void (*) (void))u32IrqSourceHandler, FLASH_enINTERRUPT_EEPROM);
    }
}

