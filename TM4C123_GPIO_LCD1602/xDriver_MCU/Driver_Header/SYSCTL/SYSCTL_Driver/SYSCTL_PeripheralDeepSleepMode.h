/**
 *
 * @file SYSCTL_PeripheralDeepSleepMode.h
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
 * @verbatim 24 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_DRIVER_SYSCTL_PERIPHERALDEEPSLEEPMODE_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_DRIVER_SYSCTL_PERIPHERALDEEPSLEEPMODE_H_

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vEnDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);
void SYSCTL__vDisDeepSleepModePeripheral(SYSCTL_nPERIPHERAL enPeripheral);



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_DRIVER_SYSCTL_PERIPHERALDEEPSLEEPMODE_H_ */
