/*
 * FPU_Rounding.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_Rounding.h>


FPU_nROUNDING FPU__enGetRounding(void)
{
    FPU_nROUNDING enReturn= FPU_enROUNDING_NEAREST;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg>>=FPU_FPDSCR_R_RMODE_BIT;
    u32Reg&=FPU_FPDSCR_RMODE_MASK;
    enReturn= (FPU_nROUNDING)u32Reg;
    return (FPU_nROUNDING) enReturn;
}

void FPU__vSetRounding(FPU_nROUNDING enRounding)
{
    uint32_t u32Rounding= (uint32_t)enRounding &FPU_FPDSCR_RMODE_MASK;
    uint32_t u32Reg= FPU_FPDSCR_R;
    uint32_t u32RegAux=0;

    u32Reg&=~FPU_FPDSCR_R_RMODE_MASK;
    u32RegAux =u32Rounding<<FPU_FPDSCR_R_RMODE_BIT;
    u32Reg|=u32RegAux;
    FPU_FPDSCR_R =u32Reg;
}
