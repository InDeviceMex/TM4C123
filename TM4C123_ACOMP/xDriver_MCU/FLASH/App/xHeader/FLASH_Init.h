/**
 *
 * @file FLASH_Init.h
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
 * @verbatim 10 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 10 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_FLASH_APP_XHEADER_FLASH_INIT_H_
#define XDRIVER_MCU_FLASH_APP_XHEADER_FLASH_INIT_H_

#include <FLASH/Peripheral/xHeader/FLASH_Enum.h>
#include <xUtils/Standard/Standard.h>
#if defined (__TI_ARM__ )

#pragma  CODE_SECTION(FLASH__enInit, ".ramcode")
#pragma  CODE_SECTION(FLASH__vDeInit, ".ramcode")

FLASH_nSTATUS FLASH__enInit(void);
void FLASH__vDeInit(void);

#elif defined (__GNUC__ )

FLASH_nSTATUS FLASH__enInit(void) __attribute__((section(".ramcode")));
void FLASH__vDeInit(void) __attribute__((section(".ramcode")));

#endif

#endif /* XDRIVER_MCU_FLASH_APP_XHEADER_FLASH_INIT_H_ */
