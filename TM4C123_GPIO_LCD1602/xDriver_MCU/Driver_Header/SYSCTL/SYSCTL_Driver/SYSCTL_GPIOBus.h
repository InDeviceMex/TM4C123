/**
 *
 * @file SYSCTL_GPIOBus.h
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
#ifndef XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_DRIVER_SYSCTL_GPIOBUS_H_
#define XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_DRIVER_SYSCTL_GPIOBUS_H_

#include <xDriver_MCU/Driver_Header/SYSCTL/SYSCTL_Peripheral/SYSCTL_Peripheral.h>

void SYSCTL__vSetGPIOBus_AHB(SYSCTL_nGPIOBUS enGPIO);
void SYSCTL__vSetGPIOBus_APB(SYSCTL_nGPIOBUS enGPIO);
SYSCTL_nGPIOBUS_CURRENT SYSCTL__vGetGPIOBus(SYSCTL_nGPIOBUS enGPIO);



#endif /* XDRIVER_MCU_DRIVER_HEADER_SYSCTL_SYSCTL_DRIVER_SYSCTL_GPIOBUS_H_ */
