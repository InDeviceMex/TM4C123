/*
 * FPU_AccessType.h
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ACCESSTYPE_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ACCESSTYPE_H_


#include <xDriver_MCU/Driver_Header/FPU/FPU_Peripheral/FPU_Peripheral.h>

FPU_nACCESS FPU__enGetAccessType(void);
void        FPU__vSetAccessType(FPU_nACCESS enAccessType);


#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_ACCESSTYPE_H_ */
