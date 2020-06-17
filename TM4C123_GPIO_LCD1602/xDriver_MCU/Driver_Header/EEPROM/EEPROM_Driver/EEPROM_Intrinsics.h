/*
 * EEPROM_Intrinsics.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Peripheral/EEPROM_Peripheral.h>

extern uint32_t EEPROM_u32WorldCount;

EEPROM_nSTATUS EEPROM__enInit(void);
EEPROM_nSTATUS EEPROM__enWait(void);
EEPROM_nSTATUS EEPROM__enGetStatus(void);

uint32_t EEPROM__u32GetWorldCount(void);
uint32_t EEPROM__u32GetBlockCount(void);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_INTRINSICS_H_ */
