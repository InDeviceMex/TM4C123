/**
 *
 * @file HIB_BatteryComparator.h
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

#ifndef XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_BATTERYCOMPARATOR_H_
#define XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_BATTERYCOMPARATOR_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enSetBatteryComparator(HIB_nBATCOMP enBatComp);
HIB_nSTATUS HIB__enGetBatteryComparator(HIB_nBATCOMP* enFeatureValue);

#endif /* XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_BATTERYCOMPARATOR_H_ */
