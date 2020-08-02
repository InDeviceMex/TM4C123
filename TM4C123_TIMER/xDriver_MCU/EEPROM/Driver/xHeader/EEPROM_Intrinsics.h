/**
 *
 * @file EEPROM_Intrinsics.c
 * @ingroup Peripheral Driver
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains the Utilities Functions
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

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_

#include <EEPROM/Peripheral/xHeader/EEPROM_Enum.h>
#include <stdint.h>

/** @section Intrinsics

* @{
*/

/**
 * @brief EEPROM Init World Count Max Function
 * @details This function Initialize the static global Max number of World variable with the Data of the register.
 *
 * @see  EEPROM__u32GetWorldCount
 *
 * @remark This function must be call before any call to @ref  EEPROM__u32GetWorldCount.
 */
void EEPROM__vInitWorldCount(void);

/**
 * @brief EEPROM Get World Count Max Function
 * @details This function get the Max number of World storage inthe EEPROM peripheral.
 * @return Max Number of Worlds
 *
 * @see  EEPROM__vInitWorldCount
 *
 * @remark This function must be call after the call of @ref  EEPROM__vInitWorldCount to proper initialize the value.
 */
uint32_t EEPROM__u32GetWorldCount(void);

/**
 * @brief EEPROM Init Block Count Max Function
 * @details This function Initialize the static global Max number of Block Worlds variable with the Data of the register.
 *
 * @see  EEPROM__u32GetBlockCount
 *
 * @remark This function must be call before any call to @ref  EEPROM__u32GetBlockCount.
 */
void EEPROM__vInitBlockCount(void);

/**
 * @brief EEPROM Get Block Count Max Function
 * @details This function get the Max number of Block World storage in the EEPROM peripheral.
 * @return Max Number of Block Worlds
 *
 * @see  EEPROM__vInitBlockCount
 *
 * @remark This function must be call after the call of @ref  EEPROM__vInitBlockCount to proper initialize the value.
 */

uint32_t EEPROM__u32GetBlockCount(void);


/**
 * @brief EEPROM Get Status Function
 * @details This function Get the current status of the EEPROM peripheral.
 * @return Return Function Status
 * @retval EEPROM_enOK Operations is finish
 * @retval EEPROM_enBUSY An Operation is Ongoing
 *
 * @remark This function must be call when the status needs to be knew.
 */
EEPROM_nSTATUS EEPROM__enGetStatus(void);

/**
 * @brief EEPROM Wait Function (Blocking)
 * @details This function waits until the EEPROM peripheral is ready to accept other actions or until the timeout is over.
 * @return Return Function Status
 * @retval EEPROM_enOK All operations are OK
 * @retval EEPROM_enERROR An operations inside the function had an error
 *
 * @par Dependencies
 * Please see @ref EEPROM__enGetStatus
 *
 * @remark This function must be call after any action requested to EEPROM peripheral in order to wait until the action in process is done
 * @todo To Create same functionality  with non-blocking fashion (interrupts)
 */
EEPROM_nSTATUS EEPROM__enWait(void);

/**
* @}
*/
#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_ */
