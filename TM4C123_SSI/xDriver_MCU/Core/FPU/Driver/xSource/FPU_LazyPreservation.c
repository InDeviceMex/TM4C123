/*
 * FPU_LazyPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */
#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_LazyPreservation.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nPRESERVATION_STATUS FPU__enGetLazyPreservationStatus(void)
{
    FPU_nPRESERVATION_STATUS enReturn = FPU_enPRESERVATION_NOACTIVE;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(FPU_BASE, FPU_FPCCR_OFFSET, FPU_FPCCR_LSPACT_MASK, FPU_FPCCR_R_LSPACT_BIT);
    enReturn = (FPU_nPRESERVATION_STATUS) u32Reg;

    return (FPU_nPRESERVATION_STATUS) enReturn;
}

FPU_nLAZY_PRESERVATION FPU__enGetLazyPreservation(void)
{
    FPU_nLAZY_PRESERVATION enReturn = FPU_enLAZY_PRESERVATION_DIS;
    uint32_t u32Reg = 0UL;

    u32Reg = MCU__u32ReadRegister(FPU_BASE, FPU_FPCCR_OFFSET, FPU_FPCCR_LSPEN_MASK, FPU_FPCCR_R_LSPEN_BIT);
    enReturn = (FPU_nLAZY_PRESERVATION) u32Reg;

    return (FPU_nLAZY_PRESERVATION) enReturn;
}
void FPU__vSetLazyPreservation(FPU_nLAZY_PRESERVATION enAuto)
{
    MCU__vWriteRegister(FPU_BASE, FPU_FPCCR_OFFSET, (uint32_t) enAuto, FPU_FPCCR_LSPEN_MASK, FPU_FPCCR_R_LSPEN_BIT);
}
