/**
 *
 * @file WDT_Load.h
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
 * @verbatim 23 jul. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 jul. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_LOAD_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_LOAD_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

uint32_t WDT__u32GetLoad(WDT_nMODULE enModule);
void WDT__vSetLoad(WDT_nMODULE enModule, uint32_t u32LoadValue);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_DRIVER_WDT_LOAD_H_ */
