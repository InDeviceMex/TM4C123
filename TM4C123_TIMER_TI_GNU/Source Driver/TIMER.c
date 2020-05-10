/*
 * TIMER.c
 *
 *  Created on: 5 may. 2020
 *      Author: vyldram
 */


#include "TIMER.h"

uint32_t TIMER_u32GetModeGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit);
void TIMER_vSetModeGeneric(TIMER_nMODULE enModule, uint32_t u32ModeGeneric, uint32_t u32Mask, uint32_t u32Bit);

uint32_t TIMER_u32GetControlGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit);
void TIMER_vSetControlGeneric(TIMER_nMODULE enModule, uint32_t u32ControlGeneric, uint32_t u32Mask, uint32_t u32Bit);

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


GPTM_TypeDef *TIMER_BLOCK[2][6]={
                                     {GPTM0,GPTM1,GPTM2,GPTM3,GPTM4,GPTM5},
                                     {GPWTM0,GPWTM1,GPWTM2,GPWTM3,GPWTM4,GPWTM5},
                                  };

volatile uint32_t * TIMER_TnMR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnMR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnMR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnMR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnMR_OFFSET)},
 }
};

volatile uint32_t * TIMER_TnILR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnILR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnILR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnILR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnILR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnILR_OFFSET)},
 }
};


volatile uint32_t * TIMER_TnPR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnPR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnPR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnPR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnPR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnPR_OFFSET)},
 }
};

volatile uint32_t * TIMER_TnMATCHR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnMATCHR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnMATCHR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnMATCHR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnMATCHR_OFFSET)},
 }
};


volatile uint32_t * TIMER_TnPMR_BLOCK[2][2][6]=
{
 {
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TA_GPTMTnPMR_OFFSET)},
     {(volatile uint32_t *)(GPTM0_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM1_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM2_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM3_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM4_BASE + GPTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPTM5_BASE + GPTM_TB_GPTMTnPMR_OFFSET)},
 },
 {
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TA_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TA_GPTMTnPMR_OFFSET)},
     {(volatile uint32_t *)(GPWTM0_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TB_GPTMTnPMR_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TB_GPTMTnPMR_OFFSET)},
 }
};

volatile uint32_t * TIMER_RTCPD_BLOCK[6]=
{
     (volatile uint32_t *)(GPWTM0_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM1_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM2_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM3_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM4_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),(volatile uint32_t *)(GPWTM5_BASE + GPWTM_TW_GPTMRTCPD_OFFSET),
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

void TIMER__vRegisterISR(void (*Isr) (void),TIMER_nMODULE enModule,TIMER_nINTERRUPT enInterrupt)
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
    uint32_t u32En=0;
    uint32_t u32Reg=0;
    uint32_t u32Conf=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    GPTM_TypeDef* psTimer=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    psTimer=TIMER_BLOCK[u32Wide][u32Number];

    u32En=psTimer->GPTMCTL;
    u32Reg=(u32En&~(GPTM_GPTMCTL_R_TAEN_MASK|GPTM_GPTMCTL_R_TBEN_MASK));
    psTimer->GPTMCTL=u32Reg;

    u32Conf=(uint32_t)enConf;
    u32Conf&=GPTM_CTL_GPTMCFG_GPTMCFG_MASK;
    u32Conf<<=GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT;
    psTimer->GPTMCFG=u32Conf;

    psTimer->GPTMCTL=u32En;
}

TIMER_nCONFIG TIMER__enGetConfiguration(TIMER_nMODULE enModule)
{
    uint32_t u32Reg=0;
    TIMER_nCONFIG enConf=TIMER_enCONFIG_UNDEF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;

    GPTM_TypeDef* psTimer=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        psTimer=TIMER_BLOCK[u32Wide][u32Number];
        u32Reg=psTimer->GPTMCFG;
        u32Reg&=GPTM_CTL_GPTMCFG_R_GPTMCFG_MASK;
        u32Reg>>=GPTM_CTL_GPTMCFG_R_GPTMCFG_BIT;
        enConf=(TIMER_nCONFIG)(u32Reg);
    }
    return enConf;
}

void TIMER_vSetModeGeneric(TIMER_nMODULE enModule, uint32_t u32ModeGeneric,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32En=0;
    uint32_t u32Reg=0;
    uint32_t u32Shift=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    GPTM_TypeDef* psTimerCTL=0;
    volatile uint32_t* pu32TimerMR=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);

    if(TIMER_enB==u32Letter)
    {
        u32Shift=8;
    }
    psTimerCTL=TIMER_BLOCK[u32Wide][u32Number];
    pu32TimerMR=TIMER_TnMR_BLOCK[u32Wide][u32Letter][u32Number];

    u32En=psTimerCTL->GPTMCTL;
    u32Reg=(u32En&~(GPTM_GPTMCTL_TAEN_MASK<<u32Shift));
    psTimerCTL->GPTMCTL=u32Reg;

    u32Reg=*pu32TimerMR;
    u32Reg&=~(u32Mask<<u32Bit);
    u32Reg|=((uint32_t)u32ModeGeneric&u32Mask)<<u32Bit;
    *pu32TimerMR=u32Reg;

    psTimerCTL->GPTMCTL=u32En;
}

uint32_t TIMER_u32GetModeGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ModeGeneric=0xFF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    volatile uint32_t* pu32TimerMR=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        pu32TimerMR=TIMER_TnMR_BLOCK[u32Wide][u32Letter][u32Number];
        u32Reg=*pu32TimerMR;
        u32Reg>>=u32Bit;
        u32Reg&=u32Mask;
        u32ModeGeneric=(uint32_t)(u32Reg);
    }
    return u32ModeGeneric;
}

void TIMER__vSetSubMode(TIMER_nMODULE enModule, TIMER_nSUB_MODE enSubMode)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    if(TIMER_enW != u32Letter)
    {
        TIMER_vSetModeGeneric(enModule, (uint32_t) enSubMode, GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
    }
    else
    {
        if(TIMER_enSUB_MODE_CAPTURE>enSubMode)
        {
            TIMER_vSetModeGeneric(enModule, (uint32_t) enSubMode, GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
        }
    }
}
TIMER_nSUB_MODE TIMER__enGetSubMode(TIMER_nMODULE enModule)
{
    return (TIMER_nSUB_MODE)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnMR_MASK, GPTM_TA_GPTMTnMR_R_TnMR_BIT);
}


void TIMER__vSetEdgeMode(TIMER_nMODULE enModule, TIMER_nEDGE_MODE enEdgeMode)
{

    TIMER_vSetModeGeneric(enModule, (uint32_t) enEdgeMode, GPTM_TA_GPTMTnMR_TnCMR_MASK, GPTM_TA_GPTMTnMR_R_TnCMR_BIT);
}

TIMER_nEDGE_MODE TIMER__enGetEdgeMode(TIMER_nMODULE enModule)
{

    return (TIMER_nEDGE_MODE)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnCMR_MASK, GPTM_TA_GPTMTnMR_R_TnCMR_BIT);
}

void TIMER__vSetAltMode(TIMER_nMODULE enModule, TIMER_nALT_MODE enAltMode)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enAltMode, GPTM_TA_GPTMTnMR_TnAMS_MASK, GPTM_TA_GPTMTnMR_R_TnAMS_BIT);
}

TIMER_nALT_MODE TIMER__enGetAltMode(TIMER_nMODULE enModule)
{
    return (TIMER_nALT_MODE)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnAMS_MASK, GPTM_TA_GPTMTnMR_R_TnAMS_BIT);
}

void TIMER__vSetCountDir(TIMER_nMODULE enModule, TIMER_nCOUNT_DIR enCountDir)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enCountDir, GPTM_TA_GPTMTnMR_TnCDIR_MASK, GPTM_TA_GPTMTnMR_R_TnCDIR_BIT);
}

TIMER_nCOUNT_DIR TIMER__enGetCountDir(TIMER_nMODULE enModule)
{
    return (TIMER_nCOUNT_DIR)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnCDIR_MASK, GPTM_TA_GPTMTnMR_R_TnCDIR_BIT);
}

void TIMER__vSetWaitTrigger(TIMER_nMODULE enModule, TIMER_nWAIT enWaitTrigger)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enWaitTrigger, GPTM_TA_GPTMTnMR_TnWOT_MASK, GPTM_TA_GPTMTnMR_R_TnWOT_BIT);
}

TIMER_nWAIT TIMER__enGetWaitTrigger(TIMER_nMODULE enModule)
{
    return (TIMER_nWAIT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnWOT_MASK, GPTM_TA_GPTMTnMR_R_TnWOT_BIT);
}

void TIMER__vSetSnapShot(TIMER_nMODULE enModule, TIMER_nSNAPSHOT enSnapShot)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enSnapShot,GPTM_TA_GPTMTnMR_TnSNAPS_MASK, GPTM_TA_GPTMTnMR_R_TnSNAPS_BIT);
}

TIMER_nSNAPSHOT TIMER__enGetSnapShot(TIMER_nMODULE enModule)
{
    return (TIMER_nSNAPSHOT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnSNAPS_MASK, GPTM_TA_GPTMTnMR_R_TnSNAPS_BIT);
}

void TIMER__vSetUpdateIntervalMode(TIMER_nMODULE enModule, TIMER_nUPDATE_INTERVAL enUpdateIntervalMode)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enUpdateIntervalMode, GPTM_TA_GPTMTnMR_TnILD_MASK, GPTM_TA_GPTMTnMR_R_TnILD_BIT);
}

TIMER_nUPDATE_INTERVAL TIMER__enGetUpdateIntervalMode(TIMER_nMODULE enModule)
{
    return (TIMER_nUPDATE_INTERVAL)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnILD_MASK, GPTM_TA_GPTMTnMR_R_TnILD_BIT);
}

void TIMER__vSetPWMInterrupt(TIMER_nMODULE enModule, TIMER_nPWM_INT enPWMInterrupt)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enPWMInterrupt, GPTM_TA_GPTMTnMR_TnPWMIE_MASK, GPTM_TA_GPTMTnMR_R_TnPWMIE_BIT);
}

TIMER_nPWM_INT TIMER__enGetPWMInterrupt(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_INT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnPWMIE_MASK, GPTM_TA_GPTMTnMR_R_TnPWMIE_BIT);
}

void TIMER__vSetMatchEventInterrupt(TIMER_nMODULE enModule, TIMER_nEVENT_INT enEventInterrupt)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enEventInterrupt, GPTM_TA_GPTMTnMR_TnMIE_MASK, GPTM_TA_GPTMTnMR_R_TnMIE_BIT);
}

TIMER_nEVENT_INT TIMER__enGetMatchEventInterrupt(TIMER_nMODULE enModule)
{
    return (TIMER_nEVENT_INT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnMIE_MASK, GPTM_TA_GPTMTnMR_R_TnMIE_BIT);
}

void TIMER__vSetUpdateMatchMode(TIMER_nMODULE enModule, TIMER_nUPDATE_MATCH enUpdateMatchMode)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enUpdateMatchMode,GPTM_TA_GPTMTnMR_TnMRSU_MASK, GPTM_TA_GPTMTnMR_R_TnMRSU_BIT);
}

TIMER_nUPDATE_MATCH TIMER__enGetUpdateMatchMode(TIMER_nMODULE enModule)
{
    return (TIMER_nUPDATE_MATCH)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnMRSU_MASK, GPTM_TA_GPTMTnMR_R_TnMRSU_BIT);
}

void TIMER__vSetPWMOutputInit(TIMER_nMODULE enModule, TIMER_nPWM_OUT_INIT enPWMOutputInit)
{
    TIMER_vSetModeGeneric(enModule, (uint32_t) enPWMOutputInit, GPTM_TA_GPTMTnMR_TnPLO_MASK, GPTM_TA_GPTMTnMR_R_TnPLO_BIT);
}

TIMER_nPWM_OUT_INIT TIMER__enGetPWMOutputInit(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_OUT_INIT)TIMER_u32GetModeGeneric(enModule,GPTM_TA_GPTMTnMR_TnPLO_MASK, GPTM_TA_GPTMTnMR_R_TnPLO_BIT);
}

void TIMER_vSetControlGeneric(TIMER_nMODULE enModule, uint32_t u32ControlGeneric,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    uint32_t u32Shift=8*u32Letter;
    GPTM_TypeDef* psTimerCTL=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);

    psTimerCTL=TIMER_BLOCK[u32Wide][u32Number];

    u32Reg=psTimerCTL->GPTMCTL;
    psTimerCTL->GPTMCTL&=~(GPTM_GPTMCTL_TAEN_MASK<<u32Shift);
    u32Shift+=u32Bit;
    u32Reg&=~(u32Mask<<u32Shift);
    u32Reg|=((uint32_t)u32ControlGeneric&u32Mask)<<(u32Shift);
    psTimerCTL->GPTMCTL=u32Reg;
}

uint32_t TIMER_u32GetControlGeneric(TIMER_nMODULE enModule,uint32_t u32Mask, uint32_t u32Bit)
{
    uint32_t u32Reg=0;
    uint32_t u32ControlGeneric=0xFF;
    TIMER_nREADY enReady= TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    uint32_t u32Shift=8*u32Letter;
    GPTM_TypeDef* psTimerCTL=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        psTimerCTL=TIMER_BLOCK[u32Wide][u32Number];
        u32Reg=psTimerCTL->GPTMCTL;
        u32Shift+=u32Bit;
        u32Reg>>=u32Shift;
        u32Reg&=(u32Mask);
        u32ControlGeneric=(uint32_t)(u32Reg);
    }
    return u32ControlGeneric;
}
void TIMER__vSetEnable(TIMER_nMODULE enModule, TIMER_nENABLE enEnable)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enEnable, GPTM_TA_GPTMTnCTL_TnEN_MASK, GPTM_TA_GPTMTnCTL_R_TnEN_BIT);
}

TIMER_nENABLE TIMER__enGetEnable(TIMER_nMODULE enModule)
{
    return (TIMER_nENABLE)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnEN_MASK, GPTM_TA_GPTMTnCTL_R_TnEN_BIT);
}

void TIMER__vSetStall(TIMER_nMODULE enModule, TIMER_nSTALL enStall)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enStall, GPTM_TA_GPTMTnCTL_TnSTALL_MASK, GPTM_TA_GPTMTnCTL_R_TnSTALL_BIT);
}

TIMER_nSTALL TIMER__enGetStall(TIMER_nMODULE enModule)
{
    return (TIMER_nSTALL)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnSTALL_MASK, GPTM_TA_GPTMTnCTL_R_TnSTALL_BIT);
}

void TIMER__vSetEdgeEvent(TIMER_nMODULE enModule, TIMER_nEDGE_EVENT enEdgeEvent)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enEdgeEvent, GPTM_TA_GPTMTnCTL_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT);
}

TIMER_nEDGE_EVENT TIMER__enGetEdgeEvent(TIMER_nMODULE enModule)
{
    return (TIMER_nEDGE_EVENT)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnEVENT_MASK, GPTM_TA_GPTMTnCTL_R_TnEVENT_BIT);
}

void TIMER__vSetRTCStall(TIMER_nMODULE enModule, TIMER_nRTC_STALL enRTCStall)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    if(TIMER_enW == u32Letter)
    {
        TIMER_vSetControlGeneric(enModule, (uint32_t) enRTCStall, GPTM_TW_GPTMTnCTL_RTCEN_MASK, GPTM_TW_GPTMTnCTL_R_RTCEN_BIT);
    }
}

TIMER_nRTC_STALL TIMER__enGetRTCStall(TIMER_nMODULE enModule)
{
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    TIMER_nRTC_STALL enReturn = TIMER_enRTC_STALL_UNDEF;
    if(TIMER_enW == u32Letter)
    {
        enReturn = (TIMER_nRTC_STALL)TIMER_u32GetControlGeneric(enModule,GPTM_TW_GPTMTnCTL_RTCEN_MASK, GPTM_TW_GPTMTnCTL_R_RTCEN_BIT);
    }
    return enReturn;
}

void TIMER__vSetADCTrigger(TIMER_nMODULE enModule, TIMER_nADC_TRIGGER enADCTrigger)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enADCTrigger,GPTM_TA_GPTMTnCTL_TnOTE_MASK, GPTM_TA_GPTMTnCTL_R_TnOTE_BIT);
}

TIMER_nADC_TRIGGER TIMER__enGetADCTrigger(TIMER_nMODULE enModule)
{
    return (TIMER_nADC_TRIGGER)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnOTE_MASK, GPTM_TA_GPTMTnCTL_R_TnOTE_BIT);
}

void TIMER__vSetPWMOutputLevel(TIMER_nMODULE enModule, TIMER_nPWM_OUTPUT enPWMOutputLevel)
{
    TIMER_vSetControlGeneric(enModule, (uint32_t) enPWMOutputLevel, GPTM_TA_GPTMTnCTL_TnPWML_MASK, GPTM_TA_GPTMTnCTL_R_TnPWML_BIT);
}

TIMER_nPWM_OUTPUT TIMER__enGetPWMOutputLevel(TIMER_nMODULE enModule)
{
    return (TIMER_nPWM_OUTPUT)TIMER_u32GetControlGeneric(enModule,GPTM_TA_GPTMTnCTL_TnPWML_MASK, GPTM_TA_GPTMTnCTL_R_TnPWML_BIT);
}

void TIMER__vSetSyncronize(TIMER_nSYNC enSync)
{
    GPTM0_GPTMSYNC_R=(uint32_t)enSync&(uint32_t)TIMER_enSYNC_ALL;
}


uint32_t u32IntMask[3]={(uint32_t)TIMER_enINT_TA_ALL,(uint32_t)TIMER_enINT_TB_ALL,(uint32_t)TIMER_enINT_TW_ALL};

void TIMER__vEnInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    uint32_t u32Int=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    GPTM_TypeDef* psTimerIMR=0;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
#if 0
    if(enInterrupt&TIMER_enINT_MATCH)
    {
        if(TIMER_enEVENT_INT_DIS == TIMER__enGetMatchEventInterrupt)
        {
            TIMER__vSetMatchEventInterrupt(enModule,TIMER_enEVENT_INT_EN);
        }
    }

    if(enInterrupt&TIMER_enINT_CAPTURE_EVENT)
    {
        if(TIMER_enPWM_INT_DIS == TIMER__enGetPWMInterrupt)
        {
            TIMER__vSetPWMInterrupt(enModule,TIMER_enPWM_INT_EN);
        }
    }
#endif
    psTimerIMR=TIMER_BLOCK[u32Wide][u32Number];
    u32Int=(uint32_t)enInterrupt;
    if(TIMER_enB==u32Letter)
    {
        u32Int&=~(uint32_t)TIMER_enINT_RTC;
        if(u32Int&TIMER_enINT_MATCH)
        {
            u32Int&=~(uint32_t)(TIMER_enINT_MATCH);
            u32Int|=TIMER_enINT_RTC;
        }
        u32Int<<=8;
    }
    u32Int&=(uint32_t)u32IntMask[u32Letter];


    u32Reg=psTimerIMR->GPTMIMR;
    u32Reg|=u32Int;
    psTimerIMR->GPTMIMR=u32Reg;
}



void TIMER__vDisInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    uint32_t u32Int=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    GPTM_TypeDef* psTimerIMR=0;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
#if 0
    if(enInterrupt&TIMER_enINT_MATCH)
    {
        if(TIMER_enEVENT_INT_EN == TIMER__enGetMatchEventInterrupt)
        {
            TIMER__vSetMatchEventInterrupt(enModule,TIMER_enEVENT_INT_DIS);
        }
    }

    if(enInterrupt&TIMER_enINT_CAPTURE_EVENT)
    {
        if(TIMER_enPWM_INT_EN == TIMER__enGetPWMInterrupt)
        {
            TIMER__vSetPWMInterrupt(enModule,TIMER_enPWM_INT_DIS);
        }
    }
#endif
    psTimerIMR=TIMER_BLOCK[u32Wide][u32Number];
    u32Int=(uint32_t)enInterrupt;
    if(TIMER_enB==u32Letter)
    {
        u32Int&=~(uint32_t)TIMER_enINT_RTC;
        if(u32Int&TIMER_enINT_MATCH)
        {
            u32Int&=~(uint32_t)(TIMER_enINT_MATCH);
            u32Int|=TIMER_enINT_RTC;
        }
        u32Int<<=8;
    }
    u32Int&=(uint32_t)u32IntMask[u32Letter];


    u32Reg=psTimerIMR->GPTMIMR;
    u32Reg&=~u32Int;
    psTimerIMR->GPTMIMR=u32Reg;
}


void TIMER__vClearInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    uint32_t u32Reg=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    GPTM_TypeDef* psTimerICR=0;

    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);

    psTimerICR=TIMER_BLOCK[u32Wide][u32Number];
    u32Reg=(uint32_t)enInterrupt;
    if(TIMER_enB==u32Letter)
    {
        u32Reg&=~(uint32_t)TIMER_enINT_RTC;
        if(u32Reg&TIMER_enINT_MATCH)
        {
            u32Reg&=~(uint32_t)(TIMER_enINT_MATCH);
            u32Reg|=TIMER_enINT_RTC;
        }
        u32Reg<<=8;
    }
    u32Reg&=(uint32_t)u32IntMask[u32Letter];

    psTimerICR->GPTMICR=u32Reg;
}

TIMER_nINT_STATUS TIMER__enStatusInterrupt(TIMER_nMODULE enModule, TIMER_nINT enInterrupt)
{
    TIMER_nINT_STATUS enInt=TIMER_enINT_STATUS_UNDEF;
    uint32_t u32Reg=0;
    uint32_t u32Int=0;
    TIMER_nREADY enReady=TIMER_enNOREADY;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x3;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    GPTM_TypeDef* psTimerRIS=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    enReady=TIMER__enIsReady(enModule);

    if(TIMER_enREADY == enReady)
    {
        psTimerRIS=TIMER_BLOCK[u32Wide][u32Number];
        u32Int=(uint32_t)enInterrupt;
        if(TIMER_enB==u32Letter)
        {
            u32Int&=~(uint32_t)TIMER_enINT_RTC;
            if(u32Int&TIMER_enINT_MATCH)
            {
                u32Int&=~(uint32_t)(TIMER_enINT_MATCH);
                u32Int|=TIMER_enINT_RTC;
            }
            u32Int<<=8;
        }
        u32Int&=(uint32_t)u32IntMask[u32Letter];

        u32Reg=psTimerRIS->GPTMRIS;
        u32Reg&=u32Int;

        if(0!=u32Reg)
        {
            enInt=TIMER_enINT_OCCUR;
        }
        else
        {
            enInt=TIMER_enINT_NOOCCUR;
        }
    }
    return enInt;
}

void TIMER__vCreateModeStructPointer(TIMER_nMODE enMode,TIMER_MODE_Typedef* psMode)
{

    if(psMode!=0)
    {
        psMode->enDirection=(TIMER_nCOUNT_DIR)((uint32_t)enMode&1);
        psMode->enAltMode=(TIMER_nALT_MODE)(((uint32_t)enMode>>4)&1);
        psMode->enEdgeMode=(TIMER_nEDGE_MODE)(((uint32_t)enMode>>8)&1);
        psMode->enSubMode=(TIMER_nSUB_MODE)(((uint32_t)enMode>>12)&3);
        psMode->enConfig=(TIMER_nCONFIG)(((uint32_t)enMode>>16)&7);
        psMode->enPWMOut=(TIMER_nPWM_OUTPUT)(((uint32_t)enMode>>20)&1);
        psMode->enPWMOutInit=(TIMER_nPWM_OUT_INIT)(((uint32_t)enMode>>24)&1);
        psMode->enEdgeEvent=(TIMER_nEDGE_EVENT)(((uint32_t)enMode>>28)&3);
        psMode->enSnapShot=(TIMER_nSNAPSHOT)(((uint32_t)enMode>>30)&1);
    }
}

TIMER_MODE_Typedef* TIMER__psCreateModeStruct(TIMER_nMODE enMode)
{
    TIMER_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (TIMER_MODE_Typedef*) memalign(4,sizeof(TIMER_MODE_Typedef));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc(sizeof(TIMER_MODE_Typedef));
    #endif
    if(psMode!=0)
    {
        psMode->enDirection=(TIMER_nCOUNT_DIR)((uint32_t)enMode&1);
        psMode->enAltMode=(TIMER_nALT_MODE)(((uint32_t)enMode>>4)&1);
        psMode->enEdgeMode=(TIMER_nEDGE_MODE)(((uint32_t)enMode>>8)&1);
        psMode->enSubMode=(TIMER_nSUB_MODE)(((uint32_t)enMode>>12)&3);
        psMode->enConfig=(TIMER_nCONFIG)(((uint32_t)enMode>>16)&7);
        psMode->enPWMOut=(TIMER_nPWM_OUTPUT)(((uint32_t)enMode>>20)&1);
        psMode->enPWMOutInit=(TIMER_nPWM_OUT_INIT)(((uint32_t)enMode>>24)&1);
        psMode->enEdgeEvent=(TIMER_nEDGE_EVENT)(((uint32_t)enMode>>28)&3);
        psMode->enSnapShot=(TIMER_nSNAPSHOT)(((uint32_t)enMode>>30)&1);
    }
    return psMode;
}

void TIMER__vDeleteModeStruct(TIMER_MODE_Typedef* psMode)
{
    free(psMode);
}


TIMER_nSTATUS TIMER__enSetMode(TIMER_nMODULE enModule, TIMER_nMODE enMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    TIMER_MODE_Typedef* psMode=TIMER__psCreateModeStruct(enMode);

    if(psMode!=0)
    {
        TIMER__vSetConfiguration(enModule,psMode->enConfig);
        TIMER__vSetSubMode(enModule,psMode->enSubMode);
        TIMER__vSetEdgeMode(enModule,psMode->enEdgeMode);
        TIMER__vSetAltMode(enModule,psMode->enAltMode);
        TIMER__vSetCountDir(enModule,psMode->enDirection);
        TIMER__vSetSnapShot(enModule,psMode->enSnapShot);
        TIMER__vSetPWMOutputInit(enModule,psMode->enPWMOutInit);
        TIMER__vSetEdgeEvent(enModule,psMode->enEdgeEvent);
        TIMER__vSetPWMOutputLevel(enModule,psMode->enPWMOut);
        TIMER__vDeleteModeStruct(psMode);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    //Configure Reload and Match

    //TIMER__vSetEnable(enModule,TIMER_enENABLE_START);

}

TIMER_nSTATUS TIMER__enSetModeStruct(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    if(psMode!=0)
    {
        TIMER__vSetConfiguration(enModule,psMode->enConfig);
        TIMER__vSetSubMode(enModule,psMode->enSubMode);
        TIMER__vSetEdgeMode(enModule,psMode->enEdgeMode);
        TIMER__vSetAltMode(enModule,psMode->enAltMode);
        TIMER__vSetCountDir(enModule,psMode->enDirection);
        TIMER__vSetSnapShot(enModule,psMode->enSnapShot);
        TIMER__vSetPWMOutputInit(enModule,psMode->enPWMOutInit);
        TIMER__vSetEdgeEvent(enModule,psMode->enEdgeEvent);
        TIMER__vSetPWMOutputLevel(enModule,psMode->enPWMOut);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    //Configure Reload and Match

    //TIMER__vSetEnable(enModule,TIMER_enENABLE_START);


}


TIMER_nMODE TIMER__enGetMode(TIMER_nMODULE enModule)
{
    TIMER_nMODE enMode=TIMER_enMODE_UNDEF;

    TIMER_nCONFIG       enConfig=TIMER_enCONFIG_WIDE;
    TIMER_nSUB_MODE     enSubMode=TIMER_enSUB_MODE_RESERVED;
    TIMER_nEDGE_MODE    enEdgeMode=TIMER_enEDGE_MODE_COUNT;
    TIMER_nALT_MODE     enAltMode=TIMER_enALT_MODE_CC;
    TIMER_nCOUNT_DIR    enDirection=TIMER_enCOUNT_DIR_DOWN;
    TIMER_nSNAPSHOT     enSnapShot=TIMER_enSNAPSHOT_DIS;
    TIMER_nPWM_OUT_INIT enPWMOutInit=TIMER_enPWM_OUT_INIT_LOW;
    TIMER_nEDGE_EVENT   enEdgeEvent=TIMER_enEDGE_EVENT_POSITIVE;
    TIMER_nPWM_OUTPUT   enPWMOut=TIMER_enPWM_OUTPUT_STRAIGHT;

    uint32_t u32Reg=0;

    enConfig=TIMER__enGetConfiguration(enModule);
    enSubMode=TIMER__enGetSubMode(enModule);
    enEdgeMode=TIMER__enGetEdgeMode(enModule);
    enAltMode=TIMER__enGetAltMode(enModule);
    enDirection=TIMER__enGetCountDir(enModule);
    enSnapShot=TIMER__enGetSnapShot(enModule);
    enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
    enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
    enPWMOut=TIMER__enGetPWMOutputLevel(enModule);

    u32Reg = ((uint32_t)enDirection <<0);
    u32Reg|= ((uint32_t)enAltMode   <<4);
    u32Reg|= ((uint32_t)enEdgeMode  <<8);
    u32Reg|= ((uint32_t)enSubMode   <<12);
    u32Reg|= ((uint32_t)enConfig    <<16);
    u32Reg|= ((uint32_t)enPWMOut    <<20);
    u32Reg|= ((uint32_t)enPWMOutInit<<24);
    u32Reg|= ((uint32_t)enEdgeEvent <<28);
    u32Reg|= ((uint32_t)enSnapShot  <<30);

    enMode = (TIMER_nMODE)u32Reg;
    return enMode;
}


void TIMER__vGetMode(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode)
{
    psMode->enConfig=TIMER__enGetConfiguration(enModule);
    psMode->enSubMode=TIMER__enGetSubMode(enModule);
    psMode->enEdgeMode=TIMER__enGetEdgeMode(enModule);
    psMode->enAltMode=TIMER__enGetAltMode(enModule);
    psMode->enDirection=TIMER__enGetCountDir(enModule);
    psMode->enSnapShot=TIMER__enGetSnapShot(enModule);
    psMode->enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
    psMode->enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
    psMode->enPWMOut=TIMER__enGetPWMOutputLevel(enModule);

}



TIMER_MODE_Typedef* TIMER__psGetMode(TIMER_nMODULE enModule)
{
    TIMER_MODE_Typedef* psMode=0;
    #if defined ( __TI_ARM__ )
    psMode = (TIMER_MODE_Typedef*) memalign(4,sizeof(TIMER_MODE_Typedef));
    #elif defined ( __GNUC__ )
    psMode = (TIMER_MODE_Typedef*) malloc(sizeof(TIMER_MODE_Typedef));
    #endif

    psMode->enConfig=TIMER__enGetConfiguration(enModule);
    psMode->enSubMode=TIMER__enGetSubMode(enModule);
    psMode->enEdgeMode=TIMER__enGetEdgeMode(enModule);
    psMode->enAltMode=TIMER__enGetAltMode(enModule);
    psMode->enDirection=TIMER__enGetCountDir(enModule);
    psMode->enSnapShot=TIMER__enGetSnapShot(enModule);
    psMode->enPWMOutInit=TIMER__enGetPWMOutputInit(enModule);
    psMode->enEdgeEvent=TIMER__enGetEdgeEvent(enModule);
    psMode->enPWMOut=TIMER__enGetPWMOutputLevel(enModule);

    return psMode;

}


TIMER_nSTATUS TIMER__enSetExtraModeStruct(TIMER_nMODULE enModule, TIMER_EXTRAMODE_Typedef* psExtraMode)
{
    TIMER_nSTATUS enReturn=TIMER_enERROR;
    if(psExtraMode!=0)
    {
        TIMER__vSetWaitTrigger(enModule,psExtraMode->enWaitTrigger);
        TIMER__vSetUpdateIntervalMode(enModule,psExtraMode->enUpdateInterval);
        TIMER__vSetPWMInterrupt(enModule,psExtraMode->enPWMInterrupt);
        TIMER__vSetMatchEventInterrupt(enModule,psExtraMode->enEventInterrupt);
        TIMER__vSetUpdateMatchMode(enModule,psExtraMode->enUpdateMatch);
        TIMER__vSetStall(enModule,psExtraMode->enStall);
        TIMER__vSetRTCStall(enModule,psExtraMode->enRTCStall);
        TIMER__vSetADCTrigger(enModule,psExtraMode->enADCTrigger);
        enReturn = TIMER_enOK;
    }
    return enReturn;
    //Configure Reload and Match

    //TIMER__vSetEnable(enModule,TIMER_enENABLE_START);


}

void TIMER__vGetExtraMode(TIMER_nMODULE enModule, TIMER_EXTRAMODE_Typedef* psExtraMode)
{
    psExtraMode->enWaitTrigger=TIMER__enGetWaitTrigger(enModule);
    psExtraMode->enUpdateInterval=TIMER__enGetUpdateIntervalMode(enModule);
    psExtraMode->enPWMInterrupt=TIMER__enGetPWMInterrupt(enModule);
    psExtraMode->enEventInterrupt=TIMER__enGetMatchEventInterrupt(enModule);
    psExtraMode->enUpdateMatch=TIMER__enGetUpdateMatchMode(enModule);
    psExtraMode->enStall=TIMER__enGetStall(enModule);
    psExtraMode->enRTCStall=TIMER__enGetRTCStall(enModule);
    psExtraMode->enADCTrigger=TIMER__enGetADCTrigger(enModule);
}



TIMER_EXTRAMODE_Typedef* TIMER__psGetExtraMode(TIMER_nMODULE enModule)
{
    TIMER_EXTRAMODE_Typedef* psExtraMode=0;
    #if defined ( __TI_ARM__ )
    psExtraMode = (TIMER_EXTRAMODE_Typedef*) memalign(4,sizeof(TIMER_EXTRAMODE_Typedef));
    #elif defined ( __GNUC__ )
    psExtraMode = (TIMER_EXTRAMODE_Typedef*) malloc(sizeof(TIMER_EXTRAMODE_Typedef));
    #endif

    psExtraMode->enWaitTrigger=TIMER__enGetWaitTrigger(enModule);
    psExtraMode->enUpdateInterval=TIMER__enGetUpdateIntervalMode(enModule);
    psExtraMode->enPWMInterrupt=TIMER__enGetPWMInterrupt(enModule);
    psExtraMode->enEventInterrupt=TIMER__enGetMatchEventInterrupt(enModule);
    psExtraMode->enUpdateMatch=TIMER__enGetUpdateMatchMode(enModule);
    psExtraMode->enStall=TIMER__enGetStall(enModule);
    psExtraMode->enRTCStall=TIMER__enGetRTCStall(enModule);
    psExtraMode->enADCTrigger=TIMER__enGetADCTrigger(enModule);

    return psExtraMode;

}

uint64_t pu64TimerSize[2]={0xFFFFFF,0xFFFFFFFFFFFF};
uint32_t pu32PrescalerMask[2]={0xFF,0xFFFF};
uint32_t pu32SizeMask[2]={0xFFFF,0xFFFFFFFF};
uint32_t pu32PrescalerShift[2]={8,16};
uint32_t pu32SizeShift[2]={16,32};

void TIMER__vSetReload(TIMER_nMODULE enModule, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_MODE_Typedef psMode;

    /*Erase*/
    uint32_t u32Reg=0;
    uint32_t u32RegPrescaler=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    volatile uint32_t* pu32TimerILRLow=0;
    volatile uint32_t* pu32TimerILRHigh=0;
    volatile uint32_t* pu32TimerPR=0;
    volatile uint32_t* pu32TimerRTCPD=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    TIMER__vGetMode(enModule, &psMode);

    switch (psMode.enConfig)
    {
    case TIMER_enCONFIG_WIDE:
        pu32TimerILRHigh=TIMER_TnILR_BLOCK[u32Wide][1][u32Number];
        pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][0][u32Number];

        *pu32TimerILRHigh = (uint32_t)((u64Reload>>32)&0xFFFFFFFF);
        *pu32TimerILRLow =  (uint32_t) (u64Reload&0xFFFFFFFF);
        break;
    case TIMER_enCONFIG_RTC:
        pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][0][u32Number];
        pu32TimerILRHigh=TIMER_TnILR_BLOCK[u32Wide][1][u32Number];
        pu32TimerRTCPD=TIMER_RTCPD_BLOCK[u32Number];

        *pu32TimerRTCPD=u32PrescalerRTC&0xFFFF;
        *pu32TimerILRHigh = (uint32_t)((u64Reload>>32)&0xFFFFFFFF);
        *pu32TimerILRLow =  (uint32_t) (u64Reload&0xFFFFFFFF);
        break;
    case TIMER_enCONFIG_INDIVIDUAL:

        pu32TimerILRLow=TIMER_TnILR_BLOCK[u32Wide][u32Letter][u32Number];
        pu32TimerPR=TIMER_TnPR_BLOCK[u32Wide][u32Letter][u32Number];
        //Prescaler
        if((TIMER_enALT_MODE_CC==psMode.enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=psMode.enSubMode) && (TIMER_enCOUNT_DIR_DOWN==psMode.enDirection))
        {
            u64Reload&=pu64TimerSize[u32Wide];
            u32RegPrescaler=(uint32_t)(u64Reload&(uint64_t)pu32PrescalerMask[u32Wide]);
            u32Reg=(uint32_t)(u64Reload>>pu32PrescalerShift[u32Wide]);
            u32Reg&=pu32SizeMask[u32Wide];
            *pu32TimerPR=u32RegPrescaler;
            *pu32TimerILRLow=u32Reg;
        }
        //Time Extension
        else
        {
            u64Reload&=pu64TimerSize[u32Wide];
            u32Reg=(uint32_t)(u64Reload&(uint64_t)pu32SizeMask[u32Wide]);
            u32RegPrescaler=(uint32_t)(u64Reload>>pu32SizeShift[u32Wide]);
            u32RegPrescaler&=pu32PrescalerMask[u32Wide];
            *pu32TimerPR=u32RegPrescaler;
            *pu32TimerILRLow=u32Reg;
        }
        break;
    default:
        break;
    }
}

void TIMER__vSetMatch(TIMER_nMODULE enModule,uint64_t u64Match)
{
    TIMER_MODE_Typedef psMode;

    /*Erase*/
    uint32_t u32Reg=0;
    uint32_t u32RegPrescaler=0;
    uint32_t u32Number= (uint32_t) enModule & 0x7;
    uint32_t u32Letter= ((uint32_t) enModule>>8) & 0x1;
    uint32_t u32Wide= ((uint32_t) enModule>>16) & 0x1;
    volatile uint32_t* pu32TimerMATCHRLow=0;
    volatile uint32_t* pu32TimerMATCHRHigh=0;
    volatile uint32_t* pu32TimerPMR=0;
    if(TIMER_MAX<u32Number)
    {
        u32Number=TIMER_MAX;
    }
    TIMER__vSetReady(enModule);
    TIMER__vGetMode(enModule, &psMode);

    switch (psMode.enConfig)
    {
    case TIMER_enCONFIG_WIDE:
        pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];
        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];

        *pu32TimerMATCHRHigh = (uint32_t)((u64Match>>32)&0xFFFFFFFF);
        *pu32TimerMATCHRLow =  (uint32_t) (u64Match&0xFFFFFFFF);
        break;
    case TIMER_enCONFIG_RTC:
        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][0][u32Number];
        pu32TimerMATCHRHigh=TIMER_TnMATCHR_BLOCK[u32Wide][1][u32Number];

        *pu32TimerMATCHRHigh = (uint32_t)((u64Match>>32)&0xFFFFFFFF);
        *pu32TimerMATCHRLow =  (uint32_t) (u64Match&0xFFFFFFFF);
        break;
    case TIMER_enCONFIG_INDIVIDUAL:

        pu32TimerMATCHRLow=TIMER_TnMATCHR_BLOCK[u32Wide][u32Letter][u32Number];
        pu32TimerPMR=TIMER_TnPMR_BLOCK[u32Wide][u32Letter][u32Number];
        //Prescaler
        if((TIMER_enALT_MODE_CC==psMode.enAltMode)&&(TIMER_enSUB_MODE_CAPTURE!=psMode.enSubMode) && (TIMER_enCOUNT_DIR_DOWN==psMode.enDirection))
        {
            u64Match&=pu64TimerSize[u32Wide];
            u32RegPrescaler=(uint32_t)(u64Match&(uint64_t)pu32PrescalerMask[u32Wide]);
            u32Reg=(uint32_t)(u64Match>>pu32PrescalerShift[u32Wide]);
            u32Reg&=pu32SizeMask[u32Wide];
            *pu32TimerPMR=u32RegPrescaler;
            *pu32TimerMATCHRLow=u32Reg;
        }
        //Time Extension
        else
        {
            u64Match&=pu64TimerSize[u32Wide];
            u32Reg=(uint32_t)(u64Match&(uint64_t)pu32SizeMask[u32Wide]);
            u32RegPrescaler=(uint32_t)(u64Match>>pu32SizeShift[u32Wide]);
            u32RegPrescaler&=pu32PrescalerMask[u32Wide];
            *pu32TimerPMR=u32RegPrescaler;
            *pu32TimerMATCHRLow=u32Reg;
        }
        break;
    default:
        break;
    }
}


TIMER_nSTATUS TIMER__enSetMode_Reload(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Reload(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetMode_Match(TIMER_nMODULE enModule, TIMER_nMODE enMode,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_Match(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetMode_ReloadMatch(TIMER_nMODULE enModule, TIMER_nMODE enMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetMode(enModule,enMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

TIMER_nSTATUS TIMER__enSetModeStruct_ReloadMatch(TIMER_nMODULE enModule, TIMER_MODE_Typedef* psMode, uint32_t u32PrescalerRTC, uint64_t u64Reload,uint64_t u64Match)
{
    TIMER_nSTATUS enReturn= TIMER_enERROR;
    enReturn =TIMER__enSetModeStruct(enModule,psMode);
    if(TIMER_enOK == enReturn)
    {
        TIMER__vSetReload(enModule,u32PrescalerRTC,u64Reload);
        TIMER__vSetMatch(enModule,u64Match);
    }
    return enReturn;
}

void TIMER0A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM0_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[0][0][0][0]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][0][0][1]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][0][0][2]();
    }
    if(u8Reg & TIMER_enINT_TA_MATCH)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[0][0][0][3]();
    }
    if(u8Reg & TIMER_enINT_TW_RTC)
    {
        GPTM0_TA_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[0][0][0][4]();
    }

}


void TIMER0B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM0_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[0][1][0][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][1][0][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][1][0][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[0][1][0][3]();
    }
}

void TIMER1A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM1_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[0][0][1][0]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][0][1][1]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][0][1][2]();
    }
    if(u8Reg & TIMER_enINT_TA_MATCH)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[0][0][1][3]();
    }
    if(u8Reg & TIMER_enINT_TW_RTC)
    {
        GPTM1_TA_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[0][0][1][4]();
    }

}


void TIMER1B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM1_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[0][1][1][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][1][1][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][1][1][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[0][1][1][3]();
    }
}





void TIMER2A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM2_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[0][0][2][0]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][0][2][1]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][0][2][2]();
    }
    if(u8Reg & TIMER_enINT_TA_MATCH)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[0][0][2][3]();
    }
    if(u8Reg & TIMER_enINT_TW_RTC)
    {
        GPTM2_TA_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[0][0][2][4]();
    }

}


void TIMER2B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM2_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[0][1][2][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][1][2][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][1][2][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[0][1][2][3]();
    }
}


void TIMER3A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM3_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[0][0][3][0]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][0][3][1]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][0][3][2]();
    }
    if(u8Reg & TIMER_enINT_TA_MATCH)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[0][0][3][3]();
    }
    if(u8Reg & TIMER_enINT_TW_RTC)
    {
        GPTM3_TA_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[0][0][3][4]();
    }

}


void TIMER3B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM3_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[0][1][3][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][1][3][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][1][3][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[0][1][3][3]();
    }
}

void TIMER4A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM4_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[0][0][4][0]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][0][4][1]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][0][4][2]();
    }
    if(u8Reg & TIMER_enINT_TA_MATCH)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[0][0][4][3]();
    }
    if(u8Reg & TIMER_enINT_TW_RTC)
    {
        GPTM4_TA_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[0][0][4][4]();
    }
}


void TIMER4B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM4_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[0][1][4][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][1][4][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][1][4][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[0][1][4][3]();
    }
}

void TIMER5A_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM5_TA_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[0][0][5][0]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][0][5][1]();
    }
    if(u8Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][0][5][2]();
    }
    if(u8Reg & TIMER_enINT_TA_MATCH)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[0][0][5][3]();
    }
    if(u8Reg & TIMER_enINT_TW_RTC)
    {
        GPTM5_TA_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[0][0][5][4]();
    }

}


void TIMER5B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPTM5_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[0][1][5][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[0][1][5][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[0][1][5][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[0][1][5][3]();
    }
}



void WTIMER0A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM0_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[1][0][0][0]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][0][0][1]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][0][0][2]();
    }
    if(u32Reg & TIMER_enINT_TA_MATCH)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[1][0][0][3]();
    }
    if(u32Reg & TIMER_enINT_TW_RTC)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[1][0][0][4]();
    }
    if(u32Reg & TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM0_TW_GPTMTnICR_R=TIMER_enINT_TW_WRITE_UPDATE;
        TIMER_vSOURCEISR[1][0][0][5]();
    }

}


void WTIMER0B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM0_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[1][1][0][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][1][0][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][1][0][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPWTM0_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[1][1][0][3]();
    }
}




void WTIMER1A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM1_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[1][0][1][0]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][0][1][1]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][0][1][2]();
    }
    if(u32Reg & TIMER_enINT_TA_MATCH)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[1][0][1][3]();
    }
    if(u32Reg & TIMER_enINT_TW_RTC)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[1][0][1][4]();
    }
    if(u32Reg & TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM1_TW_GPTMTnICR_R=TIMER_enINT_TW_WRITE_UPDATE;
        TIMER_vSOURCEISR[1][0][1][5]();
    }

}


void WTIMER1B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM1_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[1][1][1][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][1][1][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][1][1][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPWTM1_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[1][1][1][3]();
    }
}





void WTIMER2A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM2_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[1][0][2][0]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][0][2][1]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][0][2][2]();
    }
    if(u32Reg & TIMER_enINT_TA_MATCH)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[1][0][2][3]();
    }
    if(u32Reg & TIMER_enINT_TW_RTC)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[1][0][2][4]();
    }
    if(u32Reg & TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM2_TW_GPTMTnICR_R=TIMER_enINT_TW_WRITE_UPDATE;
        TIMER_vSOURCEISR[1][0][2][5]();
    }

}


void WTIMER2B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM2_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[1][1][2][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][1][2][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][1][2][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPWTM2_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[1][1][2][3]();
    }
}


void WTIMER3A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM3_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[1][0][3][0]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][0][3][1]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][0][3][2]();
    }
    if(u32Reg & TIMER_enINT_TA_MATCH)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[1][0][3][3]();
    }
    if(u32Reg & TIMER_enINT_TW_RTC)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[1][0][3][4]();
    }
    if(u32Reg & TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM3_TW_GPTMTnICR_R=TIMER_enINT_TW_WRITE_UPDATE;
        TIMER_vSOURCEISR[1][0][3][5]();
    }

}


void WTIMER3B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM3_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[1][1][3][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][1][3][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][1][3][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPWTM3_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[1][1][3][3]();
    }
}

void WTIMER4A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM4_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[1][0][4][0]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][0][4][1]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][0][4][2]();
    }
    if(u32Reg & TIMER_enINT_TA_MATCH)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[1][0][4][3]();
    }
    if(u32Reg & TIMER_enINT_TW_RTC)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[1][0][4][4]();
    }
    if(u32Reg & TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM4_TW_GPTMTnICR_R=TIMER_enINT_TW_WRITE_UPDATE;
        TIMER_vSOURCEISR[1][0][4][5]();
    }

}


void WTIMER4B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM4_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[1][1][4][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][1][4][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][1][4][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPWTM4_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[1][1][4][3]();
    }
}

void WTIMER5A_vISR(void)
{
    volatile uint32_t u32Reg=0;
    u32Reg=GPWTM5_TW_GPTMTnMIS_R;
    if(u32Reg & TIMER_enINT_TA_TIMEOUT)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enINT_TA_TIMEOUT;
        TIMER_vSOURCEISR[1][0][5][0]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_MATCH)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][0][5][1]();
    }
    if(u32Reg & TIMER_enINT_TA_CAPTURE_EVENT)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enINT_TA_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][0][5][2]();
    }
    if(u32Reg & TIMER_enINT_TA_MATCH)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enINT_TA_MATCH;
        TIMER_vSOURCEISR[1][0][5][3]();
    }
    if(u32Reg & TIMER_enINT_TW_RTC)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enINT_TW_RTC;
        TIMER_vSOURCEISR[1][0][5][4]();
    }
    if(u32Reg & TIMER_enINT_TW_WRITE_UPDATE)
    {
        GPWTM5_TW_GPTMTnICR_R=TIMER_enINT_TW_WRITE_UPDATE;
        TIMER_vSOURCEISR[1][0][5][5]();
    }

}


void WTIMER5B_vISR(void)
{
    volatile uint8_t u8Reg=0;
    u8Reg=GPWTM5_TB_GPTMTnMIS_R;
    if(u8Reg & TIMER_enINT_TB_TIMEOUT)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_TIMEOUT;
        TIMER_vSOURCEISR[1][1][5][0]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_MATCH)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_MATCH;
        TIMER_vSOURCEISR[1][1][5][1]();
    }
    if(u8Reg & TIMER_enINT_TB_CAPTURE_EVENT)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_CAPTURE_EVENT;
        TIMER_vSOURCEISR[1][1][5][2]();
    }
    if(u8Reg & TIMER_enINT_TB_MATCH)
    {
        GPWTM5_TB_GPTMTnICR_R=TIMER_enINT_TB_MATCH;
        TIMER_vSOURCEISR[1][1][5][3]();
    }
}
