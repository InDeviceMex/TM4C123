/*
 * FLASH_WriteMulti.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEMULTI_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEMULTI_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWriteMultiWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiHalfWorld, ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiByte, ".ramcode")

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WRITEMULTI_H_ */
