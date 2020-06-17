/*
 * FLASH.h
 *
 *  Created on: 3 feb. 2018
 *      Author: InDev
 */

#ifndef FLASH_H_
#define FLASH_H_


#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Dependencies.h>
#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Register.h>
#include <xDriver_MCU/Driver_Header/FLASH/FLASH_Enum.h>

#if defined ( __TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWaitWrite            , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitBufWrite         , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitPageErase        , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitMassErase        , ".ramcode")

#pragma  CODE_SECTION(FLASH__enPageErasePos         , ".ramcode")
#pragma  CODE_SECTION(FLASH__enPageErase            , ".ramcode")
#pragma  CODE_SECTION(FLASH__enMassErase            , ".ramcode")

#pragma  CODE_SECTION(FLASH__enWrite                   , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteBuf                , ".ramcode")

#pragma  CODE_SECTION(FLASH__enWriteWorld              , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteHalfWorld          , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteByte               , ".ramcode")

#pragma  CODE_SECTION(FLASH__enWriteMultiWorld         , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiHalfWorld     , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWriteMultiByte          , ".ramcode")

FLASH_nSTATUS FLASH__enWaitWrite(void);
FLASH_nSTATUS FLASH__enWaitBufWrite(void);
FLASH_nSTATUS FLASH__enWaitPageErase(void);
FLASH_nSTATUS FLASH__enWaitMassErase(void);

FLASH_nSTATUS FLASH__enPageErasePos(uint32_t u32Page);
FLASH_nSTATUS FLASH__enPageErase(uint32_t u32Address);
FLASH_nSTATUS FLASH__enMassErase(void);

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteBuf(uint32_t* pu32Data,uint32_t u32Address, uint32_t u32Count);

FLASH_nSTATUS FLASH__enWriteWorld(uint32_t u32Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address);
FLASH_nSTATUS FLASH__enWriteByte(uint8_t u8Data, uint32_t u32Address);

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count);
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count);


#elif defined ( __GNUC__ )

FLASH_nSTATUS FLASH__enWaitWrite(void)__attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitBufWrite(void) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitPageErase(void) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitMassErase(void) __attribute__((section(".ramcode")));

FLASH_nSTATUS FLASH__enPageErasePos(uint32_t u32Page) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enPageErase(uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enMassErase(void) __attribute__((section(".ramcode")));

FLASH_nSTATUS FLASH__enWrite(uint32_t u32Data, uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteBuf(uint32_t* pu32Data,uint32_t u32Address, uint32_t u32Count) __attribute__((section(".ramcode")));

FLASH_nSTATUS FLASH__enWriteWorld(uint32_t u32Data, uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteHalfWorld(uint16_t u16Data, uint32_t u32Address) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteByte(uint8_t u8Data, uint32_t u32Address) __attribute__((section(".ramcode")));

FLASH_nSTATUS FLASH__enWriteMultiWorld(uint32_t* pu32Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteMultiHalfWorld(uint16_t* pu16Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWriteMultiByte(uint8_t* pu8Data, uint32_t u32Address,uint32_t u32Count) __attribute__((section(".ramcode")));
#endif


#endif /* FLASH_H_ */
