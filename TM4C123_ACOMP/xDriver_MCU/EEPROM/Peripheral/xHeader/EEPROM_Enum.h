/**
 *
 * @file EEPROM_Enum.h
 * @ingroup Peripheral Driver
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains the enumerations used in the Driver
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
    EEPROM_enOK = 0UL,  /*!<  Result is OK*/
    EEPROM_enERROR = 1UL,   /*!<  Result has an error*/
    EEPROM_enBUSY = 2UL,    /*!<  Operation Ongoing*/
}EEPROM_nSTATUS;

/**
 *  @brief EEPROM ready
 *  @details Generally used to know if the Peripheral is ready to use
 */
typedef enum
{
    EEPROM_enNOREADY = 0UL,
    EEPROM_enREADY = 1UL,
}EEPROM_nREADY;

typedef enum
{
    EEPROM_enINT_NOOCCUR = 0UL,
    EEPROM_enINT_OCCUR = 1UL,
    EEPROM_enINT_STATUS_UNDEF = 0xFFFFFFFFUL,
}EEPROM_nINT_STATUS;

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_ENUM_H_ */
