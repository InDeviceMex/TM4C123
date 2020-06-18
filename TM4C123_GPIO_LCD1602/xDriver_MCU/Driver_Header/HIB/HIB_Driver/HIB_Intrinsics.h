/*
 * HIB_Intrinsics.h
 *
 *  Created on: 18 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTRINSICS_H_
#define XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTRINSICS_H_



#include <xDriver_MCU/Driver_Header/HIB/HIB_Peripheral/HIB_Peripheral.h>

void HIB__enSetGlobalStatus(HIB_nREADY enStatus);
HIB_nREADY HIB__enGetGlobalStatus(void);

void HIB__enSetGlobalCountStatus(HIB_nREADY enStatus);
HIB_nREADY HIB__enGetGlobalCountStatus(void);


#endif /* XDRIVER_MCU_DRIVER_HEADER_HIB_HIB_DRIVER_HIB_INTRINSICS_H_ */
