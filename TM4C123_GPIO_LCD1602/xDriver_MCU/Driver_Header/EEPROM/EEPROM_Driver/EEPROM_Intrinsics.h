/**
 *
 * @file EEPROM_Intrinsics.h
 * @ingroup EEPROM Driver
 * @brief This files is part of EEPROM Peripheral Driver.
 * This File contains the Intrinsics Functionality.
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
 * @remarks This files is used in all EEPROM Driver files.
 * @remarks Any further functionality generic of the Module needs to be implemented here
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Peripheral/EEPROM_Peripheral.h>

extern uint32_t EEPROM_u32WorldCount;
extern uint32_t EEPROM_u32BlockCount;

/** @section Intrinsics

* @{
*/


uint32_t EEPROM__u32GetWorldCount(void);


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
