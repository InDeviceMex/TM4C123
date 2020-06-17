/**
 *
 * @file EEPROM_Enum.c
 * @ingroup Peripheral Driver
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains the enumerations used in the Driver
 * @date 16 jun. 2020
 * @author Vyldram
 * @copyright InDeviceMex 2020
 * @version 1.0
 * @remarks File required to get the enumerations requires in all  EEPROM peripheral files.
 * @remarks Any further enumerations required in any
 * EEPROM functions must to be implemented here
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_

/**
 *  @brief EEPROM status
 *  @details Generally used to know the final status
 */
typedef enum
{
    EEPROM_enOK = 0,  //!<  Result is OK
    EEPROM_enBUSY,    //!<  Operation Ongoing
    EEPROM_enERROR,   //!<  Result has an error
}EEPROM_nSTATUS;


#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_ */
