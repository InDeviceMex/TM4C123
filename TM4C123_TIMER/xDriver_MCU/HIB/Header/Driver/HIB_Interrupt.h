/*
 * HIB_Interrupt.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTERRUPT_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTERRUPT_H_

#include <xDriver_MCU/HIB/Header/Peripheral/HIB_Enum.h>

/* ToDo make a better handle of interrupt as GPIO*/
HIB_nSTATUS HIB__enEnInterrupt(HIB_nINTERRUPT enInterrupt);
HIB_nSTATUS HIB__enDisInterrupt(HIB_nINTERRUPT enInterrupt);
HIB_nSTATUS HIB__enClearInterrupt(HIB_nINTERRUPT enInterrupt);

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTERRUPT_H_ */
