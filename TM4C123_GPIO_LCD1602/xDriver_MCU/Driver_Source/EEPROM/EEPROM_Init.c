/**
 *
 * @file EEPROM_Init.c
 * @ingroup Peripheral Driver
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains the Initialization Function
 *
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
 * @verbatim 2020.06.17 @endverbatim
 *
 * @author
 * @verbatim Vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2020.06.17     Vyldram    1.0         initial Version@endverbatim
 *
 * @remarks File required to Initialize EEPROM peripheral Correctly.
 * @remarks Any further functionality required to Initialize the Module needs to be implemented here
 */

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Driver/EEPROM_Init.h>


EEPROM_nSTATUS EEPROM__enInit(void)
{
    /*
     * Process Status
     */
    EEPROM_nSTATUS enReturn =EEPROM_enOK;
    /*
     * To Reinitialize Peripheral Clock
     */
    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);
    SYSCTL__vEnRunModePeripheral(SYSCTL_enEEPROM);
    //NVIC__enSetEnableIRQ(NVIC_enSTIR_FLASH,NVIC_enPRI7);

    /*
     * To obtain the EEPROM Max Block and Max World allowed
     */
    EEPROM_u32WorldCount = EEPROM_EESIZE_R & EEPROM_EESIZE_R_WORDCNT_MASK;
    EEPROM_u32BlockCount= (EEPROM_EESIZE_R & EEPROM_EESIZE_R_BLKCNT_MASK)>>EEPROM_EESIZE_R_BLKCNT_BIT;
    /*
     * To wait until EEPROM peripheral is ready
     */
    enReturn=EEPROM__enWait();

    /*
     * To return the final Function status,
     * if EEPROM__enWait ends correctly all the process is OK
     */
    return enReturn;

}

void EEPROM__vDeInit(void)
{
    SYSCTL__vResetPeripheral(SYSCTL_enEEPROM);
    SYSCTL__vDisRunModePeripheral(SYSCTL_enEEPROM);
    NVIC__enClearEnableIRQ(NVIC_enSTIR_FLASH);

}
