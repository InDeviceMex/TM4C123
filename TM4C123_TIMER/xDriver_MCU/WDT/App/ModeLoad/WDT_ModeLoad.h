/**
 *
 * @file WDT_ModeLoad.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODELOAD_WDT_MODELOAD_H_
#define XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODELOAD_WDT_MODELOAD_H_

#include <stdint.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nSTATUS WDT__enSetMode_Load(WDT_nMODULE enModule, WDT_nMODE enMode, uint32_t u32Load);
WDT_nSTATUS WDT__enSetModeStruct_Load(WDT_nMODULE enModule, const WDT_MODE_Typedef* psMode, uint32_t u32Load);

#endif /* XDRIVER_MCU_DRIVER_HEADER_WDT_WDT_APP_WDT_MODELOAD_WDT_MODELOAD_H_ */
