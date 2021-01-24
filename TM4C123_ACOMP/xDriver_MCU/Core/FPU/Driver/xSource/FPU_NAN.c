/*
 * FPU_NAN.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */



#include <xDriver_MCU/Core/FPU/Driver/xHeader/FPU_NAN.h>

#include <xDriver_MCU/Common/MCU_Common.h>
#include <xUtils/Standard/Standard.h>
#include <xDriver_MCU/Core/FPU/Peripheral/FPU_Peripheral.h>

FPU_nNAN FPU__enGetNAN(void)
{
    FPU_nNAN enReturn= FPU_enNAN_PROPAGATE;
    uint32_t u32Reg= 0UL;

    u32Reg = MCU__u32ReadRegister(FPU_BASE, FPU_FPDSCR_OFFSET, FPU_FPDSCR_DN_MASK, FPU_FPDSCR_R_DN_BIT);
    enReturn= (FPU_nNAN)u32Reg;

    return (FPU_nNAN) enReturn;
}

void FPU__vSetNAN(FPU_nNAN enNAN)
{
    MCU__vWriteRegister(FPU_BASE, FPU_FPDSCR_OFFSET, (uint32_t)enNAN, FPU_FPDSCR_DN_MASK, FPU_FPDSCR_R_DN_BIT);
}
