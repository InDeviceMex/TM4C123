/**
 * @section Include Files
 */

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Driver/EEPROM_Init.h>

#include <xDriver_MCU/Driver_Header/NVIC/NVIC.h>
#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Driver/EEPROM_Intrinsics.h>





/**
 *
 * @section Global Functions
 */
EEPROM_nSTATUS EEPROM__enInit (void)
{
    /*
     * Process Status
     */
    EEPROM_nSTATUS enReturn = EEPROM_enOK;

    /*
     * To Reinitialize Peripheral Clock
     */
    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    /*NVIC__enSetEnableIRQ(NVIC_enSTIR_FLASH,NVIC_enPRI7);*/

    /*
     * To obtain the EEPROM Max Block and Max World allowed
     */
    EEPROM__vInitWorldCount();
    EEPROM__vInitBlockCount();

    /*
     * To wait until EEPROM peripheral is ready
     */
    enReturn = EEPROM__enWait();

    /*
     * To return the final Function status,
     * if EEPROM__enWait ends correctly all the process is OK
     */
    return (EEPROM_nSTATUS) enReturn;

}

void EEPROM__vDeInit (void)
{
    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);
    NVIC__enClearEnableIRQ(NVIC_enSTIR_FLASH);
}
/*End File*/
