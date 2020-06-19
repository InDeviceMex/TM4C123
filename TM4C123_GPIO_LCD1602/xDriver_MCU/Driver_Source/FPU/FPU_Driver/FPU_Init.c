/*
 * FPU.c
 *
 *  Created on: 14/03/2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Driver_Header/FPU/FPU.h>

void FPU__vInit(void)
{

    FPU__vSetAccessType(FPU_enFULL_ACCESS);
    FPU__vSetLazyPreservation(FPU_enLAZY_PRESERVATION_EN);
    FPU__vSetAutoPreservation(FPU_enAUTO_PRESERVATION_EN);
    /*FPU__vSetHalfPrecision(FPU_enHALF_PRECISION_IEEE);*/
    /*FPU__vSetNAN(FPU_enNAN_PROPAGATE);*/
    /*FPU__vSetRounding(FPU_enROUNDING_NEAREST);*/
}






