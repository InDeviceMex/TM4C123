/*
 * TIMER.c
 *
 *  Created on: 5 may. 2020
 *      Author: vyldram
 */


#include "TIMER.h"

uint32_t TIMER_u32GetModeGeneric(TIMER_nMODULE enModule,uint32_t u32MaskR, uint32_t u32Bit);
void TIMER_vSetModeGeneric(TIMER_nMODULE enModule, uint32_t u32ModeGeneric,uint32_t u32MaskR, uint32_t u32Mask, uint32_t u32Bit);

uint32_t TIMER_u32GetControlGeneric(TIMER_nMODULE enModule,uint32_t u32MaskR, uint32_t u32Bit);
void TIMER_vSetControlGeneric(TIMER_nMODULE enModule, uint32_t u32ControlGeneric,uint32_t u32MaskR, uint32_t u32Mask, uint32_t u32Bit);

void TIMER_vDUMMY(void);
void TIMER0A_vISR(void);
void TIMER0B_vISR(void);
void TIMER1A_vISR(void);
void TIMER1B_vISR(void);
void TIMER2A_vISR(void);
void TIMER2B_vISR(void);
void TIMER3A_vISR(void);
void TIMER3B_vISR(void);
void TIMER4A_vISR(void);
void TIMER4B_vISR(void);
void TIMER5A_vISR(void);
void TIMER5B_vISR(void);
void WTIMER0A_vISR(void);
void WTIMER0B_vISR(void);
void WTIMER1A_vISR(void);
void WTIMER1B_vISR(void);
void WTIMER2A_vISR(void);
void WTIMER2B_vISR(void);
void WTIMER3A_vISR(void);
void WTIMER3B_vISR(void);
void WTIMER4A_vISR(void);
void WTIMER4B_vISR(void);
void WTIMER5A_vISR(void);
void WTIMER5B_vISR(void);


void (*TIMER_vISR[2][2][6]) (void)={
                                    {
                                     {TIMER0A_vISR,TIMER1A_vISR,TIMER2A_vISR,TIMER3A_vISR,TIMER4A_vISR,TIMER5A_vISR},
                                     {TIMER0B_vISR,TIMER1B_vISR,TIMER2B_vISR,TIMER3B_vISR,TIMER4B_vISR,TIMER5B_vISR}
                                    },
                                    {
                                     {WTIMER0A_vISR,WTIMER1A_vISR,WTIMER2A_vISR,WTIMER3A_vISR,WTIMER4A_vISR,WTIMER5A_vISR},
                                     {WTIMER0B_vISR,WTIMER1B_vISR,WTIMER2B_vISR,WTIMER3B_vISR,WTIMER4B_vISR,WTIMER5B_vISR}
                                    }
                                  };

void (*TIMER_vSOURCEISR[2][2][6][6]) (void)={
                                    {
                                        {
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY}
                                        },
                                        {
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY}
                                        }
                                    },
                                    {
                                        {
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY}
                                        },
                                        {
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY},
                                            {TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY,TIMER_vDUMMY}
                                        }
                                    },
                                 };

GPTM_TypeDef* GPWTM_BLOCK[6]={GPWTM0,GPWTM1,GPWTM2,GPWTM3,GPWTM4,GPWTM5};

GPWTM_CTL_TypeDef* GPWTM_CTL_BLOCK[6]={GPWTM0_CTL,GPWTM1_CTL,GPWTM2_CTL,GPWTM3_CTL,GPWTM4_CTL,GPWTM5_CTL};
GPWTM_TA_TypeDef* GPWTM_TA_BLOCK[6]={GPWTM0_TA,GPWTM1_TA,GPWTM2_TA,GPWTM3_TA,GPWTM4_TA,GPWTM5_TA};
GPWTM_TB_TypeDef* GPWTM_TB_BLOCK[6]={GPWTM0_TB,GPWTM1_TB,GPWTM2_TB,GPWTM3_TB,GPWTM4_TB,GPWTM5_TB};
GPWTM_TW_TypeDef* GPWTM_TW_BLOCK[6]={GPWTM0_TW,GPWTM1_TW,GPWTM2_TW,GPWTM3_TW,GPWTM4_TW,GPWTM5_TW};

GPTM_TypeDef* GPTM_BLOCK[6]={GPTM0,GPTM1,GPTM2,GPTM3,GPTM4,GPTM5};

GPTM_CTL_TypeDef* GPTM_CTL_BLOCK[6]={GPTM0_CTL,GPTM1_CTL,GPTM2_CTL,GPTM3_CTL,GPTM4_CTL,GPTM5_CTL};
GPTM_TA_TypeDef* GPTM_TA_BLOCK[6]={GPTM0_TA,GPTM1_TA,GPTM2_TA,GPTM3_TA,GPTM4_TA,GPTM5_TA};
GPTM_TB_TypeDef* GPTM_TB_BLOCK[6]={GPTM0_TB,GPTM1_TB,GPTM2_TB,GPTM3_TB,GPTM4_TB,GPTM5_TB};
GPTM_TW_TypeDef* GPTM_TW_BLOCK[6]={GPTM0_TW,GPTM1_TW,GPTM2_TW,GPTM3_TW,GPTM4_TW,GPTM5_TW};

SCB_nVECISR SCB_VECTOR_TIMER[2][2][6]={
                                    {
                                     {SCB_enVECISR_TIMER0A,SCB_enVECISR_TIMER1A,SCB_enVECISR_TIMER2A,SCB_enVECISR_TIMER3A,SCB_enVECISR_TIMER4A,SCB_enVECISR_TIMER5A},
                                     {SCB_enVECISR_TIMER0B,SCB_enVECISR_TIMER1B,SCB_enVECISR_TIMER2B,SCB_enVECISR_TIMER3B,SCB_enVECISR_TIMER4B,SCB_enVECISR_TIMER5B}
                                    },
                                    {
                                     {SCB_enVECISR_WTIMER0A,SCB_enVECISR_WTIMER1A,SCB_enVECISR_WTIMER2A,SCB_enVECISR_WTIMER3A,SCB_enVECISR_WTIMER4A,SCB_enVECISR_WTIMER5A},
                                     {SCB_enVECISR_WTIMER0B,SCB_enVECISR_WTIMER1B,SCB_enVECISR_WTIMER2B,SCB_enVECISR_WTIMER3B,SCB_enVECISR_WTIMER4B,SCB_enVECISR_WTIMER5B}
                                    }
                                  };

NVIC_nSTIR NVIC_VECTOR_TIMER[2][2][6]={
                                {
                                 {NVIC_enSTIR_TIMER0A,NVIC_enSTIR_TIMER1A,NVIC_enSTIR_TIMER2A,NVIC_enSTIR_TIMER3A,NVIC_enSTIR_TIMER4A,NVIC_enSTIR_TIMER5A},
                                 {NVIC_enSTIR_TIMER0B,NVIC_enSTIR_TIMER1B,NVIC_enSTIR_TIMER2B,NVIC_enSTIR_TIMER3B,NVIC_enSTIR_TIMER4B,NVIC_enSTIR_TIMER5B}
                                },
                                {
                                 {NVIC_enSTIR_WTIMER0A,NVIC_enSTIR_WTIMER1A,NVIC_enSTIR_WTIMER2A,NVIC_enSTIR_WTIMER3A,NVIC_enSTIR_WTIMER4A,NVIC_enSTIR_WTIMER5A},
                                 {NVIC_enSTIR_WTIMER0B,NVIC_enSTIR_WTIMER1B,NVIC_enSTIR_WTIMER2B,NVIC_enSTIR_WTIMER3B,NVIC_enSTIR_WTIMER4B,NVIC_enSTIR_WTIMER5B}
                                }
                              };

SYSCTL_nPERIPHERAL SYSCTL_VECTOR_TIMER[2][6]={
                                 {SYSCTL_enTIMER0,SYSCTL_enTIMER1,SYSCTL_enTIMER2,SYSCTL_enTIMER3,SYSCTL_enTIMER4,SYSCTL_enTIMER5},
                                 {SYSCTL_enWTIMER0,SYSCTL_enWTIMER1,SYSCTL_enWTIMER2,SYSCTL_enWTIMER3,SYSCTL_enWTIMER4,SYSCTL_enWTIMER5}
                              };
uint32_t pu32Interrupt[6]={GPTM_GPTMIMR_R_TATOIM_EN,
                           GPTM_GPTMIMR_R_CAMIM_EN,
                           GPTM_GPTMIMR_R_CAEIM_EN,
                           GPTM_GPTMIMR_R_TAMIM_EN,
                           GPTM_GPTMIMR_R_RTCIM_EN,
                           GPTM_GPTMIMR_R_WUEIM_EN};
void TIMER_vDUMMY(void)
{
    while(1);
}
void TIMER__vInit(void)
{
    TIMER__vRegisterMODULEISR(TIMER0A_vISR,TIMER_enT0A);
    TIMER__vRegisterMODULEISR(TIMER0B_vISR,TIMER_enT0B);
    TIMER__vRegisterMODULEISR(TIMER1A_vISR,TIMER_enT1A);
    TIMER__vRegisterMODULEISR(TIMER1B_vISR,TIMER_enT1B);
    TIMER__vRegisterMODULEISR(TIMER2A_vISR,TIMER_enT2A);
    TIMER__vRegisterMODULEISR(TIMER2B_vISR,TIMER_enT2B);
    TIMER__vRegisterMODULEISR(TIMER3A_vISR,TIMER_enT3A);
    TIMER__vRegisterMODULEISR(TIMER3B_vISR,TIMER_enT3B);
    TIMER__vRegisterMODULEISR(TIMER4A_vISR,TIMER_enT4A);
    TIMER__vRegisterMODULEISR(TIMER4B_vISR,TIMER_enT4B);
    TIMER__vRegisterMODULEISR(TIMER5A_vISR,TIMER_enT5A);
    TIMER__vRegisterMODULEISR(TIMER5B_vISR,TIMER_enT5B);

    TIMER__vRegisterMODULEISR(WTIMER0A_vISR,TIMER_enWT0A);
    TIMER__vRegisterMODULEISR(WTIMER0B_vISR,TIMER_enWT0B);
    TIMER__vRegisterMODULEISR(WTIMER1A_vISR,TIMER_enWT1A);
    TIMER__vRegisterMODULEISR(WTIMER1B_vISR,TIMER_enWT1B);
    TIMER__vRegisterMODULEISR(WTIMER2A_vISR,TIMER_enWT2A);
    TIMER__vRegisterMODULEISR(WTIMER2B_vISR,TIMER_enWT2B);
    TIMER__vRegisterMODULEISR(WTIMER3A_vISR,TIMER_enWT3A);
    TIMER__vRegisterMODULEISR(WTIMER3B_vISR,TIMER_enWT3B);
    TIMER__vRegisterMODULEISR(WTIMER4A_vISR,TIMER_enWT4A);
    TIMER__vRegisterMODULEISR(WTIMER4B_vISR,TIMER_enWT4B);
    TIMER__vRegisterMODULEISR(WTIMER5A_vISR,TIMER_enWT5A);
    TIMER__vRegisterMODULEISR(WTIMER5B_vISR,TIMER_enWT5B);
}

void TIMER__vRegisterISR(void (*Isr) (void),TIMER_nMODULE enModule,TIMER_nINT enInterrupt)
{
    uint32_t u32Interrupt =(uint32_t) enInterrupt;

    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;


    if((uint32_t)Isr !=0)
    {
        if(TIMER_MAX<u32Number)
        {
            u32Number=TIMER_MAX;
        }
        if(TIMER_INT<u32Interrupt)
        {
            u32Interrupt=TIMER_INT;
        }

        TIMER_vSOURCEISR[u32Wide][u32Letter][u32Number][u32Interrupt]= (void (*) (void))((uint32_t)Isr|1);
    }
}

void TIMER__vRegisterMODULEISR(void (*Isr) (void),TIMER_nMODULE enModule)
{
    SCB_nVECISR enVector=SCB_enVECISR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    if(0 != (uint32_t)Isr)
    {
        if(TIMER_MAX<u32Number)
        {
            u32Number=TIMER_MAX;
        }
        enVector=SCB_VECTOR_TIMER[u32Wide][u32Letter][u32Number];

        TIMER_vISR[u32Wide][u32Letter][u32Number]=(void (*) (void))((uint32_t)Isr|1);
        SCB__vRegisterISR(TIMER_vISR[u32Wide][u32Letter][u32Number],enVector);
    }
}

void TIMER__vEnInterruptMODULE(TIMER_nMODULE enModule,TIMER_nPRIORITY enPriority)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enVector=NVIC_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
    enPriority&=0x7;
    NVIC__enSetEnableIRQ((NVIC_nSTIR)enVector,(NVIC_nPRIORITY)enPriority);
}

void TIMER__vDisInterruptMODULE(TIMER_nMODULE enModule)
{
    NVIC_nSTIR enVector=NVIC_enSTIR_TIMER0A;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enVector=NVIC_VECTOR_TIMER[u32Wide][u32Letter][u32Number];
    NVIC__enClearEnableIRQ((NVIC_nSTIR)enVector);
}

void TIMER__vSetReady(TIMER_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enTIMER0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
     uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_TIMER[u32Wide][u32Number];
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enNOREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vEnRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}

void TIMER__vClearReady(TIMER_nMODULE enModule)
{
    SYSCTL_nPERIPHERAL_READY enReady=SYSCTL_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enTIMER0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
     uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_TIMER[u32Wide][u32Number];
    enReady=SYSCTL__enIsPeripheralReady(enPeripheral);
    if(SYSCTL_enREADY == enReady)
    {
        SYSCTL__vResetPeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
        SYSCTL__vDisRunModePeripheral((SYSCTL_nPERIPHERAL)enPeripheral);
    }
}

TIMER_nREADY TIMER__enIsReady(TIMER_nMODULE enModule)
{
    TIMER_nREADY enReady=TIMER_enNOREADY;
    SYSCTL_nPERIPHERAL enPeripheral=SYSCTL_enTIMER0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enPeripheral=SYSCTL_VECTOR_TIMER[u32Wide][u32Number];
    enReady=(TIMER_nREADY)SYSCTL__enIsPeripheralReady(enPeripheral);
    return enReady;
}

void TIMER__vSetConfiguration(TIMER_nMODULE enModule, TIMER_nCONFIG enConf)
{
    uint32_t u32EnTA=0;
    uint32_t u32EnTB=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    GPWTM_CTL_TypeDef* wtimer=0;
    GPTM_CTL_TypeDef* timer=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    if(TIMER_en32 ==u32Wide)
    {
        u32EnTA=GPTM_TA_BLOCK[u32Number]->GPTMTnCTL;
        u32EnTB=GPTM_TB_BLOCK[u32Number]->GPTMTnCTL;
        GPTM_TA_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TA_GPTMTnCTL_R_TnEN_MASK;
        GPTM_TB_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TB_GPTMTnCTL_R_TnEN_MASK;

        timer=GPTM_CTL_BLOCK[u32Number];
        timer->GPTMCFG=((uint32_t)enConf&GPTM_CTL_GPTMCFG_GPTMCFG_MASK)<<GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT;

        GPTM_TA_BLOCK[u32Number]->GPTMTnCTL=u32EnTA;
        GPTM_TB_BLOCK[u32Number]->GPTMTnCTL=u32EnTB;
    }
    else
    {
        u32EnTA=GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL;
        u32EnTB=GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL;
        GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TA_GPTMTnCTL_R_TnEN_MASK;
        GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TB_GPTMTnCTL_R_TnEN_MASK;

        wtimer=GPWTM_CTL_BLOCK[u32Number];
        wtimer->GPTMCFG=((uint32_t)enConf&GPWTM_CTL_GPTMCFG_GPTMCFG_MASK)<<GPWTM_CTL_GPTMCFG_R_GPTMCFG_BIT;;

        GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL=u32EnTA;
        GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL=u32EnTB;
    }
}

TIMER_nCONFIG TIMER__enGetConfiguration(TIMER_nMODULE enModule)
{
    uint32_t u32Reg=0;
    TIMER_nCONFIG enConf=TIMER_enCONFIG_UNDEF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    GPWTM_CTL_TypeDef* wtimer=0;
    GPTM_CTL_TypeDef* timer=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        if(TIMER_en32 ==u32Wide)
        {
            timer=GPTM_CTL_BLOCK[u32Number];
            u32Reg=timer->GPTMCFG;
        }
        else
        {
            wtimer=GPWTM_CTL_BLOCK[u32Number];
            u32Reg=wtimer->GPTMCFG;
        }
        enConf=(TIMER_nCONFIG)((u32Reg&GPTM_CTL_GPTMCFG_R_GPTMCFG_MASK)>>GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT);
    }
    return enConf;
}

void TIMER_vSetModeGeneric(TIMER_nMODULE enModule, uint32_t u32ModeGeneric,uint32_t u32MaskR, uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32EnTA=0;
    uint32_t u32EnTB=0;
    uint32_t u32EnTW=0;
    uint32_t u32Reg=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    if(TIMER_en32 ==u32Wide)
    {
        switch(u32Letter)
        {
        case TIMER_enA:
            u32EnTA=GPTM_TA_BLOCK[u32Number]->GPTMTnCTL;
            GPTM_TA_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TA_GPTMTnCTL_R_TnEN_MASK;

            u32Reg=GPTM_TA_BLOCK[u32Number]->GPTMTnMR;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
            GPTM_TA_BLOCK[u32Number]->GPTMTnMR=u32Reg;

            GPTM_TA_BLOCK[u32Number]->GPTMTnCTL=u32EnTA;
            break;
        case TIMER_enB:
            u32EnTB=GPTM_TB_BLOCK[u32Number]->GPTMTnCTL;
            GPTM_TB_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TB_GPTMTnCTL_R_TnEN_MASK;

            u32Reg=GPTM_TB_BLOCK[u32Number]->GPTMTnMR;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
            GPTM_TB_BLOCK[u32Number]->GPTMTnMR=u32Reg;

            GPTM_TB_BLOCK[u32Number]->GPTMTnCTL=u32EnTB;
            break;
        case TIMER_enW:
            u32EnTW=GPTM_TW_BLOCK[u32Number]->GPTMTnCTL;
            GPTM_TW_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TW_GPTMTnCTL_R_TnEN_MASK;

            u32Reg=GPTM_TW_BLOCK[u32Number]->GPTMTnMR;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
            GPTM_TW_BLOCK[u32Number]->GPTMTnMR=u32Reg;

            GPTM_TW_BLOCK[u32Number]->GPTMTnCTL=u32EnTW;
            break;
        default:
            break;
        }
    }
    else
    {
        switch(u32Letter)
        {
        case TIMER_enA:
            u32EnTA=GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL;
            GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TA_GPTMTnCTL_R_TnEN_MASK;

            u32Reg=GPWTM_TA_BLOCK[u32Number]->GPTMTnMR;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
            GPWTM_TA_BLOCK[u32Number]->GPTMTnMR=u32Reg;

            GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL=u32EnTA;
            break;
        case TIMER_enB:
            u32EnTB=GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL;
            GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TB_GPTMTnCTL_R_TnEN_MASK;

            u32Reg=GPWTM_TB_BLOCK[u32Number]->GPTMTnMR;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
            GPWTM_TB_BLOCK[u32Number]->GPTMTnMR=u32Reg;

            GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL=u32EnTB;
            break;
        case TIMER_enW:
            u32EnTW=GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL;
            GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TW_GPTMTnCTL_R_TnEN_MASK;

            u32Reg=GPWTM_TW_BLOCK[u32Number]->GPTMTnMR;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
            GPWTM_TW_BLOCK[u32Number]->GPTMTnMR=u32Reg;

            GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL=u32EnTW;
            break;
        default:
            break;
        }
    }
}

uint32_t TIMER_u32GetModeGeneric(TIMER_nMODULE enModule,uint32_t u32MaskR, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ModeGeneric=0xFF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        if(TIMER_en32 ==u32Wide)
        {
            switch(u32Letter)
            {
            case TIMER_enA:
                u32Reg=GPTM_TA_BLOCK[u32Number]->GPTMTnMR;
                u32Reg&=u32MaskR;
                break;
            case TIMER_enB:
                u32Reg=GPTM_TB_BLOCK[u32Number]->GPTMTnMR;
                u32Reg&=u32MaskR;
                break;
            case TIMER_enW:
                u32Reg=GPTM_TW_BLOCK[u32Number]->GPTMTnMR;
                u32Reg&=u32MaskR;
                break;
            default:
                break;
            }
        }
        else
        {
            switch(u32Letter)
            {
            case TIMER_enA:
                u32Reg=GPWTM_TA_BLOCK[u32Number]->GPTMTnMR;
                u32Reg&=u32MaskR;
                break;
            case TIMER_enB:
                u32Reg=GPWTM_TB_BLOCK[u32Number]->GPTMTnMR;
                u32Reg&=u32MaskR;
                break;
            case TIMER_enW:
                u32Reg=GPWTM_TW_BLOCK[u32Number]->GPTMTnMR;
                u32Reg&=u32MaskR;
                break;
            default:
                break;
            }
        }
        u32ModeGeneric=(uint32_t)(u32Reg>>u32Bit);
    }
    return u32ModeGeneric;
}

void TIMER__vSetSubMode(TIMER_nMODULE enModule, TIMER_nSUB_MODE enSubMode)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    if(TIMER_enW != u32Letter)
    {
        TIMER_vSetModeGeneric(enModule, (uint32_t) enSubMode,GPTM_TA_GPTMTnMR_R_TnMR_MASK, GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
    }
    else
    {
        if(TIMER_enSUB_MODE_CAPTURE>enSubMode)
        {
            TIMER_vSetModeGeneric(enModule, (uint32_t) enSubMode,GPTM_TA_GPTMTnMR_R_TnMR_MASK, GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
        }
    }
}
TIMER_nSUB_MODE TIMER__enGetSubMode(TIMER_nMODULE enModule)
{
    return (TIMER_nSUB_MODE)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
}


void TIMER__vSetEdgeMode(TIMER_nMODULE enModule, TIMER_nEDGE_MODE enEdgeMode)
{

    TIMER_vSetModeGeneric(enModule, (uint32_t) enEdgeMode,GPTM_TA_GPTMTnMR_R_TnCMR_MASK, GPTM_TA_GPTMTnMR_TnCMR_MASK, GPTM_TA_GPTMTnMR_R_TnCMR_BIT);
}

TIMER_nEDGE_MODE TIMER__enGetEdgeMode(TIMER_nMODULE enModule)
{

    return (TIMER_nEDGE_MODE)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnCMR_MASK, GPTM_TA_GPTMTnMR_R_TnCMR_BIT);
}

void TIMER__vSetAltMode(TIMER_nMODULE enModule, TIMER_nALT_MODE enAltMode)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enAltMode,GPTM_TA_GPTMTnMR_R_TnAMS_MASK, GPTM_TA_GPTMTnMR_TnAMS_MASK, GPTM_TA_GPTMTnMR_R_TnAMS_BIT);
}

TIMER_nALT_MODE TIMER__enGetAltMode(TIMER_nMODULE enModule)
{
    return (TIMER_nALT_MODE)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnAMS_MASK, GPTM_TA_GPTMTnMR_R_TnAMS_BIT);
}

void TIMER__vSetCountDir(TIMER_nMODULE enModule, TIMER_nCOUNT_DIR enCountDir)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enCountDir,GPTM_TA_GPTMTnMR_R_TnCDIR_MASK, GPTM_TA_GPTMTnMR_TnCDIR_MASK, GPTM_TA_GPTMTnMR_R_TnCDIR_BIT);
}

TIMER_nCOUNT_DIR TIMER__enGetCountDir(TIMER_nMODULE enModule)
{
    return (TIMER_nCOUNT_DIR)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnCDIR_MASK, GPTM_TA_GPTMTnMR_R_TnCDIR_BIT);
}

void TIMER__vSetWaitTrigger(TIMER_nMODULE enModule, TIMER_nWAIT enWaitTrigger)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enWaitTrigger,GPTM_TA_GPTMTnMR_R_TnWOT_MASK, GPTM_TA_GPTMTnMR_TnWOT_MASK, GPTM_TA_GPTMTnMR_R_TnWOT_BIT);
}

TIMER_nWAIT TIMER__enGetWaitTrigger(TIMER_nMODULE enModule)
{
    return (TIMER_nWAIT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnWOT_MASK, GPTM_TA_GPTMTnMR_R_TnWOT_BIT);
}

void TIMER__vSetSnapShot(TIMER_nMODULE enModule, TIMER_nSNAPSHOT enSnapShot)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enSnapShot,GPTM_TA_GPTMTnMR_R_TnSNAPS_MASK, GPTM_TA_GPTMTnMR_TnSNAPS_MASK, GPTM_TA_GPTMTnMR_R_TnSNAPS_BIT);
}

TIMER_nSNAPSHOT TIMER__enGetSnapShot(TIMER_nMODULE enModule)
{
    return (TIMER_nSNAPSHOT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnSNAPS_MASK, GPTM_TA_GPTMTnMR_R_TnSNAPS_BIT);
}

void TIMER__vSetUpdateIntervalMode(TIMER_nMODULE enModule, TIMER_nUPDATE_INTERVAL enUpdateIntervalMode)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enUpdateIntervalMode,GPTM_TA_GPTMTnMR_R_TnILD_MASK, GPTM_TA_GPTMTnMR_TnILD_MASK, GPTM_TA_GPTMTnMR_R_TnILD_BIT);
}

TIMER_nUPDATE_INTERVAL TIMER__enGetUpdateIntervalMode(TIMER_nMODULE enModule)
{
    return (TIMER_nUPDATE_INTERVAL)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnILD_MASK, GPTM_TA_GPTMTnMR_R_TnILD_BIT);
}

void TIMER__vSetPWMInterrupt(TIMER_nMODULE enModule, TIMER_nPWM_INT enPWMInterrupt)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enPWMInterrupt,GPTM_TA_GPTMTnMR_R_TnPWMIE_MASK, GPTM_TA_GPTMTnMR_TnPWMIE_MASK, GPTM_TA_GPTMTnMR_R_TnPWMIE_BIT);
}

TIMER_nPWM_INT TIMER__enGetPWMInterrupt(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_INT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnPWMIE_MASK, GPTM_TA_GPTMTnMR_R_TnPWMIE_BIT);
}

void TIMER__vSetUpdateMatchMode(TIMER_nMODULE enModule, TIMER_nUPDATE_MATCH enUpdateMatchMode)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enUpdateMatchMode,GPTM_TA_GPTMTnMR_R_TnMRSU_MASK, GPTM_TA_GPTMTnMR_TnMRSU_MASK, GPTM_TA_GPTMTnMR_R_TnMRSU_BIT);
}

TIMER_nUPDATE_MATCH TIMER__enGetUpdateMatchMode(TIMER_nMODULE enModule)
{
    return (TIMER_nUPDATE_MATCH)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnMRSU_MASK, GPTM_TA_GPTMTnMR_R_TnMRSU_BIT);
}

void TIMER__vSetPWMOutputInit(TIMER_nMODULE enModule, TIMER_nPWM_OUT_INIT enPWMOutputInit)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enPWMOutputInit,GPTM_TA_GPTMTnMR_R_TnPLO_MASK, GPTM_TA_GPTMTnMR_TnPLO_MASK, GPTM_TA_GPTMTnMR_R_TnPLO_BIT);
}

TIMER_nPWM_OUT_INIT TIMER__enGetPWMOutputInit(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_OUT_INIT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_R_TnPLO_MASK, GPTM_TA_GPTMTnMR_R_TnPLO_BIT);
}

void TIMER_vSetControlGeneric(TIMER_nMODULE enModule, uint32_t u32ControlGeneric,uint32_t u32MaskR, uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    if(TIMER_en32 ==u32Wide)
    {
        switch(u32Letter)
        {
        case TIMER_enA:
            u32Reg=GPTM_TA_BLOCK[u32Number]->GPTMTnCTL;
            GPTM_TA_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TA_GPTMTnCTL_R_TnEN_MASK;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<u32Bit;
            GPTM_TA_BLOCK[u32Number]->GPTMTnCTL=u32Reg;
            break;
        case TIMER_enB:
            u32Reg=GPTM_TB_BLOCK[u32Number]->GPTMTnCTL;
            GPTM_TB_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TB_GPTMTnCTL_R_TnEN_MASK;
            u32Reg&=~(u32MaskR<<8);
            u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<(u32Bit+8);
            GPTM_TB_BLOCK[u32Number]->GPTMTnCTL=u32Reg;
            break;
        case TIMER_enW:
            u32Reg=GPTM_TW_BLOCK[u32Number]->GPTMTnCTL;
            GPTM_TW_BLOCK[u32Number]->GPTMTnCTL&=~GPTM_TW_GPTMTnCTL_R_TnEN_MASK;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<u32Bit;
            GPTM_TW_BLOCK[u32Number]->GPTMTnCTL=u32Reg;
            break;
        default:
            break;
        }
    }
    else
    {
        switch(u32Letter)
        {
        case TIMER_enA:
            u32Reg=GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL;
            GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TA_GPTMTnCTL_R_TnEN_MASK;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<u32Bit;
            GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL=u32Reg;
            break;
        case TIMER_enB:
            u32Reg=GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL;
            GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TB_GPTMTnCTL_R_TnEN_MASK;
            u32Reg&=~(u32MaskR<<8);
            u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<(u32Bit+8);
            GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL=u32Reg;
            break;
        case TIMER_enW:
            u32Reg=GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL;
            GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL&=~GPWTM_TW_GPTMTnCTL_R_TnEN_MASK;
            u32Reg&=~u32MaskR;
            u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<u32Bit;
            GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL=u32Reg;
            break;
        default:
            break;
        }
    }
}

uint32_t TIMER_u32GetControlGeneric(TIMER_nMODULE enModule,uint32_t u32MaskR, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ControlGeneric=0xFF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        if(TIMER_en32 ==u32Wide)
        {
            switch(u32Letter)
            {
            case TIMER_enA:
                u32Reg=GPTM_TA_BLOCK[u32Number]->GPTMTnCTL;
                u32Reg&=u32MaskR;
                u32ControlGeneric=(uint32_t)(u32Reg>>u32Bit);
                break;
            case TIMER_enB:
                u32Reg=GPTM_TB_BLOCK[u32Number]->GPTMTnCTL;
                u32Reg&=(u32MaskR<<8);
                u32ControlGeneric=(uint32_t)(u32Reg>>(u32Bit+8));
                break;
            case TIMER_enW:
                u32Reg=GPTM_TW_BLOCK[u32Number]->GPTMTnCTL;
                u32Reg&=u32MaskR;
                u32ControlGeneric=(uint32_t)(u32Reg>>u32Bit);
                break;
            default:
                break;
            }
        }
        else
        {
            switch(u32Letter)
            {
            case TIMER_enA:
                u32Reg=GPWTM_TA_BLOCK[u32Number]->GPTMTnCTL;
                u32Reg&=u32MaskR;
                u32ControlGeneric=(uint32_t)(u32Reg>>u32Bit);
                break;
            case TIMER_enB:
                u32Reg=GPWTM_TB_BLOCK[u32Number]->GPTMTnCTL;
                u32Reg&=(u32MaskR<<8);
                u32ControlGeneric=(uint32_t)(u32Reg>>(u32Bit+8));
                break;
            case TIMER_enW:
                u32Reg=GPWTM_TW_BLOCK[u32Number]->GPTMTnCTL;
                u32Reg&=u32MaskR;
                u32ControlGeneric=(uint32_t)(u32Reg>>u32Bit);
                break;
            default:
                break;
            }
        }
    }
    return u32ControlGeneric;
}

void TIMER__vSetEnable(TIMER_nMODULE enModule, TIMER_nENABLE enEnable)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enEnable,GPTM_TA_GPTMTnCTL_R_TnEN_MASK, GPTM_TA_GPTMTnCTL_TnEN_MASK, GPTM_TA_GPTMTnCTL_R_TnEN_BIT);
}

TIMER_nENABLE TIMER__enGetEnable(TIMER_nMODULE enModule)
{
    return (TIMER_nENABLE)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_R_TnEN_MASK, GPTM_TA_GPTMTnCTL_R_TnEN_BIT);
}

void TIMER__vSetStall(TIMER_nMODULE enModule, TIMER_nSTALL enStall)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enStall,GPTM_TA_GPTMTnCTL_R_TnSTALL_MASK, GPTM_TA_GPTMTnCTL_TnSTALL_MASK, GPTM_TA_GPTMTnCTL_R_TnSTALL_BIT);
}

TIMER_nSTALL TIMER__enGetStall(TIMER_nMODULE enModule)
{
    return (TIMER_nSTALL)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_R_TnSTALL_MASK, GPTM_TA_GPTMTnCTL_R_TnSTALL_BIT);
}

void TIMER__vSetEdgeEvent(TIMER_nMODULE enModule, TIMER_nEDGE_EVENT enEdgeEvent)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enEdgeEvent,GPTM_TA_GPTMTnCTL_R_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT);
}

TIMER_nEDGE_EVENT TIMER__enGetEdgeEvent(TIMER_nMODULE enModule)
{
    return (TIMER_nEDGE_EVENT)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_R_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT);
}

void TIMER__vSetRTCStall(TIMER_nMODULE enModule, TIMER_nRTC_STALL enRTCStall)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    if(TIMER_enW == u32Letter)
    {
        TIMER_vSetControlGeneric(enModule, (uint32_t) enRTCStall,GPTM_TW_GPTMTnCTL_R_RTCEN_MASK, GPTM_TW_GPTMTnCTL_RTCEN_MASK, GPTM_TW_GPTMTnCTL_R_RTCEN_BIT);
    }
}

TIMER_nRTC_STALL TIMER__enGetRTCStall(TIMER_nMODULE enModule)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    TIMER_nRTC_STALL enReturn = TIMER_enRTC_STALL_UNDEF;
    if(TIMER_enW == u32Letter)
    {
        enReturn = (TIMER_nRTC_STALL)TIMER_u32GetControlGeneric(enModule,GPTM_TW_GPTMTnCTL_R_RTCEN_MASK, GPTM_TW_GPTMTnCTL_R_RTCEN_BIT);
    }
    return enReturn;
}

void TIMER__vSetADCTrigger(TIMER_nMODULE enModule, TIMER_nADC_TRIGGER enADCTrigger)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enADCTrigger,GPTM_TA_GPTMTnCTL_R_TnOTE_MASK, GPTM_TA_GPTMTnCTL_TnOTE_MASK, GPTM_TA_GPTMTnCTL_R_TnOTE_BIT);
}

TIMER_nADC_TRIGGER TIMER__enGetADCTrigger(TIMER_nMODULE enModule)
{
    return (TIMER_nADC_TRIGGER)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_R_TnOTE_MASK, GPTM_TA_GPTMTnCTL_R_TnOTE_BIT);
}

void TIMER__vSetPWMOutputLevel(TIMER_nMODULE enModule, TIMER_nPWM_OUTPUT enPWMOutputLevel)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enPWMOutputLevel,GPTM_TA_GPTMTnCTL_R_TnPWML_MASK, GPTM_TA_GPTMTnCTL_TnPWML_MASK, GPTM_TA_GPTMTnCTL_R_TnPWML_BIT);
}

TIMER_nPWM_OUTPUT TIMER__enGetPWMOutputLevel(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_OUTPUT)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_R_TnPWML_MASK, GPTM_TA_GPTMTnCTL_R_TnPWML_BIT);
}

void TIMER__vSetSyncronize(TIMER_nSYNC enSync)
{
    GPTM0_GPTMSYNC_R=(uint32_t)enSync&(uint32_t)TIMER_enSYNC_ALL;
}
void TIMER0A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM0_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TA)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[0][0][0][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[0][0][0][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[0][0][0][2]();
    }
    if(u8Reg & TIMER_enMATCH_TA)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[0][0][0][3]();
    }
    if(u8Reg & TIMER_enRTC_TW)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[0][0][0][4]();
    }

}


void TIMER0B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM0_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[0][1][0][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[0][1][0][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[0][1][0][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[0][1][0][3]();
    }
}




void TIMER1A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM1_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TA)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[0][0][1][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[0][0][1][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[0][0][1][2]();
    }
    if(u8Reg & TIMER_enMATCH_TA)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[0][0][1][3]();
    }
    if(u8Reg & TIMER_enRTC_TW)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[0][0][1][4]();
    }

}


void TIMER1B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM1_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[0][1][1][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[0][1][1][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[0][1][1][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[0][1][1][3]();
    }
}





void TIMER2A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM2_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TA)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[0][0][2][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[0][0][2][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[0][0][2][2]();
    }
    if(u8Reg & TIMER_enMATCH_TA)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[0][0][2][3]();
    }
    if(u8Reg & TIMER_enRTC_TW)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[0][0][2][4]();
    }

}


void TIMER2B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM2_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[0][1][2][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[0][1][2][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[0][1][2][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[0][1][2][3]();
    }
}


void TIMER3A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM3_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TA)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[0][0][3][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[0][0][3][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[0][0][3][2]();
    }
    if(u8Reg & TIMER_enMATCH_TA)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[0][0][3][3]();
    }
    if(u8Reg & TIMER_enRTC_TW)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[0][0][3][4]();
    }

}


void TIMER3B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM3_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[0][1][3][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[0][1][3][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[0][1][3][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[0][1][3][3]();
    }
}

void TIMER4A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM4_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TA)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[0][0][4][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[0][0][4][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[0][0][4][2]();
    }
    if(u8Reg & TIMER_enMATCH_TA)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[0][0][4][3]();
    }
    if(u8Reg & TIMER_enRTC_TW)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[0][0][4][4]();
    }
}


void TIMER4B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM4_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[0][1][4][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[0][1][4][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[0][1][4][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[0][1][4][3]();
    }
}

void TIMER5A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM5_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TA)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[0][0][5][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[0][0][5][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[0][0][5][2]();
    }
    if(u8Reg & TIMER_enMATCH_TA)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[0][0][5][3]();
    }
    if(u8Reg & TIMER_enRTC_TW)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[0][0][5][4]();
    }

}


void TIMER5B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM5_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[0][1][5][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[0][1][5][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[0][1][5][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[0][1][5][3]();
    }
}



void WTIMER0A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM0_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enTIMEOUT_TA)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[1][0][0][0]();
    }
    if(u32Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[1][0][0][1]();
    }
    if(u32Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[1][0][0][2]();
    }
    if(u32Reg & TIMER_enMATCH_TA)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[1][0][0][3]();
    }
    if(u32Reg & TIMER_enRTC_TW)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[1][0][0][4]();
    }
    if(u32Reg & TIMER_enWRITEUPDATE_TW)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enWRITEUPDATE_TW;
        TIMER_vSOURCEISR[1][0][0][5]();
    }

}


void WTIMER0B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM0_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[1][1][0][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[1][1][0][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[1][1][0][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[1][1][0][3]();
    }
}




void WTIMER1A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM1_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enTIMEOUT_TA)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[1][0][1][0]();
    }
    if(u32Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[1][0][1][1]();
    }
    if(u32Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[1][0][1][2]();
    }
    if(u32Reg & TIMER_enMATCH_TA)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[1][0][1][3]();
    }
    if(u32Reg & TIMER_enRTC_TW)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[1][0][1][4]();
    }
    if(u32Reg & TIMER_enWRITEUPDATE_TW)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enWRITEUPDATE_TW;
        TIMER_vSOURCEISR[1][0][1][5]();
    }

}


void WTIMER1B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM1_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[1][1][1][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[1][1][1][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[1][1][1][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[1][1][1][3]();
    }
}





void WTIMER2A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM2_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enTIMEOUT_TA)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[1][0][2][0]();
    }
    if(u32Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[1][0][2][1]();
    }
    if(u32Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[1][0][2][2]();
    }
    if(u32Reg & TIMER_enMATCH_TA)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[1][0][2][3]();
    }
    if(u32Reg & TIMER_enRTC_TW)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[1][0][2][4]();
    }
    if(u32Reg & TIMER_enWRITEUPDATE_TW)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enWRITEUPDATE_TW;
        TIMER_vSOURCEISR[1][0][2][5]();
    }

}


void WTIMER2B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM2_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[1][1][2][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[1][1][2][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[1][1][2][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[1][1][2][3]();
    }
}


void WTIMER3A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM3_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enTIMEOUT_TA)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[1][0][3][0]();
    }
    if(u32Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[1][0][3][1]();
    }
    if(u32Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[1][0][3][2]();
    }
    if(u32Reg & TIMER_enMATCH_TA)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[1][0][3][3]();
    }
    if(u32Reg & TIMER_enRTC_TW)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[1][0][3][4]();
    }
    if(u32Reg & TIMER_enWRITEUPDATE_TW)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enWRITEUPDATE_TW;
        TIMER_vSOURCEISR[1][0][3][5]();
    }

}


void WTIMER3B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM3_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[1][1][3][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[1][1][3][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[1][1][3][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[1][1][3][3]();
    }
}

void WTIMER4A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM4_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enTIMEOUT_TA)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[1][0][4][0]();
    }
    if(u32Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[1][0][4][1]();
    }
    if(u32Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[1][0][4][2]();
    }
    if(u32Reg & TIMER_enMATCH_TA)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[1][0][4][3]();
    }
    if(u32Reg & TIMER_enRTC_TW)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[1][0][4][4]();
    }
    if(u32Reg & TIMER_enWRITEUPDATE_TW)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enWRITEUPDATE_TW;
        TIMER_vSOURCEISR[1][0][4][5]();
    }

}


void WTIMER4B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM4_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[1][1][4][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[1][1][4][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[1][1][4][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[1][1][4][3]();
    }
}

void WTIMER5A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM5_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enTIMEOUT_TA)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enTIMEOUT_TA;
        TIMER_vSOURCEISR[1][0][5][0]();
    }
    if(u32Reg & TIMER_enCAPTUREMATCH_TA)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TA;
        TIMER_vSOURCEISR[1][0][5][1]();
    }
    if(u32Reg & TIMER_enCAPTUREEVENT_TA)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TA;
        TIMER_vSOURCEISR[1][0][5][2]();
    }
    if(u32Reg & TIMER_enMATCH_TA)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enMATCH_TA;
        TIMER_vSOURCEISR[1][0][5][3]();
    }
    if(u32Reg & TIMER_enRTC_TW)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enRTC_TW;
        TIMER_vSOURCEISR[1][0][5][4]();
    }
    if(u32Reg & TIMER_enWRITEUPDATE_TW)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enWRITEUPDATE_TW;
        TIMER_vSOURCEISR[1][0][5][5]();
    }

}


void WTIMER5B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM5_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enTIMEOUT_TB)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enTIMEOUT_TB;
        TIMER_vSOURCEISR[1][1][5][0]();
    }
    if(u8Reg & TIMER_enCAPTUREMATCH_TB)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enCAPTUREMATCH_TB;
        TIMER_vSOURCEISR[1][1][5][1]();
    }
    if(u8Reg & TIMER_enCAPTUREEVENT_TB)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enCAPTUREEVENT_TB;
        TIMER_vSOURCEISR[1][1][5][2]();
    }
    if(u8Reg & TIMER_enMATCH_TB)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enMATCH_TB;
        TIMER_vSOURCEISR[1][1][5][3]();
    }
}
