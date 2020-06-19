/*
 * FPU_NAN.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_NAN.h>

FPU_nNAN FPU__enGetNAN(void)
{
    FPU_nNAN enReturn= FPU_enNAN_PROPAGATE;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg>>=FPU_FPDSCR_R_DN_BIT;
    u32Reg&=FPU_FPDSCR_DN_MASK;
    enReturn= (FPU_nNAN)u32Reg;
    return (FPU_nNAN) enReturn;
}

void FPU__vSetNAN(FPU_nNAN enNAN)
{
    uint32_t u32NAN= (uint32_t)enNAN &FPU_FPDSCR_DN_MASK;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg&=~FPU_FPDSCR_R_DN_MASK;
    u32Reg|=u32NAN<<FPU_FPDSCR_R_DN_BIT;
    FPU_FPDSCR_R =u32Reg;
}
