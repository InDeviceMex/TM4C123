/*
 * FPU.c
 *
 *  Created on: 14/03/2020
 *      Author: vyldram
 */

#include "FPU.h"

FPU_nACCESS FPU__enGetAccessType(void)
{
    FPU_nACCESS enReturn= FPU_enDENIED;
    uint32_t u32Reg= FPU_CPACR_R;
    uint32_t u32RegCP10= 0;
    uint32_t u32RegCP11= 0;

    u32RegCP10=u32Reg>>FPU_CPACR_R_CP10_BIT;
    u32RegCP10&=FPU_CPACR_CP10_MASK;
    u32RegCP11=u32Reg>>FPU_CPACR_R_CP11_BIT;
    u32RegCP11&=FPU_CPACR_CP11_MASK;
    if(u32RegCP11 == u32RegCP10)
    {
        enReturn= (FPU_nACCESS)u32RegCP11;
    }
    return enReturn;
}

void FPU__vSetAccessType(FPU_nACCESS enAccessType)
{
    uint32_t u32Access= (uint32_t)enAccessType &FPU_CPACR_CP10_MASK;
    uint32_t u32Reg= FPU_CPACR_R;

    u32Reg&=~(FPU_CPACR_R_CP10_MASK|FPU_CPACR_R_CP11_MASK);
    u32Reg|=u32Access<<FPU_CPACR_R_CP10_BIT;
    u32Reg|=u32Access<<FPU_CPACR_R_CP11_BIT;
    FPU_CPACR_R =u32Reg;
    __asm(" DSB");
    __asm(" ISB");
}

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

FPU_nPRESERVATION_STATUS FPU__enGetLazyPreservationStatus(void)
{
    FPU_nPRESERVATION_STATUS enReturn= FPU_enPRESERVATION_NOACTIVE;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg>>=FPU_FPCCR_R_LSPACT_BIT;
    u32Reg&=FPU_FPCCR_LSPACT_MASK;
    enReturn= (FPU_nPRESERVATION_STATUS)u32Reg;
    return enReturn;
}


FPU_nLAZY_PRESERVATION FPU__enGetLazyPreservation(void)
{
    FPU_nLAZY_PRESERVATION enReturn= FPU_enLAZY_PRESERVATION_DIS;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg>>=FPU_FPCCR_R_LSPEN_BIT;
    u32Reg&=FPU_FPCCR_LSPEN_MASK;
    enReturn= (FPU_nLAZY_PRESERVATION)u32Reg;
    return enReturn;
}
void FPU__vSetLazyPreservation(FPU_nLAZY_PRESERVATION enAuto)
{
    uint32_t u32Auto= (uint32_t)enAuto &FPU_FPCCR_LSPEN_MASK;
    uint32_t u32Reg= FPU_FPCCR_R;

    u32Reg&=~FPU_FPCCR_R_LSPEN_MASK;
    u32Reg|=u32Auto<<FPU_FPCCR_R_LSPEN_BIT;
    FPU_FPCCR_R =u32Reg;
}


FPU_nHALF_PRECISION FPU__enGetHalfPrecision(void)
{
    FPU_nHALF_PRECISION enReturn= FPU_enHALF_PRECISION_IEEE;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg>>=FPU_FPDSCR_R_AHP_BIT;
    u32Reg&=FPU_FPDSCR_AHP_MASK;
    enReturn= (FPU_nHALF_PRECISION)u32Reg;
    return enReturn;
}

/*ToDo use the correct register. FPSCR instead FPDSCR*/
void FPU__vSetHalfPrecision(FPU_nHALF_PRECISION enHalfPrecision)
{
    uint32_t u32HalfPrecision= (uint32_t)enHalfPrecision &FPU_FPDSCR_AHP_MASK;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg&=~FPU_FPDSCR_R_AHP_MASK;
    u32Reg|=u32HalfPrecision<<FPU_FPDSCR_R_AHP_BIT;
    FPU_FPDSCR_R =u32Reg;
}

FPU_nNAN FPU__enGetNAN(void)
{
    FPU_nNAN enReturn= FPU_enNAN_PROPAGATE;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg>>=FPU_FPDSCR_R_DN_BIT;
    u32Reg&=FPU_FPDSCR_DN_MASK;
    enReturn= (FPU_nNAN)u32Reg;
    return enReturn;
}

void FPU__vSetNAN(FPU_nNAN enNAN)
{
    uint32_t u32NAN= (uint32_t)enNAN &FPU_FPDSCR_DN_MASK;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg&=~FPU_FPDSCR_R_DN_MASK;
    u32Reg|=u32NAN<<FPU_FPDSCR_R_DN_BIT;
    FPU_FPDSCR_R =u32Reg;
}

FPU_nROUNDING FPU__enGetRounding(void)
{
    FPU_nROUNDING enReturn= FPU_enROUNDING_NEAREST;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg>>=FPU_FPDSCR_R_RMODE_BIT;
    u32Reg&=FPU_FPDSCR_RMODE_MASK;
    enReturn= (FPU_nROUNDING)u32Reg;
    return enReturn;
}

void FPU__vSetRounding(FPU_nROUNDING enRounding)
{
    uint32_t u32Rounding= (uint32_t)enRounding &FPU_FPDSCR_RMODE_MASK;
    uint32_t u32Reg= FPU_FPDSCR_R;

    u32Reg&=~FPU_FPDSCR_R_RMODE_MASK;
    u32Reg|=u32Rounding<<FPU_FPDSCR_R_RMODE_BIT;
    FPU_FPDSCR_R =u32Reg;
}


void FPU__vInit(void)
{

    FPU__vSetAccessType(FPU_enFULL_ACCESS);
    FPU__vSetLazyPreservation(FPU_enLAZY_PRESERVATION_EN);
    FPU__vSetAutoPreservation(FPU_enAUTO_PRESERVATION_EN);
    //FPU__vSetHalfPrecision(FPU_enHALF_PRECISION_IEEE);
    //FPU__vSetNAN(FPU_enNAN_PROPAGATE);
    //FPU__vSetRounding(FPU_enROUNDING_NEAREST);
}






