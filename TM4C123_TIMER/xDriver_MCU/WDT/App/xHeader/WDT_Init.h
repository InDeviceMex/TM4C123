/**
 *
 * @file WDT_Init.h
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
 * @verbatim 24 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_INIT_H_

#include <stdint.h>

void WDT__vInit(uint32_t u32ReloadValue);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_INIT_H_ */
