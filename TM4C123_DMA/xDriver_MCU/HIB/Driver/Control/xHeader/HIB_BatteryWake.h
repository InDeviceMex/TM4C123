/**
 *
 * @file HIB_BatteryWake.h
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
 * @verbatim 21 ago. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 ago. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_BATTERYWAKE_H_
#define XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_BATTERYWAKE_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enEnLowBatteryWakeUp(void);
HIB_nSTATUS HIB__enDisLowBatteryWakeUp(void);

HIB_nSTATUS HIB__enSetLowBatteryWakeUp(HIB_nBATWAKE enBatWake);
HIB_nBATWAKE HIB__enGetLowBatteryWakeUp(void);




#endif /* XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_BATTERYWAKE_H_ */
