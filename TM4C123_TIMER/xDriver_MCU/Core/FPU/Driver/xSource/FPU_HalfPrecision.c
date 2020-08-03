/*
 * FPU_HalfPrecision.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_HalfPrecision.h>

#include <stdint.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nHALF_PRECISION FPU__enGetHalfPrecision(void)
{
    FPU_nHALF_PRECISION enReturn= FPU_enHALF_PRECISION_IEEE;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg>>=FPU_FPDSCR_R_AHP_BIT;
    u32Reg&=FPU_FPDSCR_AHP_MASK;
    enReturn= (FPU_nHALF_PRECISION)u32Reg;
    return (FPU_nHALF_PRECISION) enReturn;
}

/*ToDo use the correct register. FPSCR instead FPDSCR*/
void FPU__vSetHalfPrecision(FPU_nHALF_PRECISION enHalfPrecision)
{
    uint32_t u32HalfPrecision= (uint32_t)enHalfPrecision &FPU_FPDSCR_AHP_MASK;
    uint32_t u32Reg= FPU_FPDSCR_R;
    uint32_t u32RegAux=0;

    u32Reg&=~FPU_FPDSCR_R_AHP_MASK;
    u32RegAux=u32HalfPrecision<<FPU_FPDSCR_R_AHP_BIT;
    u32Reg|=u32RegAux;
    FPU_FPDSCR_R =u32Reg;
}
