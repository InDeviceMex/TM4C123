/*
 * FPU.c
 *
 *  Created on: 14 / 03 / 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_Init.h>

#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_AccessType.h>
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_AutoPreservation.h>
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_LazyPreservation.h>
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_HalfPrecision.h>
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_NAN.h>
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_Rounding.h>

void FPU__vInit(void)
{
    FPU__vSetAccessType(FPU_enFULL_ACCESS);
    FPU__vSetLazyPreservation(FPU_enLAZY_PRESERVATION_ENA);
    FPU__vSetAutoPreservation(FPU_enAUTO_PRESERVATION_ENA);
    /*FPU__vSetHalfPrecision(FPU_enHALF_PRECISION_IEEE);*/
    /*FPU__vSetNAN(FPU_enNAN_PROPAGATE);*/
    /*FPU__vSetRounding(FPU_enROUNDING_NEAREST);*/
}
