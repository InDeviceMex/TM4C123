/*
 * EEPROM.h
 *
 *  Created on: 8 feb. 2018
 *      Author: InDev
 */
#ifndef EEPROM_H_
#define EEPROM_H_

#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Dependencies.h>
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Register.h>
#include <xDriver_MCU/Driver_Header/EEPROM/EEPROM_Enum.h>


EEPROM_nSTATUS EEPROM__enInit(void);
EEPROM_nSTATUS EEPROM__enWait(void);
EEPROM_nSTATUS EEPROM__enGetStatus(void);

uint32_t EEPROM__u32GetWorldCount(void);
uint32_t EEPROM__u32GetBlockCount(void);

EEPROM_nSTATUS EEPROM__enReadWorld(uint32_t* pu32Data,uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enReadHalfWorld(uint16_t* pu16Data,uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enReadByte(uint8_t* pu8Data,uint32_t u32Address);

EEPROM_nSTATUS EEPROM__enWriteWorld(uint32_t u32Data,uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enWriteHalfWorld(uint16_t u16Data,uint32_t u32Address);
EEPROM_nSTATUS EEPROM__enWriteByte(uint8_t u8Data,uint32_t u32Address);


EEPROM_nSTATUS EEPROM__enWriteWorldBlock(uint32_t* pu32Data,uint32_t u32Address);

EEPROM_nSTATUS EEPROM__enWriteMultiWorld(uint32_t* pu32Data,uint32_t u32Address,uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enWriteMultiHalfWorld(uint16_t* pu16Data,uint32_t u32Address,uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enWriteMultiByte(uint8_t* pu8Data,uint32_t u32Address,uint16_t u16Count);

EEPROM_nSTATUS EEPROM__enReadMultiWorld(uint32_t* pu32Data,uint32_t u32Address,uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enReadMultiHalfWorld(uint16_t* pu16Data,uint32_t u32Address,uint16_t u16Count);
EEPROM_nSTATUS EEPROM__enReadMultiByte(uint8_t* pu8Data,uint32_t u32Address,uint16_t u16Count);

#endif /* EEPROM_H_ */
