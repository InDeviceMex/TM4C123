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

#include <stdint.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Interrupt/xHeader/EEPROM_InterruptSource.h>
#include <xDriver_MCU/EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>
#include <xDriver_MCU/FLASH/Peripheral/FLASH_Peripheral.h>


void EEPROM__vEnInterruptSource(void)
{
    uint32_t u32Reg=0;
    EEPROM__vSetReady();
    u32Reg=FLASH_FCIM_R;
    u32Reg|=FLASH_FCIM_R_EMASK_MASK;
    FLASH_FCIM_R=u32Reg;

    u32Reg=EEPROM_EEINT_R;
    u32Reg|=EEPROM_EEINT_R_INT_MASK;
    EEPROM_EEINT_R=u32Reg;

}

void EEPROM__vDisInterruptSource(void)
{
    uint32_t u32Reg=0;
    EEPROM__vSetReady();
    u32Reg=FLASH_FCIM_R;
    u32Reg&=~FLASH_FCIM_R_EMASK_MASK;
    FLASH_FCIM_R=u32Reg;

    u32Reg=EEPROM_EEINT_R;
    u32Reg&=~EEPROM_EEINT_R_INT_MASK;
    EEPROM_EEINT_R=u32Reg;
}


void EEPROM__vClearInterruptSource(void)
{
    EEPROM__vSetReady();
    FLASH_FCMISC_R=FLASH_FCMISC_R_EMISC_MASK;
}

EEPROM_nINT_STATUS EEPROM__enStatusInterruptSource(void)
{
    EEPROM_nINT_STATUS enStatus= EEPROM_enINT_STATUS_UNDEF;
    EEPROM_nREADY enReady= EEPROM_enNOREADY;
    uint32_t u32Reg=0;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        u32Reg=FLASH_FCRIS_R;
        u32Reg&=FLASH_FCRIS_R_ERIS_MASK;
        if(0u != u32Reg)
        {
            enStatus= EEPROM_enINT_OCCUR;
        }
        else
        {
            enStatus= EEPROM_enINT_NOOCCUR;
        }
    }
    return enStatus;
}

