/*
 * FPU_AutoPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_AutoPreservation.h>

FPU_nAUTO_PRESERVATION FPU__enGetAutoPreservation(void)
{
    FPU_nAUTO_PRESERVATION enReturn= FPU_enAUTO_PRESERVATION_DIS;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg>>=FPU_FPCCR_R_ASPEN_BIT;
    u32Reg&=FPU_FPCCR_ASPEN_MASK;
    enReturn= (FPU_nAUTO_PRESERVATION)u32Reg;
    return enReturn;
}

void FPU__vSetAutoPreservation(FPU_nAUTO_PRESERVATION enAuto)
{
    uint32_t u32Auto= (uint32_t)enAuto &FPU_FPCCR_ASPEN_MASK;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg&=~FPU_FPCCR_R_ASPEN_MASK;
    u32Reg|=u32Auto<<FPU_FPCCR_R_ASPEN_BIT;
    FPU_FPCCR_R =u32Reg;
}


