/*
 * FPU_LazyPreservation.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */




#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_LazyPreservation.h>

#include <stdint.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nPRESERVATION_STATUS FPU__enGetLazyPreservationStatus(void)
{
    FPU_nPRESERVATION_STATUS enReturn= FPU_enPRESERVATION_NOACTIVE;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg>>=FPU_FPCCR_R_LSPACT_BIT;
    u32Reg&=FPU_FPCCR_LSPACT_MASK;
    enReturn= (FPU_nPRESERVATION_STATUS)u32Reg;
    return (FPU_nPRESERVATION_STATUS) enReturn;
}


FPU_nLAZY_PRESERVATION FPU__enGetLazyPreservation(void)
{
    FPU_nLAZY_PRESERVATION enReturn= FPU_enLAZY_PRESERVATION_DIS;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg>>=FPU_FPCCR_R_LSPEN_BIT;
    u32Reg&=FPU_FPCCR_LSPEN_MASK;
    enReturn= (FPU_nLAZY_PRESERVATION)u32Reg;
    return (FPU_nLAZY_PRESERVATION) enReturn;
}
void FPU__vSetLazyPreservation(FPU_nLAZY_PRESERVATION enAuto)
{
    uint32_t u32Auto= (uint32_t)enAuto &FPU_FPCCR_LSPEN_MASK;
    uint32_t u32Reg= FPU_FPCCR_R;
    uint32_t u32RegAux=0;

    u32Reg&=~FPU_FPCCR_R_LSPEN_MASK;
    u32RegAux =u32Auto<<FPU_FPCCR_R_LSPEN_BIT;
    u32Reg|=u32RegAux;
    FPU_FPCCR_R =u32Reg;
}
