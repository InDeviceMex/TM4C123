/**
 * @section Include Files
 */

#include <EEPROM/App/xHeader/EEPROM_Init.h>
#include <EEPROM/Driver/EEPROM_Driver.h>

/**
 *
 * @section Global Functions
 */
EEPROM_nSTATUS EEPROM__enInit (void)
{
    /*
     * Process Status
     */
    EEPROM_nSTATUS enReturn = EEPROM_enERROR;

    /*
     * To Reinitialize Peripheral Clock
     */
    EEPROM__vSetReady();
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
    EEPROM__vClearReady();
    EEPROM__vDisInterruptSource();
}
/*End File*/
