/*
 * FLASH_Wait.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_



#include <stdint.h>
#include <xDriver_MCU/FLASH/Peripheral/xHeader/FLASH_Enum.h>

#if defined ( __TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enWaitWrite            , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitBufWrite         , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitPageErase        , ".ramcode")
#pragma  CODE_SECTION(FLASH__enWaitMassErase        , ".ramcode")

FLASH_nSTATUS FLASH__enWaitWrite(void);
FLASH_nSTATUS FLASH__enWaitBufWrite(void);
FLASH_nSTATUS FLASH__enWaitPageErase(void);
FLASH_nSTATUS FLASH__enWaitMassErase(void);

#elif defined ( __GNUC__ )

FLASH_nSTATUS FLASH__enWaitWrite(void)__attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitBufWrite(void) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitPageErase(void) __attribute__((section(".ramcode")));
FLASH_nSTATUS FLASH__enWaitMassErase(void) __attribute__((section(".ramcode")));

#endif


#endif /* XDRIVER_MCU_DRIVER_HEADER_FLASH_FLASH_DRIVER_FLASH_WAIT_H_ */
