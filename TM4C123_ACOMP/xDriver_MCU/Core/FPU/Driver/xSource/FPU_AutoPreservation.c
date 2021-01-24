/*
 * FPU_AutoPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */

#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_AutoPreservation.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>
FPU_nAUTO_PRESERVATION FPU__enGetAutoPreservation(void)
{
    FPU_nAUTO_PRESERVATION enReturn= FPU_enAUTO_PRESERVATION_DIS;
    uint32_t u32Reg= 0UL;

    u32Reg = MCU__u32ReadRegister(FPU_BASE, FPU_FPCCR_OFFSET, FPU_FPCCR_ASPEN_MASK, FPU_FPCCR_R_ASPEN_BIT);
    enReturn= (FPU_nAUTO_PRESERVATION)u32Reg;

    return (FPU_nAUTO_PRESERVATION) enReturn;
}

void FPU__vSetAutoPreservation(FPU_nAUTO_PRESERVATION enAuto)
{
    MCU__vWriteRegister(FPU_BASE, FPU_FPCCR_OFFSET, (uint32_t)enAuto, FPU_FPCCR_ASPEN_MASK, FPU_FPCCR_R_ASPEN_BIT);
}


