/*
 * SYSEXC.c
 *
 *  Created on: 27/03/2020
 *      Author: vyldram
 */


#include <xDriver_MCU/Driver_Header/SYSEXC.h>

void SYSEXC_vISR(void);

void SYSEXC__vInit(SYSEXC_nINTERRUPT enInt,SYSEXC_nPRIORITY enPri)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;

    SCB__vRegisterISR(&SYSEXC_vISR,SCB_enVECISR_SYSEXC);
    SYSEXC_SYSEXCIM_R&=~(SYSEXC_SYSEXCIM_R_FPIDCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPDZCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPIOCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPUFCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPOFCIM_MASK|
            SYSEXC_SYSEXCIM_R_FPIXCIM_MASK);

    SYSEXC_SYSEXCIM_R|=(u32Reg);
    NVIC__enSetEnableIRQ(NVIC_enSTIR_SYSEXC,(NVIC_nPRIORITY)enPri);
}

void SYSEXC__vEnInterrupt(SYSEXC_nINTERRUPT enInt)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    SYSEXC_SYSEXCIM_R|=(u32Reg);
}
void SYSEXC__vDisInterrupt(SYSEXC_nINTERRUPT enInt)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    SYSEXC_SYSEXCIM_R&=~(u32Reg);
}
void SYSEXC__vClearInterrupt(SYSEXC_nINTERRUPT enInt)
{
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    SYSEXC_SYSEXCIC_R=(u32Reg);
}
SYSEXC_nSTATUS SYSEXC__enStatusInterrupt(SYSEXC_nINTERRUPT enInt)
{
    SYSEXC_nSTATUS enStatus=SYSEXC_enNOOCCUR;
    uint32_t u32Reg= (uint32_t)enInt & (uint32_t)0x3F;
    if((uint32_t)0!=(SYSEXC_SYSEXCRIS_R&u32Reg))
    {
        enStatus=SYSEXC_enOCCUR;
    }
    return enStatus;
}

uint32_t SYSEXC_pu32Context[8];
void SYSEXC_vISR(void)
{
    {
        __asm(
            " MRS R0, MSP\n"
        #if defined ( __TI_ARM__ )
            " movw R2, SYSEXC_pu32Context\n"
            " movt R2, SYSEXC_pu32Context\n"
        #elif defined ( __GNUC__ )
            " ldr R2, =SYSEXC_pu32Context\n"
        #endif
            " ldr R1, [R0, #0X0]\n"
            " str R1, [R2, #0x0]\n"/*SYSEXC_pu32Context[0] R0*/
            " ldr R1, [R0, #0x4]\n"
            " str R1, [R2, #0x4]\n"/*SYSEXC_pu32Context[1] R1*/
            " ldr R1, [R0, #0x8]\n"
            " str R1, [R2, #0x8]\n"/*SYSEXC_pu32Context[2] R2*/
            " ldr R1, [R0, #0xC]\n"
            " str R1, [R2, #0xC]\n"/*SYSEXC_pu32Context[3] R3*/
            " ldr R1, [R0, #0x10]\n"
            " str R1, [R2, #0x10]\n"/*SYSEXC_pu32Context[4] R12*/
            " ldr R1, [R0, #0x14]\n"
            " str R1, [R2, #0x14]\n"/*SYSEXC_pu32Context[5] LR*/
            " ldr R1, [R0, #0x18]\n"
            " str R1, [R2, #0x18]\n"/*SYSEXC_pu32Context[6] PC*/
            " ldr R1, [R0, #0x1C]\n"
            " str R1, [R2, #0x1C]\n");/*SYSEXC_pu32Context[7] PSR*/
    };
    uint32_t u32Reg=SYSEXC_SYSEXCMIS_R;
    if(SYSEXC_SYSEXCMIS_R_FPIDCMIS_MASK==(u32Reg & SYSEXC_SYSEXCMIS_R_FPIDCMIS_MASK))
    {
        SYSEXC_SYSEXCIC_R=SYSEXC_SYSEXCIC_R_FPIDCIC_MASK;
        while(1u){}
    }
    if(SYSEXC_SYSEXCMIS_R_FPDZCMIS_MASK==(u32Reg & SYSEXC_SYSEXCMIS_R_FPDZCMIS_MASK))
    {
        SYSEXC_SYSEXCIC_R=SYSEXC_SYSEXCIC_R_FPDZCIC_MASK;
        while(1u){}
    }
    if(SYSEXC_SYSEXCMIS_R_FPIOCMIS_MASK==(u32Reg & SYSEXC_SYSEXCMIS_R_FPIOCMIS_MASK))
    {
        SYSEXC_SYSEXCIC_R=SYSEXC_SYSEXCIC_R_FPIOCIC_MASK;
        while(1u){}
    }
    if(SYSEXC_SYSEXCMIS_R_FPUFCMIS_MASK==(u32Reg & SYSEXC_SYSEXCMIS_R_FPUFCMIS_MASK))
    {
        SYSEXC_SYSEXCIC_R=SYSEXC_SYSEXCIC_R_FPUFCIC_MASK;
        while(1u){}
    }
    if(SYSEXC_SYSEXCMIS_R_FPOFCMIS_MASK==(u32Reg & SYSEXC_SYSEXCMIS_R_FPOFCMIS_MASK))
    {
        SYSEXC_SYSEXCIC_R=SYSEXC_SYSEXCIC_R_FPOFCIC_MASK;
        while(1u){}
    }
    if(SYSEXC_SYSEXCMIS_R_FPIXCMIS_MASK==(u32Reg & SYSEXC_SYSEXCMIS_R_FPIXCMIS_MASK))
    {
        SYSEXC_SYSEXCIC_R=SYSEXC_SYSEXCIC_R_FPIXCIC_MASK;
        while(1u){}
    }
}
