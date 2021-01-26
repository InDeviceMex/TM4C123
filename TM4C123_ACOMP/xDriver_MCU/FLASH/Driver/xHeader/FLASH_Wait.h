/*
 * FLASH_Wait.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_



#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined ( __TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWaitFMC            , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitBufWrite         , ".ramcode")

FLASH_nSTATUS FLASH__enWaitFMC (uint32_t u32RegisterMask);
FLASH_nSTATUS FLASH__enWaitBufWrite(void);

#elif defined ( __GNUC__ )
FLASH_nSTATUS FLASH__enWaitFMC (uint32_t u32RegisterMask)__attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitBufWrite(void) __attribute__((section(".ramcode")));

#endif


#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_ */
