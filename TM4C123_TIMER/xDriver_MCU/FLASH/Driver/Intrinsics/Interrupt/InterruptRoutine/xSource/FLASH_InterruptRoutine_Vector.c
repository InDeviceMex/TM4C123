/**
 *
 * @file FLASH_InterruptRoutine_Vector.c
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
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Vector.h>
#include <xDriver_MCU/FLASH/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/FLASH_InterruptRoutine_Source.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

void FLASH__vIRQVectorHandler(void)
{
    volatile uint32_t u32Reg=0;
    volatile uint32_t u32RegEEPROM=0;
    u32Reg=FLASH_FCMISC_R;
    if(u32Reg & (uint32_t)FLASH_enINT_ACCESS)
    {
        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_ACCESS;
        FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_ACCESS]();
    }
    if(u32Reg & (uint32_t)FLASH_enINT_PROGRAMMING)
    {
        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_PROGRAMMING;
        FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_PROGRAMMING]();
    }
    if(u32Reg & (uint32_t)FLASH_enINT_EEPROM)
    {

        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_EEPROM;
        u32RegEEPROM=SYSCTL_PREEPROM_R;
        u32RegEEPROM&=SYSCTL_PREEPROM_R_EEPROM_MASK;
        if(SYSCTL_PREEPROM_R_EEPROM_MASK == (u32RegEEPROM))
        {
            FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_EEPROM]();
        }
    }
    if(u32Reg & (uint32_t)FLASH_enINT_PUMP_VOL)
    {
        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_PUMP_VOL;
        FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_PUMP_VOL]();
    }
    if(u32Reg & (uint32_t)FLASH_enINT_INVALID_DATA)
    {
        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_INVALID_DATA;
        FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_INVALID_DATA]();
    }
    if(u32Reg & (uint32_t)FLASH_enINT_ERRASE_ERROR)
    {
        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_ERRASE_ERROR;
        FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_ERRASE_ERROR]();
    }
    if(u32Reg & (uint32_t)FLASH_enINT_PROGRAM_ERROR)
    {
        FLASH_FCMISC_R=(uint32_t)FLASH_enINT_PROGRAM_ERROR;
        FLASH__vIRQSourceHandler[(uint32_t)FLASH_enINTERRUPT_PROGRAM_ERROR]();
    }
}


