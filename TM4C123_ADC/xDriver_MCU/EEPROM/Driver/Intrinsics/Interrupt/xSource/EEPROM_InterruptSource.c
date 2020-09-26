/**
 *
 * @file EEPROM_InterruptSource.c
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

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptSource.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/FLASH/FLASH.h>


void EEPROM__vEnInterruptSource(void)
{
    uint32_t u32Reg=0;
    EEPROM__vSetReady();
    FLASH__vEnInterruptSource(FLASH_enINT_EEPROM);

    u32Reg=EEPROM_EEINT_R;
    u32Reg|=EEPROM_EEINT_R_INT_MASK;
    EEPROM_EEINT_R=u32Reg;

}

void EEPROM__vDisInterruptSource(void)
{
    uint32_t u32Reg=0;
    EEPROM__vSetReady();
    FLASH__vDisInterruptSource(FLASH_enINT_EEPROM);

    u32Reg=EEPROM_EEINT_R;
    u32Reg&=~EEPROM_EEINT_R_INT_MASK;
    EEPROM_EEINT_R=u32Reg;
}


void EEPROM__vClearInterruptSource(void)
{
    EEPROM__vSetReady();
    FLASH__vClearInterruptSource(FLASH_enINT_EEPROM);
}

EEPROM_nINT_STATUS EEPROM__enStatusInterruptSource(void)
{
    EEPROM_nINT_STATUS enEEPROMStatus= EEPROM_enINT_STATUS_UNDEF;
    FLASH_nINT_STATUS enFlashStatus= FLASH_enINT_STATUS_UNDEF;
    EEPROM_nREADY enReady= EEPROM_enNOREADY;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        enFlashStatus =FLASH__enStatusInterruptSource(FLASH_enINT_EEPROM);
        if(FLASH_enINT_OCCUR == enFlashStatus)
        {
            enEEPROMStatus= EEPROM_enINT_OCCUR;
        }
        else
        {
            enEEPROMStatus= EEPROM_enINT_NOOCCUR;
        }
    }
    return enEEPROMStatus;
}

