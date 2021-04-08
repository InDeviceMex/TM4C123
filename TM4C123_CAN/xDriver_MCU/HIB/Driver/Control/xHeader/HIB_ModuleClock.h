/**
 *
 * @file HIB_ModuleClock.h
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

#ifndef XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_MODULECLOCK_H_
#define XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_MODULECLOCK_H_

#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enEnModuleClock(void);
HIB_nSTATUS HIB__enDisModuleClock(void);

HIB_nSTATUS HIB__enSetModuleClock(HIB_nCLOCK enClock);
HIB_nSTATUS HIB__enGetModuleClock(HIB_nCLOCK* enFeatureValue);

#endif /* XDRIVER_MCU_HIB_DRIVER_CONTROL_XHEADER_HIB_MODULECLOCK_H_ */
