/*
 * HIB_Counter.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_COUNTER_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_COUNTER_H_

#include <stdint.h>
#include <xDriver_MCU/HIB/Header/Peripheral/HIB_Enum.h>

HIB_nSTATUS HIB__enReadCounter(uint32_t* pu32Counter, uint32_t *pu32SubCounter);
HIB_nSTATUS HIB__enSetCounter(uint32_t u32Counter);
HIB_nSTATUS HIB__enSetMatch(uint32_t u32Counter, uint32_t u32SubCounter);



#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_COUNTER_H_ */
