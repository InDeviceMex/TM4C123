/**
 *
 * @file EEPROM_Wait.c
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
/**
 * Include Files
 */
#include <EEPROM/Driver/Intrinsics/xHeader/EEPROM_Wait.h>
#include <EEPROM/Driver/Intrinsics/Primitives/EEPROM_Primitives.h>
#include <stdint.h>
#include <xDriver_MCU/EEPROM/Peripheral/EEPROM_Peripheral.h>



/**
 *
 * Local Definitions
 */
#define EEPROM_TIMEOUT_MAX (500000u)


EEPROM_nSTATUS EEPROM__enGetStatus (void)
{
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady= EEPROM_enNOREADY;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        enReturn = EEPROM_enOK;
        if(EEPROM_EEDONE_R_WORKING_EN == (EEPROM_EEDONE_R & EEPROM_EEDONE_R_WORKING_MASK))
        {
            enReturn = EEPROM_enBUSY;
        }
    }
    return (EEPROM_nSTATUS) enReturn;

}

EEPROM_nSTATUS EEPROM__enWait (void)
{
    uint32_t u32TimeOut = EEPROM_TIMEOUT_MAX;
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;
    EEPROM_nREADY enReady= EEPROM_enNOREADY;
    enReady = EEPROM__enIsReady();
    if(EEPROM_enREADY == enReady)
    {
        enReturn = EEPROM_enOK;
        do
        {
            enReturn = EEPROM__enGetStatus();
            u32TimeOut--;
        }while((EEPROM_enBUSY == (EEPROM_nSTATUS) enReturn) && ((uint32_t)0 != u32TimeOut));
    }
    return (EEPROM_nSTATUS) enReturn;
}
