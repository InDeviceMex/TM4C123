/*
 * FPU_AccessType.c
 *
 *  Created on: 17 jun. 2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/FPU/FPU_Driver/FPU_AccessType.h>

#include <stdint.h>
#include <xDriver_MCU/Driver_Header/FPU/FPU_Peripheral/FPU_Peripheral.h>

#define FPU_vBlocking() {__asm(" DSB");__asm(" ISB");}

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
    return (FPU_nACCESS) enReturn;
}

void FPU__vSetAccessType(FPU_nACCESS enAccessType)
{
    uint32_t u32Access= (uint32_t)enAccessType &FPU_CPACR_CP10_MASK;
    uint32_t u32Reg= FPU_CPACR_R;
    uint32_t u32Aux=0;

    u32Reg&=~(FPU_CPACR_R_CP10_MASK|FPU_CPACR_R_CP11_MASK);
    u32Aux=u32Access<<FPU_CPACR_R_CP10_BIT;
    u32Reg|=u32Aux;
    u32Aux=u32Access<<FPU_CPACR_R_CP11_BIT;
    u32Reg|=u32Aux;
    FPU_CPACR_R = u32Reg;
    FPU_vBlocking();
}

