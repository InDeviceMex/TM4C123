/*
 * HIB_Counter.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_COUNTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_COUNTER_H_

#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/HIB/Peripheral/xHeader/HIB_Enum.h>

HIB_nSTATUS HIB__enGetCounter(uint32_t* pu32Counter, uint32_t *pu32SubCounter);

#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_COUNTER_H_ */
