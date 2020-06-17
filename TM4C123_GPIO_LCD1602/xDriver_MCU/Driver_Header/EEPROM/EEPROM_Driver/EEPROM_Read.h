/*
 * EEPROM_Read.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_
#define XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_


#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Driver/EEPROM_Intrinsics.h>

EEPROM_nSTATUS EEPROM__enReadWorld(uint32_t* pu32Data,uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enReadHalfWorld(uint16_t* pu16Data,uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enReadByte(uint8_t* pu8Data,uint32_t u32Address);

#endif /* XDRIVER_MCU_DRIVER_HEADER_EEPROM_EEPROM_READ_H_ */
