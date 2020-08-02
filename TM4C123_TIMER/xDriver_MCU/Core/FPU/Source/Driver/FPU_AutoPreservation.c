/*
 * FPU_AutoPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Core/FPU/Header/Driver/FPU_AutoPreservation.h>

#include <stdint.h>
#include <xDriver_MCU/Core/FPU/Header/Peripheral/FPU_Peripheral.h>
FPU_nAUTO_PRESERVATION FPU__enGetAutoPreservation(void)
{
    FPU_nAUTO_PRESERVATION enReturn= FPU_enAUTO_PRESERVATION_DIS;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg>>=FPU_FPCCR_R_ASPEN_BIT;
    u32Reg&=FPU_FPCCR_ASPEN_MASK;
    enReturn= (FPU_nAUTO_PRESERVATION)u32Reg;
    return (FPU_nAUTO_PRESERVATION) enReturn;
}

void FPU__vSetAutoPreservation(FPU_nAUTO_PRESERVATION enAuto)
{
    uint32_t u32Auto= (uint32_t)enAuto &FPU_FPCCR_ASPEN_MASK;
    uint32_t u32Reg= FPU_FPCCR_R;
    uint32_t u32RegAux=0;

    u32Reg&=~FPU_FPCCR_R_ASPEN_MASK;
    u32RegAux=u32Auto<<FPU_FPCCR_R_ASPEN_BIT;
    u32Reg|=u32RegAux;
    FPU_FPCCR_R =u32Reg;
}


