/*
 * FPU.h
 *
 *  Created on: 14/03/2020
 *      Author: vyldram
 */

#ifndef HEADER_DRIVER_FPU_H_
#define HEADER_DRIVER_FPU_H_

#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_AccessType.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_AutoPreservation.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_LazyPreservation.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_HalfPrecision.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_NAN.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_Rounding.h>

void FPU__vInit(void);

#endif // HEADER_DRIVER_FPU_H_ //
