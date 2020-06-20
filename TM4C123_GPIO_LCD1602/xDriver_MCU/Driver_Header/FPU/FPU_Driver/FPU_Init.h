/**
 *
 * @file FPU_Init.h
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
 * @verbatim 19 jun. 2020 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 jun. 2020     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_INIT_H_
#define XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_INIT_H_


#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_AccessType.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_AutoPreservation.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_LazyPreservation.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_HalfPrecision.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_NAN.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_Rounding.h>

void FPU__vInit(void);


#endif /* XDRIVER_MCU_DRIVER_HEADER_FPU_FPU_DRIVER_FPU_INIT_H_ */
