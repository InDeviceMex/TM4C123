/**
 *
 * @file GPIO_InterruptConfig.h
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
 * @verbatim 30 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_XHEADER_GPIO_INTERRUPTCONFIG_H_
#define XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_XHEADER_GPIO_INTERRUPTCONFIG_H_

#include <xDriver_MCU/GPIO/Peripheral/xHeader/GPIO_Enum.h>

void GPIO__vEnInterruptSourceConfig(GPIO_nPORT enPort, GPIO_nPIN enPin,  GPIO_nINT_CONFIG enIntConfig);

#endif /* XDRIVER_MCU_GPIO_DRIVER_INTRINSICS_INTERRUPT_XHEADER_GPIO_INTERRUPTCONFIG_H_ */
